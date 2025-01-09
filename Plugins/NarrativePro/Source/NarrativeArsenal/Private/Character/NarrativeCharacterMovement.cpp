// Copyright Narrative Tools 2024. 


#include "Character/NarrativeCharacterMovement.h"
#include <UnrealFramework/NarrativeCharacter.h>
#include "Components/CapsuleComponent.h"
#include <GameFramework/Character.h>
#include "NarrativeGameplayTags.h"

#define FLAG_SPRINT FSavedMove_Character::FLAG_Custom_0



static TAutoConsoleVariable<bool> CVarClimbDebug(
	TEXT("NCM.Climb.Debug"),
	false,
	TEXT("Debug Actions 0=Off 1=On"),
	ECVF_Default);


template<class T>
static FString EnumToString(T& Value)
{
	static_assert(TIsEnum<T>::Value, "Should only call this with enum types");
	FString StringValue = UEnum::GetValueAsString(Value);
	int CutoffIndex;
	StringValue.FindLastChar(':', CutoffIndex);
	return StringValue.RightChop(CutoffIndex + 1);
}

UNarrativeCharacterMovement::UNarrativeCharacterMovement()
{
	SlowWalkSpeed = 300.f;
	SprintSpeed = 900.f;
	

	ClimbSurfaceReattachDistance = 100.f;
	ClimbForwardSearchDistance = 150.f;
	ClimbTurnReachDepth = 50.f;
	ClimbWallOffset = 20.f;
	ClimbRotationSpeedDegrees = 200.f;
	ClimbHangOffset = 0.f;
	ClimbStrafeSpeed = 200.f;
	ClimbJumpZVelocity = 600.f;
	ClimbJumpReachDistance = 200.f;
	ClimbMaxLedgeAngleDegrees = 45.f;
	ClimbJumpReachWidth = 70.f;
	ClimbLocalDecendTransitionBoost = FVector(-250.f, 0.f, 300.f);
	ClimbLocalAscendTransitionBoost = FVector(-250.f, 0.f, 700.f);
	ClimbJumpHorizontalVelocity = 200.f;
	
	bWantsSprint = false;
	ClimbMode = ENarrativeClimbMode::Idle;
	DesiredClimbMode = ENarrativeClimbMode::Idle;
	NarrativeCharacterOwner = nullptr;
}

void UNarrativeCharacterMovement::InitializeComponent()
{
	Super::InitializeComponent();

	NarrativeCharacterOwner = Cast<ANarrativeCharacter>(GetOwner());
}

void UNarrativeCharacterMovement::PhysCustom(float deltaTime, int32 Iterations)
{
	Super::PhysCustom(deltaTime, Iterations);

	switch (CustomMovementMode)
	{
	case CMOVE_Climb:
		PhysClimb(deltaTime, Iterations);
		break;
	default:
		UE_LOG(LogTemp, Fatal, TEXT("Invalid Movement Mode"))
	}
}

void UNarrativeCharacterMovement::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);

	//Update wants sprint from the compressed flag 
	bWantsSprint = (Flags & FLAG_SPRINT) != 0;
}

void UNarrativeCharacterMovement::UpdateCharacterStateBeforeMovement(float DeltaSeconds)
{
	if (HasOldClimbSurface())
	{
		TryResetOldClimbSurface();
	}
	if (!IsClimbing() && CanClimb())
	{
		TryEnterClimb();
	}
	else if (IsClimbing())
	{
		UpdateClimbStateBeforeMovement();
	}
	
	Super::UpdateCharacterStateBeforeMovement(DeltaSeconds);
}

class FNetworkPredictionData_Client* UNarrativeCharacterMovement::GetPredictionData_Client() const
{
	//Boilerplate prediction data allocation 
	if (!ClientPredictionData)
	{
		UNarrativeCharacterMovement* MutableThis = const_cast<UNarrativeCharacterMovement*>(this);

		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_NarrativeCharacter(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}

	return ClientPredictionData;
}

void UNarrativeCharacterMovement::SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode)
{
	if (NewMovementMode == MovementMode && (MovementMode != MOVE_Custom || CustomMovementMode == NewCustomMode)) return; // already in the proposed movement mode
		
	// Leaving Climbing
	if (IsClimbing())
	{
		bOrientRotationToMovement = true;
		bUseControllerDesiredRotation = true;
		CharacterOwner->bUseControllerRotationYaw = true;
		ClimbMode = ENarrativeClimbMode::Idle;
		PreviousClimbSurface = ClimbSurface;
		ClimbSurface = FTransform::Identity;
	}
	
	Super::SetMovementMode(NewMovementMode, NewCustomMode);

	// Entering Climbing
	if (IsClimbing())
	{
		bOrientRotationToMovement = false;
		bUseControllerDesiredRotation = false;
		CharacterOwner->bUseControllerRotationYaw = false;
		ClimbMode = ENarrativeClimbMode::Jump;
	}
}

float UNarrativeCharacterMovement::GetMaxSpeed() const
{
	const float MaxSpeed = Super::GetMaxSpeed();

	if (ensure(IsValid(NarrativeCharacterOwner)))
	{
		if (NarrativeCharacterOwner->HasMatchingGameplayTag(FNarrativeGameplayTags::Get().State_Movement_Lock))
		{
			return 0.f;
		}

		if (!NarrativeCharacterOwner->IsAlive())
		{
			return 0.f; 
		}

		if (IsClimbing())
		{
			return ClimbStrafeSpeed;
		}

		if (IsSlowWalking())
		{
			return SlowWalkSpeed;
		}

	}
	if (bWantsSprint && !IsCrouching())
	{
		return SprintSpeed;
	}

	return MaxSpeed;
}


void UNarrativeCharacterMovement::StartSprinting()
{
	bWantsSprint = true;
}

void UNarrativeCharacterMovement::StopSprinting()
{
	bWantsSprint = false;
}

bool UNarrativeCharacterMovement::IsMovingForward(const float ForwardAngleTolerance) const
{
	if (ACharacter* OwnerChar = Cast<ACharacter>(GetOwner()))
	{
		FVector Forward = OwnerChar->GetActorForwardVector();
		FVector MoveDirection = Velocity.GetSafeNormal();

		//Ignore vertical movement
		Forward.Z = 0.0f;
		MoveDirection.Z = 0.0f;

		//Ensure velocity is near enough to forward direction 
		return FMath::Abs(FMath::Acos(FMath::RadiansToDegrees(FVector::DotProduct(Forward, MoveDirection)))) < ForwardAngleTolerance;
	}
	return false; 
}

bool UNarrativeCharacterMovement::IsSprinting() const
{
	return bWantsSprint && !IsCrouching();
}

bool UNarrativeCharacterMovement::IsSlowWalking() const
{
	return NarrativeCharacterOwner && NarrativeCharacterOwner->HasMatchingGameplayTag(FNarrativeGameplayTags::Get().State_Movement_Walking);
}



bool UNarrativeCharacterMovement::CanClimb() const
{
	const float MaxUpVelocity = 1000.f;
	return IsFalling() && Velocity.Z < MaxUpVelocity && !bWantsToCrouch; 
}
bool UNarrativeCharacterMovement::HasOldClimbSurface() const
{
	return !PreviousClimbSurface.Equals(FTransform::Identity);
}
void UNarrativeCharacterMovement::TryResetOldClimbSurface()
{
	FVector OldSurfaceCapsuleLocation = GetClimbCapsuleTargetTransform(PreviousClimbSurface).GetLocation();
	FVector CurrentCapsuleLocation = UpdatedComponent->GetComponentLocation();

	bool bReachedClimbJumpApex = IsMovementMode(MOVE_Falling) && (CurrentCapsuleLocation.Z - OldSurfaceCapsuleLocation.Z) > (.9f * GetClimbMaxJumpHeight());
	if (IsMovementMode(MOVE_Walking) || bReachedClimbJumpApex)
	{
		PreviousClimbSurface = {};
		ClimbSurface = {};
	}
}

void UNarrativeCharacterMovement::TryEnterClimb()
{
	const float MinVaultHeight = CapHH();
	FVector SweepStart = UpdatedComponent->GetComponentTransform().TransformPosition(FVector(-40.f, 0.f, MinVaultHeight));

	TOptional<FTransform> PossibleClimbSurface = TryFindClimbSurface(FTransform(UpdatedComponent->GetComponentRotation(), SweepStart), FCollisionShape::MakeCapsule(CapR(), CapHH() * .75f), ClimbForwardSearchDistance);
	
	if (PossibleClimbSurface.IsSet())
	{
		float ClimbSurfaceDistSqr = FVector::DistSquared(PossibleClimbSurface->GetLocation(), PreviousClimbSurface.GetLocation());
		if (ClimbSurfaceDistSqr > pow(ClimbSurfaceReattachDistance, 2))
		{
			if (CVarClimbDebug.GetValueOnAnyThread())
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Enter CLIMB"));
			}
			SetMovementMode(MOVE_Custom, CMOVE_Climb);
			ClimbSurface = PossibleClimbSurface.GetValue();
		}
		// else
		// {
		// 	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Can't start climb due to prev climb surface"));
		// }
	}
}

void UNarrativeCharacterMovement::UpdateClimbStateBeforeMovement()
{
	DesiredClimbMode = ComputeDesiredClimbMode();

	if (IsTransitionClimbMode() && CanClimbTransitionFinish())
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, "Transition FINISHED");
		}
		ClimbMode = ENarrativeClimbMode::Idle;
	}

	if (CharacterOwner->bPressedJump && !CharacterOwner->bWasJumping && !IsTransitionClimbMode())
	{
		HandleClimbJump();
	}

	if (CVarClimbDebug.GetValueOnGameThread())
	{
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, "Mode: " + EnumToString(ClimbMode) + " Desired: " + EnumToString(DesiredClimbMode));
		DrawDebugPoint(GetWorld(), GetClimbSurface().GetLocation(), 10.f, FColor::Red);
	}
}

static void DrawDebugShape(UWorld* World, FTransform Transform, FCollisionShape Shape, FColor Color, float Duration)
{
	if (Shape.IsBox())
	{
		DrawDebugBox(World, Transform.GetLocation(), Shape.GetExtent(), Transform.GetRotation(), Color, false, Duration);
	}
	else if (Shape.IsCapsule())
	{
		DrawDebugCapsule(World, Transform.GetLocation(), Shape.GetCapsuleHalfHeight(), Shape.GetCapsuleRadius(), Transform.GetRotation(), Color, false, Duration);
	}
}
TOptional<FTransform> UNarrativeCharacterMovement::TryFindClimbSurface(FTransform Start, FCollisionShape Shape, float Distance, bool bOnTick) const
{
	const FVector SweepStart = Start.GetLocation();
	const FVector SweepEnd = Start.TransformPosition(FVector::ForwardVector * Distance);
	const float DebugLifetime = bOnTick ? -1.f : 5.f;

	FHitResult SweepHit;
	GetWorld()->SweepSingleByChannel(SweepHit, SweepStart, SweepEnd, UpdatedComponent->GetComponentQuat(), ECC_NarrativeClimbable, Shape, GetIgnoreCharacterParams());

	if (!SweepHit.IsValidBlockingHit())
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			DrawDebugShape(GetWorld(), FTransform(Start.GetRotation(), SweepStart), Shape, FColor::Yellow, DebugLifetime);
			DrawDebugShape(GetWorld(), FTransform(Start.GetRotation(), SweepEnd), Shape, FColor::Yellow, DebugLifetime);
		}
		return {};
	}

	if (CVarClimbDebug.GetValueOnGameThread())
	{
		DrawDebugShape(GetWorld(), FTransform(Start.GetRotation(), SweepStart), Shape, FColor::Blue, DebugLifetime);
		DrawDebugShape(GetWorld(), FTransform(Start.GetRotation(), SweepHit.Location), Shape, FColor::Green, DebugLifetime);
	}


	FHitResult GrabHit;
	float ShapeHeight = FMath::Max(FMath::Abs(Start.TransformVector(Shape.GetExtent()).Z), 30.f); 
	FVector GrabTraceStart = FRay(SweepHit.ImpactPoint, FVector::ZAxisVector).ClosestPoint(SweepStart + FVector::ZAxisVector * ShapeHeight) - SweepHit.ImpactNormal;
	FVector GrabTraceEnd = GrabTraceStart - FVector::ZAxisVector * ShapeHeight * 2.f;

	GetWorld()->LineTraceSingleByChannel(GrabHit, GrabTraceStart, GrabTraceEnd, ECC_NarrativeClimbable, GetIgnoreCharacterParams());

	if (!GrabHit.IsValidBlockingHit())
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			if (!bOnTick)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "GRAB MISSED");
			}
			DrawDebugLine(GetWorld(), GrabTraceStart, GrabTraceEnd, FColor::Red, false, DebugLifetime);
			DrawDebugPoint(GetWorld(), SweepHit.ImpactPoint, 15.f, FColor::Red, false, DebugLifetime, SDPG_World);
			DrawDebugLine(GetWorld(), UpdatedComponent->GetComponentLocation(), SweepHit.ImpactPoint, FColor::Red, false, DebugLifetime, SDPG_World);
		}
		return {};
	}

	// Can't climb if ledge angle is too steep 
	if ((GrabHit.Normal | FVector::ZAxisVector) < FMath::Cos(FMath::DegreesToRadians(ClimbMaxLedgeAngleDegrees)))
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			DrawDebugDirectionalArrow(GetWorld(), GrabHit.Location, GrabHit.Location + GrabHit.Normal * 20.f, 10.f, FColor::Red, false, DebugLifetime);
		}
		return {};
	}


	FQuat SurfaceRotation = FRotationMatrix::MakeFromXZ(-SweepHit.ImpactNormal, GrabHit.Normal).ToQuat();
	FVector SurfaceLocation = GrabHit.Location;
	
	if (CVarClimbDebug.GetValueOnGameThread())
	{
		DrawDebugLine(GetWorld(), GrabTraceStart, SurfaceLocation, FColor::Green, false, DebugLifetime);
		DrawDebugDirectionalArrow(GetWorld(), SurfaceLocation, SurfaceLocation + SurfaceRotation.GetUpVector() * 20.f, 10.f, FColor::Blue, false, DebugLifetime);
		DrawDebugDirectionalArrow(GetWorld(), SurfaceLocation, SurfaceLocation - SurfaceRotation.GetForwardVector() * 20.f, 10.f, FColor::Red, false, DebugLifetime);
	}

	FTransform NewClimbSurface(SurfaceRotation, SurfaceLocation);

	FTransform CapsuleTargetTransform = GetClimbCapsuleTargetTransform(NewClimbSurface);
	CapsuleTargetTransform.AddToTranslation(-20.f * CapsuleTargetTransform.GetUnitAxis(EAxis::X));

	if (GetWorld()->OverlapAnyTestByChannel(CapsuleTargetTransform.GetLocation(), CapsuleTargetTransform.GetRotation(), ECC_NarrativeClimbable, UpdatedPrimitive->GetCollisionShape(), GetIgnoreCharacterParams()))
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Failed Climb Surface NO ROOM for capsule");
			DrawDebugShape(GetWorld(), CapsuleTargetTransform, UpdatedPrimitive->GetCollisionShape(), FColor::Red, DebugLifetime);
		}
		return {};
	}

	return NewClimbSurface;
}
void UNarrativeCharacterMovement::SetClimbSurface(FTransform InClimbSurface)
{
	// Sanity check to make sure climb surface is within 4m of player
	if (!ensure(FVector::DistSquared(UpdatedComponent->GetComponentLocation(), InClimbSurface.GetLocation()) < pow(400.f, 2))) return;

	PreviousClimbSurface = ClimbSurface;
	ClimbSurface = InClimbSurface;
}
ENarrativeClimbMode UNarrativeCharacterMovement::ComputeDesiredClimbMode() const
{
	FVector2D LocalInputVector = GetLocalInputVector();
	ENarrativeClimbMode NewDesiredClimbMode = ENarrativeClimbMode::Idle;
	if (!LocalInputVector.IsNearlyZero())
	{
		if (FMath::Abs(LocalInputVector.Y) > 1e-3f)
		{
			NewDesiredClimbMode = ENarrativeClimbMode::Strafe;
		}
		else
		{
			NewDesiredClimbMode = ENarrativeClimbMode::Jump;
		}
	}
	return NewDesiredClimbMode;
}
bool UNarrativeCharacterMovement::CanClimbTransitionFinish() const
{
	const float ThresholdDistance = 40.f;
	float DistSqr = FVector::DistSquared(GetClimbCapsuleTargetTransform(ClimbSurface).GetLocation(), UpdatedComponent->GetComponentLocation());
	// GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Cyan, FString::FromInt(DistSqr));
	return DistSqr < pow(ThresholdDistance, 2);
}
void UNarrativeCharacterMovement::HandleClimbJump()
{
	FVector2D JumpInput = GetLocalInputVector();
	if (CVarClimbDebug.GetValueOnGameThread())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%.2f, %.2f"), JumpInput.X, JumpInput.Y));
	}
	
	if (JumpInput.IsZero()) JumpInput = FVector2D(1.f, 0.f);

	// Try Corner Turn
	if (FMath::Abs(JumpInput.Y) > .1f)
	{
		TOptional<FTransform> PossibleTurnSurface = TryFindClimbTurnSurface(JumpInput);
		if (PossibleTurnSurface.IsSet())
		{
			SetClimbSurface(PossibleTurnSurface.GetValue());
			ClimbMode = ENarrativeClimbMode::Turn;

			Velocity += PreviousClimbSurface.TransformVector(FVector(-100.f, 0.f, 800.f));
			Velocity += ClimbSurface.TransformVector(FVector(-100.f, 0.f, 0.f));
		}
	}

	// Couldn't find turn surface, check for jump surface
	if (!IsTransitionClimbMode())
	{
		TOptional<FTransform> PossibleHopSurface = TryFindClimbJumpSurface(JumpInput);
		if (PossibleHopSurface.IsSet())
		{
			SetClimbSurface(PossibleHopSurface.GetValue());
			ClimbMode = ENarrativeClimbMode::Jump;
			FVector LocalBoost = JumpInput.X < -1e-3f ? ClimbLocalDecendTransitionBoost : ClimbLocalAscendTransitionBoost;   
			Velocity += ClimbSurface.TransformVector(LocalBoost);
		}
	}

	// Couldn't find jump transition, perform wall jump
	if (!IsTransitionClimbMode())
	{

		// Drop
		if (JumpInput.X < -1e-3f)
		{
			const float DropSpeed = 300.f;
			Velocity = DropSpeed * -FVector::UpVector;
		}
		else // Jump
		{
			FVector ClimbSurfaceNormal = -ClimbSurface.GetRotation().GetAxisX();

			FVector JumpInputImpulse = Acceleration.GetSafeNormal();
			JumpInputImpulse.Z = 0.f;
			if ((JumpInputImpulse | ClimbSurfaceNormal) < 0.f)
			{
				JumpInputImpulse -= JumpInputImpulse.ProjectOnToNormal(ClimbSurfaceNormal); 
			}
			if (JumpInputImpulse.SizeSquared2D() < .3f)
			{
				JumpInputImpulse = FVector::UpVector;
			}

			Velocity = FVector::UpVector * ClimbJumpZVelocity + JumpInputImpulse * ClimbJumpHorizontalVelocity;

			if (CVarClimbDebug.GetValueOnGameThread())
			{
				GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Red, "Climb Jump");
			}
		}
		
		SetMovementMode(MOVE_Falling);
	}
}

float UNarrativeCharacterMovement::GetClimbMaxJumpHeight() const
{
	const float Gravity = GetGravityZ();
	if (FMath::Abs(Gravity) > UE_KINDA_SMALL_NUMBER)
	{
		return FMath::Square(ClimbJumpZVelocity) / (-2.f * Gravity);
	}
	else
	{
		return 0.f;
	}
}

TOptional<FTransform> UNarrativeCharacterMovement::TryFindClimbJumpSurface(FVector2D InputDirection) const
{
	if (FMath::Abs(InputDirection.X) > 1e-3f) // Vertical / Diagonal Jump
	{
		FTransform WorldT = ClimbSurface;
		WorldT.SetRotation(FRotator(0.f, WorldT.Rotator().Yaw, 0.f).Quaternion());
		FTransform LocalRotationT(FRotationMatrix::MakeFromXZ(FVector::XAxisVector, FVector(0.f, InputDirection.Y, InputDirection.X)));

		const float MaxReach = ClimbJumpReachDistance;
		const float MinReach = 20.f + (InputDirection.X < .1f) * 20.f + (FMath::Abs(InputDirection.Y) > .1f) * 20.f;
		const float ReachWidth = ClimbJumpReachWidth * (1 + FMath::Abs(InputDirection.Y));

		FTransform InnerT(FVector(-40.f, 0.f, (MaxReach + MinReach) / 2.f));
		
		FTransform SweepStart = InnerT * LocalRotationT * WorldT;
		TOptional<FTransform> InitialAttempt = TryFindClimbSurface(SweepStart, FCollisionShape::MakeCapsule(10.f, (MaxReach - MinReach) / 2.f), ClimbForwardSearchDistance, false);
		if (InitialAttempt.IsSet()) return InitialAttempt;

		FTransform LeftStart = SweepStart;
		LeftStart.SetLocation(LeftStart.TransformPosition(FVector(0.f, ReachWidth / 2.f, ReachWidth / 2.f)));
		TOptional<FTransform> LeftAttemp = TryFindClimbSurface(LeftStart, FCollisionShape::MakeCapsule(10.f, (MaxReach - MinReach) / 2.f), ClimbForwardSearchDistance, false);
		if (LeftAttemp.IsSet()) return LeftAttemp;

		FTransform RightStart = SweepStart;
		RightStart.SetLocation(RightStart.TransformPosition(FVector(0.f, -ReachWidth / 2.f, ReachWidth / 2.f)));
		TOptional<FTransform> RightAttemp = TryFindClimbSurface(RightStart, FCollisionShape::MakeCapsule(10.f, (MaxReach - MinReach) / 2.f), ClimbForwardSearchDistance, false);
		if (RightAttemp.IsSet()) return RightAttemp;

		return InitialAttempt;
	}
	else // Horizontal Jump
	{
		FTransform WorldT = ClimbSurface;
		WorldT.SetRotation(FRotator(0.f, WorldT.Rotator().Yaw, 0.f).Quaternion());

		const float MaxReach = ClimbJumpReachDistance;
		const float MinReach = 40.f;
		const float ReachWidth = ClimbJumpReachWidth; // (1 + FMath::Abs(InputDirection.Y));

		const int NumSweeps = 5;
		for (int i = NumSweeps; i > 0; i--)
		{
			float OffsetDist = (float)i / (float)NumSweeps * (MaxReach - MinReach) + MinReach;
			FTransform InnerT(FVector(-40.f, FMath::Sign(InputDirection.Y) * OffsetDist, 0.f));
			FTransform SweepStart = InnerT * WorldT;
			TOptional<FTransform> NarrowIter = TryFindClimbSurface(SweepStart, FCollisionShape::MakeCapsule(10.f, ReachWidth / 2.f), ClimbForwardSearchDistance, false);
			if (NarrowIter.IsSet()) return NarrowIter;

			TOptional<FTransform> LongIter = TryFindClimbSurface(SweepStart, FCollisionShape::MakeCapsule(10.f, ReachWidth * 2.f), ClimbForwardSearchDistance, false);
			if (LongIter.IsSet()) return LongIter;
		}

		return {};
	}
}
TOptional<FTransform> UNarrativeCharacterMovement::TryFindClimbTurnSurface(FVector2D InputDirection) const
{
	const float TurnDirection = FMath::Sign(InputDirection.Y);

	FVector ConvexStart = UpdatedComponent->GetComponentTransform().TransformPosition(FVector(-ClimbTurnReachDepth, 0.f, CapHH()));
	FQuat ConvexRotation = UpdatedComponent->GetComponentQuat() * FQuat(FVector::UpVector, TurnDirection * PI / 2.f);
	if (CVarClimbDebug.GetValueOnGameThread())
	{
		DrawDebugDirectionalArrow(GetWorld(), ConvexStart, ConvexStart + ConvexRotation.GetForwardVector() * 100.f, 10.f, FColor::Red, false, 10.f);
	}
	TOptional<FTransform> PossibleConvexSurface = TryFindClimbSurface(FTransform(ConvexRotation, ConvexStart), UpdatedPrimitive->GetCollisionShape(), 150.f, false);

	if (PossibleConvexSurface.IsSet())
	{
		return PossibleConvexSurface;
	}

	const float ConcaveOffset = 150.f;
	float XOffset = CapR() + ClimbWallOffset;

	FQuat ConcaveRotation = UpdatedComponent->GetComponentQuat() * FQuat(FVector::UpVector, -TurnDirection * PI / 2.f);
	FVector ShallowStart = UpdatedComponent->GetComponentTransform().TransformPosition(FVector(XOffset + ClimbTurnReachDepth, TurnDirection * ConcaveOffset, CapHH()));
	if (CVarClimbDebug.GetValueOnGameThread())
	{
		DrawDebugDirectionalArrow(GetWorld(), ShallowStart, ShallowStart + ConcaveRotation.GetForwardVector() * 100.f, 10.f, FColor::Red, false, 10.f);
	}
	TOptional<FTransform> ShallowAttempt = TryFindClimbSurface(FTransform(ConcaveRotation, ShallowStart), UpdatedPrimitive->GetCollisionShape(), ConcaveOffset + 50.f, false);
	if (ShallowAttempt.IsSet()) return ShallowAttempt;

	FVector DeepStart = UpdatedComponent->GetComponentTransform().TransformPosition(FVector(XOffset + ClimbTurnReachDepth * 1.5f, TurnDirection * ConcaveOffset, CapHH()));
	TOptional<FTransform> DeepAttempt = TryFindClimbSurface(FTransform(ConcaveRotation, DeepStart), UpdatedPrimitive->GetCollisionShape(), ConcaveOffset + 50.f, false);
	if (DeepAttempt.IsSet()) return DeepAttempt;

	return DeepAttempt;
}

void UNarrativeCharacterMovement::PhysClimb(float deltaTime, int32 Iterations)
{
	if (deltaTime < MIN_TICK_TIME)
	{
		return;
	}
	if (!CharacterOwner || (!CharacterOwner->Controller && !bRunPhysicsWithNoController && !HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity() && (CharacterOwner->GetLocalRole() != ROLE_SimulatedProxy)))
	{
		ensure(false);
		Acceleration = FVector::ZeroVector;
		Velocity = FVector::ZeroVector;
		return;
	}

	FVector2D LocalInputVector = GetLocalInputVector();

	if (!IsTransitionClimbMode())
	{
		ClimbMode = ENarrativeClimbMode::Idle;

		if (FMath::Abs(LocalInputVector.Y) > .1f) // Wants strafe 
		{
			float Strafe = LocalInputVector.Y * GetMaxSpeed() * deltaTime;
			TOptional<FTransform> PossibleStrafeSurface = RecomputeStrafeClimbSurface(Strafe);

			if (PossibleStrafeSurface.IsSet() && ensureAlways((PossibleStrafeSurface.GetValue().GetUnitAxis(EAxis::X) | ClimbSurface.GetUnitAxis(EAxis::X)) > .95f))
			{
				ClimbMode = ENarrativeClimbMode::Strafe;
				SetClimbSurface(PossibleStrafeSurface.GetValue());
			}
			else
			{
				TOptional<FTransform> PossibleTurnSurface = TryFindClimbTurnSurface(LocalInputVector);
				if (PossibleTurnSurface.IsSet())
				{
					SetClimbSurface(PossibleTurnSurface.GetValue());
					ClimbMode = ENarrativeClimbMode::Turn;

					Velocity += PreviousClimbSurface.TransformVector(FVector(-100.f, 0.f, 800.f));
					Velocity += ClimbSurface.TransformVector(FVector(-100.f, 0.f, 0.f));
				}
			}
		}
	}

	FTransform TargetTransform = GetClimbCapsuleTargetTransform(ClimbSurface);

	float remainingTime = deltaTime;
	while(remainingTime >= MIN_TICK_TIME && Iterations < MaxSimulationIterations)
	{
		Iterations++;
		float timeTick = GetSimulationTimeStep(remainingTime, Iterations);
		remainingTime -= timeTick;
		bJustTeleported = false;
		const FVector OldVelocity = Velocity;

		RestorePreAdditiveRootMotionVelocity();

		// todo leaning
		// if (!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
		// {
		// 	Velocity += ClimbAcceleration * timeTick;
		// 	TGuardValue<FVector> RestoreAcceleration(Acceleration, ClimbAcceleration);
		// 	CalcVelocity(timeTick, FallingLateralFriction, false, 0.f);
		// }

		const FVector Gravity(0.f, 0.f, GetGravityZ());
		Velocity += Gravity * timeTick;

		ApplyRootMotionToVelocity(timeTick);
		DecayFormerBaseVelocity(timeTick);
	
		Velocity = ResolveSpringVelocity(TargetTransform, timeTick);

		FVector Adjusted = 0.5f * (OldVelocity + Velocity) * timeTick;
		FQuat NewRotation = ResolveClimbRotation(TargetTransform.GetRotation(), timeTick);

		FHitResult Hit(1.f);
		SafeMoveUpdatedComponent(Adjusted, NewRotation, true, Hit);
		
		if (!HasValidData())
		{
			return;
		}

		if (Hit.bBlockingHit)
		{
			Adjusted = Velocity * timeTick;
			HandleImpact(Hit, timeTick, Adjusted);
			SlideAlongSurface(Adjusted, (1.f - Hit.Time), Hit.Normal, Hit, true);
		}
	}
}
TOptional<FTransform> UNarrativeCharacterMovement::RecomputeStrafeClimbSurface(float DesiredStrafe) const
{
	// FVector SweepStart = UpdatedComponent->GetComponentLocation();
	// FVector SweepEnd = SweepStart + UpdatedComponent->GetRightVector() * DesiredStrafe;
	// if (GetWorld()->SweepTestByProfile(SweepStart, SweepEnd, UpdatedComponent->GetComponentQuat(), ECC_NarrativeClimbable, FCollisionShape::MakeCapsule(CapR(), CapHH()), GetIgnoreCharacterParams()))
	// {
	// 	DrawDebugCapsule(GetWorld(), SweepEnd, CapHH(), CapR(), UpdatedComponent->GetComponentQuat(), FColor::Yellow);
	// 	return {};
	// }

	// FVector OldSurfaceStart = FRay(UpdatedComponent->GetComponentLocation(), UpdatedComponent->GetUpVector()).ClosestPoint(ClimbSurface.GetLocation()); 
	// TOptional<FTransform> PossibleOldSurface = TryFindClimbSurface(FTransform(ClimbSurface.GetRotation(), OldSurfaceStart), CapR() * 2.f, CapHH() * .25f);
	FTransform OldSurface = ClimbSurface; // PossibleOldSurface.Get(ClimbSurface);
	
	FHitResult SurfaceHit;
	FVector SurfaceTraceStart = OldSurface.TransformPosition(FVector(-5.f, DesiredStrafe, -1.f));
	FVector SurfaceTraceEnd = OldSurface.TransformPosition(FVector(20.f, DesiredStrafe, -1.f));
	GetWorld()->LineTraceSingleByChannel(SurfaceHit, SurfaceTraceStart, SurfaceTraceEnd, ECC_NarrativeClimbable, GetIgnoreCharacterParams());

	if (!SurfaceHit.IsValidBlockingHit())
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			DrawDebugLine(GetWorld(), SurfaceTraceEnd, SurfaceTraceStart, FColor::Red);
		}
		return {};
	}

	
	FHitResult GrabHit;
	FVector GrabTraceStart = SurfaceHit.Location - SurfaceHit.Normal + OldSurface.GetUnitAxis(EAxis::Z) * 5.f;
	FVector GrabTraceEnd = GrabTraceStart - OldSurface.GetUnitAxis(EAxis::Z) * 10.f;

	GetWorld()->LineTraceSingleByChannel(GrabHit, GrabTraceStart, GrabTraceEnd, ECC_NarrativeClimbable, GetIgnoreCharacterParams());

	if (!GrabHit.IsValidBlockingHit())
	{
		if (CVarClimbDebug.GetValueOnGameThread())
		{
			DrawDebugLine(GetWorld(), GrabTraceStart, GrabTraceEnd, FColor::Red);
		}
		return {};
	}

	FQuat SurfaceRotation = FRotationMatrix::MakeFromXZ(-SurfaceHit.Normal, GrabHit.Normal).ToQuat();
	FVector SurfaceLocation = GrabHit.Location;
	return FTransform(SurfaceRotation, SurfaceLocation);
}
FTransform UNarrativeCharacterMovement::GetClimbCapsuleTargetTransform(FTransform InClimbSurface) const
{
	float XOffset = CapR() + ClimbWallOffset;
	float ZOffset = CapHH() - ClimbHangOffset;
	FVector SurfaceNormal = -InClimbSurface.GetUnitAxis(EAxis::X);
	FVector TargetLocation = InClimbSurface.GetLocation() + SurfaceNormal * XOffset - UpdatedComponent->GetUpVector() * ZOffset;
	FQuat TargetRotation = FRotationMatrix::MakeFromXZ(InClimbSurface.GetRotation().GetForwardVector(), FVector::UpVector).ToQuat();
	return FTransform(TargetRotation, TargetLocation);
}
FVector UNarrativeCharacterMovement::ResolveSpringVelocity(FTransform TargetTransform, float deltaTime)
{
	FVector DeltaLocation = TargetTransform.GetLocation() - UpdatedComponent->GetComponentLocation();
	
	float DeltaLocationDistance = DeltaLocation.Size();
	float SpeedFactor = IsValid(ClimbTransitionSpeedFactor) ? ClimbTransitionSpeedFactor->GetFloatValue(DeltaLocationDistance) : 0.f;
	FVector TargetVelocity = DeltaLocation / DeltaLocationDistance * SpeedFactor;

	FVector DeltaVelocity = TargetVelocity - Velocity;
	float DeltaVelocityMagnitude = DeltaVelocity.Size();
	float ForceFactor = IsValid(ClimbTransitionForceFactor) ? ClimbTransitionForceFactor->GetFloatValue(DeltaVelocityMagnitude) : 0.f;
	if (TargetVelocity.Z > 0.f && Velocity.Z < 0.f)
	{
		ForceFactor *= 5.f;
	}

	if (IsTransitionClimbMode())
	{
		FVector AttractionForce = DeltaVelocity	/ DeltaVelocityMagnitude * ForceFactor;
		return Velocity + AttractionForce * deltaTime;
	}
	else
	{
		return Velocity + DeltaVelocity.GetClampedToMaxSize(ForceFactor * deltaTime);
	}
}
FQuat UNarrativeCharacterMovement::ResolveClimbRotation(FQuat TargetRotation, float deltaTime)
{
	const float AngularSpeedRadians = FMath::DegreesToRadians(ClimbRotationSpeedDegrees);

	float AngularDistance = TargetRotation.AngularDistance(UpdatedComponent->GetComponentQuat());
	FQuat NewRotation = UpdatedComponent->GetComponentQuat();

	if (AngularDistance > FMath::DegreesToRadians(.1f))
	{
		float RotationAlpha = FMath::Min(AngularDistance, AngularSpeedRadians * deltaTime) / AngularDistance;
		NewRotation = FQuat::Slerp(UpdatedComponent->GetComponentQuat(), TargetRotation, RotationAlpha);
	}
	
	return NewRotation;
}


bool UNarrativeCharacterMovement::IsCustomMovementMode(ENarrativeCustomMovementMode InCustomMovementMode) const
{
	return MovementMode == MOVE_Custom && CustomMovementMode == InCustomMovementMode;
}

bool UNarrativeCharacterMovement::IsMovementMode(EMovementMode InMovementMode) const
{
	return InMovementMode == MovementMode;
}

bool UNarrativeCharacterMovement::IsServer() const
{
	return CharacterOwner->HasAuthority();
}

float UNarrativeCharacterMovement::CapR() const
{
	return CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius();
}

float UNarrativeCharacterMovement::CapHH() const
{
	return CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
}

FVector2D UNarrativeCharacterMovement::GetLocalInputVector() const
{
	if (Acceleration.IsNearlyZero()) return FVector2D::ZeroVector;
	FVector LocalAcceleration = GetCharacterOwner()->GetControlRotation().UnrotateVector(Acceleration).GetSafeNormal(); 
	FVector2D LocalInput(LocalAcceleration);
	LocalInput.X = FMath::Sign(LocalAcceleration.X) * FMath::Sqrt(FMath::Pow(LocalAcceleration.X, 2.f) + FMath::Pow(LocalAcceleration.Z, 2.f));
	return LocalInput.GetSafeNormal();
}

FCollisionQueryParams UNarrativeCharacterMovement::GetIgnoreCharacterParams() const
{
	FCollisionQueryParams CQP;

	if (NarrativeCharacterOwner)
	{
		CQP.AddIgnoredActor(NarrativeCharacterOwner);

		TArray<AActor*> Children;
		NarrativeCharacterOwner->GetAllChildActors(Children);

		CQP.AddIgnoredActors(Children);
	}

	return CQP;
}


void FSavedMove_NarrativeCharacter::FSavedMove_NarrativeCharacter::Clear()
{
	Super::Clear();

	bSavedWantsSprint = false;
}

uint8 FSavedMove_NarrativeCharacter::FSavedMove_NarrativeCharacter::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	if (bSavedWantsSprint)
	{
		Result |= FLAG_SPRINT;
	}

	return Result;
}

bool FSavedMove_NarrativeCharacter::FSavedMove_NarrativeCharacter::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	if (bSavedWantsSprint != ((FSavedMove_NarrativeCharacter*)&NewMove)->bSavedWantsSprint)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void FSavedMove_NarrativeCharacter::FSavedMove_NarrativeCharacter::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character& ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	if (UNarrativeCharacterMovement* MovementComp = Cast<UNarrativeCharacterMovement>(Character->GetCharacterMovement()))
	{
		bSavedWantsSprint = MovementComp->bWantsSprint;
	}
}

void FSavedMove_NarrativeCharacter::FSavedMove_NarrativeCharacter::PrepMoveFor(class ACharacter* Character)
{
	Super::PrepMoveFor(Character);
}

FNetworkPredictionData_Client_NarrativeCharacter::FNetworkPredictionData_Client_NarrativeCharacter(const UCharacterMovementComponent& ClientMovement) : Super(ClientMovement)
{

}

FSavedMovePtr FNetworkPredictionData_Client_NarrativeCharacter::FNetworkPredictionData_Client_NarrativeCharacter::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_NarrativeCharacter());
}
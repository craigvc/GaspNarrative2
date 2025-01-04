// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaInputManagerComponent.h"

#include "AbilitySystemGlobals.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "NinjaInputFunctionLibrary.h"
#include "NinjaInputHandler.h"
#include "NinjaInputHandlerHelpers.h"
#include "NinjaInputSettings.h"
#include "NinjaInputTags.h"
#include "Components/ArrowComponent.h"
#include "Data/NinjaInputSetupDataAsset.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "GameFramework/HUD.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/InputModeAwareInterface.h"
#include "Interfaces/InputSetupProviderInterface.h"
#include "Interfaces/LastInputProviderInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"

DEFINE_LOG_CATEGORY(LogNinjaInputManagerComponent);

FName UNinjaInputManagerComponent::ForwardReferenceTag = TEXT("InputForwardReference");

UNinjaInputManagerComponent::UNinjaInputManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	
    SetIsReplicatedByDefault(true);
	bShouldProcessInputs = true;
	bBoundToController = false;
	bAutoClearOnUnPosses = false;
	bShouldCreateForwardReference = false;
	bShouldRotateControllerToMouseCursor = false;
	ControlRotationInterpSpeed = 360.f;
	CurrentInputModeTag = FGameplayTag::EmptyTag;
	MouseChannel = ECC_Visibility;
	AnalogStickBehavior = EInputAnalogStickBehavior::FixedSpeed_SingleGait;
}

void UNinjaInputManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ThisClass, CurrentInputModeTag, COND_OwnerOnly);
}

void UNinjaInputManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	TObjectPtr<APawn> OwnerPawn = nullptr;
	TObjectPtr<APlayerController> PlayerController = nullptr;
	
	if (GetOwner()->IsA(APawn::StaticClass()))
	{
		OwnerPawn = Cast<APawn>(GetOwner());
		PlayerController = Cast<APlayerController>(OwnerPawn->GetController());
	}
	else if (GetOwner()->IsA(APlayerController::StaticClass()))
	{
		PlayerController = Cast<APlayerController>(GetOwner());
		OwnerPawn = PlayerController->GetPawn();
	}

	if (IsValid(OwnerPawn))
	{
		OwnerPawn->ReceiveRestartedDelegate.AddDynamic(this, &ThisClass::OnPawnRestarted);
		OwnerPawn->ReceiveControllerChangedDelegate.AddDynamic(this, &ThisClass::OnControllerChanged);
		OnPawnRestarted(OwnerPawn);
	}

	InitializeController(PlayerController);
}

// ReSharper disable CppParameterMayBeConstPtrOrRef
void UNinjaInputManagerComponent::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)
{
    InitializeController(NewController);
}
// ReSharper restore CppParameterMayBeConstPtrOrRef

void UNinjaInputManagerComponent::InitializeController(AController* NewController)
{
	// This flow is relevant in the following scenarios:
	//
	// 1. The first initialization, regardless if owner is a Pawn or Controller.
	// 2. The controller is being reinitialized and the component is owned by a pawn.
	//
	if (IsValid(OwnerController) && OwnerController == GetOwner())
	{
		// Owned by a controller and it's already initialized.
		return;
	}
	
	if (IsValid(OwnerController) && GetOwner() != OwnerController)
	{
		if (bAutoClearOnUnPosses)
		{
			ClearInputSetup();
		}
		
		OwnerController->OnPossessedPawnChanged.RemoveAll(this);
		OwnerController = nullptr;
		bBoundToController = false;
	}

	if (IsValid(NewController))
	{
		OwnerController = NewController;
		OwnerController->OnPossessedPawnChanged.AddDynamic(this, &ThisClass::OnPossessedPawnChanged);
		bBoundToController = true;

		if (IsValid(OwnerController->InputComponent))
		{
			SetupInputComponent(OwnerController->InputComponent);
			AddCachedInputSetupData();
		}
	}
}

// ReSharper disable CppParameterMayBeConstPtrOrRef
void UNinjaInputManagerComponent::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn)
{
	if (bAutoClearOnUnPosses)
	{
		ClearInputSetup();
	}
	else if (OldPawn && OldPawn->Implements<UInputSetupProviderInterface>())
	{
		TArray<UNinjaInputSetupDataAsset*> SetupsToRemove = IInputSetupProviderInterface::Execute_GetRemovedSetups(OldPawn);
		for (const UNinjaInputSetupDataAsset* Setup : SetupsToRemove)
		{
			RemoveInputSetupData(Setup);
		}
	}
	
	OnPawnRestarted(NewPawn);
}

// ReSharper disable CppParameterMayBeConstPtrOrRef
void UNinjaInputManagerComponent::OnPawnRestarted(APawn* Pawn)
{
    if (IsValid(Pawn))
    {
        ForwardReference = Pawn->FindComponentByTag<USceneComponent>(ForwardReferenceTag);
        if (ForwardReference)
        {
            UE_LOG(LogNinjaInputManagerComponent, Log, TEXT("[%s] Retrieved a new Forward Reference %s."),
                *GetNameSafe(GetOwner()), *GetNameSafe(ForwardReference));
        }
        else if (bShouldCreateForwardReference)
        {
	        ForwardReference = CreateForwardReference(Pawn);

        	UE_LOG(LogNinjaInputManagerComponent, Log, TEXT("[%s] Created a new Forward Reference."),
				*GetNameSafe(GetOwner()));        	
        }

    	if (Pawn->Implements<UInputSetupProviderInterface>())
    	{
    		TArray<UNinjaInputSetupDataAsset*> SetupsToAdd = IInputSetupProviderInterface::Execute_GetAddedSetups(Pawn);
    		for (const UNinjaInputSetupDataAsset* Setup : SetupsToAdd)
    		{
    			AddInputSetupData(Setup);
    		}
    	}
    }
    else
    {
    	ForwardReference = nullptr;
    }
}

USceneComponent* UNinjaInputManagerComponent::CreateForwardReference_Implementation(APawn* Owner) const
{
	check(IsValid(Owner));
	USceneComponent* ParentComponent = Owner->GetRootComponent();
	
	UArrowComponent* NewForwardReference = NewObject<UArrowComponent>(Owner);
	NewForwardReference->ComponentTags.Add(ForwardReferenceTag);
	NewForwardReference->SetVisibleFlag(false);
	NewForwardReference->SetUsingAbsoluteRotation(true);
	NewForwardReference->SetWorldRotation(FRotator::ZeroRotator);
	NewForwardReference->SetArrowColor(FLinearColor::Green);
	NewForwardReference->SetAutoActivate(true);
	NewForwardReference->RegisterComponent();
	NewForwardReference->AttachToComponent(ParentComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	Owner->AddInstanceComponent(NewForwardReference);

	return NewForwardReference;
}

void UNinjaInputManagerComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	RotateControllerToMouseCursor(DeltaTime);
}

void UNinjaInputManagerComponent::RotateControllerToMouseCursor_Implementation(const float DeltaTime)
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (!IsValid(PlayerController) || !PlayerController->IsLocalController())
	{
		return;
	}

	const APawn* MyPawn = GetPawn();
	if (!IsValid(MyPawn))
	{
		return;
	}

	FRotator TargetRotation;
	if (UNinjaInputFunctionLibrary::FindLookAtCursorRotation(PlayerController, TargetRotation, MouseChannel))
	{
		const FRotator CurrentRotation = PlayerController->GetControlRotation();
		TargetRotation.Roll = CurrentRotation.Roll;
		
		TargetRotation = UKismetMathLibrary::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, ControlRotationInterpSpeed);
		PlayerController->SetControlRotation(TargetRotation);
	}
}

// ReSharper restore CppParameterMayBeConstPtrOrRef
void UNinjaInputManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    const TObjectPtr<UWorld> World = GetWorld();
    if (IsValid(World) && World->IsGameWorld())
    {
        APawn* OwnerPawn = GetPawn();
        if (IsValid(OwnerPawn))
        {
            OwnerPawn->ReceiveRestartedDelegate.RemoveAll(this);
            OwnerPawn->ReceiveControllerChangedDelegate.RemoveAll(this);
        }

    	if (IsValid(OwnerController))
    	{
    		OwnerController->OnPossessedPawnChanged.RemoveAll(this);
    		OwnerController = nullptr;
    		bBoundToController = false;
    	}
    }

	InputComponent = nullptr;
	PendingHandlerSetups.Empty();
    ClearInputSetup();
	
    Super::EndPlay(EndPlayReason);
}

void UNinjaInputManagerComponent::SetupInputComponent(UInputComponent* NewInputComponent)
{
	InputComponent = Cast<UEnhancedInputComponent>(NewInputComponent);
	if (ensureMsgf(InputComponent, TEXT("Please make sure to use a valid EnhancedInputComponent!")))
	{
		if (IsValid(OwnerController))
		{
		    for (const UNinjaInputSetupDataAsset* SetupData : InputHandlerSetup)
		    {
		        AddInputSetupData(SetupData);
		    }
		}
	}
}

void UNinjaInputManagerComponent::AddCachedInputSetupData()
{
	for (auto It = PendingHandlerSetups.CreateIterator(); It; ++It)
	{
		const UNinjaInputSetupDataAsset* PendingSetup = *It;
		AddInputSetupData(PendingSetup);
		It.RemoveCurrent();
	}
}

void UNinjaInputManagerComponent::AddInputSetupData(const UNinjaInputSetupDataAsset* SetupData)
{
    check(SetupData);

	// If not fully initialized yet, then cache this for later.
	if (!bBoundToController)
	{
		PendingHandlerSetups.AddUnique(SetupData);
		return;	
	}
	
    // Make sure that this setup has not been already processed.
    if (HasSetupData(SetupData))
    {
        UE_LOG(LogNinjaInputManagerComponent, Warning, TEXT("[%s] Received a duplicated Input Setup (%s)!"),
             *GetNameSafe(GetOwner()), *GetNameSafe(SetupData));
        
        return;
    }
    
    // Also make sure we don't have the same IMC from another Setup.
    const TObjectPtr<UInputMappingContext> NewContext = SetupData->InputMappingContext;
    if (HasInputMappingContext(NewContext))
    {
    	if (ProcessedSetups.Contains(NewContext))
    	{
    		const FProcessedInputSetup OriginalSetup = *ProcessedSetups.Find(NewContext);
    		UE_LOG(LogNinjaInputManagerComponent, Warning, TEXT("[%s] Duplicated IMC '%s' from setup '%s'! Original setup: '%s'."),
				 *GetNameSafe(GetOwner()), *GetNameSafe(NewContext), *GetNameSafe(SetupData), *GetNameSafe(OriginalSetup.SourceData));
    		
    	}
	    else
	    {
	    	UE_LOG(LogNinjaInputManagerComponent, Warning, TEXT("[%s] Duplicated IMC '%s' from setup '%s'! No original setup, maybe from a previous pawn?"),
				 *GetNameSafe(GetOwner()), *GetNameSafe(NewContext), *GetNameSafe(SetupData));
	    }

    	return;
    }
    
    TArray<FProcessedBinding> Bindings;
    AddInputMappingContext(NewContext, SetupData->Priority, Bindings);

    if (!Bindings.IsEmpty())
    {
        const FProcessedInputSetup Setup(SetupData, Bindings);
        ProcessedSetups.Add(NewContext, Setup);

        UE_LOG(LogNinjaInputManagerComponent, Log, TEXT("[%s] Added Setup Data %s with %d bindings."),
            *GetNameSafe(GetOwner()), *GetNameSafe(SetupData), Bindings.Num());
    }
    else
    {
        // We don't have any bindings so this Context is pointless. Remove it so it can be added again later.
        RemoveInputMappingContext(NewContext);

        UE_LOG(LogNinjaInputManagerComponent, Warning, TEXT("[%s] Discarded Setup Data %s as it has no bindings."),
            *GetNameSafe(GetOwner()), *GetNameSafe(SetupData));
    }
}

void UNinjaInputManagerComponent::AddInputMappingContext(const UInputMappingContext* InputMappingContext, const int32 Priority, TArray<FProcessedBinding>& OutBindings)
{
    OutBindings.Reset();
    
	if (!IsValid(InputComponent) || !IsValid(InputMappingContext) || HasInputMappingContext(InputMappingContext))
	{
		return;
	}
	
    const TObjectPtr<UEnhancedInputLocalPlayerSubsystem> Subsystem = GetEnhancedInputSubsystem(OwnerController.Get());
    check(IsValid(Subsystem));
    
    Subsystem->AddMappingContext(InputMappingContext, Priority);

    TArray<TObjectPtr<const UInputAction>> ActionsToBind;
    ActionsToBind.Reserve(InputMappingContext->GetMappings().Num());
    OutBindings.Reserve(ActionsToBind.Num());

    // Ensure that we only process each action once, regardless of how many keys are assigned to them.
    for (const FEnhancedActionKeyMapping& KeyMapping: InputMappingContext->GetMappings())
    {
        ActionsToBind.AddUnique(KeyMapping.Action);
    }

    // Create bindings for each unique action, for every tracked trigger and then store the Handle.
    for (const UInputAction* InputAction : ActionsToBind)
    {
        const TArray<ETriggerEvent> TrackedEvents = GetDefault<UNinjaInputSettings>()->TrackedEvents;
        for (const ETriggerEvent& TriggerEvent : TrackedEvents)
        {
            FEnhancedInputActionHandlerInstanceSignature::TMethodPtr<ThisClass> DispatchFunction = nullptr;
            switch (TriggerEvent)
            {
            case ETriggerEvent::Started:
                DispatchFunction = &ThisClass::DispatchStartedEvent;
                break;
            case ETriggerEvent::Triggered:
                DispatchFunction = &ThisClass::DispatchTriggeredEvent;
                break;
            case ETriggerEvent::Ongoing:
                DispatchFunction = &ThisClass::DispatchOngoingEvent;
                break;
            case ETriggerEvent::Completed:
                DispatchFunction = &ThisClass::DispatchCompletedEvent;
                break;
            case ETriggerEvent::Canceled:
                DispatchFunction = &ThisClass::DispatchCancelledEvent;
                break;
            default:
                const UEnum* EnumPtr = StaticEnum<ETriggerEvent>();
                UE_LOG(LogNinjaInputManagerComponent, Warning, TEXT("[%s] Unable to handle Trigger Event '%s'."),
                    *GetNameSafe(GetOwner()), *EnumPtr->GetValueAsString(TriggerEvent));
            }

            if (DispatchFunction != nullptr)
            {
                FEnhancedInputActionEventBinding* Handle = &InputComponent->BindAction(InputAction, TriggerEvent, this, DispatchFunction);
                if (Handle != nullptr)
                {
                    const FProcessedBinding& Binding = FProcessedBinding(InputAction, TriggerEvent, Handle);
                    OutBindings.Add(Binding);
                }
            }
        }
    }
}

void UNinjaInputManagerComponent::DispatchStartedEvent(const FInputActionInstance& ActionInstance)
{
    Dispatch(ActionInstance, ETriggerEvent::Started);
}

void UNinjaInputManagerComponent::DispatchTriggeredEvent(const FInputActionInstance& ActionInstance)
{
    Dispatch(ActionInstance, ETriggerEvent::Triggered);
}

void UNinjaInputManagerComponent::DispatchOngoingEvent(const FInputActionInstance& ActionInstance)
{
    Dispatch(ActionInstance, ETriggerEvent::Ongoing);
}

void UNinjaInputManagerComponent::DispatchCompletedEvent(const FInputActionInstance& ActionInstance)
{
    Dispatch(ActionInstance, ETriggerEvent::Completed);
}

void UNinjaInputManagerComponent::DispatchCancelledEvent(const FInputActionInstance& ActionInstance)
{
    Dispatch(ActionInstance, ETriggerEvent::Canceled);
}

void UNinjaInputManagerComponent::Dispatch(const FInputActionInstance& ActionInstance, const ETriggerEvent ActualTrigger)
{
	const TObjectPtr<const UInputAction> InputAction = ActionInstance.GetSourceAction();
	
	if (!ShouldProcessInputs())
	{
		UE_LOG(LogNinjaInputManagerComponent, Verbose, TEXT("[%s] Input Action %s will be ignored, input is disabled."), *GetNameSafe(GetOwner()), *GetNameSafe(InputAction));
		return;	
	}
	
	DetectInputType(ActionInstance);

    TArray<FBufferedInputCommand> CandidateCommands;
    const TObjectPtr<UActorComponent> InputBuffer = GetInputBufferComponent();
    const bool bIsUsingBuffer = IsValid(InputBuffer) && Execute_IsInputBufferOpen(InputBuffer);
	
    for (auto It(ProcessedSetups.CreateConstIterator()); It; ++It)
    {
        for (UNinjaInputHandler* Handler : ProcessedSetups.Find(It.Key())->SourceData->InputHandlers)
        {
            if (IsValid(Handler) && Handler->CanHandle(ActualTrigger, InputAction))
            {
                if (bIsUsingBuffer && Handler->CanBeBuffered())
                {
                    UE_LOG(LogNinjaInputManagerComponent, VeryVerbose, TEXT("[%s] Input Action %s will be saved as an Input Buffer candidate."),
                        *GetNameSafe(GetOwner()), *GetNameSafe(InputAction));
                
                    FBufferedInputCommand NewCommand(this, Handler, ActionInstance, ActualTrigger);
                    CandidateCommands.AddUnique(NewCommand);
                }
                else
                {
                    UE_LOG(LogNinjaInputManagerComponent, VeryVerbose, TEXT("[%s] Input Action %s will trigger handler %s."),
                        *GetNameSafe(GetOwner()), *GetNameSafe(InputAction), *GetNameSafe(Handler));

                    Handler->SetWorld(GetWorld());
                    Handler->HandleInput(this, ActionInstance, ActualTrigger);
                }
            }
        }
    }

    Execute_BufferInputCommands(InputBuffer, CandidateCommands);
}

void UNinjaInputManagerComponent::ClearInputSetup()
{
	for (auto It = ProcessedSetups.CreateIterator(); It; ++It)
	{
		const UNinjaInputSetupDataAsset* Data = It->Value.SourceData;
		RemoveInputSetupData(Data);
	}
}

void UNinjaInputManagerComponent::DetectInputType(const FInputActionInstance& ActionInstance)
{
	const APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (!IsValid(PlayerController))
	{
		return;
	}
	
	const UEnhancedInputLocalPlayerSubsystem* Subsystem = GetEnhancedInputSubsystem(PlayerController);
	if (!IsValid(Subsystem))
	{
		return;
	}

	const FInputActionValue Value = ActionInstance.GetValue();
	const float Magnitude = Value.GetMagnitude();
	if (Magnitude == 0.f)
	{
		return;
	}
	
	const UInputAction* SourceAction = ActionInstance.GetSourceAction();
	TArray<FKey> Keys = Subsystem->QueryKeysMappedToAction(SourceAction);

	FGameplayTag NewInputModeTag = FGameplayTag::EmptyTag;
	FKey TriggerKey; 
	
	for (const FKey& Key : Keys)
	{
		if (PlayerController->IsInputKeyDown(Key))
		{
			if (Key.IsTouch() && CurrentInputModeTag != Tag_Input_Mode_Touch)
			{
				NewInputModeTag = Tag_Input_Mode_Touch;
				TriggerKey = Key;
				break;
			}

			if (Key.IsGamepadKey() && CurrentInputModeTag != Tag_Input_Mode_Gamepad)
			{
				NewInputModeTag = Tag_Input_Mode_Gamepad;
				TriggerKey = Key;
				break;
			}
			
			if (!Key.IsTouch() && !Key.IsGamepadKey() && CurrentInputModeTag != Tag_Input_Mode_KeyboardAndMouse)
			{
				NewInputModeTag = Tag_Input_Mode_KeyboardAndMouse;
				TriggerKey = Key;
				break;
			}
		}
	}

	if (NewInputModeTag.IsValid())
	{
		UE_LOG(LogNinjaInputManagerComponent, Log, TEXT("Input Mode changed: { mode: %s, action: %s, key: %s, value: %f }"),
			*NewInputModeTag.ToString(), *GetNameSafe(SourceAction), *TriggerKey.ToString(), Magnitude);

		Execute_SetPlayerInputMode(this, NewInputModeTag);
		SynchronizeControllerRotationSettings();
	}
}

FGameplayTag UNinjaInputManagerComponent::GetPlayerInputMode_Implementation() const
{
	return CurrentInputModeTag;
}

void UNinjaInputManagerComponent::SetPlayerInputMode_Implementation(const FGameplayTag InputModeTag)
{
	if (InputModeTag == CurrentInputModeTag)
	{
		return;
	}

	if (IsLocallyControlled())
	{
		CurrentInputModeTag = InputModeTag;
		OnRep_CurrentInputModeTag();
		Server_SetPlayerInputMode(InputModeTag);
	}
}

void UNinjaInputManagerComponent::EnableInputProcessing()
{
	bShouldProcessInputs = true;
}

void UNinjaInputManagerComponent::DisableInputProcessing()
{
	bShouldProcessInputs = false;

	static constexpr bool bCancelBuffer = true;
	Execute_CloseInputBuffer(this, bCancelBuffer);
}

void UNinjaInputManagerComponent::RemoveInputSetupData(const UNinjaInputSetupDataAsset* SetupData)
{
	if (IsValid(SetupData))
	{
		// Remove buffered commands to avoid them triggering later, to a wrong pawn.
		for (UNinjaInputHandler* Handler : SetupData->InputHandlers)
		{
			BufferedCommands.RemoveAll([Handler](const FBufferedInputCommand& Command)
				{ return Command.GetHandler() == Handler; });
		}

		// Remove the mapping context related to this setup.
		RemoveInputMappingContext(SetupData->InputMappingContext);
	}
}

void UNinjaInputManagerComponent::RemoveInputMappingContext(const UInputMappingContext* InputMappingContext)
{
    if (ensure(IsValid(InputMappingContext)) && HasInputMappingContext(InputMappingContext))
    {
        if (ProcessedSetups.Contains(InputMappingContext))
        {
            FProcessedInputSetup Setup = *ProcessedSetups.Find(InputMappingContext);
            for (auto It = Setup.ProcessedBindings.CreateIterator(); It; ++It)
            {
                // Deliberately not using "IsValid()", as it may have GC flags if we're in the "EndPlay" flow.
                if (InputComponent)
                {
                    const FProcessedBinding Binding = *It;
                    if (!InputComponent->RemoveBinding(*Binding.Handle))
                    {
                    	UE_LOG(LogNinjaInputManagerComponent, Warning, TEXT("[%s] Unable to remove binding for %s."),
                    		*GetNameSafe(GetOwner()), *GetNameSafe(Binding.InputAction));
                    }
                }
                
                // We still want to remove this entry, regardless of the Input Component being available or not.
                It.RemoveCurrent();
            }
        }

    	const TObjectPtr<UEnhancedInputLocalPlayerSubsystem> Subsystem = GetEnhancedInputSubsystem(OwnerController.Get());
    	check(IsValid(Subsystem));
    	Subsystem->RemoveMappingContext(InputMappingContext);
    	ProcessedSetups.Remove(InputMappingContext);

        UE_LOG(LogNinjaInputManagerComponent, Log, TEXT("[%s] Removed Input Context %s."),
            *GetNameSafe(GetOwner()), *GetNameSafe(InputMappingContext));
    }
}

void UNinjaInputManagerComponent::OnRep_CurrentInputModeTag()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController()); 
	if (IsValid(PlayerController))
	{
		if (PlayerController->Implements<UInputModeAwareInterface>())
		{
			Execute_SetPlayerInputMode(PlayerController, CurrentInputModeTag);
		}

		AHUD* PlayerHUD = PlayerController->GetHUD();
		if (IsValid(PlayerHUD) && PlayerHUD->Implements<UInputModeAwareInterface>())
		{
			Execute_SetPlayerInputMode(PlayerHUD, CurrentInputModeTag);
		}

		APawn* PlayerPawn = PlayerController->GetPawn();
		if (IsValid(PlayerPawn) && PlayerPawn->Implements<UInputModeAwareInterface>())
		{
			Execute_SetPlayerInputMode(PlayerPawn, CurrentInputModeTag);
		}
	}
	
	SynchronizeControllerRotationSettings();
	OnInputModeChanged.Broadcast(CurrentInputModeTag);
}

void UNinjaInputManagerComponent::Server_SetPlayerInputMode_Implementation(const FGameplayTag& InputModeTag)
{
	if (InputModeTag == CurrentInputModeTag)
	{
		return;
	}

	CurrentInputModeTag = InputModeTag;
	OnRep_CurrentInputModeTag();
}

void UNinjaInputManagerComponent::SynchronizeControllerRotationSettings()
{
	const bool bShouldTick = bShouldRotateControllerToMouseCursor && IsUsingKeyboardAndMouse() && IsLocallyControlled(); 
	SetComponentTickEnabled(bShouldTick);		
}

UAbilitySystemComponent* UNinjaInputManagerComponent::GetAbilitySystemComponent() const
{
    return UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetPawn());
}

void UNinjaInputManagerComponent::SetAnalogStickBehavior(const EInputAnalogStickBehavior NewAnalogStickBehavior)
{
	AnalogStickBehavior = NewAnalogStickBehavior;
}

int32 UNinjaInputManagerComponent::SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value,
	const UInputAction* InputAction, const bool bSendLocally, bool const bSendToServer) const
{
    int32 Activations = 0;
    const TObjectPtr<APlayerController> PlayerController = Cast<APlayerController>(GetController());
    
    if (IsValid(PlayerController) && ensureMsgf(GameplayEventTag.IsValid(), TEXT("The Gameplay Event Tag must be valid.")))
    {
        if ((bSendLocally && PlayerController->IsLocalController()) || (bSendToServer && GetOwner()->HasAuthority()))
        {
            // Local execution for either local client or authoritative version.
            Activations = FNinjaInputHandlerHelpers::SendGameplayEvent(this, GameplayEventTag, Value, InputAction);
        }
        
        if (PlayerController->IsLocalController() && bSendToServer && !GetOwner()->HasAuthority())
        {
            // On local client and we need to send this event to the server.
            Server_SendGameplayEventToOwner(GameplayEventTag, Value, InputAction);
        }

        if (GetOwner()->HasAuthority() && bSendLocally && !PlayerController->IsLocalController())
        {
            // On a server and we need to send this event to the client.
            Client_SendGameplayEventToOwner(GameplayEventTag, Value, InputAction);
        }
    }

    return Activations;
}

void UNinjaInputManagerComponent::Client_SendGameplayEventToOwner_Implementation(const FGameplayTag& GameplayEventTag,
	const FInputActionValue& Value, const UInputAction* InputAction) const
{
    const FString Context = "Client RPC";
    FNinjaInputHandlerHelpers::SendGameplayEvent(this, GameplayEventTag, Value, InputAction, Context);
}

void UNinjaInputManagerComponent::Server_SendGameplayEventToOwner_Implementation(const FGameplayTag& GameplayEventTag,
    const FInputActionValue& Value, const UInputAction* InputAction) const
{
    const FString Context = "Server RPC";
    FNinjaInputHandlerHelpers::SendGameplayEvent(this, GameplayEventTag, Value, InputAction, Context);
}

bool UNinjaInputManagerComponent::HasSetupData(const UNinjaInputSetupDataAsset* SetupData) const
{
    for (auto It(ProcessedSetups.CreateConstIterator()); It; ++It)
    {
        if (It.Value().SourceData == SetupData)
        {
            return true;
        }
    }
    
    return false;
}

bool UNinjaInputManagerComponent::HasInputMappingContext(const UInputMappingContext* InputMappingContext) const
{
    check(IsValid(InputMappingContext));
	
    const UEnhancedInputLocalPlayerSubsystem* Subsystem = GetEnhancedInputSubsystem(OwnerController.Get());
    return IsValid(Subsystem) && Subsystem->HasMappingContext(InputMappingContext);
}

bool UNinjaInputManagerComponent::HasCompatibleInputHandler(const UInputAction* InputAction, const ETriggerEvent& TriggerEvent) const
{
    for (auto It(ProcessedSetups.CreateConstIterator()); It; ++It)
    {
        if (It.Value().SourceData->HasCompatibleInputHandler(InputAction, TriggerEvent))
        {
            return true;
        }
    }

    return false;
}

FVector UNinjaInputManagerComponent::GetForwardVector_Implementation() const
{
	FVector Reference;
	GetVectorForAxis(EAxis::X, Reference);
	return Reference;
}

FVector UNinjaInputManagerComponent::GetRightVector_Implementation() const
{
	FVector Reference;
	GetVectorForAxis(EAxis::Y, Reference);
	return Reference;
}

void UNinjaInputManagerComponent::GetVectorForAxis_Implementation(const EAxis::Type Axis, FVector& OutReference) const
{
	if (IsValid(ForwardReference))
	{
		const FRotator ReferenceYawRotation = ForwardReference->GetComponentRotation();
		OutReference = FRotationMatrix(ReferenceYawRotation).GetScaledAxis(Axis);
	}
	else if (IsValid(OwnerController))
	{
		FRotator ControlRotation = OwnerController->GetControlRotation();
		ControlRotation.Roll = 0.f;
		ControlRotation.Pitch = 0.f;
		OutReference = FRotationMatrix(ControlRotation).GetScaledAxis(Axis);
	}
	else switch (Axis)
	{
		case EAxis::X:
			OutReference = GetPawn()->GetActorForwardVector();
			break;
		case EAxis::Y:
			OutReference = GetPawn()->GetActorRightVector();
			break;
		case EAxis::Z:
			OutReference = GetPawn()->GetActorUpVector();
			break;
		default:
			checkNoEntry();
	}
}

UEnhancedInputLocalPlayerSubsystem* UNinjaInputManagerComponent::GetEnhancedInputSubsystem(const AController* Controller)
{
    if (IsValid(Controller))
    {
        const APlayerController* PlayerController = Cast<APlayerController>(Controller);
        if (IsValid(PlayerController))
        {
            const ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
            if (IsValid(LocalPlayer))
            {
                return LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
            }
        }
    }

    return nullptr;
}

FVector UNinjaInputManagerComponent::GetLastInputVector() const
{
    const TObjectPtr<APawn> PawnOwner = GetPawn();
    if (IsValid(PawnOwner))
    {
        if (PawnOwner->Implements<ULastInputProviderInterface>())
        {
            return ILastInputProviderInterface::Execute_GetLastInputVector(PawnOwner);
        }

        const TObjectPtr<UPawnMovementComponent> PawnMovement = PawnOwner->GetMovementComponent();
        if (IsValid(PawnOwner->GetMovementComponent()))
        {
            return PawnMovement->GetLastInputVector();
        }
    }

    return FVector::ZeroVector;
}

APawn* UNinjaInputManagerComponent::GetPawn() const
{
	if (GetOwner()->IsA(APawn::StaticClass()))
	{
		return Cast<APawn>(GetOwner());
	}

	if (GetOwner()->IsA(AController::StaticClass()))
	{
		const AController* Controller = Cast<AController>(GetOwner());
		return Controller->GetPawn();
	}

	return nullptr;
}

AController* UNinjaInputManagerComponent::GetController() const
{
	return OwnerController;
}

bool UNinjaInputManagerComponent::IsLocallyControlled() const
{
    return IsValid(OwnerController) && OwnerController->IsLocalController();
}
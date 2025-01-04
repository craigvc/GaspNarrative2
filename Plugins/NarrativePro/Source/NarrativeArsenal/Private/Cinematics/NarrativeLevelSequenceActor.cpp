// Copyright Narrative Tools 2024. 

//
//#include "Cinematics/NarrativeLevelSequenceActor.h"
//#include "AI/NarrativeNPCSubsystem.h"
//#include "AI/NPCDataAsset.h"
//#include "UnrealFramework/NarrativeNPCCharacter.h"
//#include "GameFramework/Pawn.h"
//#include <Kismet/GameplayStatics.h>
//#include "UnrealFramework/NarrativePlayerCharacter.h"
//#include "Tracks/MovieSceneTransformTrack.h"
//#include <LevelSequence.h>
//#include <LevelSequenceActor.h>
//#include <LevelSequencePlayer.h>
//
//static const FName NAME_PlayerBinding("Player");
//
//ULevelSequencePlayer* ANarrativeLevelSequenceActor::CreateNarrativeLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings,  const TArray<UNPCDataAsset*>& NPCs, ANarrativeLevelSequenceActor*& OutActor)
//{
//	if (LevelSequence == nullptr)
//	{
//		return nullptr;
//	}
//
//	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
//	if (World == nullptr || World->bIsTearingDown)
//	{
//		return nullptr;
//	}
//
//	FActorSpawnParameters SpawnParams;
//	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
//	SpawnParams.ObjectFlags |= RF_Transient;
//	SpawnParams.bAllowDuringConstructionScript = true;
//
//	// Defer construction for autoplay so that BeginPlay() is called
//	SpawnParams.bDeferConstruction = true;
//
//	ANarrativeLevelSequenceActor* Actor = World->SpawnActor<ANarrativeLevelSequenceActor>(SpawnParams);
//
//	Actor->SetNPCs(NPCs);
//	Actor->PlaybackSettings = Settings;
//	Actor->SequencePlayer->SetPlaybackSettings(Settings);
//
//	Actor->SetSequence(LevelSequence);
//
//	Actor->InitializePlayer();
//	OutActor = Actor;
//
//	FTransform DefaultTransform;
//	Actor->FinishSpawning(DefaultTransform);
//
//	return Actor->SequencePlayer;
//}
//
//void ANarrativeLevelSequenceActor::BeginPlay()
//{
//	Super::BeginPlay();
//
//	//Assume we always begin sequence automatically 
//	SequencePlayer->Play();
//
//	//Dont set this blindly with SetBindingByTag as it issues annoying log message, we'll just do manually 
//	const UMovieSceneSequence* Sequence = GetSequence();
//	const FMovieSceneObjectBindingIDs* PlayerBinding = Sequence ? Sequence->GetMovieScene()->AllTaggedBindings().Find(NAME_PlayerBinding) : nullptr;
//
//	if (PlayerBinding)
//	{
//		if (ANarrativePlayerCharacter* PlayerCharacter = Cast<ANarrativePlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0)))
//		{
//			const TArray<AActor*> Binds = {PlayerCharacter};
//			SetBindingByTag(NAME_PlayerBinding, Binds);
//
//			if (USkeletalMeshComponent* SkelMesh = PlayerCharacter->GetMesh())
//			{
//				PlayerAnimInstanceClass = SkelMesh->GetAnimClass();
//				PlayerAnimInstanceLayerClass = PlayerCharacter->OverrideAnimBP ? PlayerCharacter->OverrideAnimBP : PlayerCharacter->UnarmedAnimBP;
//			}
//		}
//
//	}
//
//	if (UNarrativeNPCSubsystem* NPCSubsystem = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
//	{
//		for (auto& NPC : NPCsToBind)
//		{
//			if (IsValid(NPC))
//			{
//				if (ANarrativeNPCCharacter* NPCInstance = NPCSubsystem->FindNPC(NPC))
//				{
//					if (USkeletalMeshComponent* SkelMesh = NPCInstance->GetMesh())
//					{
//						//Add each NPCs anim layer and anim class info to a map, so we can restore them when the sequence ends 
//						//(sequencer usually does this automatically but it doesn't work with linked anim layers and requires designers to remember enabling it)
//						CachedAnimInstanceClasses.Add(NPCInstance, SkelMesh->GetAnimClass());
//						CachedAnimInstanceLayerClasses.Add(NPCInstance, IsValid(NPCInstance->OverrideAnimBP) ? NPCInstance->OverrideAnimBP : NPCInstance->UnarmedAnimBP);
//					}
//
//					const TArray<AActor*> Binds = {NPCInstance};
//					SetBindingByTag(NPC->NPCID, Binds);
//				}
//			}
//		}
//	}
//
//	SequencePlayer->OnFinished.AddDynamic(this, &ThisClass::OnSequenceFinished);
//}
//
//void ANarrativeLevelSequenceActor::SetNPCs(const TArray<UNPCDataAsset*>& NPCs)
//{
//	NPCsToBind = NPCs;
//}
//
//void ANarrativeLevelSequenceActor::OnSequenceFinished()
//{
//	if (SequencePlayer)
//	{
//		//Remove players binding 
//		if (ANarrativePlayerCharacter* PlayerCharacter = Cast<ANarrativePlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0)))
//		{
//			RemoveBindingByTag(NAME_PlayerBinding, PlayerCharacter);
//
//			PlayerCharacter->GetMesh()->SetAnimInstanceClass(PlayerAnimInstanceClass);
//			PlayerCharacter->GetMesh()->LinkAnimClassLayers(PlayerAnimInstanceLayerClass);
//		}
//
//
//		if (UNarrativeNPCSubsystem* NPCSubsystem = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
//		{
//			for (auto& NPC : NPCsToBind)
//			{
//				if (IsValid(NPC))
//				{
//					if (ANarrativeNPCCharacter* NPCInstance = NPCSubsystem->FindNPC(NPC))
//					{
//						//Remove the NPC bindings.
//						RemoveBindingByTag(NPC->NPCID, NPCInstance);
//
//						//The NPC now needs its anim BP restored, since the sequencer won't have properly done that. Lets restore. 
//						if (CachedAnimInstanceClasses.Contains(NPCInstance))
//						{
//							NPCInstance->GetMesh()->SetAnimInstanceClass(CachedAnimInstanceClasses[NPCInstance]);
//						}
//						else
//						{
//							UE_LOG(LogTemp, Warning, TEXT("ANarrativeLevelSequenceActor tried restoring anim instance class but wasn't in map!"));
//						}
//
//						if (CachedAnimInstanceLayerClasses.Contains(NPCInstance))
//						{
//							NPCInstance->GetMesh()->LinkAnimClassLayers(CachedAnimInstanceLayerClasses[NPCInstance]);
//						}
//						else
//						{
//							UE_LOG(LogTemp, Warning, TEXT("ANarrativeLevelSequenceActor tried restoring linked anim layer but wasn't in map!"));
//						}
//
//					}
//				}
//			}
//		}
//	}
//
//
//}

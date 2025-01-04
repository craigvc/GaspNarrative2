// Copyright Narrative Tools 2024. 

//#pragma once
//
//#include "CoreMinimal.h"
//#include "LevelSequenceActor.h"
//#include "NarrativeLevelSequenceActor.generated.h"
//
///**
// * Level sequence actor that is subclassed to automatically bind NPCs into actor bindings using NPCID as the tag. 
// * It also handles restoring the NPCs anim state to its previous one before sequencer took control of it. 
// */
//UCLASS()
//class NARRATIVEARSENAL_API ANarrativeLevelSequenceActor : public ALevelSequenceActor
//{
//	GENERATED_BODY()
//	
//public:
//
//
//	/**
//	 * Create a new level sequence player.
//	 *
//	 * @param WorldContextObject Context object from which to retrieve a UWorld.
//	 * @param LevelSequence The level sequence to play.
//	 * @param Settings The desired playback settings
//	 * @param NPCs the NPCs that we should bind into the sequence  
//	 * @param OutActor The level sequence actor created to play this sequence.
//	 * 
//	 */
//	UFUNCTION(BlueprintCallable, Category="Sequencer|Player", meta=(WorldContext="WorldContextObject", DynamicOutputParam="OutActor"))
//	static ULevelSequencePlayer* CreateNarrativeLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings,  const TArray<UNPCDataAsset*>& NPCs, ANarrativeLevelSequenceActor*& OutActor);
//
//	virtual void BeginPlay() override; 
//
//	//Set the NPC assets this level sequence actor should bind into the sequence  
//	virtual void SetNPCs(const TArray<UNPCDataAsset*>& NPCs);
//
//	UFUNCTION()
//	virtual void OnSequenceFinished();
//
//protected:
//
//	UPROPERTY()
//	TArray<UNPCDataAsset*> NPCsToBind;
//
//
//
//	//we remember npcs anim instance class so we can re-initialize it
//	UPROPERTY()
//	TMap<class ANarrativeNPCCharacter*, UClass*> CachedAnimInstanceClasses;
//
//		//we remember npcs anim instance class so we can re-initialize it
//	UPROPERTY()
//	TMap<class ANarrativeNPCCharacter*, TSubclassOf<UAnimInstance>> CachedAnimInstanceLayerClasses;
//
//	
//	//we remember npcs anim instance class so we can re-initialize it
//	UPROPERTY()
//	UClass* PlayerAnimInstanceClass;
//
//		//we remember npcs anim instance class so we can re-initialize it
//	UPROPERTY()
//	TSubclassOf<UAnimInstance> PlayerAnimInstanceLayerClass;
//};

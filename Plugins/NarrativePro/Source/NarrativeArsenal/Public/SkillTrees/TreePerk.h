// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <MediaSource.h>
#include "TreePerk.generated.h"

/**
 * Represents a perk in the given skill tree. Owned by UTreeSkill and points to the next perks in the tree. 
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class NARRATIVEARSENAL_API UTreePerk : public UObject
{
	GENERATED_BODY()

public:

	UTreePerk(const FObjectInitializer& ObjectInitializer);

		// Allows the Object to get a valid UWorld from it's outer.
	virtual UWorld* GetWorld() const override
	{
		if (HasAllFlags(RF_ClassDefaultObject))
		{
			// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
			return nullptr;
		}

		UObject* Outer = GetOuter();

		while (Outer)
		{
			UWorld* World = Outer->GetWorld();
			if (World)
			{
				return World;
			}

			Outer = Outer->GetOuter();
		}

		return nullptr;
	}

	//Override this to apply whatever functionality you need to the player. 
	UFUNCTION(BlueprintNativeEvent, Category = "Tree Perk")
	void SetPerkLevel(const int32 NewPerkLevel);
	virtual void SetPerkLevel_Implementation(const int32 NewPerkLevel);

	//Grab the description of the perk 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Tree Perk")
	FText GetPerkDescription();
	virtual FText GetPerkDescription_Implementation();

	//The level this perk is at. -1 = not purchased
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tree Perk")
	int32 PerkLevel;

	//The max amount of levels the perk allows
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	int32 MaxLevels;

	//The perks that come after this one. 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	TArray<UTreePerk*> LinkedPerks;

	//The classes this perk should link to. IE you'll need to buy this perk before any of the linked ones. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	TArray<TSubclassOf<UTreePerk>> LinkedPerkClasses;

	//The display name of this Perk. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	FText PerkDisplayName;

	//The display icon of the perk
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	TSoftObjectPtr<class UTexture2D> PerkDisplayIcon;

	//The description of this Perk. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	FText PerkDescription;

	//The preview video for this perk, explaining what it does in the skills menu. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Perk")
	class UMediaSource* PerkVideo; 

	UFUNCTION(BlueprintPure, Category = "Tree Perk")
	class USkillTreeComponent* GetOwningComponent() const;

};

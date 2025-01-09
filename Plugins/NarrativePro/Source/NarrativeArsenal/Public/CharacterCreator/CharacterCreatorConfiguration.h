// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterCreatorAttributes.h"
#include "Options/CharacterCreatorOption.h"
#include "Items/CharacterCreatorItem_Mesh.h"
#include "CharacterCreatorConfiguration.generated.h"

//Defines a page in the character creator
UCLASS(BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorPage : public UDataAsset
{
	GENERATED_BODY()

public:

	UCharacterCreatorPage();

	//The gameplay tag identifying this creator section
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Attribute")
	FGameplayTag PageID;

	//The display name for this page
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Attribute")
	FText PageTitleText;

	//All of the sections on the page
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Attribute")
	TArray<TObjectPtr<UCharacterCreatorSection>> PageSections; 
};

//Defines a section of a character creator page
UCLASS(BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorSection : public UDataAsset
{

	GENERATED_BODY()

public:

	UCharacterCreatorSection();

	//The gameplay tag identifying this creator section
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly,Category = "Attribute")
	FGameplayTag SectionID;

	//The display name for this section
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly,Category = "Attribute")
	FText SectionDisplayName;

	//The options that can be edited on this page
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	TArray<TObjectPtr<UCharacterCreatorOption>> Options;

};

/**
 * A form defines a character creator options - ie Male, Female, Goblin, etc. It also defines what the character looks like by default when you switch forms.  
 */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorForm : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UCharacterCreatorForm();

	//The display name of this form - Male, Female, Dog, Cat, etc!  
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Form")
	FText FormDisplayName;

	//The forms tag ID - you can grab this ingame to determine players form - useful for items that may display differently on different genders etc 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Form", meta = (Categories = "Narrative.CharacterCreator.Forms"))
	FGameplayTag FormTag;

	//The pages in the character creator - each page is made up of sections, and each section has settings in it that can be changed. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Form")
	TArray<TObjectPtr<UCharacterCreatorPage>> CharacterCreatorPages;

	//The default meshes the form has when selected 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Form", meta = (Categories = "Narrative.Equipment.Slot.Mesh"))
	TMap<FGameplayTag, TObjectPtr<class UCharacterCreatorItem_Mesh>> DefaultCharacterCreatorMeshes;

	//The default grooms this form has when selected 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Form", meta = (Categories = "Narrative.Equipment.Slot.Groom"))
	TMap<FGameplayTag, TObjectPtr<class UCharacterCreatorItem_Groom>> DefaultCharacterCreatorGrooms;

	//The animation blueprint this form should have by default 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Form")
	TSubclassOf<class UAnimInstance> DefaultCharacterUnarmedAnim;

};


/**
 * Asset that defines all the configurable settings for the character creator. 
 */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorConfiguration : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UCharacterCreatorConfiguration();

	//The pages in the character creator - each page is made up of sections, and each section has settings in it that can be changed. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Configuration")
	TArray<TObjectPtr<UCharacterCreatorForm>> CharacterCreatorForms;
};

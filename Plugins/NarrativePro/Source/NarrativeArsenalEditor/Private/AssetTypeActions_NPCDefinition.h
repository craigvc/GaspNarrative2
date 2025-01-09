// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions/AssetTypeActions_DataAsset.h"
#include "AI/NPCDefinition.h"
#include "Character/PlayerDefinition.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Mesh.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Groom.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Scalar.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Vector.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Mesh.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Groom.h"
#include "CharacterCreator/CharacterCreatorConfiguration.h"
#include "CharacterCreator/CreatorColorSwatch.h"

class FAssetTypeActions_NPCDefinition : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_NPCDefinition(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeNPCDefinition", "NPC Definition"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(127, 127, 255); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeNPCDefinitionDesc", "Defines an NPC - what they look like, what items they have, and so on."); }
	virtual UClass* GetSupportedClass() const override { return UNPCDefinition::StaticClass(); }
	//virtual void GetActions(const TArray<UObject*>& InObjects, FToolMenuSection& Section) override;
	const TArray<FText>& GetSubMenus() const;

	/** Returns the tooltip to display when attempting to open an NPCs dialogue*/
	FText GetOpenNPCDialogueTooltip(TWeakObjectPtr<UNPCDefinition> InObject);

	/** Returns TRUE if you can open NPCs dialogue */
	bool CanOpenNPCDialogue(TWeakObjectPtr<UNPCDefinition> InObject);

private:
	/** Handler for when open dialogue is selected  */
	void ExecuteOpenNPCDialogue(TWeakObjectPtr<UNPCDefinition> InObject);
};

class FAssetTypeActions_PlayerDefinition : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_PlayerDefinition(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativePlayerDefinition", "Player Definition"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(127, 127, 205); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativePlayerDefinitionDesc", "Defines a Player - what their apperance is, default items, etc."); }
	virtual UClass* GetSupportedClass() const override { return UPlayerDefinition::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};

class FAssetTypeActions_CreatorForm : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorForm(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorForm", "Form"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorFormDesc", 
	"A form is a character creator type that has different options in it. For example a female form would only hold female clothing items, etc. This is not limited to gender - if your game had dogs this could be breeds, or for an RPG could be race, etc. "); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorForm::StaticClass(); }
};

class FAssetTypeActions_CreatorColorSwatch : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorColorSwatch(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorColorSwatch", "Creator Color Swatch"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorColorSwatchDesc", "Defines a color palette that vector options limit their selections to."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorColorSwatch::StaticClass(); }
};


class FAssetTypeActions_CreatorPage : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorPage(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorPage", "Creator Page"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorPageDesc", "Defines a page in a character creator form."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorPage::StaticClass(); }
};


class FAssetTypeActions_CreatorSection : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorSection(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorSection", "Creator Page Section"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorSectionDesc", "Defines a section in a character creator page."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorSection::StaticClass(); }
};

class FAssetTypeActions_CreatorOptionMesh : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorOptionMesh(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionMesh", "Mesh Option"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionMeshDesc", "Defines a mesh option that can be changed in the character creator."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorOption_Mesh::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};

class FAssetTypeActions_CreatorOptionGroom : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorOptionGroom(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionGroom", "Groom Option"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionGroomDesc", "Defines a Groom option that can be changed in the character creator."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorOption_Groom::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};

class FAssetTypeActions_CreatorOptionScalar : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorOptionScalar(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionScalar", "Scalar Option"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionScalarDesc", "Defines a Scalar option that can be changed in the character creator."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorOption_Scalar::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};

class FAssetTypeActions_CreatorOptionVector : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorOptionVector(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionVector", "Vector Option"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorOptionVectorDesc", "Defines a Vector option that can be changed in the character creator."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorOption_Vector::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};


class FAssetTypeActions_CreatorItemMesh : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorItemMesh(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorItemMesh", "Mesh Item"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorItemMeshDesc", "Defines a mesh item that can be chosen in a mesh option."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorItem_Mesh::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};


class FAssetTypeActions_CreatorItemGroom : public FAssetTypeActions_Base
{

public:

	FAssetTypeActions_CreatorItemGroom(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorItemGroom", "Groom Item"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(11, 128, 42); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeCreatorItemGroomDesc", "Defines a Groom item that can be chosen in a Groom option."); }
	virtual UClass* GetSupportedClass() const override { return UCharacterCreatorItem_Groom::StaticClass(); }
	const TArray<FText>& GetSubMenus() const;
};


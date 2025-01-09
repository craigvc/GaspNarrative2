// Copyright Narrative Tools 2024. 


#include "AssetTypeActions_NPCDefinition.h"
#include "Tales/Dialogue.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions_CharacterAssets"

FAssetTypeActions_NPCDefinition::FAssetTypeActions_NPCDefinition(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

//void FAssetTypeActions_NPCDefinition::GetActions(const TArray<UObject*>& InObjects, FToolMenuSection& Section)
//{
	//TODO NPC Assets should have options to quick open dialogues, etc. 
	//TArray<TWeakObjectPtr<UNPCDefinition>> NPCDefs = GetTypedWeakObjectPtrs<UNPCDefinition>(InObjects);
	//
	//if (NPCDefs.Num() == 1)
	//{
	//	TAttribute<FText>::FGetter DynamicTooltipGetter;
	//	DynamicTooltipGetter.BindSP(this, &FAssetTypeActions_NPCDefinition::GetOpenNPCDialogueTooltip, NPCDefs[0]);
	//	TAttribute<FText> DynamicTooltipAttribute = TAttribute<FText>::Create(DynamicTooltipGetter);

	//	Section.AddMenuEntry(
	//		"NPC_OpenNPCDialogue",
	//		LOCTEXT("Blueprint_NewDerivedBlueprint", "Open NPC's Dialogue"),
	//		DynamicTooltipAttribute,
	//		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Blueprint"),
	//		FUIAction(
	//			FExecuteAction::CreateSP( this, &FAssetTypeActions_NPCDefinition::ExecuteOpenNPCDialogue, NPCDefs[0] ),
	//			FCanExecuteAction::CreateSP( this, &FAssetTypeActions_NPCDefinition::CanOpenNPCDialogue, NPCDefs[0] )
	//			)
	//		);
	//}
//}

const TArray<FText>& FAssetTypeActions_NPCDefinition::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharactersSubMenu", "Characters"),
	};

	return SubMenus;
}

FText FAssetTypeActions_NPCDefinition::GetOpenNPCDialogueTooltip(TWeakObjectPtr<UNPCDefinition> InObject)
{
	if (UNPCDefinition* NPCD = InObject.Get())
	{
		if (NPCD->Dialogue.IsNull())
		{
			return LOCTEXT("NPCNoDialogueTooltip", "This NPC doesn't have a dialogue asset defined.");
		}
		else
		{
			return LOCTEXT("NPCNoDialogueTooltip", "Open the NPCs dialogue asset.");
		}
	}
	return FText::GetEmpty();
}

bool FAssetTypeActions_NPCDefinition::CanOpenNPCDialogue(TWeakObjectPtr<UNPCDefinition> InObject)
{
	if (UNPCDefinition* NPCD = InObject.Get())
	{
		if (!NPCD->Dialogue.IsNull())
		{
			return true;
		}
	}

	return false; 
}

void FAssetTypeActions_NPCDefinition::ExecuteOpenNPCDialogue(TWeakObjectPtr<UNPCDefinition> InObject)
{
	if (UNPCDefinition* NPCD = InObject.Get())
	{
		if (TSubclassOf<UDialogue> DialogueClass = NPCD->Dialogue.LoadSynchronous())
		{
			//DialogueClass->BlueprintGeneratedClass
		}
	}
}

FAssetTypeActions_PlayerDefinition::FAssetTypeActions_PlayerDefinition(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_PlayerDefinition::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharactersSubMenu", "Characters"),
	};

	return SubMenus;
}


FAssetTypeActions_CreatorOptionMesh::FAssetTypeActions_CreatorOptionMesh(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_CreatorOptionMesh::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharacterCreatorSubMenu", "Creator Options"),
	};

	return SubMenus;
}


FAssetTypeActions_CreatorOptionGroom::FAssetTypeActions_CreatorOptionGroom(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_CreatorOptionGroom::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharacterCreatorSubMenu", "Creator Options"),
	};

	return SubMenus;
}



FAssetTypeActions_CreatorOptionScalar::FAssetTypeActions_CreatorOptionScalar(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_CreatorOptionScalar::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharacterCreatorSubMenu", "Creator Options"),
	};

	return SubMenus;
}



FAssetTypeActions_CreatorOptionVector::FAssetTypeActions_CreatorOptionVector(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_CreatorOptionVector::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharacterCreatorSubMenu", "Creator Options"),
	};

	return SubMenus;
}


FAssetTypeActions_CreatorItemMesh::FAssetTypeActions_CreatorItemMesh(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_CreatorItemMesh::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharacterCreatorSubMenu", "Creator Items"), 
	};

	return SubMenus;
}

FAssetTypeActions_CreatorItemGroom::FAssetTypeActions_CreatorItemGroom(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

const TArray<FText>& FAssetTypeActions_CreatorItemGroom::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("CharacterCreatorSubMenu", "Creator Items"), 
	};

	return SubMenus;
}

FAssetTypeActions_CreatorForm::FAssetTypeActions_CreatorForm(uint32 InAssetCategory) : Category(InAssetCategory)
{

}


FAssetTypeActions_CreatorColorSwatch::FAssetTypeActions_CreatorColorSwatch(uint32 InAssetCategory) : Category(InAssetCategory)
{

}


FAssetTypeActions_CreatorSection::FAssetTypeActions_CreatorSection(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

FAssetTypeActions_CreatorPage::FAssetTypeActions_CreatorPage(uint32 InAssetCategory) : Category(InAssetCategory)
{

}


#undef LOCTEXT_NAMESPACE
// Copyright Narrative Tools 2024. 


#include "StableActor/StableActorPropertyCustomization.h"
#include "IPropertyTypeCustomization.h"
#include "DetailWidgetRow.h"
#include "Editor.h"
#include "PropertyHandle.h"
#include "IDetailChildrenBuilder.h"
#include "StableActor/StableActor.h"
#include <Subsystems/EditorActorSubsystem.h>
#include "NarrativeStableActor.h"

#define LOCTEXT_NAMESPACE "StableActorCustomization"

FStableActorPropertyCustomization::~FStableActorPropertyCustomization()
{

}

void FStableActorPropertyCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> InStructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	StructPropertyHandle = InStructPropertyHandle;
	check(StructPropertyHandle.IsValid());

	//PropertyUtilities = StructCustomizationUtils.GetPropertyUtilities();
	
	//RefreshQueryDescription(); // will call BuildEditableQueryList();

	bool const bReadOnly = StructPropertyHandle->IsEditConst();

	HeaderRow
		.NameContent()
		[
			StructPropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		.MaxDesiredWidth(512)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.AutoHeight()
				[
					StructPropertyHandle->CreatePropertyValueWidget()
				]
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(STextBlock)
					.Text(this, &FStableActorPropertyCustomization::GetEditButtonText)
					//.OnClicked(this, &FStableActorPropertyCustomization::OnEditButtonClicked)
				]
			]
		];

	//GEditor->RegisterForUndo(this);
}

void FStableActorPropertyCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> InStructPropertyHandle, class IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);

	for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
	{
		TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();
		
		IDetailPropertyRow& PropertyRow = ChildBuilder.AddProperty(ChildHandle);
	}
}

FText FStableActorPropertyCustomization::GetEditButtonText() const
{
	TArray<void*> RawData;
	StructPropertyHandle->AccessRawData(RawData);
	
	if (RawData.Num() != 1)
	{
		return LOCTEXT("MultipleValues", "Multiple Values");
	}

	if (RawData[0] == nullptr)
	{
		return FText::GetEmpty();
	}

	FGuid StableGUID = ((FStableActor*)RawData[0])->GetStableGUID();
	FString GUIDString = StableGUID.ToString(EGuidFormats::DigitsWithHyphensInBraces);
	FString ActorName = "Actor not found";

	if (UEditorActorSubsystem* EditorSub = GEditor->GetEditorSubsystem<UEditorActorSubsystem>())
	{
		TArray<AActor*> LevelActors = EditorSub->GetAllLevelActors();
		for (auto& LevelActor : LevelActors)
		{
				if (LevelActor->Implements<UNarrativeStableActor>())
				{
					const FGuid ActorGUID = INarrativeStableActor::Execute_GetActorGUID(LevelActor);

					if (ActorGUID == StableGUID)
					{
						ActorName = LevelActor->GetActorLabel();
					}
				}
		}
	}


	//TODO ask stable editor subsystem for actor matching the GUID
	return FText::Format(LOCTEXT("StableActorText", "Selected stable actor: {0}."), FText::FromString(ActorName));

}

/** Handles getting the text to the stable button */

#undef LOCTEXT_NAMESPACE 
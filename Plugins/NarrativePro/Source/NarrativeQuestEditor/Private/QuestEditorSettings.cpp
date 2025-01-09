// Copyright Narrative Tools 2022. 


#include "QuestEditorSettings.h"
#include "UObject/ConstructorHelpers.h"
#include "QuestNodeUserWidget.h"
#include "Tales/QuestSM.h" 
#include "Tales/Quest.h"

UQuestEditorSettings::UQuestEditorSettings()
{
	FailedNodeColor = FLinearColor(0.38f, 0.f, 0.f);
	SuccessNodeColor = FLinearColor(0.f, 0.38f, 0.f);
	TaskNodeColor = FLinearColor(0.65f, 0.28f, 0.f);
	StateNodeColor = FLinearColor(0.1f, 0.1f, 0.1f);
	PersistentTasksNodeColor = FLinearColor(0.1f, 0.1f, 0.1f);
	RootNodeColor = FLinearColor(0.1f, 0.1f, 0.1f);

	DefaultQuestState = UQuestState::StaticClass();
	DefaultQuestBranch = UQuestBranch::StaticClass();
	DefaultQuestClass = UQuest::StaticClass();

	auto QuestNodeUserWidgetFinder = ConstructorHelpers::FClassFinder<UQuestNodeUserWidget>(TEXT("/Script/UMGEditor.WidgetBlueprint'/NarrativePro/NarrativeTales/NarrativeUI/Widgets/Editor/WBP_DefaultQuestNode.WBP_DefaultQuestNode_C'"));
	if (QuestNodeUserWidgetFinder.Succeeded())
	{
		DefaultQuestWidgetClass = QuestNodeUserWidgetFinder.Class;
	}

	QuestTaskSearchPaths.Add("/NarrativePro/NarrativeTales/DefaultTasks/");	
	QuestTaskSearchPaths.Add("/Game/Blueprints/Tasks/");

}

// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FEquipmentActor.h"

#include "GameFramework/Selectors/Selector_CharacterMesh.h"

FEquipmentActor::FEquipmentActor()
{
	ActorClass = nullptr;
	SceneComponentSelectorClass = USelector_CharacterMesh::StaticClass();
	SlotTag = FGameplayTag::EmptyTag;
}

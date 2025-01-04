// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Combo/NinjaCombatComboComponentSchema.h"

#include "NinjaCombatFunctionLibrary.h"
#include "StateTreeExecutionContext.h"
#include "Components/NinjaCombatComboManagerComponent.h"

int32 UNinjaCombatComboComponentSchema::ComboComponentIndex = 1;
FName UNinjaCombatComboComponentSchema::ComboComponentName = TEXT("ComboManager");

UNinjaCombatComboComponentSchema::UNinjaCombatComboComponentSchema(const FObjectInitializer& ObjectInitializer)
	: ComboManagerClass(UNinjaCombatComboManagerComponent::StaticClass())
{
#if ENGINE_MINOR_VERSION > 3
	
	static constexpr FGuid DataId = FGuid(0x0D8316CE, 0x4E4F8E9C, 0xC85A1AAF, 0x0F258AD9);
	ContextDataDescs.Emplace(ComboComponentName, ComboManagerClass.Get(), DataId);
	
#endif
}

#if ENGINE_MINOR_VERSION > 3
void UNinjaCombatComboComponentSchema::PostLoad()
{
	Super::PostLoad();
	ContextDataDescs[ComboComponentIndex].Struct = ComboManagerClass.Get();
}

bool UNinjaCombatComboComponentSchema::SetContextRequirements(UBrainComponent& BrainComponent,
	FStateTreeExecutionContext& Context, const bool bLogErrors)
{
	if (!Context.IsValid())
	{
		return false;
	}
	
	UActorComponent* ComboManagerComponent = Cast<UActorComponent>(&BrainComponent);
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManagerComponent))
	{
		Context.SetContextDataByName(ComboComponentName, FStateTreeDataView(ComboManagerComponent));
	}

	return Super::SetContextRequirements(BrainComponent, Context, bLogErrors);
}
#endif

#if WITH_EDITOR && ENGINE_MINOR_VERSION > 3
void UNinjaCombatComboComponentSchema::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);

	if (const FProperty* Property = PropertyChangedEvent.Property)
	{
		if (Property->GetOwnerClass() == StaticClass() && Property->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, ComboManagerClass))
		{
			// Always make sure that the context data is synchronized with the component class.
			ContextDataDescs[ComboComponentIndex].Struct = ComboManagerClass.Get();
		}
	}
}
#endif 
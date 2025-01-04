// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatDissolveComponent.h"

#include "NinjaCombatLog.h"
#include "Curves/CurveFloat.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UNinjaCombatDissolveComponent::UNinjaCombatDissolveComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	SetIsReplicatedByDefault(true);
	bDissolveAttachedActors = false;
}

void UNinjaCombatDissolveComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	DissolveSelectedMaterials(DeltaTime);
}

void UNinjaCombatDissolveComponent::DissolveSelectedMaterials(const float DeltaTime)
{
	if (DissolveMaterials.IsEmpty())
	{
		// Should not be ticking without materials to dissolve.
		SetComponentTickEnabled(false);		
	}
	else
	{
		for (const FDissolveMaterialParameter& Parameter : DissolveSettings)
		{
			const FName ParameterName = Parameter.ParameterName;
			const UCurveFloat* CurveValue = Parameter.CurveValue;
			const float Value = CurveValue->GetFloatValue(DissolveTime);
			ApplyDissolveSettings(ParameterName, Value);
		}

		DissolveTime += DeltaTime;
	}
}

void UNinjaCombatDissolveComponent::ApplyDissolveSettings(const FName ParameterName, const float Value)
{
	for (const TObjectPtr<UMaterialInstanceDynamic> Material : DissolveMaterials)
	{
		if (IsValid(Material))
		{
			Material->SetScalarParameterValue(ParameterName, Value);
		}
	}
}

void UNinjaCombatDissolveComponent::SelectDissolveMaterials(const AActor* TargetActor)
{
	if (!IsValid(TargetActor))
	{
		return;
	}
	
	TInlineComponentArray<UMeshComponent*> MeshComponents;
	TargetActor->GetComponents(MeshComponents);

	for (UMeshComponent* MeshComponent : MeshComponents)
	{
		TArray<FName> SlotNames = MeshComponent->GetMaterialSlotNames();
		for (const FName& SlotName : SlotNames)
		{
			const int32 MaterialIdx = MeshComponent->GetMaterialIndex(SlotName);
			UMaterialInterface* Material = MeshComponent->GetMaterial(MaterialIdx);
				
			UMaterialInstanceDynamic* DynamicMaterial = MeshComponent->CreateDynamicMaterialInstance(MaterialIdx, Material);
			if (IsValid(DynamicMaterial))
			{
				DissolveMaterials.Add(DynamicMaterial);
			}
		}
	}
}

void UNinjaCombatDissolveComponent::Dissolve_Implementation(const TArray<FDissolveMaterialParameter>& NewDissolveSettings)
{
	if (NewDissolveSettings.IsEmpty())
	{
		COMBAT_LOG(Warning, "Dissolve was requested without any settings.")
		return;
	}

	DissolveSettings = NewDissolveSettings;
	DissolveTime = 0.f;

	SelectDissolveMaterials(GetOwner());

	if (bDissolveAttachedActors)
	{
		TArray<AActor*> AttachedActors;
		static constexpr bool bResetArray = true, bIncludeAttachedActors = true;
		GetOwner()->GetAttachedActors(AttachedActors, bResetArray, bIncludeAttachedActors);

		for (const AActor* AttachedActor : AttachedActors)
		{
			SelectDissolveMaterials(AttachedActor);
		}
	}
	
	if (!DissolveMaterials.IsEmpty())
	{
		// Ready to dissolve some materials!
		SetComponentTickEnabled(true);
	}
}

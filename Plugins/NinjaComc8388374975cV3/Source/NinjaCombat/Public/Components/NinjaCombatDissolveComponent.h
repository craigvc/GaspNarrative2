// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatBaseComponent.h"
#include "Interfaces/Components/CombatDissolveManagerInterface.h"
#include "NinjaCombatDissolveComponent.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;

/**
 * Handles a dissolve effect.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatDissolveComponent : public UNinjaCombatBaseComponent, public ICombatDissolveManagerInterface
{

	GENERATED_BODY()
	
public:

	UNinjaCombatDissolveComponent();

	// -- Begin Actor Component implementation
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// -- End Actor Component implementation

	// -- Begin Dissolve Manager implementation
	virtual void Dissolve_Implementation(const TArray<FDissolveMaterialParameter>& NewDissolveSettings) override;
	// -- End Dissolve Manager implementation
	
protected:

	/** If set to true, attempts to dissolve attached actors as well. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dissolve")
	bool bDissolveAttachedActors;
	
	/** Current dissolve time used in the curves. */
	float DissolveTime = 0.f;
	
	UPROPERTY()
	TArray<FDissolveMaterialParameter> DissolveSettings;

	UPROPERTY()
	TArray<UMaterialInstanceDynamic*> DissolveMaterials;

	/**
	 * Selects all materials that should be affected by this component.
	 */
	virtual void SelectDissolveMaterials(const AActor* TargetActor);
	
	/**
	 * Dissolves all selected materials stored in the DissolveInfo pointer.
	 */
	virtual void DissolveSelectedMaterials(float DeltaTime);

	/**
	 * Applies a value to the provided parameter name, in all materials.
	 */
	virtual void ApplyDissolveSettings(const FName ParameterName, float Value); 
	
};

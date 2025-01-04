// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/EquipmentActorInterface.h"
#include "UObject/Object.h"
#include "NinjaEquipmentActor.generated.h"

class APawn;
class UMeshComponent;

/**
 * Base actor for equipment pieces.
 */
UCLASS(Abstract, Blueprintable)
class NINJAINVENTORYEQUIPMENT_API ANinjaEquipmentActor : public AActor, public IEquipmentActorInterface
{
	
	GENERATED_BODY()

public:

	ANinjaEquipmentActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Actor implementation
	
	// -- Begin Equipment implementation
	virtual const UNinjaEquipment* GetEquipment_Implementation() const override;
	virtual void SetEquipment_Implementation(const UNinjaEquipment* NewEquipmentInstance) override;
	virtual bool IsEffectCauser_Implementation() const override;
	// -- End Equipment implementation

	/**
	 * Provides the Pawn who owns this equipment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Actor")
	APawn* GetEquipmentOwner() const;

protected:

	/** Determines if this equipment actor can be used as an effect causer. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
	bool bCanBeUsedAsEffectCauser;

private:

	/** The equipment instance assigned to this actor. */
	UPROPERTY(Replicated)
	TObjectPtr<const UNinjaEquipment> Equipment;
	
};

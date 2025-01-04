// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/EquipmentActorInterface.h"
#include "NinjaEquipmentReceiverComponent.generated.h"

class UNinjaEquipment;

/**
 * Actor Component that can be added to equipment actors that are unable to implement the interface.
 * A common scenario for that is the Combat System, that is unable to add the interface in the header.
 */
UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentReceiverComponent : public UActorComponent, public IEquipmentActorInterface
{
	
	GENERATED_BODY()

public:

	UNinjaEquipmentReceiverComponent();

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
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Receiver")
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

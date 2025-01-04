// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatSystemInterface.generated.h"

class UNinjaCombatManagerComponent;
class UArrowComponent;
class UAnimInstance;
class UActorComponent;
class USkeletalMeshComponent;

UINTERFACE(MinimalAPI)
class UCombatSystemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows actors to provide direct access to combat components.
 */
class NINJACOMBAT_API ICombatSystemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the main Combat Manager for the owner.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UNinjaCombatManagerComponent* GetCombatManager() const;
	virtual UNinjaCombatManagerComponent* GetCombatManager_Implementation() const;
	
	/**
	 * Provides the Mesh Component determined to be the main Mesh for the owner.
	 *
	 * @return
	 *		The Skeletal Mesh Component configured as main combat mesh in the owner.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	USkeletalMeshComponent* GetCombatMesh() const;
	virtual USkeletalMeshComponent* GetCombatMesh_Implementation() const;
	
	/**
	 * Retrieves the Animation Instance that should be used for Combat Animations.
	 * 
	 * @return
	 *		The Animation Instance that should be used for Animation Montages and Linking Layers.
	 *		The way this is retrieved can be adjusted by the "FindAnimInstance" function.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UAnimInstance* GetCombatAnimInstance() const;
	virtual UAnimInstance* GetCombatAnimInstance_Implementation() const;

	/**
	 * Provide a Scene Component on the character that is always pointing forward.
	 * 
	 * Tip: If you are using the Forward Reference with Ninja Input, this can be the same
	 * UArrowComponent, as the expectations of that component are the same for both systems.
	 * 
	 * @return
	 *		A Scene Component that can be used by abilities or other modules to compare
	 *		angles, determine a general input and so on.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	USceneComponent* GetCombatForwardReference() const;
	virtual USceneComponent* GetCombatForwardReference_Implementation() const;

	/**
	 * Provides the Combo Manager component.
	 *
	 * @return
	 *		The optional Combo Manager Component, which is an Actor Component and also
	 *		a valid implementation of the CombatComboManagerInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetComboManagerComponent() const;
	virtual UActorComponent* GetComboManagerComponent_Implementation() const;

	/**
	 * Provides the Damage Manager component.
	 *
	 * @return
	 *		The mandatory Damage Manager Component, which is an Actor Component and also
	 *		a valid implementation of the CombatDamageManagerInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetDamageManagerComponent() const;
	virtual UActorComponent* GetDamageManagerComponent_Implementation() const;

	/**
	 * Provides the Defense Manager component.
	 *
	 * @return
	 *		The mandatory Defense Manager Component, which is an Actor Component and also
	 *		a valid implementation of the CombatDefenseManagerInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetDefenseManagerComponent() const;
	virtual UActorComponent* GetDefenseManagerComponent_Implementation() const;

	/**
	 * Provides the Dissolve Manager component.
	 *
	 * @return
	 *		The optional Dissolve Manager Component, which is an Actor Component and also
	 *		a valid implementation of the CombatDissolveManagerInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetDissolveManagerComponent() const;
	virtual UActorComponent* GetDissolveManagerComponent_Implementation() const;
	
	/**
	 * Provides the Motion Warping component.
	 *
	 * @return
	 *		The optional Motion Warping Component, which is an Actor Component and also
	 *		a valid implementation of the CombatMotionWarpingInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetMotionWarpingComponent() const;
	virtual UActorComponent* GetMotionWarpingComponent_Implementation() const;

	/**
	 * Provides the Physical Animation component.
	 *
	 * @return
	 *		The optional Physical Animation Component, which is an Actor Component and also
	 *		a valid implementation of the CombatPhysicalAnimationInterface interface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetPhysicalAnimationComponent() const;
	virtual UActorComponent* GetPhysicalAnimationComponent_Implementation() const;

	/**
	 * Provides the Target Manager component.
	 *
	 * @return
	 *		The mandatory Target Manager Component, which is an Actor Component and also
	 *		a valid implementation of the CombatTargetManagerInterface interface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetTargetManagerComponent() const;
	virtual UActorComponent* GetTargetManagerComponent_Implementation() const;
	
	/**
	 * Provides the Weapon Manager component.
	 *
	 * @return
	 *		The mandatory Weapon Manager Component, which is an Actor Component and also
	 *		a valid implementation of the CombatWeaponManagerInterface interface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat System Interface")
	UActorComponent* GetWeaponManagerComponent() const;
	virtual UActorComponent* GetWeaponManagerComponent_Implementation() const;
	
};

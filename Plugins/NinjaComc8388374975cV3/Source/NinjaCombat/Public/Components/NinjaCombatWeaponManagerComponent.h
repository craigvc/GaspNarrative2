// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaCombatBaseWeaponManagerComponent.h"
#include "NinjaCombatWeaponManagerComponent.generated.h"

/**
 * Simple weapon manager for the combat system.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatWeaponManagerComponent : public UNinjaCombatBaseWeaponManagerComponent
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatWeaponEventSignature, AActor*, Weapon);
	
	GENERATED_BODY()

public:

	/** Broadcasts a weapon that has been added. */
	UPROPERTY(BlueprintAssignable)
	FCombatWeaponEventSignature OnWeaponAdded;

	/** Broadcasts a weapon that has been removed. */
	UPROPERTY(BlueprintAssignable)
	FCombatWeaponEventSignature OnWeaponRemoved;
	
	UNinjaCombatWeaponManagerComponent();

	// -- Begin Actor Component implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor Component implementation

	// -- Begin Weapon Manager implementation
	virtual AActor* GetWeapon_Implementation(const FGameplayTagQuery& WeaponQuery) const override;
	virtual void HandleOwnerFinishedDying_Implementation(AActor* Actor) override;
	// -- End Weapon Manager implementation

	/**
	 * Registers a new weapon actor to this manager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Weapon Manager")
	virtual void AddWeapon(UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatWeaponInterface")) AActor* Weapon);

	/**
	 * Registers a new weapon actor to this manager, creating a new instance from the provided class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Weapon Manager")
	virtual void AddWeaponClass(UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatWeaponInterface")) TSubclassOf<AActor> WeaponClass);
	
	/**
	 * Removes a weapon from this Weapon Manager.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Weapon Manager")
	virtual void RemoveWeapon(UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatWeaponInterface")) AActor* Weapon);

	/**
	 * Removes a weapon from this Weapon Manager, using a Gameplay Tag Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Weapon Manager")
	virtual void RemoveWeaponByQuery(FGameplayTagQuery WeaponQuery);
	
	/**
	 * Destroys all weapons created by this component.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Weapon Manager")
	virtual void DestroyAllWeapons();
	
protected:

	/**
	 * A list of weapons currently maintained by this component.
	 *
	 * You can decide if you want to maintain this array using any additional logic that suit your needs
	 * (i.e. adding more methods to this component), or reacting via delegates to changes in a backing
	 * Inventory Manager.
	 *
	 * Regardless, keep in mind that this is still a pretty simple implementation and for more elaborate
	 * scenarios, you may want to create your own implementation of the Weapon Manager, using something
	 * more optimized like a Fast Array Replication.
	 */
	UPROPERTY(ReplicatedUsing = OnRep_Weapons)	
	TArray<TObjectPtr<AActor>> Weapons;
	
	/** All weapons granted to this repository. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Component", meta = (MustImplement = "/Script/NinjaCombat.CombatWeaponInterface"))
	TArray<TSubclassOf<AActor>> DefaultWeaponClasses;

	/**
	 * Maps weapon tags to their sockets.
	 *
	 * Used when weapons are initialized from the Default Weapon Class array or added via the Add function. It will
	 * match the weapon class with this map, and attach the weapon actor to the provided socket.
	 *
	 * You can modify the actor attachment behavior by overriding the <code>AttachWeaponActor</code> function. 
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Component", meta = (MustImplement = "/Script/NinjaCombat.CombatWeaponInterface"))
	TMap<TSubclassOf<AActor>, FName> WeaponSocketMapping;

	/**
	 * Finds all actor components already attached to the character.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Weapon Component")
	virtual void FindAttachedWeapons();
	
	/**
	 * Initializes the default weapons assigned to this component.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Weapon Component")
	virtual void InitializeWeapons();

	/**
	 * Spawns the Weapon Actor from its class.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon Component")
	AActor* SpawnWeaponActor(UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatWeaponInterface")) TSubclassOf<AActor> WeaponClass);
	
	/**
	 * Attaches the Weapon to a pre-configured socket from the WeaponSocketMapping property. 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon Component")
	void AttachWeaponActor(AActor* Weapon);
	
	/**
	 * Reacts to a change in the Default Weapons.
	 */
	UFUNCTION()
	virtual void OnRep_Weapons(const TArray<AActor*>& OldWeapons);

	/**
	 * Sends an RPC to add a weapon on the server.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AddWeapon(AActor* Weapon);

	/**
	 * Sends an RPC to add a weapon class on the server.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AddWeaponClass(TSubclassOf<AActor> WeaponClass);
	
	/**
	 * Sends an RPC to remove a weapon on the server.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RemoveWeapon(AActor* Weapon);
	
};

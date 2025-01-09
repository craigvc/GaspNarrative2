// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryComponent.h"
#include <GameplayTagContainer.h>
#include "NarrativeItem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemModified);

//A stat that can be shown in the item preview window
USTRUCT(BlueprintType)
struct FNarrativeItemStat
{
	GENERATED_BODY()

	FNarrativeItemStat(const FText& InStatDisplayName, const FString& InStringVariable, const FText& InStatTooltip) : StatDisplayName(InStatDisplayName), StringVariable(InStringVariable), StatTooltip(InStatTooltip)
	{

	}

	FNarrativeItemStat()
	{
		StatDisplayName = NSLOCTEXT("NarrativeItemStat", "StatDisplayName", "Stat Display Name");
		StringVariable = FString();
	};

	//The stats display name.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Stat")
	FText StatDisplayName;

	//The backing string variable for the stat - implemented using GetStringVariable function that can be overriden in Blueprints! 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Stat")
	FString StringVariable;

	//Tooltip the stat will show when hovered 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Stat")
	FText StatTooltip;
};

/**
 * Item is the base class for an item that can be added to the inventory
 */
UCLASS(Blueprintable, EditInlineNew, DefaultToInstanced)
class NARRATIVEINVENTORY_API UNarrativeItem : public UObject
{
	GENERATED_BODY()

protected:

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool IsSupportedForNetworking() const override;
	virtual class UWorld* GetWorld() const override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	bool CanEditChange(const FProperty* InProperty) const;
#endif

	//Inspects owning inventory to check if this item instance is on server or client 
	bool HasAuthority() const;

public:

	UNarrativeItem();

	UPROPERTY(Transient)
	class UWorld* World;

	/**The mesh to display for this items pickup*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	TSoftObjectPtr<class UStaticMesh> PickupMesh;

	/**The thumbnail for this item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	TSoftObjectPtr<class UTexture2D> Thumbnail;

	/**The use sound for the item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	TObjectPtr<class USoundBase> UseSound;

	/**The display name for this item in the inventory*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText DisplayName;

	/**An optional description for the item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (MultiLine = true))
	FText Description;

	/**The weight of the item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (ClampMin = 0.0, Units = "Kilograms"))
	float Weight;

	/**Any gameplay tags we wish to give this item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FGameplayTagContainer ItemTags;

	/** This is the value of the item, used by vendors. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Trade")
	int32 BaseValue;

	/**If true, 1 of this item will be consumed every time the item is used. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Usage")
	bool bConsumeOnUse;

	/**The text for using the item. (Equip, Eat, etc)*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Usage")
	FText UseActionText;

	/**The amount of time you have to wait between uses of the item, 0 means no recharge delay at all*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Usage", meta = (ClampMin=0, Units = "Seconds"))
	float UseRechargeDuration;

	/**Some items might need to be activatable. Check this box if you want the item to be able to activate. 
	Activating will mean different things for different item types, for example clothing being activated would
	mean it equips to the player - you define this using the Activate and Deactivate() functions. 
	
	Activated items will also show a check on the UI*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Activation")
	bool bCanActivate;

	/**If checked, using this item will cause it to activate/deactivate*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Activation")
	bool bToggleActiveOnUse;

	/**Return true if this item is active */
	UPROPERTY(ReplicatedUsing = OnRep_bActive, BlueprintReadOnly, Category= "Item - Activation", meta = (EditCondition = bCanActivate, EditConditionHides))
	bool bActive;

	/**Whether or not this item has been favourited*/
	UPROPERTY(BlueprintReadWrite, SaveGame, Category = "Item")
	bool bFavourite;

	/**Whether or not this item can be stacked*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Stacking")
	bool bStackable;

	/**The maximum size that a stack of items can be*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - Stacking", meta = (ClampMin = 2, EditCondition = bStackable, EditConditionHides))
	int32 MaxStackSize;

	/**The stats to show in the Item Preview UI - make sure to implement GetStringVariable function and return a value matching each stat you add.
	
	Items have 6 stats supported out of the box, Display Name, Weight, Stack Weight, Quantity, Recharge Duration, and Max Stack Size - if you want to add more simply
	override the GetStringVariable function and return a valid value for your desired variable
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item - UI")
	TArray<FNarrativeItemStat> Stats;

	/**The inventory that owns this item*/
	UPROPERTY(BlueprintReadOnly, Category = "Item")
	class UNarrativeInventoryComponent* OwningInventory;

	/**Used to efficiently replicate inventory items*/
	UPROPERTY()
	int32 RepKey;

	UPROPERTY(BlueprintAssignable)
	FOnItemModified OnItemModified;

	UFUNCTION()
	void OnRep_bActive(const bool bOldActive);

	UFUNCTION(BlueprintCallable, Category = "Item - Activation")
	void SetActive(const bool bNewActive, const bool bForce=false);

	UFUNCTION()
	void OnRep_Quantity(const int32 OldQuantity);

	void SetQuantity(const int32 NewQuantity);

	UFUNCTION(BlueprintPure, Category = "Item")
	FORCEINLINE int32 GetQuantity() const { return Quantity; }


	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetLastUseTime(const float NewLastUseTime);

	UFUNCTION(BlueprintPure, Category = "Item")
	FORCEINLINE float GetLastUseTime() const { return LastUseTime; }

	UFUNCTION(BlueprintCallable, Category = "Item")
	FORCEINLINE float GetStackWeight() const { return Quantity * Weight; };

	UFUNCTION(BlueprintPure, Category = "Item")
	FORCEINLINE bool IsStackFull() const { return Quantity >= MaxStackSize; }

	UFUNCTION(BlueprintPure, Category = "Item")
	FORCEINLINE int32 GetMaxStackSize() const{return bStackable ? MaxStackSize : 1;}

	//Return the amount of space the item stack has left 
	UFUNCTION(BlueprintPure, Category = "Item")
	FORCEINLINE int32 GetStackSpace() const{return GetMaxStackSize() - GetQuantity();}

	UFUNCTION(BlueprintPure, Category = "Item")
	APlayerController* GetOwningController() const;

	UFUNCTION(BlueprintPure, Category = "Item")
	APawn* GetOwningPawn() const;

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse();

	virtual void Use();

	virtual void AddedToInventory(class UNarrativeInventoryComponent* Inventory);
	virtual void RemovedFromInventory(class UNarrativeInventoryComponent* Inventory);

	/**Mark the object as needing replication. We must call this internally after modifying any replicated properties*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	void MarkDirtyForReplication();

	/**Return the description - allows BPs to override this in case you want automatically dynamically generated descriptions based on the items properties. */
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
	FText GetRawDescription();
	virtual FText GetRawDescription_Implementation();

	/**
	* Return the description, with any string variables parsed out
	*/
	UFUNCTION(BlueprintPure, Category = "Item")
	virtual FText GetParsedDescription();

	/**
	* Allows you to use variables in your items description, ie Hello {Item Name}.
	*
	* Simply override this function, then check the value of variable name and return whatever value you like!
	*
	* ie if(VariableName == "PlayerName") {return OwningPawn->GetUsername();}; - then Hello {PlayerName}! will automatically become Hello xXNoobPwner420Xx! etc 
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
	FString GetStringVariable(const FString& VariableName);
	virtual FString GetStringVariable_Implementation(const FString& VariableName);

	/**
	* If this item is activatable, this will be called when the item is activated
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Item")
	void Activated();
	virtual void Activated_Implementation();

	/**
	* If this item is activatable, this will be called when the item is deactivated
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Item")
	void Deactivated();
	virtual void Deactivated_Implementation();

	/**
	* Allows you to define whether or not the item can be dropped, nice for if you want to implement special quest items that cannot be dropped for example 
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
	bool CanBeRemoved() const;
	virtual bool CanBeRemoved_Implementation() const;

	/**
	* Allows you to define whether the item can be used or not.
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
	bool CanUse() const;
	virtual bool CanUse_Implementation() const;

	/**
	* Define whether the item should automatically use itself when added to our inventory.
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
	bool ShouldUseOnAdd() const;
	virtual bool ShouldUseOnAdd_Implementation() const;

	/**
	* Allows you to define whether the item should be shown in the inventory, you may want to hide items from time to time
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
	bool ShouldShowInInventory() const;
	virtual bool ShouldShowInInventory_Implementation() const;

protected:

	/**The amount of the item*/
	UPROPERTY(ReplicatedUsing = OnRep_Quantity, EditAnywhere, Category = "Item", meta = (UIMin = 1, EditCondition = bStackable, EditConditionHides))
	int32 Quantity;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Item")
	float LastUseTime;

};

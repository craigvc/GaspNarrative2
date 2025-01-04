// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Components/NinjaInventoryManagerComponent.h"
#include "NinjaInventory/Public/Serialization/FInventorySerialization.h"
#include "NinjaInventory/Public/Types/FInventoryContainer.h"
#include "NinjaInventory/Public/Types/FInventoryContainerContext.h"
#include "NinjaInventory/Public/Types/FInventoryItem.h"
#include "NinjaInventory/Public/Types/FInventoryItemContext.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UEnum* Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerContext();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerEntry();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerList();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerRecord();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContext();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContextEntry();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemEntry();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemList();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemRecord();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryManagerRecord();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Enum EInventoryInitializationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventoryInitializationState;
static UEnum* EInventoryInitializationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventoryInitializationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventoryInitializationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("EInventoryInitializationState"));
	}
	return Z_Registration_Info_UEnum_EInventoryInitializationState.OuterSingleton;
}
template<> NINJAINVENTORY_API UEnum* StaticEnum<EInventoryInitializationState>()
{
	return EInventoryInitializationState_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoundToAbilitySystem.Comment", "/** Inventory is connected to the ASC and will initialize items. */" },
		{ "BoundToAbilitySystem.Name", "EInventoryInitializationState::BoundToAbilitySystem" },
		{ "BoundToAbilitySystem.ToolTip", "Inventory is connected to the ASC and will initialize items." },
		{ "Comment", "/**\n * Informs where in the initialization workflow the inventory is currently in.\n */" },
		{ "Initialized.Comment", "/** Inventory has been fully initialized. */" },
		{ "Initialized.Name", "EInventoryInitializationState::Initialized" },
		{ "Initialized.ToolTip", "Inventory has been fully initialized." },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "NotInitialized.Comment", "/** Initialization has not started yet. */" },
		{ "NotInitialized.Name", "EInventoryInitializationState::NotInitialized" },
		{ "NotInitialized.ToolTip", "Initialization has not started yet." },
		{ "ToolTip", "Informs where in the initialization workflow the inventory is currently in." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInventoryInitializationState::NotInitialized", (int64)EInventoryInitializationState::NotInitialized },
		{ "EInventoryInitializationState::BoundToAbilitySystem", (int64)EInventoryInitializationState::BoundToAbilitySystem },
		{ "EInventoryInitializationState::Initialized", (int64)EInventoryInitializationState::Initialized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	"EInventoryInitializationState",
	"EInventoryInitializationState",
	Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState()
{
	if (!Z_Registration_Info_UEnum_EInventoryInitializationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventoryInitializationState.InnerSingleton, Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventoryInitializationState.InnerSingleton;
}
// End Enum EInventoryInitializationState

// Begin Delegate FInventoryInitializedEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InventoryInitializedEventSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryManagerComponent::FInventoryInitializedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryInitializedEventSignature)
{
	InventoryInitializedEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FInventoryInitializedEventSignature

// Begin Delegate FInventoryContainerEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryManagerComponent_eventInventoryContainerEventSignature_Parms
	{
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryContainerEventSignature_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InventoryContainerEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryContainerEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryContainerEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryManagerComponent::FInventoryContainerEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryContainerEventSignature, UNinjaInventoryContainer* Container)
{
	struct NinjaInventoryManagerComponent_eventInventoryContainerEventSignature_Parms
	{
		UNinjaInventoryContainer* Container;
	};
	NinjaInventoryManagerComponent_eventInventoryContainerEventSignature_Parms Parms;
	Parms.Container=Container;
	InventoryContainerEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryContainerEventSignature

// Begin Delegate FInventoryItemEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryManagerComponent_eventInventoryItemEventSignature_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryItemEventSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InventoryItemEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryItemEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryItemEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryManagerComponent::FInventoryItemEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemEventSignature, UNinjaInventoryItem* Item)
{
	struct NinjaInventoryManagerComponent_eventInventoryItemEventSignature_Parms
	{
		UNinjaInventoryItem* Item;
	};
	NinjaInventoryManagerComponent_eventInventoryItemEventSignature_Parms Parms;
	Parms.Item=Item;
	InventoryItemEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryItemEventSignature

// Begin Delegate FInventoryLootDismissedEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryManagerComponent_eventInventoryLootDismissedEventSignature_Parms
	{
		UNinjaInventoryLootComponent* Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryLootDismissedEventSignature_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InventoryLootDismissedEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryLootDismissedEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryLootDismissedEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryManagerComponent::FInventoryLootDismissedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryLootDismissedEventSignature, UNinjaInventoryLootComponent* Source)
{
	struct NinjaInventoryManagerComponent_eventInventoryLootDismissedEventSignature_Parms
	{
		UNinjaInventoryLootComponent* Source;
	};
	NinjaInventoryManagerComponent_eventInventoryLootDismissedEventSignature_Parms Parms;
	Parms.Source=Source;
	InventoryLootDismissedEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryLootDismissedEventSignature

// Begin Delegate FInventoryLootReceivedEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms
	{
		UNinjaInventoryLootComponent* Source;
		TArray<UNinjaInventoryLoot*> SelectedLoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NewProp_SelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InventoryLootReceivedEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryManagerComponent::FInventoryLootReceivedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryLootReceivedEventSignature, UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*> const& SelectedLoot)
{
	struct NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms
	{
		UNinjaInventoryLootComponent* Source;
		TArray<UNinjaInventoryLoot*> SelectedLoot;
	};
	NinjaInventoryManagerComponent_eventInventoryLootReceivedEventSignature_Parms Parms;
	Parms.Source=Source;
	Parms.SelectedLoot=SelectedLoot;
	InventoryLootReceivedEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryLootReceivedEventSignature

// Begin Delegate FInventoryStorageEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
		int32 Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InventoryStorageEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryManagerComponent::FInventoryStorageEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryStorageEventSignature, UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, int32 Position)
{
	struct NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
		int32 Position;
	};
	NinjaInventoryManagerComponent_eventInventoryStorageEventSignature_Parms Parms;
	Parms.Item=Item;
	Parms.Container=Container;
	Parms.Position=Position;
	InventoryStorageEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryStorageEventSignature

// Begin Class UNinjaInventoryManagerComponent Function AddContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventAddContainer_Parms
	{
		FInventoryContainerContext ContainerContext;
		FInventoryContainerContext OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Adds a new Container to this Inventory Manager.\n\x09 *\n\x09 * @param ContainerContext\n\x09 *\x09\x09Provides data for the operation and receives the new container.\n\x09 *\x09\x09The container must not be fulfilled yet, meaning no container instance was set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Adds a new Container to this Inventory Manager.\n\n@param ContainerContext\n             Provides data for the operation and receives the new container.\n             The container must not be fulfilled yet, meaning no container instance was set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutResult_MetaData[] = {
		{ "DisplayName", "Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::NewProp_ContainerContext = { "ContainerContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddContainer_Parms, ContainerContext), Z_Construct_UScriptStruct_FInventoryContainerContext, METADATA_PARAMS(0, nullptr) }; // 3032376117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddContainer_Parms, OutResult), Z_Construct_UScriptStruct_FInventoryContainerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutResult_MetaData), NewProp_OutResult_MetaData) }; // 3032376117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::NewProp_ContainerContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "AddContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::NinjaInventoryManagerComponent_eventAddContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::NinjaInventoryManagerComponent_eventAddContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execAddContainer)
{
	P_GET_STRUCT(FInventoryContainerContext,Z_Param_ContainerContext);
	P_GET_STRUCT_REF(FInventoryContainerContext,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddContainer(Z_Param_ContainerContext,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function AddContainer

// Begin Class UNinjaInventoryManagerComponent Function AddItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics
{
	struct NinjaInventoryManagerComponent_eventAddItem_Parms
	{
		FInventoryItemContext ItemContext;
		FInventoryItemContext OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Adds items to this Inventory Manager.\n\x09 *\n\x09 * @param ItemContext\x09\x09\x09Input context containing items that will be added.\n\x09 * @param OutResult\x09\x09\x09\x09Result context, containing all operations performed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Adds items to this Inventory Manager.\n\n@param ItemContext                   Input context containing items that will be added.\n@param OutResult                             Result context, containing all operations performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutResult_MetaData[] = {
		{ "DisplayName", "Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddItem_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(0, nullptr) }; // 305387301
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddItem_Parms, OutResult), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutResult_MetaData), NewProp_OutResult_MetaData) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::NinjaInventoryManagerComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::NinjaInventoryManagerComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execAddItem)
{
	P_GET_STRUCT(FInventoryItemContext,Z_Param_ItemContext);
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_ItemContext,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function AddItem

// Begin Class UNinjaInventoryManagerComponent Function AddLoot
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics
{
	struct NinjaInventoryManagerComponent_eventAddLoot_Parms
	{
		TArray<UNinjaInventoryLoot*> Loot;
		FInventoryItemContext OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Adds loot to this Inventory Manager.\n\x09 *\n\x09 * @param Loot\x09\x09\x09\x09\x09""All loot being granted.\n\x09 * @param OutResult\x09\x09\x09\x09Result context, containing all operations performed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Adds loot to this Inventory Manager.\n\n@param Loot                                  All loot being granted.\n@param OutResult                             Result context, containing all operations performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutResult_MetaData[] = {
		{ "DisplayName", "Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Loot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Loot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NewProp_Loot_Inner = { "Loot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NewProp_Loot = { "Loot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddLoot_Parms, Loot), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddLoot_Parms, OutResult), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutResult_MetaData), NewProp_OutResult_MetaData) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NewProp_Loot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NewProp_Loot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "AddLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NinjaInventoryManagerComponent_eventAddLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::NinjaInventoryManagerComponent_eventAddLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execAddLoot)
{
	P_GET_TARRAY(UNinjaInventoryLoot*,Z_Param_Loot);
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLoot(Z_Param_Loot,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function AddLoot

// Begin Class UNinjaInventoryManagerComponent Function AddPickup
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics
{
	struct NinjaInventoryManagerComponent_eventAddPickup_Parms
	{
		AActor* PickupActor;
		FInventoryItemContext OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Adds the item represented by a Pickup Actor to this Inventory Manager.\n\x09 *\n\x09 * @param PickupActor\x09\x09\x09Pickup actor containing item data, provided via the Inventory Pickup Interface.\n\x09 * @param OutResult\x09\x09\x09\x09Result context, containing all operations performed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Adds the item represented by a Pickup Actor to this Inventory Manager.\n\n@param PickupActor                   Pickup actor containing item data, provided via the Inventory Pickup Interface.\n@param OutResult                             Result context, containing all operations performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupActor_MetaData[] = {
		{ "MustImplement", "/Script/NinjaInventory.InventoryPickupInterface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutResult_MetaData[] = {
		{ "DisplayName", "Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::NewProp_PickupActor = { "PickupActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddPickup_Parms, PickupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupActor_MetaData), NewProp_PickupActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventAddPickup_Parms, OutResult), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutResult_MetaData), NewProp_OutResult_MetaData) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::NewProp_PickupActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "AddPickup", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::NinjaInventoryManagerComponent_eventAddPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::NinjaInventoryManagerComponent_eventAddPickup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execAddPickup)
{
	P_GET_OBJECT(AActor,Z_Param_PickupActor);
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPickup(Z_Param_PickupActor,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function AddPickup

// Begin Class UNinjaInventoryManagerComponent Function CanAddContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventCanAddContainer_Parms
	{
		FInventoryContainerContext ContainerContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Checks if a container context can be added to this inventory.\n\x09 *\n\x09 * @param ContainerContext\x09\x09""Context to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the container can be added, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Can Add?" },
		{ "ToolTip", "Checks if a container context can be added to this inventory.\n\n@param ContainerContext              Context to be evaluated.\n@return                                              True if the container can be added, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NewProp_ContainerContext = { "ContainerContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCanAddContainer_Parms, ContainerContext), Z_Construct_UScriptStruct_FInventoryContainerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerContext_MetaData), NewProp_ContainerContext_MetaData) }; // 3032376117
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventCanAddContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventCanAddContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NewProp_ContainerContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CanAddContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NinjaInventoryManagerComponent_eventCanAddContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::NinjaInventoryManagerComponent_eventCanAddContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCanAddContainer)
{
	P_GET_STRUCT_REF(FInventoryContainerContext,Z_Param_Out_ContainerContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddContainer(Z_Param_Out_ContainerContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CanAddContainer

// Begin Class UNinjaInventoryManagerComponent Function CanAddItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics
{
	struct NinjaInventoryManagerComponent_eventCanAddItem_Parms
	{
		FInventoryItemContext ItemContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Checks if an item context can be added to this inventory.\n\x09 *\n\x09 * @param ItemContext\x09\x09\x09""Context to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the item can be added, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Can Add?" },
		{ "ToolTip", "Checks if an item context can be added to this inventory.\n\n@param ItemContext                   Context to be evaluated.\n@return                                              True if the item can be added, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCanAddItem_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(0, nullptr) }; // 305387301
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventCanAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventCanAddItem_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CanAddItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NinjaInventoryManagerComponent_eventCanAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::NinjaInventoryManagerComponent_eventCanAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCanAddItem)
{
	P_GET_STRUCT(FInventoryItemContext,Z_Param_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddItem(Z_Param_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CanAddItem

// Begin Class UNinjaInventoryManagerComponent Function CanRelocateItemsInContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventCanRelocateItemsInContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Checks if items can be relocated, in case a container is to be removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Can Relocate?" },
		{ "ToolTip", "Checks if items can be relocated, in case a container is to be removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCanRelocateItemsInContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventCanRelocateItemsInContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventCanRelocateItemsInContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CanRelocateItemsInContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NinjaInventoryManagerComponent_eventCanRelocateItemsInContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::NinjaInventoryManagerComponent_eventCanRelocateItemsInContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCanRelocateItemsInContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRelocateItemsInContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CanRelocateItemsInContainer

// Begin Class UNinjaInventoryManagerComponent Function Client_DismissLoot
struct NinjaInventoryManagerComponent_eventClient_DismissLoot_Parms
{
	UNinjaInventoryLootComponent* Source;
};
static const FName NAME_UNinjaInventoryManagerComponent_Client_DismissLoot = FName(TEXT("Client_DismissLoot"));
void UNinjaInventoryManagerComponent::Client_DismissLoot(UNinjaInventoryLootComponent* Source)
{
	NinjaInventoryManagerComponent_eventClient_DismissLoot_Parms Parms;
	Parms.Source=Source;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_Client_DismissLoot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends a client RPC to inform the local client about dismissed loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Sends a client RPC to inform the local client about dismissed loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventClient_DismissLoot_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "Client_DismissLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventClient_DismissLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventClient_DismissLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execClient_DismissLoot)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_DismissLoot_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function Client_DismissLoot

// Begin Class UNinjaInventoryManagerComponent Function Client_ReceiveLoot
struct NinjaInventoryManagerComponent_eventClient_ReceiveLoot_Parms
{
	UNinjaInventoryLootComponent* Source;
	TArray<UNinjaInventoryLoot*> SelectedLoot;
};
static const FName NAME_UNinjaInventoryManagerComponent_Client_ReceiveLoot = FName(TEXT("Client_ReceiveLoot"));
void UNinjaInventoryManagerComponent::Client_ReceiveLoot(UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*> const& SelectedLoot)
{
	NinjaInventoryManagerComponent_eventClient_ReceiveLoot_Parms Parms;
	Parms.Source=Source;
	Parms.SelectedLoot=SelectedLoot;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_Client_ReceiveLoot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends a client RPC to inform the local client about received loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Sends a client RPC to inform the local client about received loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventClient_ReceiveLoot_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventClient_ReceiveLoot_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::NewProp_SelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "Client_ReceiveLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventClient_ReceiveLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventClient_ReceiveLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execClient_ReceiveLoot)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_Source);
	P_GET_TARRAY(UNinjaInventoryLoot*,Z_Param_SelectedLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_ReceiveLoot_Implementation(Z_Param_Source,Z_Param_SelectedLoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function Client_ReceiveLoot

// Begin Class UNinjaInventoryManagerComponent Function ConvertLootToItemContext
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics
{
	struct NinjaInventoryManagerComponent_eventConvertLootToItemContext_Parms
	{
		TArray<UNinjaInventoryLoot*> Loot;
		FInventoryItemContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Converts the provided loot to an Item Context that can be added to the inventory.\n\x09 *\n\x09 * @param Loot\x09\x09\x09Loot to be converted into an item context.\n\x09 * return\x09\x09\x09\x09Item context generated from the loot, which can be added to the inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Converts the provided loot to an Item Context that can be added to the inventory.\n\n@param Loot                  Loot to be converted into an item context.\nreturn                               Item context generated from the loot, which can be added to the inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Loot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Loot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NewProp_Loot_Inner = { "Loot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NewProp_Loot = { "Loot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventConvertLootToItemContext_Parms, Loot), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventConvertLootToItemContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(0, nullptr) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NewProp_Loot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NewProp_Loot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "ConvertLootToItemContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NinjaInventoryManagerComponent_eventConvertLootToItemContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::NinjaInventoryManagerComponent_eventConvertLootToItemContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execConvertLootToItemContext)
{
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_Loot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryItemContext*)Z_Param__Result=P_THIS->ConvertLootToItemContext(Z_Param_Out_Loot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function ConvertLootToItemContext

// Begin Class UNinjaInventoryManagerComponent Function ConvertPickupToItemContext
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics
{
	struct NinjaInventoryManagerComponent_eventConvertPickupToItemContext_Parms
	{
		AActor* PickupActor;
		FInventoryItemContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Converts the provided pickup to an Item Context that can be added to the inventory.\n\x09 *\n\x09 * @param PickupActor\x09Pickup actor to be converted into an item context.\n\x09 * return\x09\x09\x09\x09Item context generated from the pickup, which can be added to the inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Converts the provided pickup to an Item Context that can be added to the inventory.\n\n@param PickupActor   Pickup actor to be converted into an item context.\nreturn                               Item context generated from the pickup, which can be added to the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupActor_MetaData[] = {
		{ "MustImplement", "/Script/NinjaInventory.InventoryPickupInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::NewProp_PickupActor = { "PickupActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventConvertPickupToItemContext_Parms, PickupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupActor_MetaData), NewProp_PickupActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventConvertPickupToItemContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(0, nullptr) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::NewProp_PickupActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "ConvertPickupToItemContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::NinjaInventoryManagerComponent_eventConvertPickupToItemContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::NinjaInventoryManagerComponent_eventConvertPickupToItemContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execConvertPickupToItemContext)
{
	P_GET_OBJECT(AActor,Z_Param_PickupActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryItemContext*)Z_Param__Result=P_THIS->ConvertPickupToItemContext(Z_Param_PickupActor);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function ConvertPickupToItemContext

// Begin Class UNinjaInventoryManagerComponent Function CountAvailableSlotsForItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics
{
	struct NinjaInventoryManagerComponent_eventCountAvailableSlotsForItem_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts the amount of slots available for a given item data.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09The item data to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09\x09The amount of slots available for the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Slots" },
		{ "ToolTip", "Counts the amount of slots available for a given item data.\n\n@param ItemData                              The item data to be evaluated.\n@return                                              The amount of slots available for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountAvailableSlotsForItem_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountAvailableSlotsForItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountAvailableSlotsForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::NinjaInventoryManagerComponent_eventCountAvailableSlotsForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::NinjaInventoryManagerComponent_eventCountAvailableSlotsForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountAvailableSlotsForItem)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountAvailableSlotsForItem(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountAvailableSlotsForItem

// Begin Class UNinjaInventoryManagerComponent Function CountAvailableSlotsInContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventCountAvailableSlotsInContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts the amount of slots available in a container.\n\x09 *\n\x09 * @param Container\x09\x09""Container instance to count slots for.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Amount of slots available in the container instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Slots" },
		{ "ToolTip", "Counts the amount of slots available in a container.\n\n@param Container             Container instance to count slots for.\n@return                                              Amount of slots available in the container instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountAvailableSlotsInContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountAvailableSlotsInContainer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountAvailableSlotsInContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::NinjaInventoryManagerComponent_eventCountAvailableSlotsInContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::NinjaInventoryManagerComponent_eventCountAvailableSlotsInContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountAvailableSlotsInContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountAvailableSlotsInContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountAvailableSlotsInContainer

// Begin Class UNinjaInventoryManagerComponent Function CountContainerData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics
{
	struct NinjaInventoryManagerComponent_eventCountContainerData_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts how many instances of a given container, from its data, are stored in this inventory.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09""Container data to evaluate.\n\x09 * @return\x09\x09\x09\x09\x09\x09The amount of instances generated from the provided data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Countainer Count" },
		{ "ToolTip", "Counts how many instances of a given container, from its data, are stored in this inventory.\n\n@param ContainerData                 Container data to evaluate.\n@return                                              The amount of instances generated from the provided data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountContainerData_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountContainerData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountContainerData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::NinjaInventoryManagerComponent_eventCountContainerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::NinjaInventoryManagerComponent_eventCountContainerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountContainerData)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountContainerData(Z_Param_ContainerData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountContainerData

// Begin Class UNinjaInventoryManagerComponent Function CountContainers
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics
{
	struct NinjaInventoryManagerComponent_eventCountContainers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts all containers stored in this Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Countainer Count" },
		{ "ToolTip", "Counts all containers stored in this Inventory Manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountContainers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountContainers", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::NinjaInventoryManagerComponent_eventCountContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::NinjaInventoryManagerComponent_eventCountContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountContainers();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountContainers

// Begin Class UNinjaInventoryManagerComponent Function CountItemData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics
{
	struct NinjaInventoryManagerComponent_eventCountItemData_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts how many instances of a given item, from its data, are stored in this inventory.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09Item data to evaluate\n\x09 * @return\x09\x09\x09\x09\x09\x09The amount of instances generated from the provided data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item Count" },
		{ "ToolTip", "Counts how many instances of a given item, from its data, are stored in this inventory.\n\n@param ItemData                              Item data to evaluate\n@return                                              The amount of instances generated from the provided data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountItemData_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountItemData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::NinjaInventoryManagerComponent_eventCountItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::NinjaInventoryManagerComponent_eventCountItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountItemData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountItemData(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountItemData

// Begin Class UNinjaInventoryManagerComponent Function CountItems
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics
{
	struct NinjaInventoryManagerComponent_eventCountItems_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts all items stored in this Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item Count" },
		{ "ToolTip", "Counts all items stored in this Inventory Manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::NinjaInventoryManagerComponent_eventCountItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::NinjaInventoryManagerComponent_eventCountItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountItems();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountItems

// Begin Class UNinjaInventoryManagerComponent Function CountItemsInContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventCountItemsInContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts items stored in a given container.\n\x09 *\n\x09 * @param Container\x09\x09\x09\x09""Container to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Amount of items stored in this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item Count" },
		{ "ToolTip", "Counts items stored in a given container.\n\n@param Container                             Container to be evaluated.\n@return                                              Amount of items stored in this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountItemsInContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountItemsInContainer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountItemsInContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::NinjaInventoryManagerComponent_eventCountItemsInContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::NinjaInventoryManagerComponent_eventCountItemsInContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountItemsInContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountItemsInContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountItemsInContainer

// Begin Class UNinjaInventoryManagerComponent Function CountTotalSlotsInContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventCountTotalSlotsInContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts the total amount of slots in a container.\n\x09 *\n\x09 * @param Container\x09\x09""Container instance to count slots for.\n\x09 * @return\x09\x09\x09\x09\x09\x09Total amount of slots in the container instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Slots" },
		{ "ToolTip", "Counts the total amount of slots in a container.\n\n@param Container             Container instance to count slots for.\n@return                                              Total amount of slots in the container instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountTotalSlotsInContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountTotalSlotsInContainer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountTotalSlotsInContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::NinjaInventoryManagerComponent_eventCountTotalSlotsInContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::NinjaInventoryManagerComponent_eventCountTotalSlotsInContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountTotalSlotsInContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalSlotsInContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountTotalSlotsInContainer

// Begin Class UNinjaInventoryManagerComponent Function CountTotalStacksForItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics
{
	struct NinjaInventoryManagerComponent_eventCountTotalStacksForItem_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Counts the total stack count for an item data.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09The Item data to be counted.\n\x09 * @return\x09\x09\x09\x09\x09\x09Total amount of stack entries.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Stack Count" },
		{ "ToolTip", "Counts the total stack count for an item data.\n\n@param ItemData                              The Item data to be counted.\n@return                                              Total amount of stack entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountTotalStacksForItem_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCountTotalStacksForItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CountTotalStacksForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::NinjaInventoryManagerComponent_eventCountTotalStacksForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::NinjaInventoryManagerComponent_eventCountTotalStacksForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCountTotalStacksForItem)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalStacksForItem(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CountTotalStacksForItem

// Begin Class UNinjaInventoryManagerComponent Function CreateContainerInstance
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics
{
	struct NinjaInventoryManagerComponent_eventCreateContainerInstance_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		FName ObjectName;
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Initializes an Container from a given data asset.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09""Container definition used as a base for the instance.\n\x09 * @param ObjectName\x09\x09\x09Optional name for the Container Instance.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Container Instance fully configured.\n\x09 */" },
		{ "CPP_Default_ObjectName", "None" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Container" },
		{ "ToolTip", "Initializes an Container from a given data asset.\n\n@param ContainerData                 Container definition used as a base for the instance.\n@param ObjectName                    Optional name for the Container Instance.\n@return                                              The Container Instance fully configured." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateContainerInstance_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateContainerInstance_Parms, ObjectName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateContainerInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CreateContainerInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NinjaInventoryManagerComponent_eventCreateContainerInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::NinjaInventoryManagerComponent_eventCreateContainerInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCreateContainerInstance)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->CreateContainerInstance(Z_Param_ContainerData,Z_Param_ObjectName);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CreateContainerInstance

// Begin Class UNinjaInventoryManagerComponent Function CreateContainerRecord
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics
{
	struct NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms
	{
		FInventoryContainerEntry Entry;
		FInventoryContainerRecord OutRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Creates a Container Record that can be used for serialization. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Creates a Container Record that can be used for serialization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms, Entry), Z_Construct_UScriptStruct_FInventoryContainerEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 4060665194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_OutRecord = { "OutRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms, OutRecord), Z_Construct_UScriptStruct_FInventoryContainerRecord, METADATA_PARAMS(0, nullptr) }; // 2315677879
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_Entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_OutRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CreateContainerRecord", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::NinjaInventoryManagerComponent_eventCreateContainerRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCreateContainerRecord)
{
	P_GET_STRUCT_REF(FInventoryContainerEntry,Z_Param_Out_Entry);
	P_GET_STRUCT_REF(FInventoryContainerRecord,Z_Param_Out_OutRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateContainerRecord(Z_Param_Out_Entry,Z_Param_Out_OutRecord);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CreateContainerRecord

// Begin Class UNinjaInventoryManagerComponent Function CreateItemInstance
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics
{
	struct NinjaInventoryManagerComponent_eventCreateItemInstance_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		FName ObjectName;
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Initializes an Item from a given data asset.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09Item definition used as a base for the instance.\n\x09 * @param ObjectName\x09\x09\x09Optional name for the Item Instance.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Inventory Item Instance fully configured.\n\x09 */" },
		{ "CPP_Default_ObjectName", "None" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item" },
		{ "ToolTip", "Initializes an Item from a given data asset.\n\n@param ItemData                              Item definition used as a base for the instance.\n@param ObjectName                    Optional name for the Item Instance.\n@return                                              The Inventory Item Instance fully configured." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateItemInstance_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateItemInstance_Parms, ObjectName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateItemInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CreateItemInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NinjaInventoryManagerComponent_eventCreateItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::NinjaInventoryManagerComponent_eventCreateItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCreateItemInstance)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->CreateItemInstance(Z_Param_ItemData,Z_Param_ObjectName);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CreateItemInstance

// Begin Class UNinjaInventoryManagerComponent Function CreateItemRecord
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics
{
	struct NinjaInventoryManagerComponent_eventCreateItemRecord_Parms
	{
		FInventoryItemEntry Entry;
		FInventoryItemRecord OutRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Creates an Item Record that can be used for serialization. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Creates an Item Record that can be used for serialization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateItemRecord_Parms, Entry), Z_Construct_UScriptStruct_FInventoryItemEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 4243978691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_OutRecord = { "OutRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventCreateItemRecord_Parms, OutRecord), Z_Construct_UScriptStruct_FInventoryItemRecord, METADATA_PARAMS(0, nullptr) }; // 3343316390
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventCreateItemRecord_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventCreateItemRecord_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_Entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_OutRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "CreateItemRecord", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NinjaInventoryManagerComponent_eventCreateItemRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::NinjaInventoryManagerComponent_eventCreateItemRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execCreateItemRecord)
{
	P_GET_STRUCT_REF(FInventoryItemEntry,Z_Param_Out_Entry);
	P_GET_STRUCT_REF(FInventoryItemRecord,Z_Param_Out_OutRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateItemRecord(Z_Param_Out_Entry,Z_Param_Out_OutRecord);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function CreateItemRecord

// Begin Class UNinjaInventoryManagerComponent Function DismissLoot
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics
{
	struct NinjaInventoryManagerComponent_eventDismissLoot_Parms
	{
		UNinjaInventoryLootComponent* Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Dismisses loot that has been received from a source.\n\x09 *\n\x09 * @param Source\n\x09 *\x09\x09Source that has generated previous loot. There are a few reasons why loot\n\x09 *\x09\x09might be getting discarded: distance from the loot source, loot has been\n\x09 *\x09\x09""collected by another requester, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Dismisses loot that has been received from a source.\n\n@param Source\n             Source that has generated previous loot. There are a few reasons why loot\n             might be getting discarded: distance from the loot source, loot has been\n             collected by another requester, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventDismissLoot_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "DismissLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::NinjaInventoryManagerComponent_eventDismissLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::NinjaInventoryManagerComponent_eventDismissLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execDismissLoot)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismissLoot(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function DismissLoot

// Begin Class UNinjaInventoryManagerComponent Function EvictStoredItemId
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics
{
	struct NinjaInventoryManagerComponent_eventEvictStoredItemId_Parms
	{
		FGuid ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Evicts information about an item's storage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Evicts information about an item's storage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventEvictStoredItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "EvictStoredItemId", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::NinjaInventoryManagerComponent_eventEvictStoredItemId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::NinjaInventoryManagerComponent_eventEvictStoredItemId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execEvictStoredItemId)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvictStoredItemId(Z_Param_Out_ItemId);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function EvictStoredItemId

// Begin Class UNinjaInventoryManagerComponent Function EvictStoredItemInstance
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics
{
	struct NinjaInventoryManagerComponent_eventEvictStoredItemInstance_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Evicts information about an item's storage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Evicts information about an item's storage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventEvictStoredItemInstance_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "EvictStoredItemInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::NinjaInventoryManagerComponent_eventEvictStoredItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::NinjaInventoryManagerComponent_eventEvictStoredItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execEvictStoredItemInstance)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvictStoredItemInstance(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function EvictStoredItemInstance

// Begin Class UNinjaInventoryManagerComponent Function GetAvailableContainersForItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics
{
	struct NinjaInventoryManagerComponent_eventGetAvailableContainersForItem_Parms
	{
		const UNinjaInventoryItem* Item;
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all containers that could store an item, sorted by priority.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item to evaluate. \n\x09 * @return\x09\x09\x09\x09\x09\x09""All containers that could store the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all containers that could store an item, sorted by priority.\n\n@param Item                                  Item to evaluate.\n@return                                              All containers that could store the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetAvailableContainersForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetAvailableContainersForItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetAvailableContainersForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NinjaInventoryManagerComponent_eventGetAvailableContainersForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::NinjaInventoryManagerComponent_eventGetAvailableContainersForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetAvailableContainersForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetAvailableContainersForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetAvailableContainersForItem

// Begin Class UNinjaInventoryManagerComponent Function GetAvailableContainersForItemData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics
{
	struct NinjaInventoryManagerComponent_eventGetAvailableContainersForItemData_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all containers that could store an item's data, sorted by priority.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09Item Data to evaluate. \n\x09 * @return\x09\x09\x09\x09\x09\x09""All containers that could store the item data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all containers that could store an item's data, sorted by priority.\n\n@param ItemData                              Item Data to evaluate.\n@return                                              All containers that could store the item data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetAvailableContainersForItemData_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetAvailableContainersForItemData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetAvailableContainersForItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NinjaInventoryManagerComponent_eventGetAvailableContainersForItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::NinjaInventoryManagerComponent_eventGetAvailableContainersForItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetAvailableContainersForItemData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetAvailableContainersForItemData(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetAvailableContainersForItemData

// Begin Class UNinjaInventoryManagerComponent Function GetContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventGetContainer_Parms
	{
		FGuid ContainerId;
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Finds a container by its internal identifier.\n\x09 *\n\x09 * @parm ContainerId\x09\x09\x09Unique Identifier for the container.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Container for the provided identifier.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Container" },
		{ "ToolTip", "Finds a container by its internal identifier.\n\n@parm ContainerId                    Unique Identifier for the container.\n@return                                              Container for the provided identifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainer_Parms, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerId_MetaData), NewProp_ContainerId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::NewProp_ContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::NinjaInventoryManagerComponent_eventGetContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::NinjaInventoryManagerComponent_eventGetContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetContainer)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ContainerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetContainer(Z_Param_Out_ContainerId);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetContainer

// Begin Class UNinjaInventoryManagerComponent Function GetContainerRecordsForSerialization
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics
{
	struct NinjaInventoryManagerComponent_eventGetContainerRecordsForSerialization_Parms
	{
		TArray<FInventoryContainerRecord> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides all serializable containers as their records.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A list of Container Records that can be used to serialize the current\n\x09 *\x09\x09""containers managed by this inventory. Should match the full container list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Container Records" },
		{ "ToolTip", "Provides all serializable containers as their records.\n\n@return\n             A list of Container Records that can be used to serialize the current\n             containers managed by this inventory. Should match the full container list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryContainerRecord, METADATA_PARAMS(0, nullptr) }; // 2315677879
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainerRecordsForSerialization_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2315677879
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetContainerRecordsForSerialization", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::NinjaInventoryManagerComponent_eventGetContainerRecordsForSerialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::NinjaInventoryManagerComponent_eventGetContainerRecordsForSerialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetContainerRecordsForSerialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryContainerRecord>*)Z_Param__Result=P_THIS->GetContainerRecordsForSerialization();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetContainerRecordsForSerialization

// Begin Class UNinjaInventoryManagerComponent Function GetContainers
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics
{
	struct NinjaInventoryManagerComponent_eventGetContainers_Parms
	{
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all containers assigned to this inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all containers assigned to this inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetContainers", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::NinjaInventoryManagerComponent_eventGetContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::NinjaInventoryManagerComponent_eventGetContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetContainers();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetContainers

// Begin Class UNinjaInventoryManagerComponent Function GetContainersByData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics
{
	struct NinjaInventoryManagerComponent_eventGetContainersByData_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all containers based on the provided Container Data Asset.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09""Container Data used to filter containers.\n\x09 * @return\x09\x09\x09\x09\x09\x09""All containers based on the Container Data Asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all containers based on the provided Container Data Asset.\n\n@param ContainerData                 Container Data used to filter containers.\n@return                                              All containers based on the Container Data Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainersByData_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainersByData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetContainersByData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NinjaInventoryManagerComponent_eventGetContainersByData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::NinjaInventoryManagerComponent_eventGetContainersByData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetContainersByData)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetContainersByData(Z_Param_ContainerData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetContainersByData

// Begin Class UNinjaInventoryManagerComponent Function GetContainersByQuery
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics
{
	struct NinjaInventoryManagerComponent_eventGetContainersByQuery_Parms
	{
		FGameplayTagQuery TagQuery;
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all containers matching the tag query.\n\x09 *\n\x09 * @param TagQuery\x09\x09\x09\x09Gameplay Tag Query used to filter containers.\n\x09 * @return\x09\x09\x09\x09\x09\x09""All containers matching the provided Tag Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all containers matching the tag query.\n\n@param TagQuery                              Gameplay Tag Query used to filter containers.\n@return                                              All containers matching the provided Tag Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainersByQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainersByQuery_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetContainersByQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NinjaInventoryManagerComponent_eventGetContainersByQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::NinjaInventoryManagerComponent_eventGetContainersByQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetContainersByQuery)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetContainersByQuery(Z_Param_Out_TagQuery);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetContainersByQuery

// Begin Class UNinjaInventoryManagerComponent Function GetContainersOwnedByItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics
{
	struct NinjaInventoryManagerComponent_eventGetContainersOwnedByItem_Parms
	{
		const UNinjaInventoryItem* Item;
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all containers owned by an item.\n\x09 * \n\x09 * @param Item\x09\x09\x09\x09\x09Item that owns the containers. \n\x09 * @return\x09\x09\x09\x09\x09\x09""All containers owned by an item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all containers owned by an item.\n\n@param Item                                  Item that owns the containers.\n@return                                              All containers owned by an item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainersOwnedByItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetContainersOwnedByItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetContainersOwnedByItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NinjaInventoryManagerComponent_eventGetContainersOwnedByItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::NinjaInventoryManagerComponent_eventGetContainersOwnedByItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetContainersOwnedByItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetContainersOwnedByItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetContainersOwnedByItem

// Begin Class UNinjaInventoryManagerComponent Function GetDefaultContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventGetDefaultContainer_Parms
	{
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides the default container for this Inventory.\n\x09 *\n\x09 * If you can't assume one single Default Container, then use the \"GetDefaultContainers\"\n\x09 * function instead, which will provide all default containers, as per the layout setup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Container" },
		{ "ToolTip", "Provides the default container for this Inventory.\n\nIf you can't assume one single Default Container, then use the \"GetDefaultContainers\"\nfunction instead, which will provide all default containers, as per the layout setup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetDefaultContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetDefaultContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::NinjaInventoryManagerComponent_eventGetDefaultContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::NinjaInventoryManagerComponent_eventGetDefaultContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetDefaultContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetDefaultContainer();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetDefaultContainer

// Begin Class UNinjaInventoryManagerComponent Function GetDefaultContainers
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics
{
	struct NinjaInventoryManagerComponent_eventGetDefaultContainers_Parms
	{
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all default containers for this inventory.\n\x09 *\n\x09 * Ideally only one container should be marked as default, but each game can decide\n\x09 * how to approach this, by allowing one or many containers to be marked as default.\n\x09 *\n\x09 * If it's safe to assume that only one default item will ever be returned, then you\n\x09 * can use the \"GetDefaultContainer\" function instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Containers" },
		{ "ToolTip", "Retrieves all default containers for this inventory.\n\nIdeally only one container should be marked as default, but each game can decide\nhow to approach this, by allowing one or many containers to be marked as default.\n\nIf it's safe to assume that only one default item will ever be returned, then you\ncan use the \"GetDefaultContainer\" function instead." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetDefaultContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetDefaultContainers", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::NinjaInventoryManagerComponent_eventGetDefaultContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::NinjaInventoryManagerComponent_eventGetDefaultContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetDefaultContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetDefaultContainers();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetDefaultContainers

// Begin Class UNinjaInventoryManagerComponent Function GetFirstContainerByData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics
{
	struct NinjaInventoryManagerComponent_eventGetFirstContainerByData_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves the first container based on the provided Container Data Asset.\n\x09 *\n\x09 * This is useful if you know for sure that you only have one container for a given data,\n\x09 * which is usually the case for equipment slots.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09""Container Data used to filter containers.\n\x09 * @return\x09\x09\x09\x09\x09\x09The first container based on the Container Data Asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Container" },
		{ "ToolTip", "Retrieves the first container based on the provided Container Data Asset.\n\nThis is useful if you know for sure that you only have one container for a given data,\nwhich is usually the case for equipment slots.\n\n@param ContainerData                 Container Data used to filter containers.\n@return                                              The first container based on the Container Data Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetFirstContainerByData_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetFirstContainerByData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetFirstContainerByData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::NinjaInventoryManagerComponent_eventGetFirstContainerByData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::NinjaInventoryManagerComponent_eventGetFirstContainerByData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetFirstContainerByData)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetFirstContainerByData(Z_Param_ContainerData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetFirstContainerByData

// Begin Class UNinjaInventoryManagerComponent Function GetFirstItemByQuery
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics
{
	struct NinjaInventoryManagerComponent_eventGetFirstItemByQuery_Parms
	{
		FGameplayTagQuery TagQuery;
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Finds the first available item by a given query.\n\x09 *\n\x09 * @param TagQuery\x09\x09\x09\x09Gameplay Tag Query used to filter items.\n\x09 * @return\x09\x09\x09\x09\x09\x09The first item matching the provided Tag Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item" },
		{ "ToolTip", "Finds the first available item by a given query.\n\n@param TagQuery                              Gameplay Tag Query used to filter items.\n@return                                              The first item matching the provided Tag Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetFirstItemByQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetFirstItemByQuery_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetFirstItemByQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::NinjaInventoryManagerComponent_eventGetFirstItemByQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::NinjaInventoryManagerComponent_eventGetFirstItemByQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetFirstItemByQuery)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetFirstItemByQuery(Z_Param_Out_TagQuery);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetFirstItemByQuery

// Begin Class UNinjaInventoryManagerComponent Function GetInventoryAvatar
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics
{
	struct NinjaInventoryManagerComponent_eventGetInventoryAvatar_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Avatar, meaning the Actor in the world using the Inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Provides the Inventory Avatar, meaning the Actor in the world using the Inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetInventoryAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetInventoryAvatar", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::NinjaInventoryManagerComponent_eventGetInventoryAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::NinjaInventoryManagerComponent_eventGetInventoryAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetInventoryAvatar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetInventoryAvatar();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetInventoryAvatar

// Begin Class UNinjaInventoryManagerComponent Function GetInventoryRecordForSerialization
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics
{
	struct NinjaInventoryManagerComponent_eventGetInventoryRecordForSerialization_Parms
	{
		FInventoryManagerRecord ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Record that can be used for serialization.\n\x09 * It contains records for all containers and items as well.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Inventory Record" },
		{ "ToolTip", "Provides the Inventory Record that can be used for serialization.\nIt contains records for all containers and items as well." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetInventoryRecordForSerialization_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryManagerRecord, METADATA_PARAMS(0, nullptr) }; // 1373499037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetInventoryRecordForSerialization", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::NinjaInventoryManagerComponent_eventGetInventoryRecordForSerialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::NinjaInventoryManagerComponent_eventGetInventoryRecordForSerialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetInventoryRecordForSerialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryManagerRecord*)Z_Param__Result=P_THIS->GetInventoryRecordForSerialization();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetInventoryRecordForSerialization

// Begin Class UNinjaInventoryManagerComponent Function GetItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItem_Parms
	{
		FGuid ItemId;
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Finds an item by its internal identifier.\n\x09 *\n\x09 * @param ItemId\x09\x09\x09\x09Unique Identifier for the item.\n\x09 * @return\x09\x09\x09\x09\x09\x09Item for the provided identifier.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item" },
		{ "ToolTip", "Finds an item by its internal identifier.\n\n@param ItemId                                Unique Identifier for the item.\n@return                                              Item for the provided identifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItem_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::NinjaInventoryManagerComponent_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::NinjaInventoryManagerComponent_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItem)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItem(Z_Param_Out_ItemId);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItem

// Begin Class UNinjaInventoryManagerComponent Function GetItemByContainerAndPosition
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemByContainerAndPosition_Parms
	{
		const UNinjaInventoryContainer* Container;
		int32 Position;
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Finds an item stored in a container, in a position.\n\x09 *\n\x09 * @param Container\x09\x09\x09\x09""Container where the item is stored.\n\x09 * @param Position\x09\x09\x09\x09Position where the item is stored.\n\x09 * @return\x09\x09\x09\x09\x09\x09Item stored at the location or null, if no item was found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item" },
		{ "ToolTip", "Finds an item stored in a container, in a position.\n\n@param Container                             Container where the item is stored.\n@param Position                              Position where the item is stored.\n@return                                              Item stored at the location or null, if no item was found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByContainerAndPosition_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByContainerAndPosition_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByContainerAndPosition_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemByContainerAndPosition", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NinjaInventoryManagerComponent_eventGetItemByContainerAndPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::NinjaInventoryManagerComponent_eventGetItemByContainerAndPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemByContainerAndPosition)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItemByContainerAndPosition(Z_Param_Container,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemByContainerAndPosition

// Begin Class UNinjaInventoryManagerComponent Function GetItemByContainerDataAndPosition
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemByContainerDataAndPosition_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		int32 Position;
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Finds an item stored in a container, in a position.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09""Container data referring to the instance. If there are many containers, the first entry will be used.\n\x09 * @param Position\x09\x09\x09\x09Position where the item is stored.\n\x09 * @return\x09\x09\x09\x09\x09\x09Item stored at the location or null, if no item (or container) was found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item" },
		{ "ToolTip", "Finds an item stored in a container, in a position.\n\n@param ContainerData                 Container data referring to the instance. If there are many containers, the first entry will be used.\n@param Position                              Position where the item is stored.\n@return                                              Item stored at the location or null, if no item (or container) was found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByContainerDataAndPosition_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByContainerDataAndPosition_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByContainerDataAndPosition_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemByContainerDataAndPosition", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NinjaInventoryManagerComponent_eventGetItemByContainerDataAndPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::NinjaInventoryManagerComponent_eventGetItemByContainerDataAndPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemByContainerDataAndPosition)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItemByContainerDataAndPosition(Z_Param_ContainerData,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemByContainerDataAndPosition

// Begin Class UNinjaInventoryManagerComponent Function GetItemByOwnedContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemByOwnedContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Finds an item that owns a given container.\n\x09 *\n\x09 * @param Container\x09\x09\x09\x09""Container owned by the item.\n\x09 * @return\x09\x09\x09\x09\x09\x09Item instance that owns the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item" },
		{ "ToolTip", "Finds an item that owns a given container.\n\n@param Container                             Container owned by the item.\n@return                                              Item instance that owns the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByOwnedContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemByOwnedContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemByOwnedContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::NinjaInventoryManagerComponent_eventGetItemByOwnedContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::NinjaInventoryManagerComponent_eventGetItemByOwnedContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemByOwnedContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItemByOwnedContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemByOwnedContainer

// Begin Class UNinjaInventoryManagerComponent Function GetItemRecordsForSerialization
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemRecordsForSerialization_Parms
	{
		TArray<FInventoryItemRecord> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides all serializable items as their records.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A list of Item Records that can be used to serialize the current items\n\x09 *\x09\x09managed by this inventory. Should match the full item list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Item Records" },
		{ "ToolTip", "Provides all serializable items as their records.\n\n@return\n             A list of Item Records that can be used to serialize the current items\n             managed by this inventory. Should match the full item list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemRecord, METADATA_PARAMS(0, nullptr) }; // 3343316390
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemRecordsForSerialization_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3343316390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemRecordsForSerialization", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::NinjaInventoryManagerComponent_eventGetItemRecordsForSerialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::NinjaInventoryManagerComponent_eventGetItemRecordsForSerialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemRecordsForSerialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryItemRecord>*)Z_Param__Result=P_THIS->GetItemRecordsForSerialization();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemRecordsForSerialization

// Begin Class UNinjaInventoryManagerComponent Function GetItems
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItems_Parms
	{
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all items." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::NinjaInventoryManagerComponent_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::NinjaInventoryManagerComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItems

// Begin Class UNinjaInventoryManagerComponent Function GetItemsByContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		bool OnlyPrimaryContainers;
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all items stored in the container instance.\n\x09 *\n\x09 * @param Container\x09\x09\x09\x09\x09""Container storing the items.\n\x09 * @param OnlyPrimaryContainers\x09\x09If set to true, searches primary containers, discarding additional ones.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09""All items stored in a given container.\n\x09 */" },
		{ "CPP_Default_OnlyPrimaryContainers", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all items stored in the container instance.\n\n@param Container                                     Container storing the items.\n@param OnlyPrimaryContainers         If set to true, searches primary containers, discarding additional ones.\n@return                                                      All items stored in a given container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_OnlyPrimaryContainers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyPrimaryContainers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_OnlyPrimaryContainers_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms*)Obj)->OnlyPrimaryContainers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_OnlyPrimaryContainers = { "OnlyPrimaryContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_OnlyPrimaryContainers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_OnlyPrimaryContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemsByContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::NinjaInventoryManagerComponent_eventGetItemsByContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemsByContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_UBOOL(Z_Param_OnlyPrimaryContainers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetItemsByContainer(Z_Param_Container,Z_Param_OnlyPrimaryContainers);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemsByContainer

// Begin Class UNinjaInventoryManagerComponent Function GetItemsByContainerData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		bool OnlyPrimaryContainers;
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all items stored in containers backed by the container definition.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09\x09""Container definition\n\x09 * @param OnlyPrimaryContainers\x09\x09If set to true, searches primary containers, discarding additional ones.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09""All items stored in a given container.\n\x09 */" },
		{ "CPP_Default_OnlyPrimaryContainers", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all items stored in containers backed by the container definition.\n\n@param ContainerData                         Container definition\n@param OnlyPrimaryContainers         If set to true, searches primary containers, discarding additional ones.\n@return                                                      All items stored in a given container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static void NewProp_OnlyPrimaryContainers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyPrimaryContainers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_OnlyPrimaryContainers_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms*)Obj)->OnlyPrimaryContainers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_OnlyPrimaryContainers = { "OnlyPrimaryContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_OnlyPrimaryContainers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_OnlyPrimaryContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemsByContainerData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::NinjaInventoryManagerComponent_eventGetItemsByContainerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemsByContainerData)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_GET_UBOOL(Z_Param_OnlyPrimaryContainers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetItemsByContainerData(Z_Param_ContainerData,Z_Param_OnlyPrimaryContainers);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemsByContainerData

// Begin Class UNinjaInventoryManagerComponent Function GetItemsByData
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemsByData_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all items matching the item data.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09\x09Item Data used as a search criteria.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09""All stored items of a certain type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all items matching the item data.\n\n@param ItemData                                      Item Data used as a search criteria.\n@return                                                      All stored items of a certain type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByData_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemsByData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NinjaInventoryManagerComponent_eventGetItemsByData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::NinjaInventoryManagerComponent_eventGetItemsByData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemsByData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetItemsByData(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemsByData

// Begin Class UNinjaInventoryManagerComponent Function GetItemsByQuery
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemsByQuery_Parms
	{
		FGameplayTagQuery TagQuery;
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all items matching the tag query.\n\x09 *\n\x09 * @param TagQuery\x09\x09\x09\x09Gameplay Tag Query used to filter items.\n\x09 * @return\x09\x09\x09\x09\x09\x09""All items matching the provided Tag Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all items matching the tag query.\n\n@param TagQuery                              Gameplay Tag Query used to filter items.\n@return                                              All items matching the provided Tag Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsByQuery_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemsByQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NinjaInventoryManagerComponent_eventGetItemsByQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::NinjaInventoryManagerComponent_eventGetItemsByQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemsByQuery)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetItemsByQuery(Z_Param_Out_TagQuery);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemsByQuery

// Begin Class UNinjaInventoryManagerComponent Function GetItemsWithIncompleteStacks
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics
{
	struct NinjaInventoryManagerComponent_eventGetItemsWithIncompleteStacks_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all stackable items of a certain type, with incomplete stacks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all stackable items of a certain type, with incomplete stacks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsWithIncompleteStacks_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetItemsWithIncompleteStacks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetItemsWithIncompleteStacks", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NinjaInventoryManagerComponent_eventGetItemsWithIncompleteStacks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::NinjaInventoryManagerComponent_eventGetItemsWithIncompleteStacks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetItemsWithIncompleteStacks)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetItemsWithIncompleteStacks(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetItemsWithIncompleteStacks

// Begin Class UNinjaInventoryManagerComponent Function GetLayout
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics
{
	struct NinjaInventoryManagerComponent_eventGetLayout_Parms
	{
		const UNinjaInventoryLayoutDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides the layout assigned to this inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Layout" },
		{ "ToolTip", "Provides the layout assigned to this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetLayout_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetLayout", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::NinjaInventoryManagerComponent_eventGetLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::NinjaInventoryManagerComponent_eventGetLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryLayoutDataAsset**)Z_Param__Result=P_THIS->GetLayout();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetLayout

// Begin Class UNinjaInventoryManagerComponent Function GetLootableItems
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics
{
	struct NinjaInventoryManagerComponent_eventGetLootableItems_Parms
	{
		TArray<UNinjaInventoryItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Retrieves all items in this inventory that can be looted.\n\x09 * This excludes any actual roll for drop rates. It's just a flat view of items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Items" },
		{ "ToolTip", "Retrieves all items in this inventory that can be looted.\nThis excludes any actual roll for drop rates. It's just a flat view of items." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetLootableItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetLootableItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::NinjaInventoryManagerComponent_eventGetLootableItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::NinjaInventoryManagerComponent_eventGetLootableItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetLootableItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItem*>*)Z_Param__Result=P_THIS->GetLootableItems();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetLootableItems

// Begin Class UNinjaInventoryManagerComponent Function GetPrimaryContainerForItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics
{
	struct NinjaInventoryManagerComponent_eventGetPrimaryContainerForItem_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Provides the container cached for a given item.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item stored in the container.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Cached container storing the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Container" },
		{ "ToolTip", "Provides the container cached for a given item.\n\n@param Item                                  Item stored in the container.\n@return                                              Cached container storing the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetPrimaryContainerForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventGetPrimaryContainerForItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "GetPrimaryContainerForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::NinjaInventoryManagerComponent_eventGetPrimaryContainerForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::NinjaInventoryManagerComponent_eventGetPrimaryContainerForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execGetPrimaryContainerForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetPrimaryContainerForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function GetPrimaryContainerForItem

// Begin Class UNinjaInventoryManagerComponent Function HasContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventHasContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Evaluates if this Inventory owns the provided Container.\n\x09 *\n\x09 * @param Container\x09\x09\x09\x09""Container to evaluate.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if this inventory has the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Has Container?" },
		{ "ToolTip", "Evaluates if this Inventory owns the provided Container.\n\n@param Container                             Container to evaluate.\n@return                                              True if this inventory has the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventHasContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventHasContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventHasContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "HasContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NinjaInventoryManagerComponent_eventHasContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::NinjaInventoryManagerComponent_eventHasContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execHasContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function HasContainer

// Begin Class UNinjaInventoryManagerComponent Function HasItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics
{
	struct NinjaInventoryManagerComponent_eventHasItem_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Evaluates if this Inventory owns the provided Item.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item to evaluate.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if this inventory has the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Has Item?" },
		{ "ToolTip", "Evaluates if this Inventory owns the provided Item.\n\n@param Item                                  Item to evaluate.\n@return                                              True if this inventory has the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventHasItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventHasItem_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "HasItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NinjaInventoryManagerComponent_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::NinjaInventoryManagerComponent_eventHasItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execHasItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function HasItem

// Begin Class UNinjaInventoryManagerComponent Function InitializeInventory
static const FName NAME_UNinjaInventoryManagerComponent_InitializeInventory = FName(TEXT("InitializeInventory"));
void UNinjaInventoryManagerComponent::InitializeInventory()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_InitializeInventory);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeInventory_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Effectively initializes the Inventory, once the Ability System Component is ready.\n\x09 * Only executes if the inventory has not been initialized yet. Requires authority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Effectively initializes the Inventory, once the Ability System Component is ready.\nOnly executes if the inventory has not been initialized yet. Requires authority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "InitializeInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execInitializeInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeInventory_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function InitializeInventory

// Begin Class UNinjaInventoryManagerComponent Function IsDefaultContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventIsDefaultContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Checks if a given container is a default container, based on the layout's query.\n\x09 *\n\x09 * @param Container\x09\x09\x09\x09""Container to evaluate.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the container is considered a default one. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ReturnDisplayName", "Default Container?" },
		{ "ToolTip", "Checks if a given container is a default container, based on the layout's query.\n\n@param Container                             Container to evaluate.\n@return                                              True if the container is considered a default one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventIsDefaultContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventIsDefaultContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventIsDefaultContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "IsDefaultContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NinjaInventoryManagerComponent_eventIsDefaultContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::NinjaInventoryManagerComponent_eventIsDefaultContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execIsDefaultContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDefaultContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function IsDefaultContainer

// Begin Class UNinjaInventoryManagerComponent Function IsInventoryInitialized
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics
{
	struct NinjaInventoryManagerComponent_eventIsInventoryInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Checks if the inventory is initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Checks if the inventory is initialized." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryManagerComponent_eventIsInventoryInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryManagerComponent_eventIsInventoryInitialized_Parms), &Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "IsInventoryInitialized", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::NinjaInventoryManagerComponent_eventIsInventoryInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::NinjaInventoryManagerComponent_eventIsInventoryInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execIsInventoryInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInventoryInitialized();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function IsInventoryInitialized

// Begin Class UNinjaInventoryManagerComponent Function LoadContainerRecord
struct NinjaInventoryManagerComponent_eventLoadContainerRecord_Parms
{
	FInventoryContainerRecord Record;
};
static const FName NAME_UNinjaInventoryManagerComponent_LoadContainerRecord = FName(TEXT("LoadContainerRecord"));
void UNinjaInventoryManagerComponent::LoadContainerRecord(FInventoryContainerRecord const& Record)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_LoadContainerRecord);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryManagerComponent_eventLoadContainerRecord_Parms Parms;
		Parms.Record=Record;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		LoadContainerRecord_Implementation(Record);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Loads a container record into the inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Loads a container record into the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Record_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Record;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventLoadContainerRecord_Parms, Record), Z_Construct_UScriptStruct_FInventoryContainerRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Record_MetaData), NewProp_Record_MetaData) }; // 2315677879
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::NewProp_Record,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "LoadContainerRecord", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventLoadContainerRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventLoadContainerRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execLoadContainerRecord)
{
	P_GET_STRUCT_REF(FInventoryContainerRecord,Z_Param_Out_Record);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadContainerRecord_Implementation(Z_Param_Out_Record);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function LoadContainerRecord

// Begin Class UNinjaInventoryManagerComponent Function LoadInventory
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics
{
	struct NinjaInventoryManagerComponent_eventLoadInventory_Parms
	{
		FInventoryManagerRecord InventoryRecord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Restores this inventory data using the provided record.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Restores this inventory data using the provided record." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::NewProp_InventoryRecord = { "InventoryRecord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventLoadInventory_Parms, InventoryRecord), Z_Construct_UScriptStruct_FInventoryManagerRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryRecord_MetaData), NewProp_InventoryRecord_MetaData) }; // 1373499037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::NewProp_InventoryRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "LoadInventory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::NinjaInventoryManagerComponent_eventLoadInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::NinjaInventoryManagerComponent_eventLoadInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execLoadInventory)
{
	P_GET_STRUCT_REF(FInventoryManagerRecord,Z_Param_Out_InventoryRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadInventory(Z_Param_Out_InventoryRecord);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function LoadInventory

// Begin Class UNinjaInventoryManagerComponent Function LoadItemRecord
struct NinjaInventoryManagerComponent_eventLoadItemRecord_Parms
{
	FInventoryItemRecord Record;
};
static const FName NAME_UNinjaInventoryManagerComponent_LoadItemRecord = FName(TEXT("LoadItemRecord"));
void UNinjaInventoryManagerComponent::LoadItemRecord(FInventoryItemRecord const& Record)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_LoadItemRecord);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryManagerComponent_eventLoadItemRecord_Parms Parms;
		Parms.Record=Record;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		LoadItemRecord_Implementation(Record);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Loads an item record into the inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Loads an item record into the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Record_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Record;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventLoadItemRecord_Parms, Record), Z_Construct_UScriptStruct_FInventoryItemRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Record_MetaData), NewProp_Record_MetaData) }; // 3343316390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::NewProp_Record,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "LoadItemRecord", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventLoadItemRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventLoadItemRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execLoadItemRecord)
{
	P_GET_STRUCT_REF(FInventoryItemRecord,Z_Param_Out_Record);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadItemRecord_Implementation(Z_Param_Out_Record);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function LoadItemRecord

// Begin Class UNinjaInventoryManagerComponent Function MoveCachedItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics
{
	struct NinjaInventoryManagerComponent_eventMoveCachedItem_Parms
	{
		FGuid ItemId;
		FGuid ContainerId;
		int32 Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Caches information about an item that has been stored to a container.\n\x09 * \n\x09 * @param ItemId\x09\x09\x09\x09Item that is the key to this cache entry. \n\x09 * @param ContainerId\x09\x09\x09""Container assigned to the item.\n\x09 * @param Position\x09\x09\x09\x09Position the item occupies in the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Caches information about an item that has been stored to a container.\n\n@param ItemId                                Item that is the key to this cache entry.\n@param ContainerId                   Container assigned to the item.\n@param Position                              Position the item occupies in the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventMoveCachedItem_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventMoveCachedItem_Parms, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerId_MetaData), NewProp_ContainerId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventMoveCachedItem_Parms, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NewProp_ContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "MoveCachedItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NinjaInventoryManagerComponent_eventMoveCachedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::NinjaInventoryManagerComponent_eventMoveCachedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execMoveCachedItem)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ContainerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveCachedItem(Z_Param_Out_ItemId,Z_Param_Out_ContainerId,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function MoveCachedItem

// Begin Class UNinjaInventoryManagerComponent Function OnPlayerStatePawnSet
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics
{
	struct NinjaInventoryManagerComponent_eventOnPlayerStatePawnSet_Parms
	{
		APlayerState* Player;
		APawn* NewPawn;
		APawn* OldPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the Pawn being set in the owning Player State.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Reacts to the Pawn being set in the owning Player State." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventOnPlayerStatePawnSet_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventOnPlayerStatePawnSet_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventOnPlayerStatePawnSet_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NewProp_NewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NewProp_OldPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "OnPlayerStatePawnSet", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NinjaInventoryManagerComponent_eventOnPlayerStatePawnSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::NinjaInventoryManagerComponent_eventOnPlayerStatePawnSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execOnPlayerStatePawnSet)
{
	P_GET_OBJECT(APlayerState,Z_Param_Player);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerStatePawnSet(Z_Param_Player,Z_Param_NewPawn,Z_Param_OldPawn);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function OnPlayerStatePawnSet

// Begin Class UNinjaInventoryManagerComponent Function OnRep_InitializationState
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notifies about changes in the inventory's initialization state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Notifies about changes in the inventory's initialization state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "OnRep_InitializationState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execOnRep_InitializationState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InitializationState();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function OnRep_InitializationState

// Begin Class UNinjaInventoryManagerComponent Function PerformFragmentOperation
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics
{
	struct NinjaInventoryManagerComponent_eventPerformFragmentOperation_Parms
	{
		UNinjaInventoryItemFragment* Fragment;
		TInstancedStruct<FInventoryFragmentPayload> Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Executes an operation on a fragment that implements the Operable Item Interface.\n\x09 * \n\x09 * This function will manage network RPCs as necessary, meaning that this should be the\n\x09 * main entry-point for all fragment operations that must be replicated or authoritative.\n\x09 *\n\x09 * @param Fragment\x09\x09\x09\x09""Fragment that will ultimately execute the operation.\n\x09 * @param Payload\x09\x09\x09\x09Information used by the fragment to perform the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Executes an operation on a fragment that implements the Operable Item Interface.\n\nThis function will manage network RPCs as necessary, meaning that this should be the\nmain entry-point for all fragment operations that must be replicated or authoritative.\n\n@param Fragment                              Fragment that will ultimately execute the operation.\n@param Payload                               Information used by the fragment to perform the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventPerformFragmentOperation_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventPerformFragmentOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "PerformFragmentOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::NinjaInventoryManagerComponent_eventPerformFragmentOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::NinjaInventoryManagerComponent_eventPerformFragmentOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execPerformFragmentOperation)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformFragmentOperation(Z_Param_Fragment,Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function PerformFragmentOperation

// Begin Class UNinjaInventoryManagerComponent Function PerformFragmentOperationOnItems
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics
{
	struct NinjaInventoryManagerComponent_eventPerformFragmentOperationOnItems_Parms
	{
		UNinjaInventoryItem* Source;
		UNinjaInventoryItem* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Evaluates which operation can be performed between items, considering available fragments.\n\x09 *\n\x09 * The actual evaluation/execution happens in the internal version of this method, which can\n\x09 * be overriden to cover more scenarios, without needing to worry about the authority flow.\n\x09 * \n\x09 * @param Source\x09\x09\x09\x09Source item that will provide the fragment and receive the operation.\n\x09 * @param Target\x09\x09\x09\x09Target item that will be affected by the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Evaluates which operation can be performed between items, considering available fragments.\n\nThe actual evaluation/execution happens in the internal version of this method, which can\nbe overriden to cover more scenarios, without needing to worry about the authority flow.\n\n@param Source                                Source item that will provide the fragment and receive the operation.\n@param Target                                Target item that will be affected by the operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventPerformFragmentOperationOnItems_Parms, Source), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventPerformFragmentOperationOnItems_Parms, Target), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "PerformFragmentOperationOnItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::NinjaInventoryManagerComponent_eventPerformFragmentOperationOnItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::NinjaInventoryManagerComponent_eventPerformFragmentOperationOnItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execPerformFragmentOperationOnItems)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Source);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformFragmentOperationOnItems(Z_Param_Source,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function PerformFragmentOperationOnItems

// Begin Class UNinjaInventoryManagerComponent Function ReceiveLoot
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics
{
	struct NinjaInventoryManagerComponent_eventReceiveLoot_Parms
	{
		UNinjaInventoryLootComponent* Source;
		TArray<UNinjaInventoryLoot*> SelectedLoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Receives loot that has been previously requested.\n\x09 *\n\x09 * @param Source\x09\x09\x09Loot Component that generated this loot.\n\x09 * @param SelectedLoot\x09\x09""All loot that has been selected for this source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Receives loot that has been previously requested.\n\n@param Source                        Loot Component that generated this loot.\n@param SelectedLoot          All loot that has been selected for this source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventReceiveLoot_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventReceiveLoot_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NewProp_SelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "ReceiveLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NinjaInventoryManagerComponent_eventReceiveLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::NinjaInventoryManagerComponent_eventReceiveLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execReceiveLoot)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_Source);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_SelectedLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveLoot(Z_Param_Source,Z_Param_Out_SelectedLoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function ReceiveLoot

// Begin Class UNinjaInventoryManagerComponent Function RemoveContainer
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics
{
	struct NinjaInventoryManagerComponent_eventRemoveContainer_Parms
	{
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Removes a Container from this Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Removes a Container from this Inventory Manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "RemoveContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::NinjaInventoryManagerComponent_eventRemoveContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::NinjaInventoryManagerComponent_eventRemoveContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execRemoveContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function RemoveContainer

// Begin Class UNinjaInventoryManagerComponent Function RemoveContainerById
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics
{
	struct NinjaInventoryManagerComponent_eventRemoveContainerById_Parms
	{
		FGuid ContainerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Removes an Item from this Inventory Manager, by its unique ID.\n\x09 *\n\x09 * @param ContainerId\x09ID of the container to be removed, must be assigned to this inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Removes an Item from this Inventory Manager, by its unique ID.\n\n@param ContainerId   ID of the container to be removed, must be assigned to this inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveContainerById_Parms, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::NewProp_ContainerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "RemoveContainerById", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::NinjaInventoryManagerComponent_eventRemoveContainerById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::NinjaInventoryManagerComponent_eventRemoveContainerById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execRemoveContainerById)
{
	P_GET_STRUCT(FGuid,Z_Param_ContainerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveContainerById(Z_Param_ContainerId);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function RemoveContainerById

// Begin Class UNinjaInventoryManagerComponent Function RemoveContainersFromItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics
{
	struct NinjaInventoryManagerComponent_eventRemoveContainersFromItem_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Removes all containers added by an item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Removes all containers added by an item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveContainersFromItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "RemoveContainersFromItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::NinjaInventoryManagerComponent_eventRemoveContainersFromItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::NinjaInventoryManagerComponent_eventRemoveContainersFromItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execRemoveContainersFromItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveContainersFromItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function RemoveContainersFromItem

// Begin Class UNinjaInventoryManagerComponent Function RemoveItem
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics
{
	struct NinjaInventoryManagerComponent_eventRemoveItem_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Removes an Item from this Inventory Manager.\n\x09 *\n\x09 * @param Item\x09\x09\x09Item to be removed, must be assigned to this inventory.\n\x09 * @param Quantity\x09\x09Quantity removed if the item has a stack. Zero means all.\n\x09 */" },
		{ "CPP_Default_Quantity", "0" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Removes an Item from this Inventory Manager.\n\n@param Item                  Item to be removed, must be assigned to this inventory.\n@param Quantity              Quantity removed if the item has a stack. Zero means all." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::NinjaInventoryManagerComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::NinjaInventoryManagerComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execRemoveItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItem(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function RemoveItem

// Begin Class UNinjaInventoryManagerComponent Function RemoveItemById
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics
{
	struct NinjaInventoryManagerComponent_eventRemoveItemById_Parms
	{
		FGuid ItemId;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Removes an Item from this Inventory Manager, by its unique ID.\n\x09 *\n\x09 * @param ItemId\x09\x09ID of the item to be removed, must be assigned to this inventory.\n\x09 * @param Quantity\x09\x09Quantity removed if the item has a stack. Zero means all.\n\x09 */" },
		{ "CPP_Default_Quantity", "0" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Removes an Item from this Inventory Manager, by its unique ID.\n\n@param ItemId                ID of the item to be removed, must be assigned to this inventory.\n@param Quantity              Quantity removed if the item has a stack. Zero means all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveItemById_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventRemoveItemById_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "RemoveItemById", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::NinjaInventoryManagerComponent_eventRemoveItemById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::NinjaInventoryManagerComponent_eventRemoveItemById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execRemoveItemById)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemById(Z_Param_Out_ItemId,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function RemoveItemById

// Begin Class UNinjaInventoryManagerComponent Function ResetInventory
static const FName NAME_UNinjaInventoryManagerComponent_ResetInventory = FName(TEXT("ResetInventory"));
void UNinjaInventoryManagerComponent::ResetInventory()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_ResetInventory);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ResetInventory_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Resets the inventory to an empty state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Resets the inventory to an empty state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "ResetInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execResetInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInventory_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function ResetInventory

// Begin Class UNinjaInventoryManagerComponent Function Server_InitializeDefaultItems
static const FName NAME_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems = FName(TEXT("Server_InitializeDefaultItems"));
void UNinjaInventoryManagerComponent::Server_InitializeDefaultItems()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Requests the initialization of items from the client.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Requests the initialization of items from the client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "Server_InitializeDefaultItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execServer_InitializeDefaultItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_InitializeDefaultItems_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_InitializeDefaultItems_Validate"));
		return;
	}
	P_THIS->Server_InitializeDefaultItems_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function Server_InitializeDefaultItems

// Begin Class UNinjaInventoryManagerComponent Function Server_PerformFragmentOperation
struct NinjaInventoryManagerComponent_eventServer_PerformFragmentOperation_Parms
{
	UNinjaInventoryItemFragment* Fragment;
	TInstancedStruct<FInventoryFragmentPayload> Payload;
};
static const FName NAME_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation = FName(TEXT("Server_PerformFragmentOperation"));
void UNinjaInventoryManagerComponent::Server_PerformFragmentOperation(UNinjaInventoryItemFragment* Fragment, TInstancedStruct<FInventoryFragmentPayload> const& Payload)
{
	NinjaInventoryManagerComponent_eventServer_PerformFragmentOperation_Parms Parms;
	Parms.Fragment=Fragment;
	Parms.Payload=Payload;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends a server RPC for the fragment operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Sends a server RPC for the fragment operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperation_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "Server_PerformFragmentOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execServer_PerformFragmentOperation)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_GET_STRUCT(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_PerformFragmentOperation_Validate(Z_Param_Fragment,Z_Param_Payload))
	{
		RPC_ValidateFailed(TEXT("Server_PerformFragmentOperation_Validate"));
		return;
	}
	P_THIS->Server_PerformFragmentOperation_Implementation(Z_Param_Fragment,Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function Server_PerformFragmentOperation

// Begin Class UNinjaInventoryManagerComponent Function Server_PerformFragmentOperationOnItems
struct NinjaInventoryManagerComponent_eventServer_PerformFragmentOperationOnItems_Parms
{
	UNinjaInventoryItem* Source;
	UNinjaInventoryItem* Target;
};
static const FName NAME_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems = FName(TEXT("Server_PerformFragmentOperationOnItems"));
void UNinjaInventoryManagerComponent::Server_PerformFragmentOperationOnItems(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target)
{
	NinjaInventoryManagerComponent_eventServer_PerformFragmentOperationOnItems_Parms Parms;
	Parms.Source=Source;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends a server RPC for the best fragment operation found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Sends a server RPC for the best fragment operation found." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperationOnItems_Parms, Source), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperationOnItems_Parms, Target), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "Server_PerformFragmentOperationOnItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperationOnItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventServer_PerformFragmentOperationOnItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execServer_PerformFragmentOperationOnItems)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Source);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_PerformFragmentOperationOnItems_Validate(Z_Param_Source,Z_Param_Target))
	{
		RPC_ValidateFailed(TEXT("Server_PerformFragmentOperationOnItems_Validate"));
		return;
	}
	P_THIS->Server_PerformFragmentOperationOnItems_Implementation(Z_Param_Source,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function Server_PerformFragmentOperationOnItems

// Begin Class UNinjaInventoryManagerComponent Function Server_TryPerformOperation
struct NinjaInventoryManagerComponent_eventServer_TryPerformOperation_Parms
{
	TInstancedStruct<FInventoryFragmentPayload> Payload;
};
static const FName NAME_UNinjaInventoryManagerComponent_Server_TryPerformOperation = FName(TEXT("Server_TryPerformOperation"));
void UNinjaInventoryManagerComponent::Server_TryPerformOperation(TInstancedStruct<FInventoryFragmentPayload> const& Payload)
{
	NinjaInventoryManagerComponent_eventServer_TryPerformOperation_Parms Parms;
	Parms.Payload=Payload;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerComponent_Server_TryPerformOperation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends a server RPC for an operation payload that can be used by any compatible fragments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Sends a server RPC for an operation payload that can be used by any compatible fragments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventServer_TryPerformOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "Server_TryPerformOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::PropPointers), sizeof(NinjaInventoryManagerComponent_eventServer_TryPerformOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerComponent_eventServer_TryPerformOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execServer_TryPerformOperation)
{
	P_GET_STRUCT(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_TryPerformOperation_Validate(Z_Param_Payload))
	{
		RPC_ValidateFailed(TEXT("Server_TryPerformOperation_Validate"));
		return;
	}
	P_THIS->Server_TryPerformOperation_Implementation(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function Server_TryPerformOperation

// Begin Class UNinjaInventoryManagerComponent Function TryInitializeInventory
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Initializes this Inventory Manager, setting an avatar for it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Initializes this Inventory Manager, setting an avatar for it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "TryInitializeInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execTryInitializeInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryInitializeInventory();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function TryInitializeInventory

// Begin Class UNinjaInventoryManagerComponent Function TryPerformOperation
struct Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics
{
	struct NinjaInventoryManagerComponent_eventTryPerformOperation_Parms
	{
		TInstancedStruct<FInventoryFragmentPayload> Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Executes an operation on a fragment that implements the Operable Item Interface.\n\x09 *\n\x09 * All fragments able to use the payload will be triggered.\n\x09 * \n\x09 * This function will manage network RPCs as necessary, meaning that this should be the\n\x09 * main entry-point for all fragment operations that must be replicated or authoritative.\n\x09 *\n\x09 * @param Payload\x09\x09\x09\x09Information used by the fragment to perform the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Executes an operation on a fragment that implements the Operable Item Interface.\n\nAll fragments able to use the payload will be triggered.\n\nThis function will manage network RPCs as necessary, meaning that this should be the\nmain entry-point for all fragment operations that must be replicated or authoritative.\n\n@param Payload                               Information used by the fragment to perform the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerComponent_eventTryPerformOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerComponent, nullptr, "TryPerformOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::NinjaInventoryManagerComponent_eventTryPerformOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::NinjaInventoryManagerComponent_eventTryPerformOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerComponent::execTryPerformOperation)
{
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryPerformOperation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerComponent Function TryPerformOperation

// Begin Class UNinjaInventoryManagerComponent
void UNinjaInventoryManagerComponent::StaticRegisterNativesUNinjaInventoryManagerComponent()
{
	UClass* Class = UNinjaInventoryManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddContainer", &UNinjaInventoryManagerComponent::execAddContainer },
		{ "AddItem", &UNinjaInventoryManagerComponent::execAddItem },
		{ "AddLoot", &UNinjaInventoryManagerComponent::execAddLoot },
		{ "AddPickup", &UNinjaInventoryManagerComponent::execAddPickup },
		{ "CanAddContainer", &UNinjaInventoryManagerComponent::execCanAddContainer },
		{ "CanAddItem", &UNinjaInventoryManagerComponent::execCanAddItem },
		{ "CanRelocateItemsInContainer", &UNinjaInventoryManagerComponent::execCanRelocateItemsInContainer },
		{ "Client_DismissLoot", &UNinjaInventoryManagerComponent::execClient_DismissLoot },
		{ "Client_ReceiveLoot", &UNinjaInventoryManagerComponent::execClient_ReceiveLoot },
		{ "ConvertLootToItemContext", &UNinjaInventoryManagerComponent::execConvertLootToItemContext },
		{ "ConvertPickupToItemContext", &UNinjaInventoryManagerComponent::execConvertPickupToItemContext },
		{ "CountAvailableSlotsForItem", &UNinjaInventoryManagerComponent::execCountAvailableSlotsForItem },
		{ "CountAvailableSlotsInContainer", &UNinjaInventoryManagerComponent::execCountAvailableSlotsInContainer },
		{ "CountContainerData", &UNinjaInventoryManagerComponent::execCountContainerData },
		{ "CountContainers", &UNinjaInventoryManagerComponent::execCountContainers },
		{ "CountItemData", &UNinjaInventoryManagerComponent::execCountItemData },
		{ "CountItems", &UNinjaInventoryManagerComponent::execCountItems },
		{ "CountItemsInContainer", &UNinjaInventoryManagerComponent::execCountItemsInContainer },
		{ "CountTotalSlotsInContainer", &UNinjaInventoryManagerComponent::execCountTotalSlotsInContainer },
		{ "CountTotalStacksForItem", &UNinjaInventoryManagerComponent::execCountTotalStacksForItem },
		{ "CreateContainerInstance", &UNinjaInventoryManagerComponent::execCreateContainerInstance },
		{ "CreateContainerRecord", &UNinjaInventoryManagerComponent::execCreateContainerRecord },
		{ "CreateItemInstance", &UNinjaInventoryManagerComponent::execCreateItemInstance },
		{ "CreateItemRecord", &UNinjaInventoryManagerComponent::execCreateItemRecord },
		{ "DismissLoot", &UNinjaInventoryManagerComponent::execDismissLoot },
		{ "EvictStoredItemId", &UNinjaInventoryManagerComponent::execEvictStoredItemId },
		{ "EvictStoredItemInstance", &UNinjaInventoryManagerComponent::execEvictStoredItemInstance },
		{ "GetAvailableContainersForItem", &UNinjaInventoryManagerComponent::execGetAvailableContainersForItem },
		{ "GetAvailableContainersForItemData", &UNinjaInventoryManagerComponent::execGetAvailableContainersForItemData },
		{ "GetContainer", &UNinjaInventoryManagerComponent::execGetContainer },
		{ "GetContainerRecordsForSerialization", &UNinjaInventoryManagerComponent::execGetContainerRecordsForSerialization },
		{ "GetContainers", &UNinjaInventoryManagerComponent::execGetContainers },
		{ "GetContainersByData", &UNinjaInventoryManagerComponent::execGetContainersByData },
		{ "GetContainersByQuery", &UNinjaInventoryManagerComponent::execGetContainersByQuery },
		{ "GetContainersOwnedByItem", &UNinjaInventoryManagerComponent::execGetContainersOwnedByItem },
		{ "GetDefaultContainer", &UNinjaInventoryManagerComponent::execGetDefaultContainer },
		{ "GetDefaultContainers", &UNinjaInventoryManagerComponent::execGetDefaultContainers },
		{ "GetFirstContainerByData", &UNinjaInventoryManagerComponent::execGetFirstContainerByData },
		{ "GetFirstItemByQuery", &UNinjaInventoryManagerComponent::execGetFirstItemByQuery },
		{ "GetInventoryAvatar", &UNinjaInventoryManagerComponent::execGetInventoryAvatar },
		{ "GetInventoryRecordForSerialization", &UNinjaInventoryManagerComponent::execGetInventoryRecordForSerialization },
		{ "GetItem", &UNinjaInventoryManagerComponent::execGetItem },
		{ "GetItemByContainerAndPosition", &UNinjaInventoryManagerComponent::execGetItemByContainerAndPosition },
		{ "GetItemByContainerDataAndPosition", &UNinjaInventoryManagerComponent::execGetItemByContainerDataAndPosition },
		{ "GetItemByOwnedContainer", &UNinjaInventoryManagerComponent::execGetItemByOwnedContainer },
		{ "GetItemRecordsForSerialization", &UNinjaInventoryManagerComponent::execGetItemRecordsForSerialization },
		{ "GetItems", &UNinjaInventoryManagerComponent::execGetItems },
		{ "GetItemsByContainer", &UNinjaInventoryManagerComponent::execGetItemsByContainer },
		{ "GetItemsByContainerData", &UNinjaInventoryManagerComponent::execGetItemsByContainerData },
		{ "GetItemsByData", &UNinjaInventoryManagerComponent::execGetItemsByData },
		{ "GetItemsByQuery", &UNinjaInventoryManagerComponent::execGetItemsByQuery },
		{ "GetItemsWithIncompleteStacks", &UNinjaInventoryManagerComponent::execGetItemsWithIncompleteStacks },
		{ "GetLayout", &UNinjaInventoryManagerComponent::execGetLayout },
		{ "GetLootableItems", &UNinjaInventoryManagerComponent::execGetLootableItems },
		{ "GetPrimaryContainerForItem", &UNinjaInventoryManagerComponent::execGetPrimaryContainerForItem },
		{ "HasContainer", &UNinjaInventoryManagerComponent::execHasContainer },
		{ "HasItem", &UNinjaInventoryManagerComponent::execHasItem },
		{ "InitializeInventory", &UNinjaInventoryManagerComponent::execInitializeInventory },
		{ "IsDefaultContainer", &UNinjaInventoryManagerComponent::execIsDefaultContainer },
		{ "IsInventoryInitialized", &UNinjaInventoryManagerComponent::execIsInventoryInitialized },
		{ "LoadContainerRecord", &UNinjaInventoryManagerComponent::execLoadContainerRecord },
		{ "LoadInventory", &UNinjaInventoryManagerComponent::execLoadInventory },
		{ "LoadItemRecord", &UNinjaInventoryManagerComponent::execLoadItemRecord },
		{ "MoveCachedItem", &UNinjaInventoryManagerComponent::execMoveCachedItem },
		{ "OnPlayerStatePawnSet", &UNinjaInventoryManagerComponent::execOnPlayerStatePawnSet },
		{ "OnRep_InitializationState", &UNinjaInventoryManagerComponent::execOnRep_InitializationState },
		{ "PerformFragmentOperation", &UNinjaInventoryManagerComponent::execPerformFragmentOperation },
		{ "PerformFragmentOperationOnItems", &UNinjaInventoryManagerComponent::execPerformFragmentOperationOnItems },
		{ "ReceiveLoot", &UNinjaInventoryManagerComponent::execReceiveLoot },
		{ "RemoveContainer", &UNinjaInventoryManagerComponent::execRemoveContainer },
		{ "RemoveContainerById", &UNinjaInventoryManagerComponent::execRemoveContainerById },
		{ "RemoveContainersFromItem", &UNinjaInventoryManagerComponent::execRemoveContainersFromItem },
		{ "RemoveItem", &UNinjaInventoryManagerComponent::execRemoveItem },
		{ "RemoveItemById", &UNinjaInventoryManagerComponent::execRemoveItemById },
		{ "ResetInventory", &UNinjaInventoryManagerComponent::execResetInventory },
		{ "Server_InitializeDefaultItems", &UNinjaInventoryManagerComponent::execServer_InitializeDefaultItems },
		{ "Server_PerformFragmentOperation", &UNinjaInventoryManagerComponent::execServer_PerformFragmentOperation },
		{ "Server_PerformFragmentOperationOnItems", &UNinjaInventoryManagerComponent::execServer_PerformFragmentOperationOnItems },
		{ "Server_TryPerformOperation", &UNinjaInventoryManagerComponent::execServer_TryPerformOperation },
		{ "TryInitializeInventory", &UNinjaInventoryManagerComponent::execTryInitializeInventory },
		{ "TryPerformOperation", &UNinjaInventoryManagerComponent::execTryPerformOperation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryManagerComponent);
UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister()
{
	return UNinjaInventoryManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages stored inventory items.\n */" },
		{ "IncludePath", "Components/NinjaInventoryManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages stored inventory items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryInitialized_MetaData[] = {
		{ "Comment", "/** Broadcasts the inventory that has been initialized. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts the inventory that has been initialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContainerAdded_MetaData[] = {
		{ "Comment", "/** Broadcasts a new container. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts a new container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContainerRemoved_MetaData[] = {
		{ "Comment", "/** Broadcasts a removed container. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts a removed container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[] = {
		{ "Comment", "/** Broadcasts an item added. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts an item added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemStorageChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts a change in the item's storage. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts a change in the item's storage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[] = {
		{ "Comment", "/** Broadcasts an item removed. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts an item removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLootReceived_MetaData[] = {
		{ "Comment", "/** Broadcasts loot being received. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts loot being received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLootDismissed_MetaData[] = {
		{ "Comment", "/** Broadcasts loot that has been discarded. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Broadcasts loot that has been discarded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemPollInterval_MetaData[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * How often the component will try to retrieve the Ability System Component from the avatar.\n\x09 * This only happens during the Inventory Initialization, when the ASC must be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "How often the component will try to retrieve the Ability System Component from the avatar.\nThis only happens during the Inventory Initialization, when the ASC must be available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemMaxWait_MetaData[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/**\n\x09 * Determines for how long the component will wait for the Ability System Component.\n\x09 * This only happens during the Inventory Initialization, when the ASC must be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Determines for how long the component will wait for the Ability System Component.\nThis only happens during the Inventory Initialization, when the ASC must be available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryLayout_MetaData[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/** Defines the layout for this inventory. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Defines the layout for this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItems_MetaData[] = {
		{ "Category", "Inventory Manager" },
		{ "Comment", "/** All items granted by default. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "All items granted by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredContainers_MetaData[] = {
		{ "Comment", "/** All containers in this inventory. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "All containers in this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredItems_MetaData[] = {
		{ "Comment", "/**\n\x09 * All items managed by this inventory.\n\x09 *\n\x09 * This list only contains items and no additional information that is not the item\n\x09 * instance itself, plus it's initial data. This is done in such way that allows\n\x09 * extensions of this component to just create new cached structures as needed.\n\x09 *\n\x09 * The base inventory has a cached structure like that, to store the relationships\n\x09 * between all items and containers, along with item positions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "All items managed by this inventory.\n\nThis list only contains items and no additional information that is not the item\ninstance itself, plus it's initial data. This is done in such way that allows\nextensions of this component to just create new cached structures as needed.\n\nThe base inventory has a cached structure like that, to store the relationships\nbetween all items and containers, along with item positions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializationState_MetaData[] = {
		{ "Comment", "/** Current state for the inventory initialization. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Current state for the inventory initialization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponentAction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Action that waits for the Ability System Component to be ready.\n\x09 * This is a pre-requisite for the Inventory Manager to initialize.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryManagerComponent.h" },
		{ "ToolTip", "Action that waits for the Ability System Component to be ready.\nThis is a pre-requisite for the Inventory Manager to initialize." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryInitialized;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContainerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContainerRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemStorageChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLootReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLootDismissed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilitySystemPollInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilitySystemMaxWait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryLayout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredContainers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredItems;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitializationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitializationState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponentAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddContainer, "AddContainer" }, // 1654319018
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddItem, "AddItem" }, // 1496349525
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddLoot, "AddLoot" }, // 1604461369
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_AddPickup, "AddPickup" }, // 1018521703
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddContainer, "CanAddContainer" }, // 1896209707
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanAddItem, "CanAddItem" }, // 756605174
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CanRelocateItemsInContainer, "CanRelocateItemsInContainer" }, // 1684161465
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_DismissLoot, "Client_DismissLoot" }, // 3859609653
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_Client_ReceiveLoot, "Client_ReceiveLoot" }, // 1262059585
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertLootToItemContext, "ConvertLootToItemContext" }, // 2633938168
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_ConvertPickupToItemContext, "ConvertPickupToItemContext" }, // 3335519954
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsForItem, "CountAvailableSlotsForItem" }, // 147889585
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountAvailableSlotsInContainer, "CountAvailableSlotsInContainer" }, // 1551104656
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainerData, "CountContainerData" }, // 1291131340
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountContainers, "CountContainers" }, // 4254708914
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemData, "CountItemData" }, // 3036163369
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItems, "CountItems" }, // 2386714667
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountItemsInContainer, "CountItemsInContainer" }, // 3384156885
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalSlotsInContainer, "CountTotalSlotsInContainer" }, // 2905227707
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CountTotalStacksForItem, "CountTotalStacksForItem" }, // 199287646
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerInstance, "CreateContainerInstance" }, // 2495177428
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateContainerRecord, "CreateContainerRecord" }, // 2529578281
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemInstance, "CreateItemInstance" }, // 2946499038
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_CreateItemRecord, "CreateItemRecord" }, // 3661450069
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_DismissLoot, "DismissLoot" }, // 19864467
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemId, "EvictStoredItemId" }, // 3261331356
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_EvictStoredItemInstance, "EvictStoredItemInstance" }, // 944823925
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItem, "GetAvailableContainersForItem" }, // 362789368
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetAvailableContainersForItemData, "GetAvailableContainersForItemData" }, // 907940334
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainer, "GetContainer" }, // 1857514195
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainerRecordsForSerialization, "GetContainerRecordsForSerialization" }, // 3076451531
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainers, "GetContainers" }, // 239596528
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByData, "GetContainersByData" }, // 3492878357
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersByQuery, "GetContainersByQuery" }, // 3846863769
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetContainersOwnedByItem, "GetContainersOwnedByItem" }, // 1551457946
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainer, "GetDefaultContainer" }, // 2680204099
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetDefaultContainers, "GetDefaultContainers" }, // 2010260427
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstContainerByData, "GetFirstContainerByData" }, // 3444538266
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetFirstItemByQuery, "GetFirstItemByQuery" }, // 3383936521
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryAvatar, "GetInventoryAvatar" }, // 3971184448
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetInventoryRecordForSerialization, "GetInventoryRecordForSerialization" }, // 640327324
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItem, "GetItem" }, // 380948103
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerAndPosition, "GetItemByContainerAndPosition" }, // 1503872272
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByContainerDataAndPosition, "GetItemByContainerDataAndPosition" }, // 3633438573
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemByOwnedContainer, "GetItemByOwnedContainer" }, // 595227860
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemRecordsForSerialization, "GetItemRecordsForSerialization" }, // 1338342000
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItems, "GetItems" }, // 3683138172
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainer, "GetItemsByContainer" }, // 1406263713
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByContainerData, "GetItemsByContainerData" }, // 966357120
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByData, "GetItemsByData" }, // 562451512
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsByQuery, "GetItemsByQuery" }, // 1198968092
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetItemsWithIncompleteStacks, "GetItemsWithIncompleteStacks" }, // 1570514137
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLayout, "GetLayout" }, // 2070933655
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetLootableItems, "GetLootableItems" }, // 35056360
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_GetPrimaryContainerForItem, "GetPrimaryContainerForItem" }, // 440263049
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasContainer, "HasContainer" }, // 512675924
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_HasItem, "HasItem" }, // 3089294067
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_InitializeInventory, "InitializeInventory" }, // 3781196426
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature, "InventoryContainerEventSignature__DelegateSignature" }, // 310943868
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature, "InventoryInitializedEventSignature__DelegateSignature" }, // 2341363927
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature, "InventoryItemEventSignature__DelegateSignature" }, // 2976291432
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature, "InventoryLootDismissedEventSignature__DelegateSignature" }, // 4196781463
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature, "InventoryLootReceivedEventSignature__DelegateSignature" }, // 260529632
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature, "InventoryStorageEventSignature__DelegateSignature" }, // 1214367671
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsDefaultContainer, "IsDefaultContainer" }, // 3306635676
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_IsInventoryInitialized, "IsInventoryInitialized" }, // 1376778128
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadContainerRecord, "LoadContainerRecord" }, // 1808826804
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadInventory, "LoadInventory" }, // 749623900
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_LoadItemRecord, "LoadItemRecord" }, // 2697162880
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_MoveCachedItem, "MoveCachedItem" }, // 1983851278
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnPlayerStatePawnSet, "OnPlayerStatePawnSet" }, // 2401673390
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_OnRep_InitializationState, "OnRep_InitializationState" }, // 1866336189
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperation, "PerformFragmentOperation" }, // 1397338328
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_PerformFragmentOperationOnItems, "PerformFragmentOperationOnItems" }, // 655790528
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_ReceiveLoot, "ReceiveLoot" }, // 3531852484
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainer, "RemoveContainer" }, // 3883254581
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainerById, "RemoveContainerById" }, // 2901923433
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveContainersFromItem, "RemoveContainersFromItem" }, // 3096206168
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItem, "RemoveItem" }, // 4154197859
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_RemoveItemById, "RemoveItemById" }, // 1804955674
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_ResetInventory, "ResetInventory" }, // 3860755975
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_InitializeDefaultItems, "Server_InitializeDefaultItems" }, // 2964013341
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperation, "Server_PerformFragmentOperation" }, // 2512217741
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_PerformFragmentOperationOnItems, "Server_PerformFragmentOperationOnItems" }, // 1965303062
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_Server_TryPerformOperation, "Server_TryPerformOperation" }, // 3517841966
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryInitializeInventory, "TryInitializeInventory" }, // 833565948
		{ &Z_Construct_UFunction_UNinjaInventoryManagerComponent_TryPerformOperation, "TryPerformOperation" }, // 890155224
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnInventoryInitialized = { "OnInventoryInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnInventoryInitialized), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryInitialized_MetaData), NewProp_OnInventoryInitialized_MetaData) }; // 2341363927
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnContainerAdded = { "OnContainerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnContainerAdded), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContainerAdded_MetaData), NewProp_OnContainerAdded_MetaData) }; // 310943868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnContainerRemoved = { "OnContainerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnContainerRemoved), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContainerRemoved_MetaData), NewProp_OnContainerRemoved_MetaData) }; // 310943868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnItemAdded), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAdded_MetaData), NewProp_OnItemAdded_MetaData) }; // 2976291432
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnItemStorageChanged = { "OnItemStorageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnItemStorageChanged), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemStorageChanged_MetaData), NewProp_OnItemStorageChanged_MetaData) }; // 1214367671
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnItemRemoved), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemoved_MetaData), NewProp_OnItemRemoved_MetaData) }; // 2976291432
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnLootReceived = { "OnLootReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnLootReceived), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLootReceived_MetaData), NewProp_OnLootReceived_MetaData) }; // 260529632
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnLootDismissed = { "OnLootDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, OnLootDismissed), Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLootDismissed_MetaData), NewProp_OnLootDismissed_MetaData) }; // 4196781463
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_AbilitySystemPollInterval = { "AbilitySystemPollInterval", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, AbilitySystemPollInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemPollInterval_MetaData), NewProp_AbilitySystemPollInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_AbilitySystemMaxWait = { "AbilitySystemMaxWait", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, AbilitySystemMaxWait), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemMaxWait_MetaData), NewProp_AbilitySystemMaxWait_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_InventoryLayout = { "InventoryLayout", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, InventoryLayout), Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryLayout_MetaData), NewProp_InventoryLayout_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_DefaultItems_Inner = { "DefaultItems", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemContextEntry, METADATA_PARAMS(0, nullptr) }; // 1537086081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_DefaultItems = { "DefaultItems", nullptr, (EPropertyFlags)0x0020088000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, DefaultItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItems_MetaData), NewProp_DefaultItems_MetaData) }; // 1537086081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_StoredContainers = { "StoredContainers", nullptr, (EPropertyFlags)0x0020088000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, StoredContainers), Z_Construct_UScriptStruct_FInventoryContainerList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredContainers_MetaData), NewProp_StoredContainers_MetaData) }; // 3823888135
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_StoredItems = { "StoredItems", nullptr, (EPropertyFlags)0x0020088000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, StoredItems), Z_Construct_UScriptStruct_FInventoryItemList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredItems_MetaData), NewProp_StoredItems_MetaData) }; // 3187808380
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_InitializationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_InitializationState = { "InitializationState", "OnRep_InitializationState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, InitializationState), Z_Construct_UEnum_NinjaInventory_EInventoryInitializationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializationState_MetaData), NewProp_InitializationState_MetaData) }; // 1621466800
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_AbilityComponentAction = { "AbilityComponentAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryManagerComponent, AbilityComponentAction), Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponentAction_MetaData), NewProp_AbilityComponentAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnInventoryInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnContainerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnContainerRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnItemStorageChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnItemRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnLootReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_OnLootDismissed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_AbilitySystemPollInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_AbilitySystemMaxWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_InventoryLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_DefaultItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_DefaultItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_StoredContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_StoredItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_InitializationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_InitializationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::NewProp_AbilityComponentAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCoreComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::ClassParams = {
	&UNinjaInventoryManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryManagerComponent.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryManagerComponent>()
{
	return UNinjaInventoryManagerComponent::StaticClass();
}
void UNinjaInventoryManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StoredContainers(TEXT("StoredContainers"));
	static const FName Name_StoredItems(TEXT("StoredItems"));
	static const FName Name_InitializationState(TEXT("InitializationState"));
	const bool bIsValid = true
		&& Name_StoredContainers == ClassReps[(int32)ENetFields_Private::StoredContainers].Property->GetFName()
		&& Name_StoredItems == ClassReps[(int32)ENetFields_Private::StoredItems].Property->GetFName()
		&& Name_InitializationState == ClassReps[(int32)ENetFields_Private::InitializationState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaInventoryManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryManagerComponent);
UNinjaInventoryManagerComponent::~UNinjaInventoryManagerComponent() {}
// End Class UNinjaInventoryManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInventoryInitializationState_StaticEnum, TEXT("EInventoryInitializationState"), &Z_Registration_Info_UEnum_EInventoryInitializationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1621466800U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryManagerComponent, UNinjaInventoryManagerComponent::StaticClass, TEXT("UNinjaInventoryManagerComponent"), &Z_Registration_Info_UClass_UNinjaInventoryManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryManagerComponent), 2488389970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_1972306209(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

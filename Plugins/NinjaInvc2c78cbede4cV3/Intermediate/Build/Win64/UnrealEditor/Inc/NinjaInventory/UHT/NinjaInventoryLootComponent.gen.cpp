// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Components/NinjaInventoryLootComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryLootComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryLootCacheInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryLootComponent Function GetDefaultLootSelector
struct Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics
{
	struct NinjaInventoryLootComponent_eventGetDefaultLootSelector_Parms
	{
		const UNinjaInventoryLootSelector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Provides the default Loot Selector configured for the project.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Provides the default Loot Selector configured for the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventGetDefaultLootSelector_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootComponent, nullptr, "GetDefaultLootSelector", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::NinjaInventoryLootComponent_eventGetDefaultLootSelector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::NinjaInventoryLootComponent_eventGetDefaultLootSelector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootComponent::execGetDefaultLootSelector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryLootSelector**)Z_Param__Result=UNinjaInventoryLootComponent::GetDefaultLootSelector();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootComponent Function GetDefaultLootSelector

// Begin Class UNinjaInventoryLootComponent Function GetLootCache
struct Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics
{
	struct NinjaInventoryLootComponent_eventGetLootCache_Parms
	{
		TScriptInterface<IInventoryLootCacheInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Retrieves the object used for loot cache.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Retrieves the object used for loot cache." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventGetLootCache_Parms, ReturnValue), Z_Construct_UClass_UInventoryLootCacheInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootComponent, nullptr, "GetLootCache", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::NinjaInventoryLootComponent_eventGetLootCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::NinjaInventoryLootComponent_eventGetLootCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootComponent::execGetLootCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IInventoryLootCacheInterface>*)Z_Param__Result=P_THIS->GetLootCache();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootComponent Function GetLootCache

// Begin Class UNinjaInventoryLootComponent Function PerformLootRolls
struct Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics
{
	struct NinjaInventoryLootComponent_eventPerformLootRolls_Parms
	{
		UNinjaInventoryManagerComponent* Requester;
		UNinjaInventoryItem* Item;
		const UNinjaInventoryLootSelector* DefaultSelector;
		TArray<UNinjaInventoryLoot*> SelectedLoot;
		bool bOutDropped;
		int32 OutQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Evaluates a specific lootable item instance and adds it to the loot table.\n\x09 *\n\x09 * @param Requester\x09\x09\x09Inventory Manager requesting the item.\n\x09 * @param Item\x09\x09\x09\x09Item to evaluate for the loot.\n\x09 * @param DefaultSelector\x09""Default Loot Selector configured in the project.\n\x09 * @param SelectedLoot\x09\x09""Collection of loot to already selected.\n\x09 * @param bOutDropped\x09\x09Informs if the loot has dropped.\n\x09 * @param OutQuantity\x09\x09How many items dropped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Evaluates a specific lootable item instance and adds it to the loot table.\n\n@param Requester                     Inventory Manager requesting the item.\n@param Item                          Item to evaluate for the loot.\n@param DefaultSelector       Default Loot Selector configured in the project.\n@param SelectedLoot          Collection of loot to already selected.\n@param bOutDropped           Informs if the loot has dropped.\n@param OutQuantity           How many items dropped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSelector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static void NewProp_bOutDropped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutDropped;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventPerformLootRolls_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventPerformLootRolls_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_DefaultSelector = { "DefaultSelector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventPerformLootRolls_Parms, DefaultSelector), Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSelector_MetaData), NewProp_DefaultSelector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventPerformLootRolls_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_bOutDropped_SetBit(void* Obj)
{
	((NinjaInventoryLootComponent_eventPerformLootRolls_Parms*)Obj)->bOutDropped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_bOutDropped = { "bOutDropped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryLootComponent_eventPerformLootRolls_Parms), &Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_bOutDropped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_OutQuantity = { "OutQuantity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventPerformLootRolls_Parms, OutQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_DefaultSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_SelectedLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_bOutDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NewProp_OutQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootComponent, nullptr, "PerformLootRolls", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NinjaInventoryLootComponent_eventPerformLootRolls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::NinjaInventoryLootComponent_eventPerformLootRolls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootComponent::execPerformLootRolls)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryLootSelector,Z_Param_DefaultSelector);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_SelectedLoot);
	P_GET_UBOOL_REF(Z_Param_Out_bOutDropped);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformLootRolls(Z_Param_Requester,Z_Param_Item,Z_Param_DefaultSelector,Z_Param_Out_SelectedLoot,Z_Param_Out_bOutDropped,Z_Param_Out_OutQuantity);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootComponent Function PerformLootRolls

// Begin Class UNinjaInventoryLootComponent Function SelectLoot
struct Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics
{
	struct NinjaInventoryLootComponent_eventSelectLoot_Parms
	{
		UNinjaInventoryManagerComponent* Requester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Selects all lootable items from this inventory, applying their selectors.\n\x09 *\n\x09 * @param Requester\n\x09 *\x09\x09Inventory Manager requesting the loot. The selected loot will be provided to that\n\x09 *\x09\x09manager, via the \"ReceiveLoot\" method, using this manager as a source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Selects all lootable items from this inventory, applying their selectors.\n\n@param Requester\n             Inventory Manager requesting the loot. The selected loot will be provided to that\n             manager, via the \"ReceiveLoot\" method, using this manager as a source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventSelectLoot_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::NewProp_Requester,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootComponent, nullptr, "SelectLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::NinjaInventoryLootComponent_eventSelectLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::NinjaInventoryLootComponent_eventSelectLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootComponent::execSelectLoot)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectLoot(Z_Param_Requester);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootComponent Function SelectLoot

// Begin Class UNinjaInventoryLootComponent Function Server_SelectLoot
struct NinjaInventoryLootComponent_eventServer_SelectLoot_Parms
{
	UNinjaInventoryManagerComponent* Requester;
};
static const FName NAME_UNinjaInventoryLootComponent_Server_SelectLoot = FName(TEXT("Server_SelectLoot"));
void UNinjaInventoryLootComponent::Server_SelectLoot(UNinjaInventoryManagerComponent* Requester)
{
	NinjaInventoryLootComponent_eventServer_SelectLoot_Parms Parms;
	Parms.Requester=Requester;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryLootComponent_Server_SelectLoot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends a server RPC to select loot for a requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Sends a server RPC to select loot for a requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootComponent_eventServer_SelectLoot_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::NewProp_Requester,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootComponent, nullptr, "Server_SelectLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::PropPointers), sizeof(NinjaInventoryLootComponent_eventServer_SelectLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryLootComponent_eventServer_SelectLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootComponent::execServer_SelectLoot)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SelectLoot_Validate(Z_Param_Requester))
	{
		RPC_ValidateFailed(TEXT("Server_SelectLoot_Validate"));
		return;
	}
	P_THIS->Server_SelectLoot_Implementation(Z_Param_Requester);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootComponent Function Server_SelectLoot

// Begin Class UNinjaInventoryLootComponent
void UNinjaInventoryLootComponent::StaticRegisterNativesUNinjaInventoryLootComponent()
{
	UClass* Class = UNinjaInventoryLootComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultLootSelector", &UNinjaInventoryLootComponent::execGetDefaultLootSelector },
		{ "GetLootCache", &UNinjaInventoryLootComponent::execGetLootCache },
		{ "PerformLootRolls", &UNinjaInventoryLootComponent::execPerformLootRolls },
		{ "SelectLoot", &UNinjaInventoryLootComponent::execSelectLoot },
		{ "Server_SelectLoot", &UNinjaInventoryLootComponent::execServer_SelectLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryLootComponent);
UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister()
{
	return UNinjaInventoryLootComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryLootComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages loot tables.\n *\n * This is the simplest version of the Inventory Manager, that can be used by simpler actors\n * that won't need the full Inventory Structure but are still loot providers, such as common\n * chests or simpler AI enemies that won't need inventory/equipment.\n */" },
		{ "IncludePath", "Components/NinjaInventoryLootComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages loot tables.\n\nThis is the simplest version of the Inventory Manager, that can be used by simpler actors\nthat won't need the full Inventory Structure but are still loot providers, such as common\nchests or simpler AI enemies that won't need inventory/equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootTable_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/** Data table containing the loot available to this component. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NinjaInventory.InventoryLoot" },
		{ "ToolTip", "Data table containing the loot available to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootCacheClass_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/** Loot strategy for this inventory. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "MustImplement", "/Script/NinjaInventory.InventoryLootCacheInterface" },
		{ "ToolTip", "Loot strategy for this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRemoveLootFromInventory_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/**\n\x09 * Determines if items being looted should be removed from the owner's inventory.\n\x09 *\n\x09 * For players dropping their items, you probably want to set this to true. But for other\n\x09 * enemies, such as bosses, you might want to allow the same item to be dropped multiple times\n\x09 * for different players.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Determines if items being looted should be removed from the owner's inventory.\n\nFor players dropping their items, you probably want to set this to true. But for other\nenemies, such as bosses, you might want to allow the same item to be dropped multiple times\nfor different players." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootCache_MetaData[] = {
		{ "Comment", "/** Instance of the loot cache. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryLootComponent.h" },
		{ "ToolTip", "Instance of the loot cache." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LootTable;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LootCacheClass;
	static void NewProp_bShouldRemoveLootFromInventory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRemoveLootFromInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LootCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryLootComponent_GetDefaultLootSelector, "GetDefaultLootSelector" }, // 702196027
		{ &Z_Construct_UFunction_UNinjaInventoryLootComponent_GetLootCache, "GetLootCache" }, // 281454071
		{ &Z_Construct_UFunction_UNinjaInventoryLootComponent_PerformLootRolls, "PerformLootRolls" }, // 2427587260
		{ &Z_Construct_UFunction_UNinjaInventoryLootComponent_SelectLoot, "SelectLoot" }, // 2562811843
		{ &Z_Construct_UFunction_UNinjaInventoryLootComponent_Server_SelectLoot, "Server_SelectLoot" }, // 2386405253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryLootComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_LootTable = { "LootTable", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLootComponent, LootTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootTable_MetaData), NewProp_LootTable_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_LootCacheClass = { "LootCacheClass", nullptr, (EPropertyFlags)0x0024080002010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLootComponent, LootCacheClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootCacheClass_MetaData), NewProp_LootCacheClass_MetaData) };
void Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_bShouldRemoveLootFromInventory_SetBit(void* Obj)
{
	((UNinjaInventoryLootComponent*)Obj)->bShouldRemoveLootFromInventory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_bShouldRemoveLootFromInventory = { "bShouldRemoveLootFromInventory", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryLootComponent), &Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_bShouldRemoveLootFromInventory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRemoveLootFromInventory_MetaData), NewProp_bShouldRemoveLootFromInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_LootCache = { "LootCache", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLootComponent, LootCache), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootCache_MetaData), NewProp_LootCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_LootTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_LootCacheClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_bShouldRemoveLootFromInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::NewProp_LootCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCoreComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::ClassParams = {
	&UNinjaInventoryLootComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryLootComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryLootComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryLootComponent.OuterSingleton, Z_Construct_UClass_UNinjaInventoryLootComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryLootComponent.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryLootComponent>()
{
	return UNinjaInventoryLootComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryLootComponent);
UNinjaInventoryLootComponent::~UNinjaInventoryLootComponent() {}
// End Class UNinjaInventoryLootComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryLootComponent, UNinjaInventoryLootComponent::StaticClass, TEXT("UNinjaInventoryLootComponent"), &Z_Registration_Info_UClass_UNinjaInventoryLootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryLootComponent), 3668680002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_2849692084(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

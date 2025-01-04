// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/LootCaches/LootCache_None.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootCache_None() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryLootCacheInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootCache_None();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootCache_None_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class ULootCache_None Function CacheLootForRequester
struct Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics
{
	struct LootCache_None_eventCacheLootForRequester_Parms
	{
		const UNinjaInventoryManagerComponent* Requester;
		TArray<UNinjaInventoryLoot*> NewLoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot Cache" },
		{ "Comment", "/**\n\x09 * Caches loot for a given requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Caches loot for a given requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventCacheLootForRequester_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::NewProp_NewLoot_Inner = { "NewLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::NewProp_NewLoot = { "NewLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventCacheLootForRequester_Parms, NewLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLoot_MetaData), NewProp_NewLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::NewProp_NewLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::NewProp_NewLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_None, nullptr, "CacheLootForRequester", nullptr, nullptr, Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::LootCache_None_eventCacheLootForRequester_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::LootCache_None_eventCacheLootForRequester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_None_CacheLootForRequester()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_None_CacheLootForRequester_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_None::execCacheLootForRequester)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_NewLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CacheLootForRequester(Z_Param_Requester,Z_Param_Out_NewLoot);
	P_NATIVE_END;
}
// End Class ULootCache_None Function CacheLootForRequester

// Begin Class ULootCache_None Function ClearCachedLoot
struct Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics
{
	struct LootCache_None_eventClearCachedLoot_Parms
	{
		const UNinjaInventoryManagerComponent* Requester;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot Cache" },
		{ "Comment", "/**\n\x09 * Clears the current loot for a requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Clears the current loot for a requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventClearCachedLoot_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventClearCachedLoot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_None, nullptr, "ClearCachedLoot", nullptr, nullptr, Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::LootCache_None_eventClearCachedLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::LootCache_None_eventClearCachedLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_None_ClearCachedLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_None_ClearCachedLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_None::execClearCachedLoot)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ClearCachedLoot(Z_Param_Requester);
	P_NATIVE_END;
}
// End Class ULootCache_None Function ClearCachedLoot

// Begin Class ULootCache_None Function EvictLoot
struct LootCache_None_eventEvictLoot_Parms
{
	const UNinjaInventoryManagerComponent* Requester;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	LootCache_None_eventEvictLoot_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_ULootCache_None_EvictLoot = FName(TEXT("EvictLoot"));
int32 ULootCache_None::EvictLoot(const UNinjaInventoryManagerComponent* Requester)
{
	UFunction* Func = FindFunctionChecked(NAME_ULootCache_None_EvictLoot);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LootCache_None_eventEvictLoot_Parms Parms;
		Parms.Requester=Requester;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return EvictLoot_Implementation(Requester);
	}
}
struct Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Cache" },
		{ "Comment", "/**\n\x09 * Evicts loot assigned to a given requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Evicts loot assigned to a given requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventEvictLoot_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventEvictLoot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_None, nullptr, "EvictLoot", nullptr, nullptr, Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::PropPointers), sizeof(LootCache_None_eventEvictLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(LootCache_None_eventEvictLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_None_EvictLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_None_EvictLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_None::execEvictLoot)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EvictLoot_Implementation(Z_Param_Requester);
	P_NATIVE_END;
}
// End Class ULootCache_None Function EvictLoot

// Begin Class ULootCache_None Function FilterLootByRequester
struct LootCache_None_eventFilterLootByRequester_Parms
{
	const UNinjaInventoryManagerComponent* Requester;
	TArray<UNinjaInventoryLoot*> OutLoot;
};
static const FName NAME_ULootCache_None_FilterLootByRequester = FName(TEXT("FilterLootByRequester"));
void ULootCache_None::FilterLootByRequester(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const
{
	UFunction* Func = FindFunctionChecked(NAME_ULootCache_None_FilterLootByRequester);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LootCache_None_eventFilterLootByRequester_Parms Parms;
		Parms.Requester=Requester;
		Parms.OutLoot=OutLoot;
		const_cast<ULootCache_None*>(this)->ProcessEvent(Func,&Parms);
		OutLoot=Parms.OutLoot;
	}
	else
	{
		const_cast<ULootCache_None*>(this)->FilterLootByRequester_Implementation(Requester, OutLoot);
	}
}
struct Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Cache" },
		{ "Comment", "/**\n\x09 * Extension point to filter loot for a given requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Extension point to filter loot for a given requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventFilterLootByRequester_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::NewProp_OutLoot_Inner = { "OutLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::NewProp_OutLoot = { "OutLoot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventFilterLootByRequester_Parms, OutLoot), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::NewProp_OutLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::NewProp_OutLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_None, nullptr, "FilterLootByRequester", nullptr, nullptr, Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::PropPointers), sizeof(LootCache_None_eventFilterLootByRequester_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::Function_MetaDataParams) };
static_assert(sizeof(LootCache_None_eventFilterLootByRequester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_None_FilterLootByRequester()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_None_FilterLootByRequester_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_None::execFilterLootByRequester)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_OutLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FilterLootByRequester_Implementation(Z_Param_Requester,Z_Param_Out_OutLoot);
	P_NATIVE_END;
}
// End Class ULootCache_None Function FilterLootByRequester

// Begin Class ULootCache_None Function GetLootForRequester
struct Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics
{
	struct LootCache_None_eventGetLootForRequester_Parms
	{
		const UNinjaInventoryManagerComponent* Requester;
		TArray<UNinjaInventoryLoot*> OutLoot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot Cache" },
		{ "Comment", "/**\n\x09 * Provides the loot cached for a given requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Provides the loot cached for a given requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLoot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventGetLootForRequester_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_OutLoot_Inner = { "OutLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_OutLoot = { "OutLoot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventGetLootForRequester_Parms, OutLoot), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LootCache_None_eventGetLootForRequester_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LootCache_None_eventGetLootForRequester_Parms), &Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_OutLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_OutLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_None, nullptr, "GetLootForRequester", nullptr, nullptr, Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::LootCache_None_eventGetLootForRequester_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::LootCache_None_eventGetLootForRequester_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_None_GetLootForRequester()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_None_GetLootForRequester_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_None::execGetLootForRequester)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_OutLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLootForRequester(Z_Param_Requester,Z_Param_Out_OutLoot);
	P_NATIVE_END;
}
// End Class ULootCache_None Function GetLootForRequester

// Begin Class ULootCache_None Function SaveOrUpdateLoot
struct LootCache_None_eventSaveOrUpdateLoot_Parms
{
	const UNinjaInventoryManagerComponent* Requester;
	TArray<UNinjaInventoryLoot*> NewLoot;
};
static const FName NAME_ULootCache_None_SaveOrUpdateLoot = FName(TEXT("SaveOrUpdateLoot"));
void ULootCache_None::SaveOrUpdateLoot(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*> const& NewLoot)
{
	UFunction* Func = FindFunctionChecked(NAME_ULootCache_None_SaveOrUpdateLoot);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LootCache_None_eventSaveOrUpdateLoot_Parms Parms;
		Parms.Requester=Requester;
		Parms.NewLoot=NewLoot;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SaveOrUpdateLoot_Implementation(Requester, NewLoot);
	}
}
struct Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Cache" },
		{ "Comment", "/**\n\x09 * Saves or updates the loot for a given requester.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Saves or updates the loot for a given requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventSaveOrUpdateLoot_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::NewProp_NewLoot_Inner = { "NewLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::NewProp_NewLoot = { "NewLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_None_eventSaveOrUpdateLoot_Parms, NewLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLoot_MetaData), NewProp_NewLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::NewProp_NewLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::NewProp_NewLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_None, nullptr, "SaveOrUpdateLoot", nullptr, nullptr, Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::PropPointers), sizeof(LootCache_None_eventSaveOrUpdateLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(LootCache_None_eventSaveOrUpdateLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_None::execSaveOrUpdateLoot)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_NewLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveOrUpdateLoot_Implementation(Z_Param_Requester,Z_Param_Out_NewLoot);
	P_NATIVE_END;
}
// End Class ULootCache_None Function SaveOrUpdateLoot

// Begin Class ULootCache_None
void ULootCache_None::StaticRegisterNativesULootCache_None()
{
	UClass* Class = ULootCache_None::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CacheLootForRequester", &ULootCache_None::execCacheLootForRequester },
		{ "ClearCachedLoot", &ULootCache_None::execClearCachedLoot },
		{ "EvictLoot", &ULootCache_None::execEvictLoot },
		{ "FilterLootByRequester", &ULootCache_None::execFilterLootByRequester },
		{ "GetLootForRequester", &ULootCache_None::execGetLootForRequester },
		{ "SaveOrUpdateLoot", &ULootCache_None::execSaveOrUpdateLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootCache_None);
UClass* Z_Construct_UClass_ULootCache_None_NoRegister()
{
	return ULootCache_None::StaticClass();
}
struct Z_Construct_UClass_ULootCache_None_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Basic cache implementation for Loot that has been generated.\n *\n * In this basic implementation, Loot is never cached, meaning that every time loot is generated from a source to a\n * receiver, it will be generated from scratch and new loot will be picked-up.\n *\n * Other strategies might define that loot should be cached so the same loot is always retrieved and even past that,\n * define where loot will be stored (i.e. In Memory, Subsystem, Backend Server, etc.).\n */" },
		{ "DisplayName", "None" },
		{ "IncludePath", "GameFramework/LootCaches/LootCache_None.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_None.h" },
		{ "ToolTip", "Basic cache implementation for Loot that has been generated.\n\nIn this basic implementation, Loot is never cached, meaning that every time loot is generated from a source to a\nreceiver, it will be generated from scratch and new loot will be picked-up.\n\nOther strategies might define that loot should be cached so the same loot is always retrieved and even past that,\ndefine where loot will be stored (i.e. In Memory, Subsystem, Backend Server, etc.)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootCache_None_CacheLootForRequester, "CacheLootForRequester" }, // 2145300126
		{ &Z_Construct_UFunction_ULootCache_None_ClearCachedLoot, "ClearCachedLoot" }, // 2884090340
		{ &Z_Construct_UFunction_ULootCache_None_EvictLoot, "EvictLoot" }, // 1990750278
		{ &Z_Construct_UFunction_ULootCache_None_FilterLootByRequester, "FilterLootByRequester" }, // 2099064208
		{ &Z_Construct_UFunction_ULootCache_None_GetLootForRequester, "GetLootForRequester" }, // 1171126783
		{ &Z_Construct_UFunction_ULootCache_None_SaveOrUpdateLoot, "SaveOrUpdateLoot" }, // 1861343758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootCache_None>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULootCache_None_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootCache_None_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULootCache_None_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryLootCacheInterface_NoRegister, (int32)VTABLE_OFFSET(ULootCache_None, IInventoryLootCacheInterface), false },  // 418726335
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootCache_None_Statics::ClassParams = {
	&ULootCache_None::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootCache_None_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootCache_None_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootCache_None()
{
	if (!Z_Registration_Info_UClass_ULootCache_None.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootCache_None.OuterSingleton, Z_Construct_UClass_ULootCache_None_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootCache_None.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<ULootCache_None>()
{
	return ULootCache_None::StaticClass();
}
ULootCache_None::ULootCache_None(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootCache_None);
ULootCache_None::~ULootCache_None() {}
// End Class ULootCache_None

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootCache_None, ULootCache_None::StaticClass, TEXT("ULootCache_None"), &Z_Registration_Info_UClass_ULootCache_None, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootCache_None), 341418716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_684914319(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/LootCaches/LootCache_InMemory.h"
#include "NinjaInventory/Public/Types/FInventoryCache_Loot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootCache_InMemory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootCache_InMemory();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootCache_InMemory_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootCache_None();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryCachedLoot();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class ULootCache_InMemory Function HandleActorDestroyed
struct Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics
{
	struct LootCache_InMemory_eventHandleActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Removes cached entries related to an actor that has been destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_InMemory.h" },
		{ "ToolTip", "Removes cached entries related to an actor that has been destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootCache_InMemory_eventHandleActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootCache_InMemory, nullptr, "HandleActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::LootCache_InMemory_eventHandleActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::LootCache_InMemory_eventHandleActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootCache_InMemory::execHandleActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class ULootCache_InMemory Function HandleActorDestroyed

// Begin Class ULootCache_InMemory
void ULootCache_InMemory::StaticRegisterNativesULootCache_InMemory()
{
	UClass* Class = ULootCache_InMemory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleActorDestroyed", &ULootCache_InMemory::execHandleActorDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootCache_InMemory);
UClass* Z_Construct_UClass_ULootCache_InMemory_NoRegister()
{
	return ULootCache_InMemory::StaticClass();
}
struct Z_Construct_UClass_ULootCache_InMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores cached loot in memory.\n */" },
		{ "DisplayName", "In-Memory" },
		{ "IncludePath", "GameFramework/LootCaches/LootCache_InMemory.h" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_InMemory.h" },
		{ "ToolTip", "Stores cached loot in memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedLoot_MetaData[] = {
		{ "Comment", "/** Loot that has been cached for requesters */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootCaches/LootCache_InMemory.h" },
		{ "ToolTip", "Loot that has been cached for requesters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootCache_InMemory_HandleActorDestroyed, "HandleActorDestroyed" }, // 43912255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootCache_InMemory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULootCache_InMemory_Statics::NewProp_CachedLoot_Inner = { "CachedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryCachedLoot, METADATA_PARAMS(0, nullptr) }; // 460436642
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULootCache_InMemory_Statics::NewProp_CachedLoot = { "CachedLoot", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootCache_InMemory, CachedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedLoot_MetaData), NewProp_CachedLoot_MetaData) }; // 460436642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootCache_InMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootCache_InMemory_Statics::NewProp_CachedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootCache_InMemory_Statics::NewProp_CachedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootCache_InMemory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULootCache_InMemory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULootCache_None,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootCache_InMemory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootCache_InMemory_Statics::ClassParams = {
	&ULootCache_InMemory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULootCache_InMemory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULootCache_InMemory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootCache_InMemory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootCache_InMemory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootCache_InMemory()
{
	if (!Z_Registration_Info_UClass_ULootCache_InMemory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootCache_InMemory.OuterSingleton, Z_Construct_UClass_ULootCache_InMemory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootCache_InMemory.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<ULootCache_InMemory>()
{
	return ULootCache_InMemory::StaticClass();
}
ULootCache_InMemory::ULootCache_InMemory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootCache_InMemory);
ULootCache_InMemory::~ULootCache_InMemory() {}
// End Class ULootCache_InMemory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_InMemory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootCache_InMemory, ULootCache_InMemory::StaticClass, TEXT("ULootCache_InMemory"), &Z_Registration_Info_UClass_ULootCache_InMemory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootCache_InMemory), 230783128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_InMemory_h_3380178832(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_InMemory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_InMemory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

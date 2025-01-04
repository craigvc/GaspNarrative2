// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryLootSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryLootSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSource();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSource_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryLootSource Function SelectLoot
struct NinjaInventoryLootSource_eventSelectLoot_Parms
{
	UNinjaInventoryLootComponent* LootComponent;
	UNinjaInventoryManagerComponent* Requester;
	float CurrentBudget;
	TArray<UNinjaInventoryLoot*> CurrentLoot;
	float ConsumedBudget;
	TArray<UNinjaInventoryLoot*> SelectedLoot;
};
static const FName NAME_UNinjaInventoryLootSource_SelectLoot = FName(TEXT("SelectLoot"));
void UNinjaInventoryLootSource::SelectLoot(UNinjaInventoryLootComponent* LootComponent, UNinjaInventoryManagerComponent* Requester, float CurrentBudget, TArray<UNinjaInventoryLoot*> const& CurrentLoot, float& ConsumedBudget, TArray<UNinjaInventoryLoot*>& SelectedLoot)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryLootSource_SelectLoot);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryLootSource_eventSelectLoot_Parms Parms;
		Parms.LootComponent=LootComponent;
		Parms.Requester=Requester;
		Parms.CurrentBudget=CurrentBudget;
		Parms.CurrentLoot=CurrentLoot;
		Parms.ConsumedBudget=ConsumedBudget;
		Parms.SelectedLoot=SelectedLoot;
	ProcessEvent(Func,&Parms);
		ConsumedBudget=Parms.ConsumedBudget;
		SelectedLoot=Parms.SelectedLoot;
	}
	else
	{
		SelectLoot_Implementation(LootComponent, Requester, CurrentBudget, CurrentLoot, ConsumedBudget, SelectedLoot);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Source" },
		{ "Comment", "/**\n\x09 * Selects all lootable items from this inventory, applying their selectors.\n\x09 *\n\x09 * @param LootComponent\x09\x09""Component that is selecting loot for a requester.\n\x09 * @param Requester\x09\x09\x09Inventory Manager requesting the loot.\n\x09 * @param CurrentBudget\x09\x09""Current budget available for this operation.\n\x09 * @param CurrentLoot\x09\x09""Current loot already selected for this operation.\n\x09 * @param ConsumedBudget\x09""Budget that has been consumed by this operation.\n\x09 * @param SelectedLoot\x09\x09Loot that was selected by this operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSource.h" },
		{ "ToolTip", "Selects all lootable items from this inventory, applying their selectors.\n\n@param LootComponent         Component that is selecting loot for a requester.\n@param Requester                     Inventory Manager requesting the loot.\n@param CurrentBudget         Current budget available for this operation.\n@param CurrentLoot           Current loot already selected for this operation.\n@param ConsumedBudget        Budget that has been consumed by this operation.\n@param SelectedLoot          Loot that was selected by this operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBudget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentLoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConsumedBudget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_LootComponent = { "LootComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSource_eventSelectLoot_Parms, LootComponent), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootComponent_MetaData), NewProp_LootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSource_eventSelectLoot_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_CurrentBudget = { "CurrentBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSource_eventSelectLoot_Parms, CurrentBudget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_CurrentLoot_Inner = { "CurrentLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_CurrentLoot = { "CurrentLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSource_eventSelectLoot_Parms, CurrentLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLoot_MetaData), NewProp_CurrentLoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_ConsumedBudget = { "ConsumedBudget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSource_eventSelectLoot_Parms, ConsumedBudget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSource_eventSelectLoot_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_LootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_CurrentBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_CurrentLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_CurrentLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_ConsumedBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::NewProp_SelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootSource, nullptr, "SelectLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::PropPointers), sizeof(NinjaInventoryLootSource_eventSelectLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryLootSource_eventSelectLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootSource::execSelectLoot)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_LootComponent);
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentBudget);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_CurrentLoot);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ConsumedBudget);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_SelectedLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectLoot_Implementation(Z_Param_LootComponent,Z_Param_Requester,Z_Param_CurrentBudget,Z_Param_Out_CurrentLoot,Z_Param_Out_ConsumedBudget,Z_Param_Out_SelectedLoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootSource Function SelectLoot

// Begin Class UNinjaInventoryLootSource
void UNinjaInventoryLootSource::StaticRegisterNativesUNinjaInventoryLootSource()
{
	UClass* Class = UNinjaInventoryLootSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectLoot", &UNinjaInventoryLootSource::execSelectLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryLootSource);
UClass* Z_Construct_UClass_UNinjaInventoryLootSource_NoRegister()
{
	return UNinjaInventoryLootSource::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryLootSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A source of loot available to the Loot Manager.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryLootSource.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSource.h" },
		{ "ToolTip", "A source of loot available to the Loot Manager." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryLootSource_SelectLoot, "SelectLoot" }, // 1541946198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryLootSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryLootSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryLootSource_Statics::ClassParams = {
	&UNinjaInventoryLootSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x003000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryLootSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryLootSource()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryLootSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryLootSource.OuterSingleton, Z_Construct_UClass_UNinjaInventoryLootSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryLootSource.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryLootSource>()
{
	return UNinjaInventoryLootSource::StaticClass();
}
UNinjaInventoryLootSource::UNinjaInventoryLootSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryLootSource);
UNinjaInventoryLootSource::~UNinjaInventoryLootSource() {}
// End Class UNinjaInventoryLootSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryLootSource, UNinjaInventoryLootSource::StaticClass, TEXT("UNinjaInventoryLootSource"), &Z_Registration_Info_UClass_UNinjaInventoryLootSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryLootSource), 513716770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_1844613403(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

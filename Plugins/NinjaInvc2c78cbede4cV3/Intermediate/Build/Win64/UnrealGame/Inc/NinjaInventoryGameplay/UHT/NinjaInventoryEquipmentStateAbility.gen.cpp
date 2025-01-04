// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/NinjaInventoryEquipmentStateAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryEquipmentStateAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryAnimationAbility();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UNinjaInventoryEquipmentStateAbility Function GetEquipmentInstanceFromPayload
struct Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics
{
	struct NinjaInventoryEquipmentStateAbility_eventGetEquipmentInstanceFromPayload_Parms
	{
		FGameplayEventData TriggerEventData;
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Retrieves a valid Equipment Instance from the Trigger Event Data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryEquipmentStateAbility.h" },
		{ "ToolTip", "Retrieves a valid Equipment Instance from the Trigger Event Data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerEventData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::NewProp_TriggerEventData = { "TriggerEventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentStateAbility_eventGetEquipmentInstanceFromPayload_Parms, TriggerEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEventData_MetaData), NewProp_TriggerEventData_MetaData) }; // 1231635826
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentStateAbility_eventGetEquipmentInstanceFromPayload_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::NewProp_TriggerEventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility, nullptr, "GetEquipmentInstanceFromPayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::NinjaInventoryEquipmentStateAbility_eventGetEquipmentInstanceFromPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::NinjaInventoryEquipmentStateAbility_eventGetEquipmentInstanceFromPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryEquipmentStateAbility::execGetEquipmentInstanceFromPayload)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_TriggerEventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=P_THIS->GetEquipmentInstanceFromPayload(Z_Param_Out_TriggerEventData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryEquipmentStateAbility Function GetEquipmentInstanceFromPayload

// Begin Class UNinjaInventoryEquipmentStateAbility
void UNinjaInventoryEquipmentStateAbility::StaticRegisterNativesUNinjaInventoryEquipmentStateAbility()
{
	UClass* Class = UNinjaInventoryEquipmentStateAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentInstanceFromPayload", &UNinjaInventoryEquipmentStateAbility::execGetEquipmentInstanceFromPayload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryEquipmentStateAbility);
UClass* Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_NoRegister()
{
	return UNinjaInventoryEquipmentStateAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A base ability that can change the state of equipment instances obtained from a Gameplay Query. \n */" },
		{ "IncludePath", "AbilitySystem/NinjaInventoryEquipmentStateAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryEquipmentStateAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A base ability that can change the state of equipment instances obtained from a Gameplay Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentQuery_MetaData[] = {
		{ "Category", "Equipment State" },
		{ "Comment", "/**\n\x09 * Query used to select equipment instances to modify.\n\x09 *\n\x09 * This ability will be cancelled if no Equipment Instances are obtained from this Query. Also, this\n\x09 * query can obtain multiple equipment instances to have their state modified, which is commonly the\n\x09 * case with scenarios like \"dual wielding\" or \"sword and shield\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryEquipmentStateAbility.h" },
		{ "ToolTip", "Query used to select equipment instances to modify.\n\nThis ability will be cancelled if no Equipment Instances are obtained from this Query. Also, this\nquery can obtain multiple equipment instances to have their state modified, which is commonly the\ncase with scenarios like \"dual wielding\" or \"sword and shield\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStateTag_MetaData[] = {
		{ "Categories", "Equipment.State" },
		{ "Category", "Equipment State" },
		{ "Comment", "/** Gameplay Tag representing the target state for the equipment. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryEquipmentStateAbility.h" },
		{ "ToolTip", "Gameplay Tag representing the target state for the equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryEquipmentStateAbility_GetEquipmentInstanceFromPayload, "GetEquipmentInstanceFromPayload" }, // 1025794299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryEquipmentStateAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::NewProp_EquipmentQuery = { "EquipmentQuery", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryEquipmentStateAbility, EquipmentQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentQuery_MetaData), NewProp_EquipmentQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::NewProp_TargetStateTag = { "TargetStateTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryEquipmentStateAbility, TargetStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStateTag_MetaData), NewProp_TargetStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::NewProp_EquipmentQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::NewProp_TargetStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::ClassParams = {
	&UNinjaInventoryEquipmentStateAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryEquipmentStateAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryEquipmentStateAbility.OuterSingleton, Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryEquipmentStateAbility.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UNinjaInventoryEquipmentStateAbility>()
{
	return UNinjaInventoryEquipmentStateAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryEquipmentStateAbility);
UNinjaInventoryEquipmentStateAbility::~UNinjaInventoryEquipmentStateAbility() {}
// End Class UNinjaInventoryEquipmentStateAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryEquipmentStateAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility, UNinjaInventoryEquipmentStateAbility::StaticClass, TEXT("UNinjaInventoryEquipmentStateAbility"), &Z_Registration_Info_UClass_UNinjaInventoryEquipmentStateAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryEquipmentStateAbility), 2080709079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryEquipmentStateAbility_h_1371496675(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryEquipmentStateAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryEquipmentStateAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

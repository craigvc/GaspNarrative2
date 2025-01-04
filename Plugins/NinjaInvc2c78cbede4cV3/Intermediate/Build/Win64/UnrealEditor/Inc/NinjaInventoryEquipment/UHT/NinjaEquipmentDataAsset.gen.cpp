// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Data/NinjaEquipmentDataAsset.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentStateConfiguration.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentStateConfiguration();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UNinjaEquipmentDataAsset Function GetStateConfiguration
struct Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics
{
	struct NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms
	{
		FGameplayTag StateTag;
		FEquipmentStateConfiguration OutStateConfiguration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Data" },
		{ "Comment", "/**\n\x09 * Provides the configuration for a given state in this Data Asset.\n\x09 *\n\x09 * @param StateTag\x09\x09\x09\x09\x09Gameplay Tag representing the state.\n\x09 * @param OutStateConfiguration\x09\x09""Configuration for the state. \n\x09 * @return\x09\x09\x09\x09\x09\x09\x09True if a configuration was found, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaEquipmentDataAsset.h" },
		{ "ToolTip", "Provides the configuration for a given state in this Data Asset.\n\n@param StateTag                                      Gameplay Tag representing the state.\n@param OutStateConfiguration         Configuration for the state.\n@return                                                      True if a configuration was found, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[] = {
		{ "Categories", "Equipment.State" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutStateConfiguration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTag_MetaData), NewProp_StateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_OutStateConfiguration = { "OutStateConfiguration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms, OutStateConfiguration), Z_Construct_UScriptStruct_FEquipmentStateConfiguration, METADATA_PARAMS(0, nullptr) }; // 1191437689
void Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms), &Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_StateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_OutStateConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentDataAsset, nullptr, "GetStateConfiguration", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::NinjaEquipmentDataAsset_eventGetStateConfiguration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentDataAsset::execGetStateConfiguration)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StateTag);
	P_GET_STRUCT_REF(FEquipmentStateConfiguration,Z_Param_Out_OutStateConfiguration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetStateConfiguration(Z_Param_StateTag,Z_Param_Out_OutStateConfiguration);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentDataAsset Function GetStateConfiguration

// Begin Class UNinjaEquipmentDataAsset
void UNinjaEquipmentDataAsset::StaticRegisterNativesUNinjaEquipmentDataAsset()
{
	UClass* Class = UNinjaEquipmentDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStateConfiguration", &UNinjaEquipmentDataAsset::execGetStateConfiguration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentDataAsset);
UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister()
{
	return UNinjaEquipmentDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Bundles information about an Equipment Piece.\n */" },
		{ "IncludePath", "Data/NinjaEquipmentDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaEquipmentDataAsset.h" },
		{ "ToolTip", "Bundles information about an Equipment Piece." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentInstanceClass_MetaData[] = {
		{ "AssetBundles", "Classes" },
		{ "Category", "Equipment" },
		{ "Comment", "/** Class that represents the equipment. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaEquipmentDataAsset.h" },
		{ "ToolTip", "Class that represents the equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateConfigurations_MetaData[] = {
		{ "AssetBundles", "States" },
		{ "Category", "Equipment" },
		{ "Comment", "/** Assets related to each state available for this equipment. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaEquipmentDataAsset.h" },
		{ "TitleProperty", "StateTags" },
		{ "ToolTip", "Assets related to each state available for this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentInstanceClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateConfigurations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateConfigurations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipmentDataAsset_GetStateConfiguration, "GetStateConfiguration" }, // 176580422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::NewProp_EquipmentInstanceClass = { "EquipmentInstanceClass", nullptr, (EPropertyFlags)0x0014000002010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentDataAsset, EquipmentInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentInstanceClass_MetaData), NewProp_EquipmentInstanceClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::NewProp_StateConfigurations_Inner = { "StateConfigurations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentStateConfiguration, METADATA_PARAMS(0, nullptr) }; // 1191437689
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::NewProp_StateConfigurations = { "StateConfigurations", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentDataAsset, StateConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateConfigurations_MetaData), NewProp_StateConfigurations_MetaData) }; // 1191437689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::NewProp_EquipmentInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::NewProp_StateConfigurations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::NewProp_StateConfigurations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::ClassParams = {
	&UNinjaEquipmentDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentDataAsset.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentDataAsset>()
{
	return UNinjaEquipmentDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentDataAsset);
UNinjaEquipmentDataAsset::~UNinjaEquipmentDataAsset() {}
// End Class UNinjaEquipmentDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentDataAsset, UNinjaEquipmentDataAsset::StaticClass, TEXT("UNinjaEquipmentDataAsset"), &Z_Registration_Info_UClass_UNinjaEquipmentDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentDataAsset), 3271125615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentDataAsset_h_3924533548(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

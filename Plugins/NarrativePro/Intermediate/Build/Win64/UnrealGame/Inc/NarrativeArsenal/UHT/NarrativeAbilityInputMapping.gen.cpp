// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeAbilityInputMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAbilityInputMapping() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilityInputMapping();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilityInputMapping_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityInputMappingData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FAbilityInputMappingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityInputMappingData;
class UScriptStruct* FAbilityInputMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityInputMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityInputMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityInputMappingData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("AbilityInputMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityInputMappingData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FAbilityInputMappingData>()
{
	return FAbilityInputMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilityInputMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "GameplayInputAbilityInfo" },
		{ "Comment", "//The input action\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilityInputMapping.h" },
		{ "ToolTip", "The input action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[] = {
		{ "Category", "GameplayInputAbilityInfo" },
		{ "Comment", "//The input ID the action maps to \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilityInputMapping.h" },
		{ "ToolTip", "The input ID the action maps to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityInputMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInputMappingData, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewProp_InputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInputMappingData, InputID), Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputID_MetaData), NewProp_InputID_MetaData) }; // 818456468
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewProp_InputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"AbilityInputMappingData",
	Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::PropPointers),
	sizeof(FAbilityInputMappingData),
	alignof(FAbilityInputMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityInputMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityInputMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityInputMappingData.InnerSingleton, Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityInputMappingData.InnerSingleton;
}
// End ScriptStruct FAbilityInputMappingData

// Begin Class UNarrativeAbilityInputMapping
void UNarrativeAbilityInputMapping::StaticRegisterNativesUNarrativeAbilityInputMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAbilityInputMapping);
UClass* Z_Construct_UClass_UNarrativeAbilityInputMapping_NoRegister()
{
	return UNarrativeAbilityInputMapping::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Used by Narrative weapons to define which input actions map to which abilities. \n */" },
		{ "IncludePath", "GAS/NarrativeAbilityInputMapping.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilityInputMapping.h" },
		{ "ToolTip", "Used by Narrative weapons to define which input actions map to which abilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAbilities_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilityInputMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAbilityInputMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::NewProp_InputAbilities_Inner = { "InputAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilityInputMappingData, METADATA_PARAMS(0, nullptr) }; // 2162511338
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::NewProp_InputAbilities = { "InputAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilityInputMapping, InputAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAbilities_MetaData), NewProp_InputAbilities_MetaData) }; // 2162511338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::NewProp_InputAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::NewProp_InputAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::ClassParams = {
	&UNarrativeAbilityInputMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAbilityInputMapping()
{
	if (!Z_Registration_Info_UClass_UNarrativeAbilityInputMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAbilityInputMapping.OuterSingleton, Z_Construct_UClass_UNarrativeAbilityInputMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAbilityInputMapping.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAbilityInputMapping>()
{
	return UNarrativeAbilityInputMapping::StaticClass();
}
UNarrativeAbilityInputMapping::UNarrativeAbilityInputMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAbilityInputMapping);
UNarrativeAbilityInputMapping::~UNarrativeAbilityInputMapping() {}
// End Class UNarrativeAbilityInputMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilityInputMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityInputMappingData::StaticStruct, Z_Construct_UScriptStruct_FAbilityInputMappingData_Statics::NewStructOps, TEXT("AbilityInputMappingData"), &Z_Registration_Info_UScriptStruct_AbilityInputMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityInputMappingData), 2162511338U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAbilityInputMapping, UNarrativeAbilityInputMapping::StaticClass, TEXT("UNarrativeAbilityInputMapping"), &Z_Registration_Info_UClass_UNarrativeAbilityInputMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAbilityInputMapping), 1681393711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilityInputMapping_h_1797980718(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilityInputMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilityInputMapping_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilityInputMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilityInputMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

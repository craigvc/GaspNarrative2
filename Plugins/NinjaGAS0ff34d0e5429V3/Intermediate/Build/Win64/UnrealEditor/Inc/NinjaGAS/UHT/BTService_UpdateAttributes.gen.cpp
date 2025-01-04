// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AI/BehaviorTree/BTService_UpdateAttributes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateAttributes() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
NINJAGAS_API UClass* Z_Construct_UClass_UBTService_UpdateAttributes();
NINJAGAS_API UClass* Z_Construct_UClass_UBTService_UpdateAttributes_NoRegister();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeBlackboardMapping();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin ScriptStruct FAttributeBlackboardMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping;
class UScriptStruct* FAttributeBlackboardMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeBlackboardMapping, (UObject*)Z_Construct_UPackage__Script_NinjaGAS(), TEXT("AttributeBlackboardMapping"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping.OuterSingleton;
}
template<> NINJAGAS_API UScriptStruct* StaticStruct<FAttributeBlackboardMapping>()
{
	return FAttributeBlackboardMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Maps a Gameplay Attribute to the blackboard key used to store its value.\n */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_UpdateAttributes.h" },
		{ "ToolTip", "Maps a Gameplay Attribute to the blackboard key used to store its value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Gameplay Tag that identifies the token. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_UpdateAttributes.h" },
		{ "ToolTip", "Gameplay Tag that identifies the token." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValueKey_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Blackboard entry that will store the attribute's value. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_UpdateAttributes.h" },
		{ "ToolTip", "Blackboard entry that will store the attribute's value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValueKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeBlackboardMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBlackboardMapping, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 2792951819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::NewProp_AttributeValueKey = { "AttributeValueKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeBlackboardMapping, AttributeValueKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValueKey_MetaData), NewProp_AttributeValueKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::NewProp_AttributeValueKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
	nullptr,
	&NewStructOps,
	"AttributeBlackboardMapping",
	Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::PropPointers),
	sizeof(FAttributeBlackboardMapping),
	alignof(FAttributeBlackboardMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeBlackboardMapping()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping.InnerSingleton, Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping.InnerSingleton;
}
// End ScriptStruct FAttributeBlackboardMapping

// Begin Class UBTService_UpdateAttributes
void UBTService_UpdateAttributes::StaticRegisterNativesUBTService_UpdateAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_UpdateAttributes);
UClass* Z_Construct_UClass_UBTService_UpdateAttributes_NoRegister()
{
	return UBTService_UpdateAttributes::StaticClass();
}
struct Z_Construct_UClass_UBTService_UpdateAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n * Transfers combat attributes to the Blackboard, which may be useful for the agent's decision-making.\n */" },
		{ "DisplayName", "Update Attributes" },
		{ "IncludePath", "AI/BehaviorTree/BTService_UpdateAttributes.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_UpdateAttributes.h" },
		{ "ToolTip", "Transfers combat attributes to the Blackboard, which may be useful for the agent's decision-making." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMappings_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Maps all gameplay tags to their appropriate blackboard keys. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_UpdateAttributes.h" },
		{ "TitleProperty", "Attribute" },
		{ "ToolTip", "Maps all gameplay tags to their appropriate blackboard keys." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_UpdateAttributes_Statics::NewProp_AttributeMappings_Inner = { "AttributeMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeBlackboardMapping, METADATA_PARAMS(0, nullptr) }; // 2922972151
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTService_UpdateAttributes_Statics::NewProp_AttributeMappings = { "AttributeMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateAttributes, AttributeMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeMappings_MetaData), NewProp_AttributeMappings_MetaData) }; // 2922972151
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_UpdateAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateAttributes_Statics::NewProp_AttributeMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateAttributes_Statics::NewProp_AttributeMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_UpdateAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateAttributes_Statics::ClassParams = {
	&UBTService_UpdateAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_UpdateAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateAttributes_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_UpdateAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_UpdateAttributes()
{
	if (!Z_Registration_Info_UClass_UBTService_UpdateAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdateAttributes.OuterSingleton, Z_Construct_UClass_UBTService_UpdateAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_UpdateAttributes.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UBTService_UpdateAttributes>()
{
	return UBTService_UpdateAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdateAttributes);
UBTService_UpdateAttributes::~UBTService_UpdateAttributes() {}
// End Class UBTService_UpdateAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_UpdateAttributes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttributeBlackboardMapping::StaticStruct, Z_Construct_UScriptStruct_FAttributeBlackboardMapping_Statics::NewStructOps, TEXT("AttributeBlackboardMapping"), &Z_Registration_Info_UScriptStruct_AttributeBlackboardMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeBlackboardMapping), 2922972151U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdateAttributes, UBTService_UpdateAttributes::StaticClass, TEXT("UBTService_UpdateAttributes"), &Z_Registration_Info_UClass_UBTService_UpdateAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdateAttributes), 3583214917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_UpdateAttributes_h_628790385(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_UpdateAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_UpdateAttributes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_UpdateAttributes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_UpdateAttributes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

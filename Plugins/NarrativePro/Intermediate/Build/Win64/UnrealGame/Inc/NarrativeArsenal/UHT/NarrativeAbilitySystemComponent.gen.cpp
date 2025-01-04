// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedAttribute();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSavedAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedAttribute;
class UScriptStruct* FSavedAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedAttribute, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_SavedAttribute.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedAttribute>()
{
	return FSavedAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "Saving" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Saving" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000001010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedAttribute, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000001010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedAttribute",
	Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers),
	sizeof(FSavedAttribute),
	alignof(FSavedAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_SavedAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSavedAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedAttribute.InnerSingleton;
}
// End ScriptStruct FSavedAttribute

// Begin Class UNarrativeAbilitySystemComponent
void UNarrativeAbilitySystemComponent::StaticRegisterNativesUNarrativeAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAbilitySystemComponent);
UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister()
{
	return UNarrativeAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Ability system component for Narrative pro. Has ISavableComponent for saving attributes.\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS/NarrativeAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "Custom Ability system component for Narrative pro. Has ISavableComponent for saving attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAttributes_MetaData[] = {
		{ "Comment", "//We use this to remember attribute -> attribute value \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "We use this to remember attribute -> attribute value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes_Inner = { "SavedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedAttribute, METADATA_PARAMS(0, nullptr) }; // 2261838316
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes = { "SavedAttributes", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, SavedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAttributes_MetaData), NewProp_SavedAttributes_MetaData) }; // 2261838316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeAbilitySystemComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::ClassParams = {
	&UNarrativeAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAbilitySystemComponent>()
{
	return UNarrativeAbilitySystemComponent::StaticClass();
}
UNarrativeAbilitySystemComponent::UNarrativeAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAbilitySystemComponent);
UNarrativeAbilitySystemComponent::~UNarrativeAbilitySystemComponent() {}
// End Class UNarrativeAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavedAttribute::StaticStruct, Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewStructOps, TEXT("SavedAttribute"), &Z_Registration_Info_UScriptStruct_SavedAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedAttribute), 2261838316U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAbilitySystemComponent, UNarrativeAbilitySystemComponent::StaticClass, TEXT("UNarrativeAbilitySystemComponent"), &Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAbilitySystemComponent), 2615669818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_1957075249(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

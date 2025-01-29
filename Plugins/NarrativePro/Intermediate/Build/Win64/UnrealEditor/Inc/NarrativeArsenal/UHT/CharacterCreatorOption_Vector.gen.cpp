// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Options/CharacterCreatorOption_Vector.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorOption_Vector() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorColorSwatch_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Vector();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Vector_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorOption_Vector
void UCharacterCreatorOption_Vector::StaticRegisterNativesUCharacterCreatorOption_Vector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorOption_Vector);
UClass* Z_Construct_UClass_UCharacterCreatorOption_Vector_NoRegister()
{
	return UCharacterCreatorOption_Vector::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CharacterCreator/Options/CharacterCreatorOption_Vector.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Vector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorTagID_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Vectors" },
		{ "Category", "Vector Value" },
		{ "Comment", "//The ID you can use to reference this Vector value \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Vector.h" },
		{ "ToolTip", "The ID you can use to reference this Vector value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableOptions_MetaData[] = {
		{ "Category", "Vector Value" },
		{ "Comment", "//The values that can be selected for this option - value will default to first color in the swatch. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Vector.h" },
		{ "ToolTip", "The values that can be selected for this option - value will default to first color in the swatch." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTagID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorOption_Vector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::NewProp_VectorTagID = { "VectorTagID", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Vector, VectorTagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorTagID_MetaData), NewProp_VectorTagID_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::NewProp_AvailableOptions = { "AvailableOptions", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Vector, AvailableOptions), Z_Construct_UClass_UCharacterCreatorColorSwatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableOptions_MetaData), NewProp_AvailableOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::NewProp_VectorTagID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::NewProp_AvailableOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterCreatorOption,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::ClassParams = {
	&UCharacterCreatorOption_Vector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorOption_Vector()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorOption_Vector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorOption_Vector.OuterSingleton, Z_Construct_UClass_UCharacterCreatorOption_Vector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorOption_Vector.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorOption_Vector>()
{
	return UCharacterCreatorOption_Vector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorOption_Vector);
UCharacterCreatorOption_Vector::~UCharacterCreatorOption_Vector() {}
// End Class UCharacterCreatorOption_Vector

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Vector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorOption_Vector, UCharacterCreatorOption_Vector::StaticClass, TEXT("UCharacterCreatorOption_Vector"), &Z_Registration_Info_UClass_UCharacterCreatorOption_Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorOption_Vector), 2438669562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Vector_h_2727389514(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Vector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

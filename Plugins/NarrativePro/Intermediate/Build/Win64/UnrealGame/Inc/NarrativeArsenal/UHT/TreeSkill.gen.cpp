// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/SkillTrees/TreeSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeSkill() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreePerk_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreeSkill();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreeSkill_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UTreeSkill Function GetAllPerks
struct Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics
{
	struct TreeSkill_eventGetAllPerks_Parms
	{
		TArray<UTreePerk*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Skill" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TreeSkill_eventGetAllPerks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeSkill, nullptr, "GetAllPerks", nullptr, nullptr, Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::TreeSkill_eventGetAllPerks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::TreeSkill_eventGetAllPerks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTreeSkill_GetAllPerks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreeSkill_GetAllPerks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTreeSkill::execGetAllPerks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTreePerk*>*)Z_Param__Result=P_THIS->GetAllPerks();
	P_NATIVE_END;
}
// End Class UTreeSkill Function GetAllPerks

// Begin Class UTreeSkill
void UTreeSkill::StaticRegisterNativesUTreeSkill()
{
	UClass* Class = UTreeSkill::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllPerks", &UTreeSkill::execGetAllPerks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTreeSkill);
UClass* Z_Construct_UClass_UTreeSkill_NoRegister()
{
	return UTreeSkill::StaticClass();
}
struct Z_Construct_UClass_UTreeSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a skill in the skill tree. For example Combat, Sneak, etc. Each game will implement their own skills!\n */" },
		{ "IncludePath", "SkillTrees/TreeSkill.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents a skill in the skill tree. For example Combat, Sneak, etc. Each game will implement their own skills!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPerk_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The root perk in the skill tree. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The root perk in the skill tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDisplayName_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The display name of this skill. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The display name of this skill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDescription_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The description of this skill. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The description of this skill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillLevel_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The level this skill is at\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The level this skill is at" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootPerk;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeSkill_GetAllPerks, "GetAllPerks" }, // 466848602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeSkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_RootPerk = { "RootPerk", nullptr, (EPropertyFlags)0x011600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, RootPerk), Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPerk_MetaData), NewProp_RootPerk_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDisplayName = { "SkillDisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, SkillDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDisplayName_MetaData), NewProp_SkillDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDescription = { "SkillDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, SkillDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDescription_MetaData), NewProp_SkillDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillLevel = { "SkillLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, SkillLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillLevel_MetaData), NewProp_SkillLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_RootPerk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTreeSkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTreeSkill_Statics::ClassParams = {
	&UTreeSkill::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTreeSkill_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::Class_MetaDataParams), Z_Construct_UClass_UTreeSkill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTreeSkill()
{
	if (!Z_Registration_Info_UClass_UTreeSkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTreeSkill.OuterSingleton, Z_Construct_UClass_UTreeSkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTreeSkill.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTreeSkill>()
{
	return UTreeSkill::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeSkill);
UTreeSkill::~UTreeSkill() {}
// End Class UTreeSkill

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTreeSkill, UTreeSkill::StaticClass, TEXT("UTreeSkill"), &Z_Registration_Info_UClass_UTreeSkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTreeSkill), 3564460008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_2217301892(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

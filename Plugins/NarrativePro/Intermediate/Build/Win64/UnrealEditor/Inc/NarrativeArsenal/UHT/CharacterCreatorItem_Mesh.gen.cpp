// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorItem_Mesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Scalar_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Vector_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialOption();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMorphOption();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FCharacterCreatorMeshMaterialParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam;
class UScriptStruct* FCharacterCreatorMeshMaterialParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorMeshMaterialParam"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorMeshMaterialParam>()
{
	return FCharacterCreatorMeshMaterialParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//The parameters to effect - this is an array so you can effect multiple parameters with the one value if needed. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The parameters to effect - this is an array so you can effect multiple parameters with the one value if needed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorMeshMaterialParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorMeshMaterialParam, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterNames_MetaData), NewProp_ParameterNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::NewProp_ParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::NewProp_ParameterNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CharacterCreatorMeshMaterialParam",
	Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::PropPointers),
	sizeof(FCharacterCreatorMeshMaterialParam),
	alignof(FCharacterCreatorMeshMaterialParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorMeshMaterialParam

// Begin ScriptStruct FCharacterCreatorMeshMaterialParam_Scalar
static_assert(std::is_polymorphic<FCharacterCreatorMeshMaterialParam_Scalar>() == std::is_polymorphic<FCharacterCreatorMeshMaterialParam>(), "USTRUCT FCharacterCreatorMeshMaterialParam_Scalar cannot be polymorphic unless super FCharacterCreatorMeshMaterialParam is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar;
class UScriptStruct* FCharacterCreatorMeshMaterialParam_Scalar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorMeshMaterialParam_Scalar"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorMeshMaterialParam_Scalar>()
{
	return FCharacterCreatorMeshMaterialParam_Scalar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarTagID_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Scalars" },
		{ "Category", "Mesh Material" },
		{ "Comment", "//If a scalar tagID is set instead of showing an option to the player we'll drive this param via this tag\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "If a scalar tagID is set instead of showing an option to the player we'll drive this param via this tag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarTagID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorMeshMaterialParam_Scalar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::NewProp_ScalarTagID = { "ScalarTagID", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorMeshMaterialParam_Scalar, ScalarTagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarTagID_MetaData), NewProp_ScalarTagID_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::NewProp_ScalarTagID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam,
	&NewStructOps,
	"CharacterCreatorMeshMaterialParam_Scalar",
	Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::PropPointers),
	sizeof(FCharacterCreatorMeshMaterialParam_Scalar),
	alignof(FCharacterCreatorMeshMaterialParam_Scalar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorMeshMaterialParam_Scalar

// Begin ScriptStruct FCharacterCreatorMeshMaterialParam_Vector
static_assert(std::is_polymorphic<FCharacterCreatorMeshMaterialParam_Vector>() == std::is_polymorphic<FCharacterCreatorMeshMaterialParam>(), "USTRUCT FCharacterCreatorMeshMaterialParam_Vector cannot be polymorphic unless super FCharacterCreatorMeshMaterialParam is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector;
class UScriptStruct* FCharacterCreatorMeshMaterialParam_Vector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorMeshMaterialParam_Vector"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorMeshMaterialParam_Vector>()
{
	return FCharacterCreatorMeshMaterialParam_Vector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorTagID_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Vectors" },
		{ "Category", "Mesh Material" },
		{ "Comment", "//If a vector tagID is set instead of showing an option to the player we'll drive this param via this tag\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "If a vector tagID is set instead of showing an option to the player we'll drive this param via this tag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTagID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorMeshMaterialParam_Vector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::NewProp_VectorTagID = { "VectorTagID", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorMeshMaterialParam_Vector, VectorTagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorTagID_MetaData), NewProp_VectorTagID_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::NewProp_VectorTagID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam,
	&NewStructOps,
	"CharacterCreatorMeshMaterialParam_Vector",
	Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::PropPointers),
	sizeof(FCharacterCreatorMeshMaterialParam_Vector),
	alignof(FCharacterCreatorMeshMaterialParam_Vector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorMeshMaterialParam_Vector

// Begin ScriptStruct FCreatorMeshMorphOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption;
class UScriptStruct* FCreatorMeshMorphOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMorphOption, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMorphOption"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMorphOption>()
{
	return FCreatorMeshMorphOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarTag_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Scalars" },
		{ "Category", "Morph Option" },
		{ "Comment", "//The scalar value we'll drive the morph with \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The scalar value we'll drive the morph with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphNames_MetaData[] = {
		{ "Category", "Morph Option" },
		{ "Comment", "//The morph names \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The morph names" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MorphNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMorphOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewProp_ScalarTag = { "ScalarTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMorphOption, ScalarTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarTag_MetaData), NewProp_ScalarTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewProp_MorphNames_Inner = { "MorphNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewProp_MorphNames = { "MorphNames", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMorphOption, MorphNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphNames_MetaData), NewProp_MorphNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewProp_ScalarTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewProp_MorphNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewProp_MorphNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CreatorMeshMorphOption",
	Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::PropPointers),
	sizeof(FCreatorMeshMorphOption),
	alignof(FCreatorMeshMorphOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMorphOption()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMorphOption

// Begin ScriptStruct FCreatorMeshMaterialOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption;
class UScriptStruct* FCreatorMeshMaterialOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMaterialOption, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMaterialOption"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMaterialOption>()
{
	return FCreatorMeshMaterialOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//The material to apply\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The material to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIdx_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//The index of the material on the mesh\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The index of the material on the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarMaterialParams_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//Any scalar values we can change on the material\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "Any scalar values we can change on the material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorMaterialParams_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//Any vector params we can change on the material\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "Any vector params we can change on the material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarMaterialParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarMaterialParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorMaterialParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorMaterialParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMaterialOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialOption, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_MaterialIdx = { "MaterialIdx", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialOption, MaterialIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIdx_MetaData), NewProp_MaterialIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_ScalarMaterialParams_Inner = { "ScalarMaterialParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar, METADATA_PARAMS(0, nullptr) }; // 3352623174
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_ScalarMaterialParams = { "ScalarMaterialParams", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialOption, ScalarMaterialParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarMaterialParams_MetaData), NewProp_ScalarMaterialParams_MetaData) }; // 3352623174
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_VectorMaterialParams_Inner = { "VectorMaterialParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector, METADATA_PARAMS(0, nullptr) }; // 2277427027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_VectorMaterialParams = { "VectorMaterialParams", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialOption, VectorMaterialParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorMaterialParams_MetaData), NewProp_VectorMaterialParams_MetaData) }; // 2277427027
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_MaterialIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_ScalarMaterialParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_ScalarMaterialParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_VectorMaterialParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewProp_VectorMaterialParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CreatorMeshMaterialOption",
	Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::PropPointers),
	sizeof(FCreatorMeshMaterialOption),
	alignof(FCreatorMeshMaterialOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialOption()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMaterialOption

// Begin Class UCharacterCreatorItem_Mesh
void UCharacterCreatorItem_Mesh::StaticRegisterNativesUCharacterCreatorItem_Mesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorItem_Mesh);
UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister()
{
	return UCharacterCreatorItem_Mesh::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09The base class for a mesh item we can select to apply to the player. A mesh item consists of the slot we'll apply that mesh to,\n * the mesh itself, the materials to go on the mesh, and what parameters can be tweaked on those materials. \n */" },
		{ "IncludePath", "CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The base class for a mesh item we can select to apply to the player. A mesh item consists of the slot we'll apply that mesh to,\nthe mesh itself, the materials to go on the mesh, and what parameters can be tweaked on those materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Mesh" },
		{ "Category", "Mesh" },
		{ "Comment", "//The slot this mesh will apply itself to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The slot this mesh will apply itself to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The mesh this option will set the slot mesh to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The mesh this option will set the slot mesh to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeaderPose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Should this mesh use the leader pose component or just do its own thing instead \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "Should this mesh use the leader pose component or just do its own thing instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOptions_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The materials that can be selected for this mesh. Also contains parameters we can change on the material \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The materials that can be selected for this mesh. Also contains parameters we can change on the material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Morphs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The morphs to apply to the material \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "The morphs to apply to the material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarOptions_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Meshes can optionally nest scalar and vector options within themselves - ie hoodie has Hoodie Color A vector option in it, etc. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "Meshes can optionally nest scalar and vector options within themselves - ie hoodie has Hoodie Color A vector option in it, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorOptions_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Meshes can optionally nest scalar and vector options within themselves - ie hoodie has Hoodie Color A vector option in it, etc. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem_Mesh.h" },
		{ "ToolTip", "Meshes can optionally nest scalar and vector options within themselves - ie hoodie has Hoodie Color A vector option in it, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static void NewProp_bUseLeaderPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeaderPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Morphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Morphs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScalarOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VectorOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorItem_Mesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Mesh, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Mesh, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
void Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_bUseLeaderPose_SetBit(void* Obj)
{
	((UCharacterCreatorItem_Mesh*)Obj)->bUseLeaderPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_bUseLeaderPose = { "bUseLeaderPose", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterCreatorItem_Mesh), &Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_bUseLeaderPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLeaderPose_MetaData), NewProp_bUseLeaderPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_MaterialOptions_Inner = { "MaterialOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreatorMeshMaterialOption, METADATA_PARAMS(0, nullptr) }; // 1180866392
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_MaterialOptions = { "MaterialOptions", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Mesh, MaterialOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOptions_MetaData), NewProp_MaterialOptions_MetaData) }; // 1180866392
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Morphs_Inner = { "Morphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreatorMeshMorphOption, METADATA_PARAMS(0, nullptr) }; // 4216107674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Morphs = { "Morphs", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Mesh, Morphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Morphs_MetaData), NewProp_Morphs_MetaData) }; // 4216107674
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_ScalarOptions_Inner = { "ScalarOptions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorOption_Scalar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_ScalarOptions = { "ScalarOptions", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Mesh, ScalarOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarOptions_MetaData), NewProp_ScalarOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_VectorOptions_Inner = { "VectorOptions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorOption_Vector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_VectorOptions = { "VectorOptions", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem_Mesh, VectorOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorOptions_MetaData), NewProp_VectorOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_bUseLeaderPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_MaterialOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_MaterialOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Morphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_Morphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_ScalarOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_ScalarOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_VectorOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::NewProp_VectorOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterCreatorItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::ClassParams = {
	&UCharacterCreatorItem_Mesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorItem_Mesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorItem_Mesh.OuterSingleton, Z_Construct_UClass_UCharacterCreatorItem_Mesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorItem_Mesh.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorItem_Mesh>()
{
	return UCharacterCreatorItem_Mesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorItem_Mesh);
UCharacterCreatorItem_Mesh::~UCharacterCreatorItem_Mesh() {}
// End Class UCharacterCreatorItem_Mesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Mesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterCreatorMeshMaterialParam::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Statics::NewStructOps, TEXT("CharacterCreatorMeshMaterialParam"), &Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorMeshMaterialParam), 3671955233U) },
		{ FCharacterCreatorMeshMaterialParam_Scalar::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Scalar_Statics::NewStructOps, TEXT("CharacterCreatorMeshMaterialParam_Scalar"), &Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Scalar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorMeshMaterialParam_Scalar), 3352623174U) },
		{ FCharacterCreatorMeshMaterialParam_Vector::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorMeshMaterialParam_Vector_Statics::NewStructOps, TEXT("CharacterCreatorMeshMaterialParam_Vector"), &Z_Registration_Info_UScriptStruct_CharacterCreatorMeshMaterialParam_Vector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorMeshMaterialParam_Vector), 2277427027U) },
		{ FCreatorMeshMorphOption::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMorphOption_Statics::NewStructOps, TEXT("CreatorMeshMorphOption"), &Z_Registration_Info_UScriptStruct_CreatorMeshMorphOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMorphOption), 4216107674U) },
		{ FCreatorMeshMaterialOption::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMaterialOption_Statics::NewStructOps, TEXT("CreatorMeshMaterialOption"), &Z_Registration_Info_UScriptStruct_CreatorMeshMaterialOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMaterialOption), 1180866392U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorItem_Mesh, UCharacterCreatorItem_Mesh::StaticClass, TEXT("UCharacterCreatorItem_Mesh"), &Z_Registration_Info_UClass_UCharacterCreatorItem_Mesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorItem_Mesh), 1959648015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Mesh_h_3961103604(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Mesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Mesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Mesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_Mesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorAttributes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorAttributes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterial();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialParam();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMorph();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FCharacterCreatorAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute;
class UScriptStruct* FCharacterCreatorAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorAttribute, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorAttribute>()
{
	return FCharacterCreatorAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Base class for a creator attribute - these attributes make up our character creator appearance\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Base class for a creator attribute - these attributes make up our character creator appearance" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CharacterCreatorAttribute",
	nullptr,
	0,
	sizeof(FCharacterCreatorAttribute),
	alignof(FCharacterCreatorAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorAttribute

// Begin ScriptStruct FCharacterCreatorAttribute_Morph
static_assert(std::is_polymorphic<FCharacterCreatorAttribute_Morph>() == std::is_polymorphic<FCharacterCreatorAttribute>(), "USTRUCT FCharacterCreatorAttribute_Morph cannot be polymorphic unless super FCharacterCreatorAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph;
class UScriptStruct* FCharacterCreatorAttribute_Morph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorAttribute_Morph"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorAttribute_Morph>()
{
	return FCharacterCreatorAttribute_Morph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Base class for a morph target that can be changed on the character \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Base class for a morph target that can be changed on the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphName_MetaData[] = {
		{ "Category", "Morph" },
		{ "Comment", "//The name of the morph \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The name of the morph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphValue_MetaData[] = {
		{ "Category", "Morph" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//The value we need to set the morph to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The value we need to set the morph to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MorphName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorAttribute_Morph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::NewProp_MorphName = { "MorphName", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Morph, MorphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphName_MetaData), NewProp_MorphName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::NewProp_MorphValue = { "MorphValue", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Morph, MorphValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphValue_MetaData), NewProp_MorphValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::NewProp_MorphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::NewProp_MorphValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCharacterCreatorAttribute,
	&NewStructOps,
	"CharacterCreatorAttribute_Morph",
	Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::PropPointers),
	sizeof(FCharacterCreatorAttribute_Morph),
	alignof(FCharacterCreatorAttribute_Morph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorAttribute_Morph

// Begin ScriptStruct FCreatorMeshMaterialParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam;
class UScriptStruct* FCreatorMeshMaterialParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMaterialParam"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMaterialParam>()
{
	return FCreatorMeshMaterialParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//The parameters to effect - this is an array so you can effect multiple parameters with the one value if needed. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The parameters to effect - this is an array so you can effect multiple parameters with the one value if needed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMaterialParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialParam, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterNames_MetaData), NewProp_ParameterNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::NewProp_ParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::NewProp_ParameterNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CreatorMeshMaterialParam",
	Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::PropPointers),
	sizeof(FCreatorMeshMaterialParam),
	alignof(FCreatorMeshMaterialParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialParam()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMaterialParam

// Begin ScriptStruct FCreatorMeshMaterialParam_Vector
static_assert(std::is_polymorphic<FCreatorMeshMaterialParam_Vector>() == std::is_polymorphic<FCreatorMeshMaterialParam>(), "USTRUCT FCreatorMeshMaterialParam_Vector cannot be polymorphic unless super FCreatorMeshMaterialParam is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector;
class UScriptStruct* FCreatorMeshMaterialParam_Vector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMaterialParam_Vector"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMaterialParam_Vector>()
{
	return FCreatorMeshMaterialParam_Vector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorTagID_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Vectors" },
		{ "Category", "Mesh Material" },
		{ "Comment", "//The vector tag we'll read the vector value from \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The vector tag we'll read the vector value from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTagID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMaterialParam_Vector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::NewProp_VectorTagID = { "VectorTagID", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialParam_Vector, VectorTagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorTagID_MetaData), NewProp_VectorTagID_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::NewProp_VectorTagID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCreatorMeshMaterialParam,
	&NewStructOps,
	"CreatorMeshMaterialParam_Vector",
	Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::PropPointers),
	sizeof(FCreatorMeshMaterialParam_Vector),
	alignof(FCreatorMeshMaterialParam_Vector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMaterialParam_Vector

// Begin ScriptStruct FCreatorMeshMaterialParam_Scalar
static_assert(std::is_polymorphic<FCreatorMeshMaterialParam_Scalar>() == std::is_polymorphic<FCreatorMeshMaterialParam>(), "USTRUCT FCreatorMeshMaterialParam_Scalar cannot be polymorphic unless super FCreatorMeshMaterialParam is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar;
class UScriptStruct* FCreatorMeshMaterialParam_Scalar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMaterialParam_Scalar"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMaterialParam_Scalar>()
{
	return FCreatorMeshMaterialParam_Scalar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarTagID_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Scalars" },
		{ "Category", "Mesh Material" },
		{ "Comment", "//The scalar tag we'll read the scalar value from \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The scalar tag we'll read the scalar value from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarTagID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMaterialParam_Scalar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::NewProp_ScalarTagID = { "ScalarTagID", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterialParam_Scalar, ScalarTagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarTagID_MetaData), NewProp_ScalarTagID_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::NewProp_ScalarTagID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCreatorMeshMaterialParam,
	&NewStructOps,
	"CreatorMeshMaterialParam_Scalar",
	Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::PropPointers),
	sizeof(FCreatorMeshMaterialParam_Scalar),
	alignof(FCreatorMeshMaterialParam_Scalar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMaterialParam_Scalar

// Begin ScriptStruct FCreatorMeshMorph
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMorph;
class UScriptStruct* FCreatorMeshMorph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMorph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMorph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMorph, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMorph"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMorph.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMorph>()
{
	return FCreatorMeshMorph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarTag_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Scalars" },
		{ "Category", "Morph Option" },
		{ "Comment", "//The scalar value we'll drive the morph with \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The scalar value we'll drive the morph with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphNames_MetaData[] = {
		{ "Category", "Morph Option" },
		{ "Comment", "//The morph names \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The morph names" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MorphNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMorph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewProp_ScalarTag = { "ScalarTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMorph, ScalarTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarTag_MetaData), NewProp_ScalarTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewProp_MorphNames_Inner = { "MorphNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewProp_MorphNames = { "MorphNames", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMorph, MorphNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphNames_MetaData), NewProp_MorphNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewProp_ScalarTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewProp_MorphNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewProp_MorphNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CreatorMeshMorph",
	Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::PropPointers),
	sizeof(FCreatorMeshMorph),
	alignof(FCreatorMeshMorph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMorph()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMorph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMorph.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMorph.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMorph

// Begin ScriptStruct FCreatorMeshMaterial
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreatorMeshMaterial;
class UScriptStruct* FCreatorMeshMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreatorMeshMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatorMeshMaterial, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CreatorMeshMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterial.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCreatorMeshMaterial>()
{
	return FCreatorMeshMaterial::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a material we need to apply to the set mesh, along with any params to set on it  \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Defines a material we need to apply to the set mesh, along with any params to set on it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The material to apply\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The material to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParams_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The vector parameter values to apply to the material \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The vector parameter values to apply to the material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParams_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The scalar parameter values to apply to the material \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The scalar parameter values to apply to the material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatorMeshMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000001010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_VectorParams_Inner = { "VectorParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector, METADATA_PARAMS(0, nullptr) }; // 3704214798
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_VectorParams = { "VectorParams", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterial, VectorParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParams_MetaData), NewProp_VectorParams_MetaData) }; // 3704214798
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_ScalarParams_Inner = { "ScalarParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar, METADATA_PARAMS(0, nullptr) }; // 2179393787
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_ScalarParams = { "ScalarParams", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreatorMeshMaterial, ScalarParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParams_MetaData), NewProp_ScalarParams_MetaData) }; // 2179393787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_VectorParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_VectorParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_ScalarParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewProp_ScalarParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CreatorMeshMaterial",
	Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::PropPointers),
	sizeof(FCreatorMeshMaterial),
	alignof(FCreatorMeshMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreatorMeshMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_CreatorMeshMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreatorMeshMaterial.InnerSingleton, Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreatorMeshMaterial.InnerSingleton;
}
// End ScriptStruct FCreatorMeshMaterial

// Begin ScriptStruct FCharacterCreatorAttribute_Mesh
static_assert(std::is_polymorphic<FCharacterCreatorAttribute_Mesh>() == std::is_polymorphic<FCharacterCreatorAttribute>(), "USTRUCT FCharacterCreatorAttribute_Mesh cannot be polymorphic unless super FCharacterCreatorAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh;
class UScriptStruct* FCharacterCreatorAttribute_Mesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorAttribute_Mesh"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorAttribute_Mesh>()
{
	return FCharacterCreatorAttribute_Mesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Base class for a default mesh for a slot \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Base class for a default mesh for a slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The mesh we should apply to the character \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The mesh we should apply to the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeaderPose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Should the mesh follow the leader pose component?\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Should the mesh follow the leader pose component?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshAnimBP_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//If we're not using leader pose this is the animBP the mesh should use\n" },
		{ "EditCondition", "!bUseLeaderPose" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "If we're not using leader pose this is the animBP the mesh should use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaterials_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Maps material index -> Creator mesh material. By default if a value doesn't exist in this map we'll just use the material \n// that was set on the mesh by default and wont set any params on it or anything. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Maps material index -> Creator mesh material. By default if a value doesn't exist in this map we'll just use the material\n that was set on the mesh by default and wont set any params on it or anything." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Morphs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The morphs to apply to the mesh\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The morphs to apply to the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_bUseLeaderPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeaderPose;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeshAnimBP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Morphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Morphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorAttribute_Mesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000001010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Mesh, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
void Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_bUseLeaderPose_SetBit(void* Obj)
{
	((FCharacterCreatorAttribute_Mesh*)Obj)->bUseLeaderPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_bUseLeaderPose = { "bUseLeaderPose", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterCreatorAttribute_Mesh), &Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_bUseLeaderPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLeaderPose_MetaData), NewProp_bUseLeaderPose_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_MeshAnimBP = { "MeshAnimBP", nullptr, (EPropertyFlags)0x0014000001010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Mesh, MeshAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshAnimBP_MetaData), NewProp_MeshAnimBP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_MeshMaterials_Inner = { "MeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreatorMeshMaterial, METADATA_PARAMS(0, nullptr) }; // 1566717625
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_MeshMaterials = { "MeshMaterials", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Mesh, MeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMaterials_MetaData), NewProp_MeshMaterials_MetaData) }; // 1566717625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_Morphs_Inner = { "Morphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreatorMeshMorph, METADATA_PARAMS(0, nullptr) }; // 3138440107
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_Morphs = { "Morphs", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Mesh, Morphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Morphs_MetaData), NewProp_Morphs_MetaData) }; // 3138440107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_bUseLeaderPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_MeshAnimBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_MeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_MeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_Morphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewProp_Morphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCharacterCreatorAttribute,
	&NewStructOps,
	"CharacterCreatorAttribute_Mesh",
	Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::PropPointers),
	sizeof(FCharacterCreatorAttribute_Mesh),
	alignof(FCharacterCreatorAttribute_Mesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorAttribute_Mesh

// Begin ScriptStruct FCharacterCreatorAttribute_Groom
static_assert(std::is_polymorphic<FCharacterCreatorAttribute_Groom>() == std::is_polymorphic<FCharacterCreatorAttribute>(), "USTRUCT FCharacterCreatorAttribute_Groom cannot be polymorphic unless super FCharacterCreatorAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom;
class UScriptStruct* FCharacterCreatorAttribute_Groom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorAttribute_Groom"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorAttribute_Groom>()
{
	return FCharacterCreatorAttribute_Groom::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Base class for a default groom for a slot \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Base class for a default groom for a slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomAsset_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "//The groom we should apply\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The groom we should apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomBindingAsset_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "//The groom binding we should apply\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The groom binding we should apply" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomBindingAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorAttribute_Groom>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0114000001010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Groom, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomAsset_MetaData), NewProp_GroomAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::NewProp_GroomBindingAsset = { "GroomBindingAsset", nullptr, (EPropertyFlags)0x0114000001010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttribute_Groom, GroomBindingAsset), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomBindingAsset_MetaData), NewProp_GroomBindingAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::NewProp_GroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::NewProp_GroomBindingAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FCharacterCreatorAttribute,
	&NewStructOps,
	"CharacterCreatorAttribute_Groom",
	Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::PropPointers),
	sizeof(FCharacterCreatorAttribute_Groom),
	alignof(FCharacterCreatorAttribute_Groom),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorAttribute_Groom

// Begin ScriptStruct FCharacterCreatorAttributeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet;
class UScriptStruct* FCharacterCreatorAttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterCreatorAttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterCreatorAttributeSet>()
{
	return FCharacterCreatorAttributeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A set of character attributes ready to be applied to a character  \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "A set of character attributes ready to be applied to a character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormTag_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Forms" },
		{ "Category", "Attribute" },
		{ "Comment", "//The form we've selected in the character creator \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The form we've selected in the character creator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedAnimBP_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The animBP the character should use when unarmed - this should probably be soft referenced\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The animBP the character should use when unarmed - this should probably be soft referenced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Mesh" },
		{ "Category", "Attribute" },
		{ "Comment", "//The meshes to apply to the character\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The meshes to apply to the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grooms_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Groom" },
		{ "Category", "Attribute" },
		{ "Comment", "//The grooms to apply to the character\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The grooms to apply to the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Morphs_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The morphs to apply to the character\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "The morphs to apply to the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarValues_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Scalars" },
		{ "Category", "Attribute" },
		{ "Comment", "//Global scalar values that morphs and meshes can reference \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Global scalar values that morphs and meshes can reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValues_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Vectors" },
		{ "Category", "Attribute" },
		{ "Comment", "//Global vector values that morphs and meshes can reference \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorAttributes.h" },
		{ "ToolTip", "Global vector values that morphs and meshes can reference" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnarmedAnimBP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grooms_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grooms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Grooms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Morphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Morphs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ScalarValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VectorValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCreatorAttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_FormTag = { "FormTag", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, FormTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormTag_MetaData), NewProp_FormTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_UnarmedAnimBP = { "UnarmedAnimBP", nullptr, (EPropertyFlags)0x0014000001010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, UnarmedAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedAnimBP_MetaData), NewProp_UnarmedAnimBP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Meshes_ValueProp = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh, METADATA_PARAMS(0, nullptr) }; // 2114742728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Meshes_Key_KeyProp = { "Meshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, Meshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 1298103297 2114742728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Grooms_ValueProp = { "Grooms", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom, METADATA_PARAMS(0, nullptr) }; // 1267147590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Grooms_Key_KeyProp = { "Grooms_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Grooms = { "Grooms", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, Grooms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grooms_MetaData), NewProp_Grooms_MetaData) }; // 1298103297 1267147590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Morphs_Inner = { "Morphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph, METADATA_PARAMS(0, nullptr) }; // 3532211338
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Morphs = { "Morphs", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, Morphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Morphs_MetaData), NewProp_Morphs_MetaData) }; // 3532211338
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_ScalarValues_ValueProp = { "ScalarValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_ScalarValues_Key_KeyProp = { "ScalarValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_ScalarValues = { "ScalarValues", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, ScalarValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarValues_MetaData), NewProp_ScalarValues_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_VectorValues_ValueProp = { "VectorValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_VectorValues_Key_KeyProp = { "VectorValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_VectorValues = { "VectorValues", nullptr, (EPropertyFlags)0x0010000001010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterCreatorAttributeSet, VectorValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValues_MetaData), NewProp_VectorValues_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_FormTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_UnarmedAnimBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Meshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Meshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Grooms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Grooms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Grooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Morphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_Morphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_ScalarValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_ScalarValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_ScalarValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_VectorValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_VectorValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewProp_VectorValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CharacterCreatorAttributeSet",
	Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::PropPointers),
	sizeof(FCharacterCreatorAttributeSet),
	alignof(FCharacterCreatorAttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet.InnerSingleton;
}
// End ScriptStruct FCharacterCreatorAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorAttributes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterCreatorAttribute::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Statics::NewStructOps, TEXT("CharacterCreatorAttribute"), &Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorAttribute), 1970597509U) },
		{ FCharacterCreatorAttribute_Morph::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Morph_Statics::NewStructOps, TEXT("CharacterCreatorAttribute_Morph"), &Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Morph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorAttribute_Morph), 3532211338U) },
		{ FCreatorMeshMaterialParam::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Statics::NewStructOps, TEXT("CreatorMeshMaterialParam"), &Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMaterialParam), 4186243942U) },
		{ FCreatorMeshMaterialParam_Vector::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Vector_Statics::NewStructOps, TEXT("CreatorMeshMaterialParam_Vector"), &Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Vector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMaterialParam_Vector), 3704214798U) },
		{ FCreatorMeshMaterialParam_Scalar::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMaterialParam_Scalar_Statics::NewStructOps, TEXT("CreatorMeshMaterialParam_Scalar"), &Z_Registration_Info_UScriptStruct_CreatorMeshMaterialParam_Scalar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMaterialParam_Scalar), 2179393787U) },
		{ FCreatorMeshMorph::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMorph_Statics::NewStructOps, TEXT("CreatorMeshMorph"), &Z_Registration_Info_UScriptStruct_CreatorMeshMorph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMorph), 3138440107U) },
		{ FCreatorMeshMaterial::StaticStruct, Z_Construct_UScriptStruct_FCreatorMeshMaterial_Statics::NewStructOps, TEXT("CreatorMeshMaterial"), &Z_Registration_Info_UScriptStruct_CreatorMeshMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreatorMeshMaterial), 1566717625U) },
		{ FCharacterCreatorAttribute_Mesh::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh_Statics::NewStructOps, TEXT("CharacterCreatorAttribute_Mesh"), &Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Mesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorAttribute_Mesh), 2114742728U) },
		{ FCharacterCreatorAttribute_Groom::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom_Statics::NewStructOps, TEXT("CharacterCreatorAttribute_Groom"), &Z_Registration_Info_UScriptStruct_CharacterCreatorAttribute_Groom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorAttribute_Groom), 1267147590U) },
		{ FCharacterCreatorAttributeSet::StaticStruct, Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet_Statics::NewStructOps, TEXT("CharacterCreatorAttributeSet"), &Z_Registration_Info_UScriptStruct_CharacterCreatorAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterCreatorAttributeSet), 420917075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorAttributes_h_4239593184(TEXT("/Script/NarrativeArsenal"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorAttributes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorAttributes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

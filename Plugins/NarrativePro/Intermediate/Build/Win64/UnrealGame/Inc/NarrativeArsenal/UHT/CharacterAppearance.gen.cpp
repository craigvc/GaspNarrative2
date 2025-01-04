// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterAppearance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAppearance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearance();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearance_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterAppearance
void UCharacterAppearance::StaticRegisterNativesUCharacterAppearance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAppearance);
UClass* Z_Construct_UClass_UCharacterAppearance_NoRegister()
{
	return UCharacterAppearance::StaticClass();
}
struct Z_Construct_UClass_UCharacterAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines what a character should look like without any items on - ie their default skin. \n */" },
		{ "IncludePath", "CharacterAppearance.h" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "Defines what a character should look like without any items on - ie their default skin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMeshOverride_MetaData[] = {
		{ "Category", "Meshes|Base" },
		{ "Comment", "/**Allows for changing the base character mesh, which defaults to manny. */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "Allows for changing the base character mesh, which defaults to manny." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadMesh_MetaData[] = {
		{ "Category", "Meshes|Head" },
		{ "Comment", "/**The head mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The head mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadMeshMaterials_MetaData[] = {
		{ "Category", "Meshes|Head" },
		{ "Comment", "/**The materials to apply to the head mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The materials to apply to the head mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorsoMesh_MetaData[] = {
		{ "Category", "Meshes|Torso" },
		{ "Comment", "/**The Torso mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The Torso mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorsoMeshMaterials_MetaData[] = {
		{ "Category", "Meshes|Torso" },
		{ "Comment", "/**The materials to apply to the clothing mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The materials to apply to the clothing mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegsMesh_MetaData[] = {
		{ "Category", "Meshes|Legs" },
		{ "Comment", "/**The Legs mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The Legs mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegsMeshMaterials_MetaData[] = {
		{ "Category", "Meshes|Legs" },
		{ "Comment", "/**The materials to apply to the clothing mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The materials to apply to the clothing mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeetMesh_MetaData[] = {
		{ "Category", "Meshes|Feet" },
		{ "Comment", "/**The Feet mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The Feet mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeetMeshMaterials_MetaData[] = {
		{ "Category", "Meshes|Feet" },
		{ "Comment", "/**The materials to apply to the clothing mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The materials to apply to the clothing mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Meshes|Body" },
		{ "Comment", "/**The Body mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The Body mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMeshMaterials_MetaData[] = {
		{ "Category", "Meshes|Body" },
		{ "Comment", "/**The materials to apply to the body mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The materials to apply to the body mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelmetMesh_MetaData[] = {
		{ "Category", "Meshes|Helmet" },
		{ "Comment", "/**The Helmet mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The Helmet mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelmetMeshMaterials_MetaData[] = {
		{ "Category", "Meshes|Helmet" },
		{ "Comment", "/**The materials to apply to the helmet mesh*/" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The materials to apply to the helmet mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairGroom_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom asset to apply to the hair */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom asset to apply to the hair" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairGroomBinding_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom binding asset to apply to the hair */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom binding asset to apply to the hair" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeardGroom_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom asset to apply to the Beard */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom asset to apply to the Beard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeardGroomBinding_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom binding asset to apply to the Beard */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom binding asset to apply to the Beard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuzzGroom_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom asset to apply to the Fuzz */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom asset to apply to the Fuzz" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuzzGroomBinding_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom binding asset to apply to the Fuzz */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom binding asset to apply to the Fuzz" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoustacheGroom_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom asset to apply to the Moustache */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom asset to apply to the Moustache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoustacheGroomBinding_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom binding asset to apply to the Moustache */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom binding asset to apply to the Moustache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyebrowGroom_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom asset to apply to the Eyebrow */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom asset to apply to the Eyebrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyebrowGroomBinding_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom binding asset to apply to the Eyebrow */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom binding asset to apply to the Eyebrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyelashGroom_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom asset to apply to the Eyelash */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom asset to apply to the Eyelash" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyelashGroomBinding_MetaData[] = {
		{ "Category", "Grooms" },
		{ "Comment", "/**The groom binding asset to apply to the Eyelash */" },
		{ "ModuleRelativePath", "Public/CharacterAppearance.h" },
		{ "ToolTip", "The groom binding asset to apply to the Eyelash" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMeshOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadMeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeadMeshMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoMeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TorsoMeshMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LegsMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LegsMeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LegsMeshMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeetMeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FeetMeshMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BodyMeshMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelmetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelmetMeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HelmetMeshMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HairGroom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HairGroomBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeardGroom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeardGroomBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FuzzGroom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FuzzGroomBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoustacheGroom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoustacheGroomBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EyebrowGroom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EyebrowGroomBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EyelashGroom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EyelashGroomBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAppearance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BaseMeshOverride = { "BaseMeshOverride", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, BaseMeshOverride), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMeshOverride_MetaData), NewProp_BaseMeshOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HeadMesh = { "HeadMesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, HeadMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadMesh_MetaData), NewProp_HeadMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HeadMeshMaterials_Inner = { "HeadMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HeadMeshMaterials = { "HeadMeshMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, HeadMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadMeshMaterials_MetaData), NewProp_HeadMeshMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_TorsoMesh = { "TorsoMesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, TorsoMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorsoMesh_MetaData), NewProp_TorsoMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_TorsoMeshMaterials_Inner = { "TorsoMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_TorsoMeshMaterials = { "TorsoMeshMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, TorsoMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorsoMeshMaterials_MetaData), NewProp_TorsoMeshMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_LegsMesh = { "LegsMesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, LegsMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegsMesh_MetaData), NewProp_LegsMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_LegsMeshMaterials_Inner = { "LegsMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_LegsMeshMaterials = { "LegsMeshMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, LegsMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegsMeshMaterials_MetaData), NewProp_LegsMeshMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FeetMesh = { "FeetMesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, FeetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeetMesh_MetaData), NewProp_FeetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FeetMeshMaterials_Inner = { "FeetMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FeetMeshMaterials = { "FeetMeshMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, FeetMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeetMeshMaterials_MetaData), NewProp_FeetMeshMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, BodyMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMesh_MetaData), NewProp_BodyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BodyMeshMaterials_Inner = { "BodyMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BodyMeshMaterials = { "BodyMeshMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, BodyMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMeshMaterials_MetaData), NewProp_BodyMeshMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HelmetMesh = { "HelmetMesh", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, HelmetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelmetMesh_MetaData), NewProp_HelmetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HelmetMeshMaterials_Inner = { "HelmetMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HelmetMeshMaterials = { "HelmetMeshMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, HelmetMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelmetMeshMaterials_MetaData), NewProp_HelmetMeshMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HairGroom = { "HairGroom", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, HairGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairGroom_MetaData), NewProp_HairGroom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HairGroomBinding = { "HairGroomBinding", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, HairGroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairGroomBinding_MetaData), NewProp_HairGroomBinding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BeardGroom = { "BeardGroom", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, BeardGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeardGroom_MetaData), NewProp_BeardGroom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BeardGroomBinding = { "BeardGroomBinding", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, BeardGroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeardGroomBinding_MetaData), NewProp_BeardGroomBinding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FuzzGroom = { "FuzzGroom", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, FuzzGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuzzGroom_MetaData), NewProp_FuzzGroom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FuzzGroomBinding = { "FuzzGroomBinding", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, FuzzGroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuzzGroomBinding_MetaData), NewProp_FuzzGroomBinding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_MoustacheGroom = { "MoustacheGroom", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, MoustacheGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoustacheGroom_MetaData), NewProp_MoustacheGroom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_MoustacheGroomBinding = { "MoustacheGroomBinding", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, MoustacheGroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoustacheGroomBinding_MetaData), NewProp_MoustacheGroomBinding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyebrowGroom = { "EyebrowGroom", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, EyebrowGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyebrowGroom_MetaData), NewProp_EyebrowGroom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyebrowGroomBinding = { "EyebrowGroomBinding", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, EyebrowGroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyebrowGroomBinding_MetaData), NewProp_EyebrowGroomBinding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyelashGroom = { "EyelashGroom", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, EyelashGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyelashGroom_MetaData), NewProp_EyelashGroom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyelashGroomBinding = { "EyelashGroomBinding", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, EyelashGroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyelashGroomBinding_MetaData), NewProp_EyelashGroomBinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BaseMeshOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HeadMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HeadMeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HeadMeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_TorsoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_TorsoMeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_TorsoMeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_LegsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_LegsMeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_LegsMeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FeetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FeetMeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FeetMeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BodyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BodyMeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BodyMeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HelmetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HelmetMeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HelmetMeshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HairGroom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_HairGroomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BeardGroom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_BeardGroomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FuzzGroom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_FuzzGroomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_MoustacheGroom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_MoustacheGroomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyebrowGroom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyebrowGroomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyelashGroom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_EyelashGroomBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAppearance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAppearance_Statics::ClassParams = {
	&UCharacterAppearance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAppearance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAppearance()
{
	if (!Z_Registration_Info_UClass_UCharacterAppearance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAppearance.OuterSingleton, Z_Construct_UClass_UCharacterAppearance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAppearance.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterAppearance>()
{
	return UCharacterAppearance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAppearance);
UCharacterAppearance::~UCharacterAppearance() {}
// End Class UCharacterAppearance

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterAppearance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAppearance, UCharacterAppearance::StaticClass, TEXT("UCharacterAppearance"), &Z_Registration_Info_UClass_UCharacterAppearance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAppearance), 864226668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterAppearance_h_2603894033(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterAppearance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterAppearance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

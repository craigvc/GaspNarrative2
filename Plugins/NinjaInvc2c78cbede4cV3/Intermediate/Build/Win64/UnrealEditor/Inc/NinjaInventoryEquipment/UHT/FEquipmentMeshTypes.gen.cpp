// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentMeshTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEquipmentMeshTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAnimLayer();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentBaseMesh();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentSkeletalMesh();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentStaticMesh();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin ScriptStruct FEquipmentBaseMesh
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentBaseMesh;
class UScriptStruct* FEquipmentBaseMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentBaseMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentBaseMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentBaseMesh, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentBaseMesh"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentBaseMesh.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentBaseMesh>()
{
	return FEquipmentBaseMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "Category", "Mesh" },
		{ "Comment", "/** Gameplay Tag representing the equipment slot. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Gameplay Tag representing the equipment slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTags_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Tags that may further describe this mesh. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Tags that may further describe this mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** An optional socket that can be used to reattach the component. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "An optional socket that can be used to reattach the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibilityChecks_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 * A set of checks to ensure this mesh is compatible with the owner.\n\x09 * \n\x09 * Useful for cases when you have assets that can be granted to different types of characters\n\x09 * (i.e. male and female body types), and want to select which mesh to use for the owner.\n\x09 *\n\x09 * For that purpose you can, for example, check for certain Gameplay Tags in the owner, or\n\x09 * identify certain environmental aspects such as special dates for cosmetics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "A set of checks to ensure this mesh is compatible with the owner.\n\nUseful for cases when you have assets that can be granted to different types of characters\n(i.e. male and female body types), and want to select which mesh to use for the owner.\n\nFor that purpose you can, for example, check for certain Gameplay Tags in the owner, or\nidentify certain environmental aspects such as special dates for cosmetics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CompatibilityChecks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibilityChecks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentBaseMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentBaseMesh, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_MeshTags = { "MeshTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentBaseMesh, MeshTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTags_MetaData), NewProp_MeshTags_MetaData) }; // 3352185621
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentBaseMesh, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_CompatibilityChecks_Inner = { "CompatibilityChecks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_CompatibilityChecks = { "CompatibilityChecks", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentBaseMesh, CompatibilityChecks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibilityChecks_MetaData), NewProp_CompatibilityChecks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_MeshTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_CompatibilityChecks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewProp_CompatibilityChecks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentBaseMesh",
	Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::PropPointers),
	sizeof(FEquipmentBaseMesh),
	alignof(FEquipmentBaseMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentBaseMesh()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentBaseMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentBaseMesh.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentBaseMesh.InnerSingleton;
}
// End ScriptStruct FEquipmentBaseMesh

// Begin ScriptStruct FEquipmentSkeletalMesh
static_assert(std::is_polymorphic<FEquipmentSkeletalMesh>() == std::is_polymorphic<FEquipmentBaseMesh>(), "USTRUCT FEquipmentSkeletalMesh cannot be polymorphic unless super FEquipmentBaseMesh is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh;
class UScriptStruct* FEquipmentSkeletalMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentSkeletalMesh, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentSkeletalMesh"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentSkeletalMesh>()
{
	return FEquipmentSkeletalMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configures a skeletal mesh asset assigned to a slot. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Configures a skeletal mesh asset assigned to a slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The Skeletal Mesh to use. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "The Skeletal Mesh to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentSkeletalMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentSkeletalMesh, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	Z_Construct_UScriptStruct_FEquipmentBaseMesh,
	&NewStructOps,
	"EquipmentSkeletalMesh",
	Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::PropPointers),
	sizeof(FEquipmentSkeletalMesh),
	alignof(FEquipmentSkeletalMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentSkeletalMesh()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh.InnerSingleton;
}
// End ScriptStruct FEquipmentSkeletalMesh

// Begin ScriptStruct FEquipmentStaticMesh
static_assert(std::is_polymorphic<FEquipmentStaticMesh>() == std::is_polymorphic<FEquipmentBaseMesh>(), "USTRUCT FEquipmentStaticMesh cannot be polymorphic unless super FEquipmentBaseMesh is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentStaticMesh;
class UScriptStruct* FEquipmentStaticMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentStaticMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentStaticMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentStaticMesh, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentStaticMesh"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentStaticMesh.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentStaticMesh>()
{
	return FEquipmentStaticMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configures a static mesh asset assigned to a slot. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Configures a static mesh asset assigned to a slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The Static Mesh to use. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "The Static Mesh to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentStaticMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentStaticMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	Z_Construct_UScriptStruct_FEquipmentBaseMesh,
	&NewStructOps,
	"EquipmentStaticMesh",
	Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::PropPointers),
	sizeof(FEquipmentStaticMesh),
	alignof(FEquipmentStaticMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentStaticMesh()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentStaticMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentStaticMesh.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentStaticMesh.InnerSingleton;
}
// End ScriptStruct FEquipmentStaticMesh

// Begin ScriptStruct FStoredEquipmentMeshComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent;
class UScriptStruct* FStoredEquipmentMeshComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("StoredEquipmentMeshComponent"));
	}
	return Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FStoredEquipmentMeshComponent>()
{
	return FStoredEquipmentMeshComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about an equipment mesh component that has been saved. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Information about an equipment mesh component that has been saved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Category", "Saved Mesh" },
		{ "Comment", "/** Slot Tag that selected this component. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Slot Tag that selected this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Saved Mesh" },
		{ "Comment", "/** The Mesh Component to use. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "The Mesh Component to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoredEquipmentMeshComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoredEquipmentMeshComponent, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoredEquipmentMeshComponent, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"StoredEquipmentMeshComponent",
	Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::PropPointers),
	sizeof(FStoredEquipmentMeshComponent),
	alignof(FStoredEquipmentMeshComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent()
{
	if (!Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent.InnerSingleton, Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent.InnerSingleton;
}
// End ScriptStruct FStoredEquipmentMeshComponent

// Begin ScriptStruct FEquipmentAnimLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAnimLayer;
class UScriptStruct* FEquipmentAnimLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAnimLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAnimLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAnimLayer, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentAnimLayer"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAnimLayer.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentAnimLayer>()
{
	return FEquipmentAnimLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configures an Animation Layer to be linked to the owner. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Configures an Animation Layer to be linked to the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceLayerClass_MetaData[] = {
		{ "Category", "Anim Layer" },
		{ "Comment", "/** Animation Layer class to be linked to a Skeletal Mesh Component. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Animation Layer class to be linked to a Skeletal Mesh Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponentSelectorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Class used to select the proper Skeletal Mesh Component. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Class used to select the proper Skeletal Mesh Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimInstanceLayerClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SkeletalMeshComponentSelectorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAnimLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::NewProp_AnimInstanceLayerClass = { "AnimInstanceLayerClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAnimLayer, AnimInstanceLayerClass), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstanceLayerClass_MetaData), NewProp_AnimInstanceLayerClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::NewProp_SkeletalMeshComponentSelectorClass = { "SkeletalMeshComponentSelectorClass", nullptr, (EPropertyFlags)0x0014000002010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAnimLayer, SkeletalMeshComponentSelectorClass), Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponentSelectorClass_MetaData), NewProp_SkeletalMeshComponentSelectorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::NewProp_AnimInstanceLayerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::NewProp_SkeletalMeshComponentSelectorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentAnimLayer",
	Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::PropPointers),
	sizeof(FEquipmentAnimLayer),
	alignof(FEquipmentAnimLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAnimLayer()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAnimLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAnimLayer.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAnimLayer.InnerSingleton;
}
// End ScriptStruct FEquipmentAnimLayer

// Begin ScriptStruct FStoredEquipmentAnimLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer;
class UScriptStruct* FStoredEquipmentAnimLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("StoredEquipmentAnimLayer"));
	}
	return Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FStoredEquipmentAnimLayer>()
{
	return FStoredEquipmentAnimLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Registers an animation layer that has been assigned. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Registers an animation layer that has been assigned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Saved Mesh" },
		{ "Comment", "/** The Mesh Component storing the animation layer. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "The Mesh Component storing the animation layer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceLayerClass_MetaData[] = {
		{ "Category", "Anim Layer" },
		{ "Comment", "/** Animation Layer class to be linked to a Skeletal Mesh Component. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentMeshTypes.h" },
		{ "ToolTip", "Animation Layer class to be linked to a Skeletal Mesh Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimInstanceLayerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoredEquipmentAnimLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoredEquipmentAnimLayer, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::NewProp_AnimInstanceLayerClass = { "AnimInstanceLayerClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoredEquipmentAnimLayer, AnimInstanceLayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstanceLayerClass_MetaData), NewProp_AnimInstanceLayerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::NewProp_AnimInstanceLayerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"StoredEquipmentAnimLayer",
	Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::PropPointers),
	sizeof(FStoredEquipmentAnimLayer),
	alignof(FStoredEquipmentAnimLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer()
{
	if (!Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer.InnerSingleton, Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer.InnerSingleton;
}
// End ScriptStruct FStoredEquipmentAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentMeshTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEquipmentBaseMesh::StaticStruct, Z_Construct_UScriptStruct_FEquipmentBaseMesh_Statics::NewStructOps, TEXT("EquipmentBaseMesh"), &Z_Registration_Info_UScriptStruct_EquipmentBaseMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentBaseMesh), 3354691004U) },
		{ FEquipmentSkeletalMesh::StaticStruct, Z_Construct_UScriptStruct_FEquipmentSkeletalMesh_Statics::NewStructOps, TEXT("EquipmentSkeletalMesh"), &Z_Registration_Info_UScriptStruct_EquipmentSkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentSkeletalMesh), 1300637625U) },
		{ FEquipmentStaticMesh::StaticStruct, Z_Construct_UScriptStruct_FEquipmentStaticMesh_Statics::NewStructOps, TEXT("EquipmentStaticMesh"), &Z_Registration_Info_UScriptStruct_EquipmentStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentStaticMesh), 668275448U) },
		{ FStoredEquipmentMeshComponent::StaticStruct, Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent_Statics::NewStructOps, TEXT("StoredEquipmentMeshComponent"), &Z_Registration_Info_UScriptStruct_StoredEquipmentMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoredEquipmentMeshComponent), 3262867707U) },
		{ FEquipmentAnimLayer::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAnimLayer_Statics::NewStructOps, TEXT("EquipmentAnimLayer"), &Z_Registration_Info_UScriptStruct_EquipmentAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAnimLayer), 3626532477U) },
		{ FStoredEquipmentAnimLayer::StaticStruct, Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer_Statics::NewStructOps, TEXT("StoredEquipmentAnimLayer"), &Z_Registration_Info_UScriptStruct_StoredEquipmentAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoredEquipmentAnimLayer), 2026335495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentMeshTypes_h_3335120152(TEXT("/Script/NinjaInventoryEquipment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentMeshTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentMeshTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

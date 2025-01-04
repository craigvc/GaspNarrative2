// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Animation/AnimNotifyState_AttachConsumableMesh.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_AttachConsumableMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_NoRegister();
NINJAINVENTORYGAMEPLAY_API UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Enum EConsumableMeshType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsumableMeshType;
static UEnum* EConsumableMeshType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConsumableMeshType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConsumableMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("EConsumableMeshType"));
	}
	return Z_Registration_Info_UEnum_EConsumableMeshType.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UEnum* StaticEnum<EConsumableMeshType>()
{
	return EConsumableMeshType_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mesh type that represents the consumable.\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "SkeletalMesh.Name", "EConsumableMeshType::SkeletalMesh" },
		{ "StaticMesh.Name", "EConsumableMeshType::StaticMesh" },
		{ "ToolTip", "Mesh type that represents the consumable." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConsumableMeshType::SkeletalMesh", (int64)EConsumableMeshType::SkeletalMesh },
		{ "EConsumableMeshType::StaticMesh", (int64)EConsumableMeshType::StaticMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	nullptr,
	"EConsumableMeshType",
	"EConsumableMeshType",
	Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType()
{
	if (!Z_Registration_Info_UEnum_EConsumableMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsumableMeshType.InnerSingleton, Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConsumableMeshType.InnerSingleton;
}
// End Enum EConsumableMeshType

// Begin Class UAnimNotifyState_AttachConsumableMesh Function GetEquipmentManager
struct Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics
{
	struct AnimNotifyState_AttachConsumableMesh_eventGetEquipmentManager_Parms
	{
		UNinjaEquipmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Animation" },
		{ "Comment", "/**\n\x09 * Provides the Equipment Manager assigned to this Notify State.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "Provides the Equipment Manager assigned to this Notify State." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_AttachConsumableMesh_eventGetEquipmentManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh, nullptr, "GetEquipmentManager", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::AnimNotifyState_AttachConsumableMesh_eventGetEquipmentManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::AnimNotifyState_AttachConsumableMesh_eventGetEquipmentManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyState_AttachConsumableMesh::execGetEquipmentManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=P_THIS->GetEquipmentManager();
	P_NATIVE_END;
}
// End Class UAnimNotifyState_AttachConsumableMesh Function GetEquipmentManager

// Begin Class UAnimNotifyState_AttachConsumableMesh
void UAnimNotifyState_AttachConsumableMesh::StaticRegisterNativesUAnimNotifyState_AttachConsumableMesh()
{
	UClass* Class = UAnimNotifyState_AttachConsumableMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentManager", &UAnimNotifyState_AttachConsumableMesh::execGetEquipmentManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_AttachConsumableMesh);
UClass* Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_NoRegister()
{
	return UAnimNotifyState_AttachConsumableMesh::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Attaches a consumable mesh to a slot, for the duration of the notify state.\n *\n * Consumables usually don't have a physical presence, therefore they usually don't have an\n * Equipment Definition related to them. This Animation Notify State is useful for those cases,\n * where a mesh should be attached to the owner, to represent the consumable during the animation.\n *\n * It's also connected to the Asset Manager, so meshes are soft references, and their handles\n * are released when the animation is finished.\n */" },
		{ "DisplayName", "Attach Consumable Mesh" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "Attaches a consumable mesh to a slot, for the duration of the notify state.\n\nConsumables usually don't have a physical presence, therefore they usually don't have an\nEquipment Definition related to them. This Animation Notify State is useful for those cases,\nwhere a mesh should be attached to the owner, to represent the consumable during the animation.\n\nIt's also connected to the Asset Manager, so meshes are soft references, and their handles\nare released when the animation is finished." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/** Type of asset that represents the consumable. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "Type of asset that represents the consumable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/** The Skeletal Mesh to use. */" },
		{ "EditCondition", "MeshType == EConsumableMeshType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "The Skeletal Mesh to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/** The Static Mesh to use. */" },
		{ "EditCondition", "MeshType == EConsumableMeshType::StaticMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "The Static Mesh to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "Category", "Consumable" },
		{ "Comment", "/** Gameplay Tag representing the slot used to attach the consumable (i.e. Equipment.Slot.Consumable). */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "Gameplay Tag representing the slot used to attach the consumable (i.e. Equipment.Slot.Consumable)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "Consumable" },
		{ "Comment", "/** Socket used to attach the new Mesh Component. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "Socket used to attach the new Mesh Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotsToHide_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "Category", "Consumable" },
		{ "Comment", "/**\n\x09 * Equipment slots that must be hidden while the animation is playing.\n\x09 *\n\x09 * Since consumables are usually attached to the character's main hand, it is very likely\n\x09 * that any equipment being currently held must be temporarily hidden.\n\x09 *\n\x09 * This is done by changing the visibility of the component. For that reason it's recommended\n\x09 * that you have different slots for the consumable and other items being held.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_AttachConsumableMesh.h" },
		{ "ToolTip", "Equipment slots that must be hidden while the animation is playing.\n\nSince consumables are usually attached to the character's main hand, it is very likely\nthat any equipment being currently held must be temporarily hidden.\n\nThis is done by changing the visibility of the component. For that reason it's recommended\nthat you have different slots for the consumable and other items being held." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotsToHide;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_AttachConsumableMesh_GetEquipmentManager, "GetEquipmentManager" }, // 2564404119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_AttachConsumableMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachConsumableMesh, MeshType), Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 3498012364
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachConsumableMesh, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachConsumableMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachConsumableMesh, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachConsumableMesh, AttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocket_MetaData), NewProp_AttachSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_SlotsToHide = { "SlotsToHide", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachConsumableMesh, SlotsToHide), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotsToHide_MetaData), NewProp_SlotsToHide_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_AttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::NewProp_SlotsToHide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::ClassParams = {
	&UAnimNotifyState_AttachConsumableMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_AttachConsumableMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_AttachConsumableMesh.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_AttachConsumableMesh.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UAnimNotifyState_AttachConsumableMesh>()
{
	return UAnimNotifyState_AttachConsumableMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_AttachConsumableMesh);
UAnimNotifyState_AttachConsumableMesh::~UAnimNotifyState_AttachConsumableMesh() {}
// End Class UAnimNotifyState_AttachConsumableMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConsumableMeshType_StaticEnum, TEXT("EConsumableMeshType"), &Z_Registration_Info_UEnum_EConsumableMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3498012364U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh, UAnimNotifyState_AttachConsumableMesh::StaticClass, TEXT("UAnimNotifyState_AttachConsumableMesh"), &Z_Registration_Info_UClass_UAnimNotifyState_AttachConsumableMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_AttachConsumableMesh), 1822302038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_1118152547(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Components/EquipmentComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquipmentComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnItemEquipped
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnItemEquipped_Parms
	{
		EEquippableSlot Slot;
		UEquippableItem* Equippable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Called on server when an item is added to this inventory*/" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Called on server when an item is added to this inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equippable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemEquipped_Parms, Slot), Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 620540914
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemEquipped_Parms, Equippable), Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equippable_MetaData), NewProp_Equippable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Equippable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnItemEquipped__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnItemEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnItemEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, const EEquippableSlot Slot, UEquippableItem* Equippable)
{
	struct _Script_NarrativeArsenal_eventOnItemEquipped_Parms
	{
		EEquippableSlot Slot;
		UEquippableItem* Equippable;
	};
	_Script_NarrativeArsenal_eventOnItemEquipped_Parms Parms;
	Parms.Slot=Slot;
	Parms.Equippable=Equippable;
	OnItemEquipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemEquipped

// Begin Delegate FOnItemUnequipped
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnItemUnequipped_Parms
	{
		EEquippableSlot Slot;
		UEquippableItem* Equippable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equippable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemUnequipped_Parms, Slot), Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 620540914
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemUnequipped_Parms, Equippable), Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equippable_MetaData), NewProp_Equippable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Equippable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnItemUnequipped__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnItemUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnItemUnequipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnequipped, const EEquippableSlot Slot, UEquippableItem* Equippable)
{
	struct _Script_NarrativeArsenal_eventOnItemUnequipped_Parms
	{
		EEquippableSlot Slot;
		UEquippableItem* Equippable;
	};
	_Script_NarrativeArsenal_eventOnItemUnequipped_Parms Parms;
	Parms.Slot=Slot;
	Parms.Equippable=Equippable;
	OnItemUnequipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemUnequipped

// Begin ScriptStruct FDefaultClothingMeshMaterials
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials;
class UScriptStruct* FDefaultClothingMeshMaterials::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("DefaultClothingMeshMaterials"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FDefaultClothingMeshMaterials>()
{
	return FDefaultClothingMeshMaterials::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultClothingMeshMaterials>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultClothingMeshMaterials, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"DefaultClothingMeshMaterials",
	Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::PropPointers),
	sizeof(FDefaultClothingMeshMaterials),
	alignof(FDefaultClothingMeshMaterials),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials.InnerSingleton, Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials.InnerSingleton;
}
// End ScriptStruct FDefaultClothingMeshMaterials

// Begin Class UEquipmentComponent Function GetEquippedItemAtSlot
struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics
{
	struct EquipmentComponent_eventGetEquippedItemAtSlot_Parms
	{
		EEquippableSlot Slot;
		UEquippableItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return the item equipped at the given slot\n" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return the item equipped at the given slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemAtSlot_Parms, Slot), Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 620540914
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemAtSlot_Parms, ReturnValue), Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetEquippedItemAtSlot", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::EquipmentComponent_eventGetEquippedItemAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::EquipmentComponent_eventGetEquippedItemAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetEquippedItemAtSlot)
{
	P_GET_ENUM(EEquippableSlot,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquippableItem**)Z_Param__Result=P_THIS->GetEquippedItemAtSlot(EEquippableSlot(Z_Param_Slot));
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetEquippedItemAtSlot

// Begin Class UEquipmentComponent Function GetEquippedItemsWeight
struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics
{
	struct EquipmentComponent_eventGetEquippedItemsWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return how much all of our equipped items weigh\n" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return how much all of our equipped items weigh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemsWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetEquippedItemsWeight", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::EquipmentComponent_eventGetEquippedItemsWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::EquipmentComponent_eventGetEquippedItemsWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetEquippedItemsWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEquippedItemsWeight();
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetEquippedItemsWeight

// Begin Class UEquipmentComponent Function Initialize
struct Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics
{
	struct EquipmentComponent_eventInitialize_Parms
	{
		TMap<EEquippableSlot,USkeletalMeshComponent*> ClothingMeshes;
		USkeletalMeshComponent* LeaderPoseComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/**Initialize the equipment component, by telling it which meshes link to which slot.\n\x09\n\x09@param ClothingMeshes The map which maps each clothing slot to the skeletal mesh component the clothing will equip to \n\x09@param LeaderPoseComponent the component all of the equipped items will be told to follow upon equipping. */" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Initialize the equipment component, by telling it which meshes link to which slot.\n\n       @param ClothingMeshes The map which maps each clothing slot to the skeletal mesh component the clothing will equip to\n       @param LeaderPoseComponent the component all of the equipped items will be told to follow upon equipping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderPoseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothingMeshes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClothingMeshes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClothingMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClothingMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderPoseComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_ValueProp = { "ClothingMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_Key_KeyProp = { "ClothingMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(0, nullptr) }; // 620540914
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes = { "ClothingMeshes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventInitialize_Parms, ClothingMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingMeshes_MetaData), NewProp_ClothingMeshes_MetaData) }; // 620540914
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_LeaderPoseComponent = { "LeaderPoseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventInitialize_Parms, LeaderPoseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderPoseComponent_MetaData), NewProp_LeaderPoseComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_LeaderPoseComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::EquipmentComponent_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::EquipmentComponent_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execInitialize)
{
	P_GET_TMAP(EEquippableSlot,USkeletalMeshComponent*,Z_Param_ClothingMeshes);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_LeaderPoseComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_ClothingMeshes,Z_Param_LeaderPoseComponent);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function Initialize

// Begin Class UEquipmentComponent
void UEquipmentComponent::StaticRegisterNativesUEquipmentComponent()
{
	UClass* Class = UEquipmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquippedItemAtSlot", &UEquipmentComponent::execGetEquippedItemAtSlot },
		{ "GetEquippedItemsWeight", &UEquipmentComponent::execGetEquippedItemsWeight },
		{ "Initialize", &UEquipmentComponent::execInitialize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentComponent);
UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister()
{
	return UEquipmentComponent::StaticClass();
}
struct Z_Construct_UClass_UEquipmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n\nAdd this to your pawn class, call Initialize on beginplay, and your player will be able to equip items - its that easy! \n\nTracks what items are equipped, remembers what default clothing items the player should wear if an item isn't equipped, \nand generally just manages the players equipped items.\n*/" },
		{ "DisplayName", "Narrative Equipment" },
		{ "IncludePath", "Components/EquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Add this to your pawn class, call Initialize on beginplay, and your player will be able to equip items - its that easy!\n\nTracks what items are equipped, remembers what default clothing items the player should wear if an item isn't equipped,\nand generally just manages the players equipped items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemEquipped_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUnequipped_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderPoseComponent_MetaData[] = {
		{ "Comment", "/**When we put a new item on, we need to tell it to follow the leader pose component, so we store that here. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "When we put a new item on, we need to tell it to follow the leader pose component, so we store that here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClothing_MetaData[] = {
		{ "Comment", "/**We cache this so when an item is removed we can set it back to the default*/" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "We cache this so when an item is removed we can set it back to the default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClothingMaterials_MetaData[] = {
		{ "Comment", "/**We cache this so when an item is removed we can set it back to the default materials*/" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "We cache this so when an item is removed we can set it back to the default materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippableComponents_MetaData[] = {
		{ "Comment", "/**The skeletal meshes we'll be changing if a player equips an item*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "The skeletal meshes we'll be changing if a player equips an item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItems_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/**All of the items that are currently equipped are stored in here*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "All of the items that are currently equipped are stored in here" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemEquipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUnequipped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderPoseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultClothing_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultClothing_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultClothing_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultClothing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultClothingMaterials_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultClothingMaterials_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultClothingMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultClothingMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippableComponents_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquippableComponents_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquippableComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquippableComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItems_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquippedItems_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquippedItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquippedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot, "GetEquippedItemAtSlot" }, // 594406745
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight, "GetEquippedItemsWeight" }, // 198588487
		{ &Z_Construct_UFunction_UEquipmentComponent_Initialize, "Initialize" }, // 1735146551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemEquipped = { "OnItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, OnItemEquipped), Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemEquipped_MetaData), NewProp_OnItemEquipped_MetaData) }; // 1215612637
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemUnequipped = { "OnItemUnequipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, OnItemUnequipped), Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUnequipped_MetaData), NewProp_OnItemUnequipped_MetaData) }; // 3185948529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_LeaderPoseComponent = { "LeaderPoseComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, LeaderPoseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderPoseComponent_MetaData), NewProp_LeaderPoseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing_ValueProp = { "DefaultClothing", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing_Key_KeyProp = { "DefaultClothing_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(0, nullptr) }; // 620540914
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing = { "DefaultClothing", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, DefaultClothing), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultClothing_MetaData), NewProp_DefaultClothing_MetaData) }; // 620540914
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials_ValueProp = { "DefaultClothingMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials, METADATA_PARAMS(0, nullptr) }; // 3719174328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials_Key_KeyProp = { "DefaultClothingMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(0, nullptr) }; // 620540914
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials = { "DefaultClothingMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, DefaultClothingMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultClothingMaterials_MetaData), NewProp_DefaultClothingMaterials_MetaData) }; // 620540914 3719174328
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_ValueProp = { "EquippableComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_Key_KeyProp = { "EquippableComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(0, nullptr) }; // 620540914
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents = { "EquippableComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, EquippableComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippableComponents_MetaData), NewProp_EquippableComponents_MetaData) }; // 620540914
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_ValueProp = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Key_KeyProp = { "EquippedItems_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(0, nullptr) }; // 620540914
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, EquippedItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItems_MetaData), NewProp_EquippedItems_MetaData) }; // 620540914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_LeaderPoseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultClothingMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams = {
	&UEquipmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentComponent()
{
	if (!Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton, Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UEquipmentComponent>()
{
	return UEquipmentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentComponent);
UEquipmentComponent::~UEquipmentComponent() {}
// End Class UEquipmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDefaultClothingMeshMaterials::StaticStruct, Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics::NewStructOps, TEXT("DefaultClothingMeshMaterials"), &Z_Registration_Info_UScriptStruct_DefaultClothingMeshMaterials, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultClothingMeshMaterials), 3719174328U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentComponent, UEquipmentComponent::StaticClass, TEXT("UEquipmentComponent"), &Z_Registration_Info_UClass_UEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentComponent), 1100658398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_2598512823(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

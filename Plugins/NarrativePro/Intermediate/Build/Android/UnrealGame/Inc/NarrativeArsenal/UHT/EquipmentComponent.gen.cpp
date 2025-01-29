// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Components/EquipmentComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquipmentComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnItemEquipped
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnItemEquipped_Parms
	{
		FGameplayTag Slot;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equippable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemEquipped_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemEquipped_Parms, Equippable), Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equippable_MetaData), NewProp_Equippable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature_Statics::PropPointers[] = {
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
void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, const FGameplayTag Slot, UEquippableItem* Equippable)
{
	struct _Script_NarrativeArsenal_eventOnItemEquipped_Parms
	{
		FGameplayTag Slot;
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
		FGameplayTag Slot;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equippable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemUnequipped_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnItemUnequipped_Parms, Equippable), Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equippable_MetaData), NewProp_Equippable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature_Statics::PropPointers[] = {
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
void FOnItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnequipped, const FGameplayTag Slot, UEquippableItem* Equippable)
{
	struct _Script_NarrativeArsenal_eventOnItemUnequipped_Parms
	{
		FGameplayTag Slot;
		UEquippableItem* Equippable;
	};
	_Script_NarrativeArsenal_eventOnItemUnequipped_Parms Parms;
	Parms.Slot=Slot;
	Parms.Equippable=Equippable;
	OnItemUnequipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemUnequipped

// Begin Class UEquipmentComponent Function GetEquippedItemAtSlot
struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics
{
	struct EquipmentComponent_eventGetEquippedItemAtSlot_Parms
	{
		FGameplayTag Slot;
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
		{ "Categories", "Narrative.Equipment.Slot" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemAtSlot_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemAtSlot_Parms, ReturnValue), Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot_Statics::PropPointers[] = {
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
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquippableItem**)Z_Param__Result=P_THIS->GetEquippedItemAtSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetEquippedItemAtSlot

// Begin Class UEquipmentComponent Function GetEquippedItemsOfClass
struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics
{
	struct EquipmentComponent_eventGetEquippedItemsOfClass_Parms
	{
		TSubclassOf<UEquippableItem> EquippableClass;
		TArray<UEquippableItem*> OutEquippables;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return the items that match the given equippable class\n" },
		{ "DeterminesOutputType", "EquippableClass" },
		{ "DynamicOutputParam", "OutEquippables" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return the items that match the given equippable class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutEquippables_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquippableClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutEquippables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEquippables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::NewProp_EquippableClass = { "EquippableClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemsOfClass_Parms, EquippableClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::NewProp_OutEquippables_Inner = { "OutEquippables", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::NewProp_OutEquippables = { "OutEquippables", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItemsOfClass_Parms, OutEquippables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutEquippables_MetaData), NewProp_OutEquippables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::NewProp_EquippableClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::NewProp_OutEquippables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::NewProp_OutEquippables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetEquippedItemsOfClass", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::EquipmentComponent_eventGetEquippedItemsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::EquipmentComponent_eventGetEquippedItemsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetEquippedItemsOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_EquippableClass);
	P_GET_TARRAY_REF(UEquippableItem*,Z_Param_Out_OutEquippables);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEquippedItemsOfClass(Z_Param_EquippableClass,Z_Param_Out_OutEquippables);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetEquippedItemsOfClass

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

// Begin Class UEquipmentComponent Function GetEquippedWeaponAtSlot
struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics
{
	struct EquipmentComponent_eventGetEquippedWeaponAtSlot_Parms
	{
		FGameplayTag Slot;
		UWeaponItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return the weapon equipped at the given slot\n" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return the weapon equipped at the given slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Weapon" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedWeaponAtSlot_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedWeaponAtSlot_Parms, ReturnValue), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetEquippedWeaponAtSlot", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::EquipmentComponent_eventGetEquippedWeaponAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::EquipmentComponent_eventGetEquippedWeaponAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetEquippedWeaponAtSlot)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWeaponItem**)Z_Param__Result=P_THIS->GetEquippedWeaponAtSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetEquippedWeaponAtSlot

// Begin Class UEquipmentComponent Function GetGroomComponentAtSlot
struct Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics
{
	struct EquipmentComponent_eventGetGroomComponentAtSlot_Parms
	{
		FGameplayTag Slot;
		UGroomComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return the groom for the given slot\n" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return the groom for the given slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Groom" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetGroomComponentAtSlot_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetGroomComponentAtSlot_Parms, ReturnValue), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetGroomComponentAtSlot", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::EquipmentComponent_eventGetGroomComponentAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::EquipmentComponent_eventGetGroomComponentAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetGroomComponentAtSlot)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGroomComponent**)Z_Param__Result=P_THIS->GetGroomComponentAtSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetGroomComponentAtSlot

// Begin Class UEquipmentComponent Function GetItemsWithSlot
struct Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics
{
	struct EquipmentComponent_eventGetItemsWithSlot_Parms
	{
		FGameplayTag Slot;
		TArray<UEquippableItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return the items equipped that match the slot subtag\n" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return the items equipped that match the slot subtag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetItemsWithSlot_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetItemsWithSlot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetItemsWithSlot", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::EquipmentComponent_eventGetItemsWithSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::EquipmentComponent_eventGetItemsWithSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetItemsWithSlot)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UEquippableItem*>*)Z_Param__Result=P_THIS->GetItemsWithSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetItemsWithSlot

// Begin Class UEquipmentComponent Function GetMeshComponentAtSlot
struct Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics
{
	struct EquipmentComponent_eventGetMeshComponentAtSlot_Parms
	{
		FGameplayTag Slot;
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//Return the mesh for the given slot\n" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "Return the mesh for the given slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Mesh" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetMeshComponentAtSlot_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetMeshComponentAtSlot_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetMeshComponentAtSlot", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::EquipmentComponent_eventGetMeshComponentAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::EquipmentComponent_eventGetMeshComponentAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetMeshComponentAtSlot)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponentAtSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetMeshComponentAtSlot

// Begin Class UEquipmentComponent Function Initialize
struct Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics
{
	struct EquipmentComponent_eventInitialize_Parms
	{
		TMap<FGameplayTag,USkeletalMeshComponent*> ClothingMeshes;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClothingMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClothingMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderPoseComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_ValueProp = { "ClothingMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_Key_KeyProp = { "ClothingMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes = { "ClothingMeshes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventInitialize_Parms, ClothingMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingMeshes_MetaData), NewProp_ClothingMeshes_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_LeaderPoseComponent = { "LeaderPoseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventInitialize_Parms, LeaderPoseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderPoseComponent_MetaData), NewProp_LeaderPoseComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Initialize_Statics::NewProp_ClothingMeshes_ValueProp,
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
	P_GET_TMAP(FGameplayTag,USkeletalMeshComponent*,Z_Param_ClothingMeshes);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_LeaderPoseComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_ClothingMeshes,Z_Param_LeaderPoseComponent);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function Initialize

// Begin Class UEquipmentComponent Function SetGroomMap
struct Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics
{
	struct EquipmentComponent_eventSetGroomMap_Parms
	{
		TMap<FGameplayTag,UGroomComponent*> Grooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grooms_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grooms_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grooms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Grooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::NewProp_Grooms_ValueProp = { "Grooms", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::NewProp_Grooms_Key_KeyProp = { "Grooms_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::NewProp_Grooms = { "Grooms", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSetGroomMap_Parms, Grooms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grooms_MetaData), NewProp_Grooms_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::NewProp_Grooms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::NewProp_Grooms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::NewProp_Grooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "SetGroomMap", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::EquipmentComponent_eventSetGroomMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::EquipmentComponent_eventSetGroomMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_SetGroomMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_SetGroomMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execSetGroomMap)
{
	P_GET_TMAP(FGameplayTag,UGroomComponent*,Z_Param_Grooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroomMap(Z_Param_Grooms);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function SetGroomMap

// Begin Class UEquipmentComponent
void UEquipmentComponent::StaticRegisterNativesUEquipmentComponent()
{
	UClass* Class = UEquipmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquippedItemAtSlot", &UEquipmentComponent::execGetEquippedItemAtSlot },
		{ "GetEquippedItemsOfClass", &UEquipmentComponent::execGetEquippedItemsOfClass },
		{ "GetEquippedItemsWeight", &UEquipmentComponent::execGetEquippedItemsWeight },
		{ "GetEquippedWeaponAtSlot", &UEquipmentComponent::execGetEquippedWeaponAtSlot },
		{ "GetGroomComponentAtSlot", &UEquipmentComponent::execGetGroomComponentAtSlot },
		{ "GetItemsWithSlot", &UEquipmentComponent::execGetItemsWithSlot },
		{ "GetMeshComponentAtSlot", &UEquipmentComponent::execGetMeshComponentAtSlot },
		{ "Initialize", &UEquipmentComponent::execInitialize },
		{ "SetGroomMap", &UEquipmentComponent::execSetGroomMap },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippableComponents_MetaData[] = {
		{ "Comment", "/**The skeletal meshes we'll be changing if a player equips an item*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "The skeletal meshes we'll be changing if a player equips an item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponents_MetaData[] = {
		{ "Comment", "/**The grooms we'll be changing if a player equips an item*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/EquipmentComponent.h" },
		{ "ToolTip", "The grooms we'll be changing if a player equips an item" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippableComponents_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquippableComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquippableComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomComponents_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroomComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GroomComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItems_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquippedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemAtSlot, "GetEquippedItemAtSlot" }, // 1258782678
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsOfClass, "GetEquippedItemsOfClass" }, // 2879121648
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItemsWeight, "GetEquippedItemsWeight" }, // 198588487
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedWeaponAtSlot, "GetEquippedWeaponAtSlot" }, // 931194343
		{ &Z_Construct_UFunction_UEquipmentComponent_GetGroomComponentAtSlot, "GetGroomComponentAtSlot" }, // 2916237485
		{ &Z_Construct_UFunction_UEquipmentComponent_GetItemsWithSlot, "GetItemsWithSlot" }, // 1315341016
		{ &Z_Construct_UFunction_UEquipmentComponent_GetMeshComponentAtSlot, "GetMeshComponentAtSlot" }, // 2596994289
		{ &Z_Construct_UFunction_UEquipmentComponent_Initialize, "Initialize" }, // 4110681049
		{ &Z_Construct_UFunction_UEquipmentComponent_SetGroomMap, "SetGroomMap" }, // 2822062138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemEquipped = { "OnItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, OnItemEquipped), Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemEquipped_MetaData), NewProp_OnItemEquipped_MetaData) }; // 1590604791
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemUnequipped = { "OnItemUnequipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, OnItemUnequipped), Z_Construct_UDelegateFunction_NarrativeArsenal_OnItemUnequipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUnequipped_MetaData), NewProp_OnItemUnequipped_MetaData) }; // 195772084
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_LeaderPoseComponent = { "LeaderPoseComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, LeaderPoseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderPoseComponent_MetaData), NewProp_LeaderPoseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_ValueProp = { "EquippableComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_Key_KeyProp = { "EquippableComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents = { "EquippableComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, EquippableComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippableComponents_MetaData), NewProp_EquippableComponents_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_GroomComponents_ValueProp = { "GroomComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_GroomComponents_Key_KeyProp = { "GroomComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_GroomComponents = { "GroomComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, GroomComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomComponents_MetaData), NewProp_GroomComponents_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_ValueProp = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEquippableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Key_KeyProp = { "EquippedItems_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, EquippedItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItems_MetaData), NewProp_EquippedItems_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_OnItemUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_LeaderPoseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippableComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_GroomComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_GroomComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_GroomComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_ValueProp,
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
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentComponent, UEquipmentComponent::StaticClass, TEXT("UEquipmentComponent"), &Z_Registration_Info_UClass_UEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentComponent), 2405987565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_1948436125(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

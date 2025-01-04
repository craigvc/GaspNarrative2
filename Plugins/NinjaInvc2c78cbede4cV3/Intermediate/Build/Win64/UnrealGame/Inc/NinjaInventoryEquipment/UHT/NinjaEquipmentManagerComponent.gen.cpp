// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Components/NinjaEquipmentManagerComponent.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipment.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentAbilityTypes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentMeshTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UFunction* Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilityHandles();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentList();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentSkeletalMesh();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Delegate FManagedEquipmentEvent
struct Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics
{
	struct NinjaEquipmentManagerComponent_eventManagedEquipmentEvent_Parms
	{
		UNinjaEquipment* Equipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventManagedEquipmentEvent_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "ManagedEquipmentEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::NinjaEquipmentManagerComponent_eventManagedEquipmentEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::NinjaEquipmentManagerComponent_eventManagedEquipmentEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaEquipmentManagerComponent::FManagedEquipmentEvent_DelegateWrapper(const FMulticastScriptDelegate& ManagedEquipmentEvent, UNinjaEquipment* Equipment)
{
	struct NinjaEquipmentManagerComponent_eventManagedEquipmentEvent_Parms
	{
		UNinjaEquipment* Equipment;
	};
	NinjaEquipmentManagerComponent_eventManagedEquipmentEvent_Parms Parms;
	Parms.Equipment=Equipment;
	ManagedEquipmentEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FManagedEquipmentEvent

// Begin Class UNinjaEquipmentManagerComponent Function AddEquipment
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics
{
	struct NinjaEquipmentManagerComponent_eventAddEquipment_Parms
	{
		UNinjaEquipment* Equipment;
		FGameplayTag InitialStateTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Adds a piece of equipment to this manager, in the provided initial state.\n\x09 * \n\x09 * @param Equipment\x09\x09\x09\x09Piece of equipment to be added to this manager.\n\x09 * @param InitialStateTag\x09\x09Initial state for the equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Adds a piece of equipment to this manager, in the provided initial state.\n\n@param Equipment                             Piece of equipment to be added to this manager.\n@param InitialStateTag               Initial state for the equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialStateTag_MetaData[] = {
		{ "Categories", "Equipment.State" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventAddEquipment_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::NewProp_InitialStateTag = { "InitialStateTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventAddEquipment_Parms, InitialStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialStateTag_MetaData), NewProp_InitialStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::NewProp_InitialStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "AddEquipment", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::NinjaEquipmentManagerComponent_eventAddEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::NinjaEquipmentManagerComponent_eventAddEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execAddEquipment)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InitialStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEquipment(Z_Param_Equipment,Z_Param_Out_InitialStateTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function AddEquipment

// Begin Class UNinjaEquipmentManagerComponent Function ChangeEquipmentState
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics
{
	struct NinjaEquipmentManagerComponent_eventChangeEquipmentState_Parms
	{
		UNinjaEquipment* Equipment;
		FGameplayTag NewStateTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Sets a new state for given equipment.\n\x09 * \n\x09 * @param Equipment\x09\x09\x09\x09Piece of equipment to change the state.\n\x09 * @param NewStateTag\x09\x09\x09New State for the Equipment Instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Sets a new state for given equipment.\n\n@param Equipment                             Piece of equipment to change the state.\n@param NewStateTag                   New State for the Equipment Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStateTag_MetaData[] = {
		{ "Categories", "Equipment.State" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventChangeEquipmentState_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::NewProp_NewStateTag = { "NewStateTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventChangeEquipmentState_Parms, NewStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStateTag_MetaData), NewProp_NewStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::NewProp_NewStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "ChangeEquipmentState", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::NinjaEquipmentManagerComponent_eventChangeEquipmentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::NinjaEquipmentManagerComponent_eventChangeEquipmentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execChangeEquipmentState)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_GET_STRUCT(FGameplayTag,Z_Param_NewStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeEquipmentState(Z_Param_Equipment,Z_Param_NewStateTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function ChangeEquipmentState

// Begin Class UNinjaEquipmentManagerComponent Function ClearMeshAsset
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics
{
	struct NinjaEquipmentManagerComponent_eventClearMeshAsset_Parms
	{
		FGameplayTag SlotTag;
		UMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Clears a mesh asset, reverting to the original mesh if applicable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Clears a mesh asset, reverting to the original mesh if applicable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventClearMeshAsset_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventClearMeshAsset_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "ClearMeshAsset", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::NinjaEquipmentManagerComponent_eventClearMeshAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::NinjaEquipmentManagerComponent_eventClearMeshAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execClearMeshAsset)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->ClearMeshAsset(Z_Param_SlotTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function ClearMeshAsset

// Begin Class UNinjaEquipmentManagerComponent Function CreateEquipmentActor
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics
{
	struct NinjaEquipmentManagerComponent_eventCreateEquipmentActor_Parms
	{
		TSubclassOf<AActor> EquipmentActorClass;
		UNinjaEquipment* Equipment;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Central place to create Actors related to Equipment Instances.\n\x09 * \n\x09 * @param EquipmentActorClass\x09The class for the new equipment actor.\n\x09 * @param Equipment\x09\x09\x09\x09Piece of equipment owning the actor.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Equipment Actor instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment Actor" },
		{ "ToolTip", "Central place to create Actors related to Equipment Instances.\n\n@param EquipmentActorClass   The class for the new equipment actor.\n@param Equipment                             Piece of equipment owning the actor.\n@return                                              The Equipment Actor instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NewProp_EquipmentActorClass = { "EquipmentActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventCreateEquipmentActor_Parms, EquipmentActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventCreateEquipmentActor_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventCreateEquipmentActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NewProp_EquipmentActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "CreateEquipmentActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NinjaEquipmentManagerComponent_eventCreateEquipmentActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::NinjaEquipmentManagerComponent_eventCreateEquipmentActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execCreateEquipmentActor)
{
	P_GET_OBJECT(UClass,Z_Param_EquipmentActorClass);
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->CreateEquipmentActor(Z_Param_EquipmentActorClass,Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function CreateEquipmentActor

// Begin Class UNinjaEquipmentManagerComponent Function DestroyEquipment
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Destroys all equipment, usually due to an owner being destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Destroys all equipment, usually due to an owner being destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "DestroyEquipment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execDestroyEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyEquipment();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function DestroyEquipment

// Begin Class UNinjaEquipmentManagerComponent Function GetAllEquipmentContainers
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetAllEquipmentContainers_Parms
	{
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides all equipment containers in the Inventory Manager.\n\x09 *\n\x09 * This includes all cosmetic equipment containers as well. The query used to search for\n\x09 * containers is defined in the <code>AllEquipmentContainersQuery</code> property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment Containers" },
		{ "ToolTip", "Provides all equipment containers in the Inventory Manager.\n\nThis includes all cosmetic equipment containers as well. The query used to search for\ncontainers is defined in the <code>AllEquipmentContainersQuery</code> property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetAllEquipmentContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetAllEquipmentContainers", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::NinjaEquipmentManagerComponent_eventGetAllEquipmentContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::NinjaEquipmentManagerComponent_eventGetAllEquipmentContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetAllEquipmentContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetAllEquipmentContainers();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetAllEquipmentContainers

// Begin Class UNinjaEquipmentManagerComponent Function GetAverageGearLevel
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetAverageGearLevel_Parms
	{
		float AbsoluteGearLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Calculates the average gear level for this Equipment Manager Component\n\x09 *\n\x09 * @param AbsoluteGearLevel\x09\x09The absolute gear level, with all equipment.\n\x09 * @return\x09\x09\x09\x09\x09\x09The average gear level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Average Gear Level" },
		{ "ToolTip", "Calculates the average gear level for this Equipment Manager Component\n\n@param AbsoluteGearLevel             The absolute gear level, with all equipment.\n@return                                              The average gear level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteGearLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::NewProp_AbsoluteGearLevel = { "AbsoluteGearLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetAverageGearLevel_Parms, AbsoluteGearLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetAverageGearLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::NewProp_AbsoluteGearLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetAverageGearLevel", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::NinjaEquipmentManagerComponent_eventGetAverageGearLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::NinjaEquipmentManagerComponent_eventGetAverageGearLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetAverageGearLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AbsoluteGearLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAverageGearLevel(Z_Param_AbsoluteGearLevel);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetAverageGearLevel

// Begin Class UNinjaEquipmentManagerComponent Function GetBestEquipmentState
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetBestEquipmentState_Parms
	{
		UNinjaEquipment* Equipment;
		FGameplayTag PreferredState;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Tries to determine the best equipment state, based on all possible sources.\n\x09 *\n\x09 * Ultimately, it will fall back to the default state configured in the Equipment Manager.\n\x09 * \n\x09 * @param Equipment\x09\x09\x09\x09""Equipment to be evaluated.\n\x09 * @param PreferredState\x09\x09""An optional preferredState that takes priority.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Gameplay Tag representing the equipment state.\n\x09 */" },
		{ "CPP_Default_PreferredState", "()" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment State" },
		{ "ToolTip", "Tries to determine the best equipment state, based on all possible sources.\n\nUltimately, it will fall back to the default state configured in the Equipment Manager.\n\n@param Equipment                             Equipment to be evaluated.\n@param PreferredState                An optional preferredState that takes priority.\n@return                                              The Gameplay Tag representing the equipment state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetBestEquipmentState_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NewProp_PreferredState = { "PreferredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetBestEquipmentState_Parms, PreferredState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetBestEquipmentState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NewProp_PreferredState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetBestEquipmentState", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NinjaEquipmentManagerComponent_eventGetBestEquipmentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::NinjaEquipmentManagerComponent_eventGetBestEquipmentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetBestEquipmentState)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_GET_STRUCT(FGameplayTag,Z_Param_PreferredState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetBestEquipmentState(Z_Param_Equipment,Z_Param_PreferredState);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetBestEquipmentState

// Begin Class UNinjaEquipmentManagerComponent Function GetEquipmentByItem
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetEquipmentByItem_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides the piece of equipment representing an item.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item Instance represented by an Equipment Instance.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Equipment representing the item, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment" },
		{ "ToolTip", "Provides the piece of equipment representing an item.\n\n@param Item                                  Item Instance represented by an Equipment Instance.\n@return                                              Equipment representing the item, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentByItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentByItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetEquipmentByItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentByItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentByItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetEquipmentByItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=P_THIS->GetEquipmentByItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetEquipmentByItem

// Begin Class UNinjaEquipmentManagerComponent Function GetEquipmentByQuery
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetEquipmentByQuery_Parms
	{
		FGameplayTagQuery Query;
		TArray<UNinjaEquipment*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides the equipment for a given query.\n\x09 * \n\x09 * @param Query\x09\x09\x09\x09\x09Query used to search for equipment.\n\x09 * @return\x09\x09\x09\x09\x09\x09""All equipment matching the query. Empty for invalid queries.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment" },
		{ "ToolTip", "Provides the equipment for a given query.\n\n@param Query                                 Query used to search for equipment.\n@return                                              All equipment matching the query. Empty for invalid queries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentByQuery_Parms, Query), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentByQuery_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetEquipmentByQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentByQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentByQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetEquipmentByQuery)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_Query);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaEquipment*>*)Z_Param__Result=P_THIS->GetEquipmentByQuery(Z_Param_Out_Query);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetEquipmentByQuery

// Begin Class UNinjaEquipmentManagerComponent Function GetEquipmentBySlot
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetEquipmentBySlot_Parms
	{
		const UNinjaInventoryContainer* Slot;
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides a piece of equipment assigned to a given slot.\n\x09 *\n\x09 * If the slot supports multiple equipment pieces simultaneously, and it currently contains\n\x09 * multiple instances, then only the first one is returned.\n\x09 * \n\x09 * @param Slot\x09\x09\x09\x09\x09""Container representing the desired slot. Must be provided.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Equipment piece assigned to the slot. May be null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment" },
		{ "ToolTip", "Provides a piece of equipment assigned to a given slot.\n\nIf the slot supports multiple equipment pieces simultaneously, and it currently contains\nmultiple instances, then only the first one is returned.\n\n@param Slot                                  Container representing the desired slot. Must be provided.\n@return                                              Equipment piece assigned to the slot. May be null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentBySlot_Parms, Slot), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentBySlot_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetEquipmentBySlot", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentBySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentBySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetEquipmentBySlot)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=P_THIS->GetEquipmentBySlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetEquipmentBySlot

// Begin Class UNinjaEquipmentManagerComponent Function GetEquipmentStateFromContainer
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetEquipmentStateFromContainer_Parms
	{
		UNinjaEquipment* Equipment;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Determines an equipment state based on its container.\n\x09 *\n\x09 * @param Equipment\x09\x09\x09\x09""Equipment to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Gameplay Tag representing the equipment state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment State" },
		{ "ToolTip", "Determines an equipment state based on its container.\n\n@param Equipment                             Equipment to be evaluated.\n@return                                              The Gameplay Tag representing the equipment state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentStateFromContainer_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetEquipmentStateFromContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetEquipmentStateFromContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentStateFromContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::NinjaEquipmentManagerComponent_eventGetEquipmentStateFromContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetEquipmentStateFromContainer)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetEquipmentStateFromContainer(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetEquipmentStateFromContainer

// Begin Class UNinjaEquipmentManagerComponent Function GetFirstEquipmentByQuery
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetFirstEquipmentByQuery_Parms
	{
		FGameplayTagQuery Query;
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides the first piece of equipment for the given query.\n\x09 *\n\x09 * @param Query\x09\x09\x09\x09\x09Gameplay Query used to search for equipment.\n\x09 * @return\x09\x09\x09\x09\x09\x09Piece of equipment found for the provided Query. Always null for invalid queries.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment" },
		{ "ToolTip", "Provides the first piece of equipment for the given query.\n\n@param Query                                 Gameplay Query used to search for equipment.\n@return                                              Piece of equipment found for the provided Query. Always null for invalid queries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetFirstEquipmentByQuery_Parms, Query), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetFirstEquipmentByQuery_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetFirstEquipmentByQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::NinjaEquipmentManagerComponent_eventGetFirstEquipmentByQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::NinjaEquipmentManagerComponent_eventGetFirstEquipmentByQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetFirstEquipmentByQuery)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_Query);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=P_THIS->GetFirstEquipmentByQuery(Z_Param_Out_Query);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetFirstEquipmentByQuery

// Begin Class UNinjaEquipmentManagerComponent Function GetHiddenEquipmentSlots
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetHiddenEquipmentSlots_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides all Equipment Slots currently hidden.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Provides all Equipment Slots currently hidden." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetHiddenEquipmentSlots_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetHiddenEquipmentSlots", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::NinjaEquipmentManagerComponent_eventGetHiddenEquipmentSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::NinjaEquipmentManagerComponent_eventGetHiddenEquipmentSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetHiddenEquipmentSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetHiddenEquipmentSlots();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetHiddenEquipmentSlots

// Begin Class UNinjaEquipmentManagerComponent Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager Component assigned to the owner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Provides the Inventory Manager Component assigned to the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::NinjaEquipmentManagerComponent_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::NinjaEquipmentManagerComponent_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetInventoryManager

// Begin Class UNinjaEquipmentManagerComponent Function GetMeshComponentForSlotTag
struct NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms
{
	FGameplayTag SlotTag;
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag = FName(TEXT("GetMeshComponentForSlotTag"));
USkeletalMeshComponent* UNinjaEquipmentManagerComponent::GetMeshComponentForSlotTag(FGameplayTag SlotTag) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms Parms;
		Parms.SlotTag=SlotTag;
		const_cast<UNinjaEquipmentManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaEquipmentManagerComponent*>(this)->GetMeshComponentForSlotTag_Implementation(SlotTag);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Retrieves the Skeletal Mesh Component for a Slot Tag.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09Provides the Skeletal Mesh Component related to the slot.\n\x09 * @return\x09\x09\x09\x09\x09The Skeletal Mesh Component that represents the slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Retrieves the Skeletal Mesh Component for a Slot Tag.\n\n@param SlotTag                       Provides the Skeletal Mesh Component related to the slot.\n@return                                      The Skeletal Mesh Component that represents the slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetMeshComponentForSlotTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::PropPointers), sizeof(NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentManagerComponent_eventGetMeshComponentForSlotTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetMeshComponentForSlotTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponentForSlotTag_Implementation(Z_Param_SlotTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetMeshComponentForSlotTag

// Begin Class UNinjaEquipmentManagerComponent Function GetRelevantEquipmentContainers
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetRelevantEquipmentContainers_Parms
	{
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides relevant equipment containers in the Inventory Manager.\n\x09 *\n\x09 * This excludes all cosmetic equipment containers as well. The query used to search for\n\x09 * containers is defined in the <code>RelevantEquipmentContainersQuery</code> property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Equipment Containers" },
		{ "ToolTip", "Provides relevant equipment containers in the Inventory Manager.\n\nThis excludes all cosmetic equipment containers as well. The query used to search for\ncontainers is defined in the <code>RelevantEquipmentContainersQuery</code> property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetRelevantEquipmentContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetRelevantEquipmentContainers", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::NinjaEquipmentManagerComponent_eventGetRelevantEquipmentContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::NinjaEquipmentManagerComponent_eventGetRelevantEquipmentContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetRelevantEquipmentContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetRelevantEquipmentContainers();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetRelevantEquipmentContainers

// Begin Class UNinjaEquipmentManagerComponent Function GetSlotTagForAttachmentSocket
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetSlotTagForAttachmentSocket_Parms
	{
		FName AttachSocket;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides the Slot Tag related to an Attachment Socket.\n\x09 *\n\x09 * This is an inverse lookup for the \"SlotSocketMapping\". Internally, it uses an\n\x09 * inverted map, so the operation is efficient O(1).\n\x09 *\n\x09 * Since multiple Gameplay Tags can be related to the same socket, the result is\n\x09 * provided as a Gameplay Tag Container.\n\x09 *\n\x09 * @param AttachSocket\x09\x09\x09Socket related to a Slot Tag.\n\x09 * return\x09\x09\x09\x09\x09\x09Gameplay Tag Container related to the socket.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Provides the Slot Tag related to an Attachment Socket.\n\nThis is an inverse lookup for the \"SlotSocketMapping\". Internally, it uses an\ninverted map, so the operation is efficient O(1).\n\nSince multiple Gameplay Tags can be related to the same socket, the result is\nprovided as a Gameplay Tag Container.\n\n@param AttachSocket                  Socket related to a Slot Tag.\nreturn                                               Gameplay Tag Container related to the socket." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetSlotTagForAttachmentSocket_Parms, AttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocket_MetaData), NewProp_AttachSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetSlotTagForAttachmentSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::NewProp_AttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetSlotTagForAttachmentSocket", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::NinjaEquipmentManagerComponent_eventGetSlotTagForAttachmentSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::NinjaEquipmentManagerComponent_eventGetSlotTagForAttachmentSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetSlotTagForAttachmentSocket)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttachSocket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSlotTagForAttachmentSocket(Z_Param_Out_AttachSocket);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetSlotTagForAttachmentSocket

// Begin Class UNinjaEquipmentManagerComponent Function GetSocketNameForEquipmentSlot
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics
{
	struct NinjaEquipmentManagerComponent_eventGetSocketNameForEquipmentSlot_Parms
	{
		FGameplayTag SlotTag;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Provides the socket name mapped to an equipment slot.\n\x09 *\n\x09 * These \"virtual slots\" are mapped in this Component's \"SlotSocketMapping\", property\n\x09 * and are mainly used by Equipment Actors that are attached to the mesh and\n\x09 * not necessarily to any Slot Component.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09\x09Gameplay Tag identifying the desired Equipment Slot.\n\x09 * return\x09\x09\x09\x09\x09\x09Name of the attachment socket. Can be NONE.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Provides the socket name mapped to an equipment slot.\n\nThese \"virtual slots\" are mapped in this Component's \"SlotSocketMapping\", property\nand are mainly used by Equipment Actors that are attached to the mesh and\nnot necessarily to any Slot Component.\n\n@param SlotTag                               Gameplay Tag identifying the desired Equipment Slot.\nreturn                                               Name of the attachment socket. Can be NONE." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetSocketNameForEquipmentSlot_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGetSocketNameForEquipmentSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GetSocketNameForEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::NinjaEquipmentManagerComponent_eventGetSocketNameForEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::NinjaEquipmentManagerComponent_eventGetSocketNameForEquipmentSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGetSocketNameForEquipmentSlot)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketNameForEquipmentSlot(Z_Param_Out_SlotTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GetSocketNameForEquipmentSlot

// Begin Class UNinjaEquipmentManagerComponent Function GrantToAbilitySystem
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics
{
	struct NinjaEquipmentManagerComponent_eventGrantToAbilitySystem_Parms
	{
		UNinjaEquipment* Source;
		FEquipmentAbilityHandles OutHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Grants an equipment piece's Gameplay Data to the owner's Ability Component.\n\x09 *\n\x09 * @param Source\x09\x09\x09\x09Piece of equipment providing the Ability Data and used as source.\n\x09 * @param OutHandles\x09\x09\x09""Ability Handles generated by this operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Grants an equipment piece's Gameplay Data to the owner's Ability Component.\n\n@param Source                                Piece of equipment providing the Ability Data and used as source.\n@param OutHandles                    Ability Handles generated by this operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGrantToAbilitySystem_Parms, Source), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::NewProp_OutHandles = { "OutHandles", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventGrantToAbilitySystem_Parms, OutHandles), Z_Construct_UScriptStruct_FEquipmentAbilityHandles, METADATA_PARAMS(0, nullptr) }; // 1361679655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::NewProp_OutHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "GrantToAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::NinjaEquipmentManagerComponent_eventGrantToAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::NinjaEquipmentManagerComponent_eventGrantToAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execGrantToAbilitySystem)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Source);
	P_GET_STRUCT_REF(FEquipmentAbilityHandles,Z_Param_Out_OutHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantToAbilitySystem(Z_Param_Source,Z_Param_Out_OutHandles);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function GrantToAbilitySystem

// Begin Class UNinjaEquipmentManagerComponent Function HasEquipment
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics
{
	struct NinjaEquipmentManagerComponent_eventHasEquipment_Parms
	{
		const UNinjaEquipment* Equipment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Ensures that a piece of equipment is assigned to this Equipment Manager.\n\x09 * \n\x09 * @param Equipment\x09\x09\x09\x09""Equipment to be evaluated. Must be provided.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the equipment instance is owned by this Equipment Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Ensures that a piece of equipment is assigned to this Equipment Manager.\n\n@param Equipment                             Equipment to be evaluated. Must be provided.\n@return                                              True if the equipment instance is owned by this Equipment Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventHasEquipment_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
void Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipmentManagerComponent_eventHasEquipment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipmentManagerComponent_eventHasEquipment_Parms), &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "HasEquipment", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NinjaEquipmentManagerComponent_eventHasEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::NinjaEquipmentManagerComponent_eventHasEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execHasEquipment)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEquipment(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function HasEquipment

// Begin Class UNinjaEquipmentManagerComponent Function HasEquipmentSlot
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics
{
	struct NinjaEquipmentManagerComponent_eventHasEquipmentSlot_Parms
	{
		FGameplayTag SlotTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Checks if this Equipment Manager has a Component for the Gameplay Tag.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09\x09Gameplay Tag identifying the desired Equipment Slot.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the owner has a component with the provided tag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Checks if this Equipment Manager has a Component for the Gameplay Tag.\n\n@param SlotTag                               Gameplay Tag identifying the desired Equipment Slot.\n@return                                              True if the owner has a component with the provided tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventHasEquipmentSlot_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipmentManagerComponent_eventHasEquipmentSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipmentManagerComponent_eventHasEquipmentSlot_Parms), &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "HasEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NinjaEquipmentManagerComponent_eventHasEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::NinjaEquipmentManagerComponent_eventHasEquipmentSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execHasEquipmentSlot)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEquipmentSlot(Z_Param_Out_SlotTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function HasEquipmentSlot

// Begin Class UNinjaEquipmentManagerComponent Function HasItemInInventoryQueue
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics
{
	struct NinjaEquipmentManagerComponent_eventHasItemInInventoryQueue_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Checks if an item is waiting for inventory, so it can have the equipment initialized.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item waiting to be initialized.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the item has been placed in the initialization queue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Checks if an item is waiting for inventory, so it can have the equipment initialized.\n\n@param Item                                  Item waiting to be initialized.\n@return                                              True if the item has been placed in the initialization queue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventHasItemInInventoryQueue_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipmentManagerComponent_eventHasItemInInventoryQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipmentManagerComponent_eventHasItemInInventoryQueue_Parms), &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "HasItemInInventoryQueue", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NinjaEquipmentManagerComponent_eventHasItemInInventoryQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::NinjaEquipmentManagerComponent_eventHasItemInInventoryQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execHasItemInInventoryQueue)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItemInInventoryQueue(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function HasItemInInventoryQueue

// Begin Class UNinjaEquipmentManagerComponent Function HideEquipmentSlots
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics
{
	struct NinjaEquipmentManagerComponent_eventHideEquipmentSlots_Parms
	{
		FGameplayTagContainer SlotTags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Hides equipment slots identified by the Gameplay Tags.\n\x09 *\n\x09 * Useful to temporarily hide equipped items, while another action is happening, such\n\x09 * as using a consumable, dialogue where the helmet should be hidden, and so on.\n\x09 *\n\x09 * @param SlotTags\x09\x09\x09\x09""All tags for slots that must be hidden.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Amount of components that were hidden.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Hides equipment slots identified by the Gameplay Tags.\n\nUseful to temporarily hide equipped items, while another action is happening, such\nas using a consumable, dialogue where the helmet should be hidden, and so on.\n\n@param SlotTags                              All tags for slots that must be hidden.\n@return                                              Amount of components that were hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTags_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::NewProp_SlotTags = { "SlotTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventHideEquipmentSlots_Parms, SlotTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTags_MetaData), NewProp_SlotTags_MetaData) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventHideEquipmentSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::NewProp_SlotTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "HideEquipmentSlots", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::NinjaEquipmentManagerComponent_eventHideEquipmentSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::NinjaEquipmentManagerComponent_eventHideEquipmentSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execHideEquipmentSlots)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SlotTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->HideEquipmentSlots(Z_Param_Out_SlotTags);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function HideEquipmentSlots

// Begin Class UNinjaEquipmentManagerComponent Function InitializeEquipment
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Effectively initializes the Equipment, once the Inventory Manager Component is ready.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Effectively initializes the Equipment, once the Inventory Manager Component is ready." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "InitializeEquipment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execInitializeEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEquipment();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function InitializeEquipment

// Begin Class UNinjaEquipmentManagerComponent Function InitializeEquipmentForItem
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics
{
	struct NinjaEquipmentManagerComponent_eventInitializeEquipmentForItem_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Creates an equipment instance for a given item.\n\x09 *\n\x09 * @param Item\n\x09 *\x09\x09Item backing the new equipment. Must have an equipment fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Creates an equipment instance for a given item.\n\n@param Item\n             Item backing the new equipment. Must have an equipment fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventInitializeEquipmentForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "InitializeEquipmentForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::NinjaEquipmentManagerComponent_eventInitializeEquipmentForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::NinjaEquipmentManagerComponent_eventInitializeEquipmentForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execInitializeEquipmentForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEquipmentForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function InitializeEquipmentForItem

// Begin Class UNinjaEquipmentManagerComponent Function OnGetAverageGearLevel
struct NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms
{
	float AbsoluteGearLevel;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel = FName(TEXT("OnGetAverageGearLevel"));
float UNinjaEquipmentManagerComponent::OnGetAverageGearLevel(float AbsoluteGearLevel) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms Parms;
		Parms.AbsoluteGearLevel=AbsoluteGearLevel;
		const_cast<UNinjaEquipmentManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaEquipmentManagerComponent*>(this)->OnGetAverageGearLevel_Implementation(AbsoluteGearLevel);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Performs the calculation to determine the average gear level for the absolute value. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ReturnDisplayName", "Average Gear Level" },
		{ "ToolTip", "Performs the calculation to determine the average gear level for the absolute value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteGearLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::NewProp_AbsoluteGearLevel = { "AbsoluteGearLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms, AbsoluteGearLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::NewProp_AbsoluteGearLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "OnGetAverageGearLevel", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::PropPointers), sizeof(NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentManagerComponent_eventOnGetAverageGearLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execOnGetAverageGearLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AbsoluteGearLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OnGetAverageGearLevel_Implementation(Z_Param_AbsoluteGearLevel);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function OnGetAverageGearLevel

// Begin Class UNinjaEquipmentManagerComponent Function RemoveEquipment
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics
{
	struct NinjaEquipmentManagerComponent_eventRemoveEquipment_Parms
	{
		const UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Removes an equipment piece related to an Inventory Item.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Inventory Item represented by the equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Removes an equipment piece related to an Inventory Item.\n\n@param Item                                  Inventory Item represented by the equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventRemoveEquipment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "RemoveEquipment", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::NinjaEquipmentManagerComponent_eventRemoveEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::NinjaEquipmentManagerComponent_eventRemoveEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execRemoveEquipment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEquipment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function RemoveEquipment

// Begin Class UNinjaEquipmentManagerComponent Function RevertMeshesFromRemovedEquipment
struct NinjaEquipmentManagerComponent_eventRevertMeshesFromRemovedEquipment_Parms
{
	const UNinjaEquipment* Equipment;
};
static const FName NAME_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment = FName(TEXT("RevertMeshesFromRemovedEquipment"));
void UNinjaEquipmentManagerComponent::RevertMeshesFromRemovedEquipment(const UNinjaEquipment* Equipment)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentManagerComponent_eventRevertMeshesFromRemovedEquipment_Parms Parms;
		Parms.Equipment=Equipment;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RevertMeshesFromRemovedEquipment_Implementation(Equipment);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Reverts meshes from a piece of equipment that has been removed.\n\x09 *\n\x09 * Exposed as Blueprint Native events for quality-of-life, but it's if you are constantly\n\x09 * iterating over default slots and default meshes, it might be better to implement this\n\x09 * function in C++.\n\x09 * \n\x09 * @param Equipment\n\x09 *\x09\x09""Equipment instance providing details that can be used to determine which meshes must\n\x09 *\x09\x09""be reverted to their initial states, using the current Default Slot configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Reverts meshes from a piece of equipment that has been removed.\n\nExposed as Blueprint Native events for quality-of-life, but it's if you are constantly\niterating over default slots and default meshes, it might be better to implement this\nfunction in C++.\n\n@param Equipment\n             Equipment instance providing details that can be used to determine which meshes must\n             be reverted to their initial states, using the current Default Slot configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventRevertMeshesFromRemovedEquipment_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "RevertMeshesFromRemovedEquipment", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::PropPointers), sizeof(NinjaEquipmentManagerComponent_eventRevertMeshesFromRemovedEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentManagerComponent_eventRevertMeshesFromRemovedEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execRevertMeshesFromRemovedEquipment)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertMeshesFromRemovedEquipment_Implementation(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function RevertMeshesFromRemovedEquipment

// Begin Class UNinjaEquipmentManagerComponent Function RevertMeshesFromSlots
struct NinjaEquipmentManagerComponent_eventRevertMeshesFromSlots_Parms
{
	FGameplayTagContainer SlotsToRevert;
};
static const FName NAME_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots = FName(TEXT("RevertMeshesFromSlots"));
void UNinjaEquipmentManagerComponent::RevertMeshesFromSlots(FGameplayTagContainer& SlotsToRevert)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentManagerComponent_eventRevertMeshesFromSlots_Parms Parms;
		Parms.SlotsToRevert=SlotsToRevert;
	ProcessEvent(Func,&Parms);
		SlotsToRevert=Parms.SlotsToRevert;
	}
	else
	{
		RevertMeshesFromSlots_Implementation(SlotsToRevert);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Reverts meshes from all slots represented in the tag container.\n\x09 *\n\x09 * Exposed as Blueprint Native events for quality-of-life, but it's if you are constantly\n\x09 * iterating over default slots and default meshes, it might be better to implement this\n\x09 * function in C++.\n\x09 * \n\x09 * @param SlotsToRevert\n\x09 *\x09\x09""All Slot Tags that must be reverted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Reverts meshes from all slots represented in the tag container.\n\nExposed as Blueprint Native events for quality-of-life, but it's if you are constantly\niterating over default slots and default meshes, it might be better to implement this\nfunction in C++.\n\n@param SlotsToRevert\n             All Slot Tags that must be reverted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotsToRevert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::NewProp_SlotsToRevert = { "SlotsToRevert", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventRevertMeshesFromSlots_Parms, SlotsToRevert), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::NewProp_SlotsToRevert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "RevertMeshesFromSlots", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::PropPointers), sizeof(NinjaEquipmentManagerComponent_eventRevertMeshesFromSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentManagerComponent_eventRevertMeshesFromSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execRevertMeshesFromSlots)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SlotsToRevert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertMeshesFromSlots_Implementation(Z_Param_Out_SlotsToRevert);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function RevertMeshesFromSlots

// Begin Class UNinjaEquipmentManagerComponent Function RevokeFromAbilitySystem
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics
{
	struct NinjaEquipmentManagerComponent_eventRevokeFromAbilitySystem_Parms
	{
		FEquipmentAbilityHandles Handles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Removes all handles from an Ability System Component.\n\x09 *\n\x09 * @param Handles\n\x09 *\x09\x09Handles for all gameplay elements that were granted and are now being removed.\n\x09 *\x09\x09This is most likely stored by an Equipment Instance that granted elements before.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Removes all handles from an Ability System Component.\n\n@param Handles\n             Handles for all gameplay elements that were granted and are now being removed.\n             This is most likely stored by an Equipment Instance that granted elements before." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventRevokeFromAbilitySystem_Parms, Handles), Z_Construct_UScriptStruct_FEquipmentAbilityHandles, METADATA_PARAMS(0, nullptr) }; // 1361679655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::NewProp_Handles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "RevokeFromAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::NinjaEquipmentManagerComponent_eventRevokeFromAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::NinjaEquipmentManagerComponent_eventRevokeFromAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execRevokeFromAbilitySystem)
{
	P_GET_STRUCT_REF(FEquipmentAbilityHandles,Z_Param_Out_Handles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevokeFromAbilitySystem(Z_Param_Out_Handles);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function RevokeFromAbilitySystem

// Begin Class UNinjaEquipmentManagerComponent Function SelectDefaultMesh
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics
{
	struct NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms
	{
		FGameplayTag SlotTag;
		FEquipmentSkeletalMesh OutMesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Selects the appropriate Default Mesh for a given slot.\n\x09 * \n\x09 * @param SlotTag\x09\x09\x09Slot Tag that is being reverted to the default mesh.\n\x09 * @param OutMesh\x09\x09\x09""An optional Equipment Skeletal Mesh. Empty if no mesh is set for the slot.\n\x09 * @return\x09\x09\x09\x09\x09True of a mesh was found.\x09\x09\x09\x09\x09\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Selects the appropriate Default Mesh for a given slot.\n\n@param SlotTag                       Slot Tag that is being reverted to the default mesh.\n@param OutMesh                       An optional Equipment Skeletal Mesh. Empty if no mesh is set for the slot.\n@return                                      True of a mesh was found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMesh;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_OutMesh = { "OutMesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms, OutMesh), Z_Construct_UScriptStruct_FEquipmentSkeletalMesh, METADATA_PARAMS(0, nullptr) }; // 1300637625
void Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms), &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_OutMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "SelectDefaultMesh", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::NinjaEquipmentManagerComponent_eventSelectDefaultMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execSelectDefaultMesh)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
	P_GET_STRUCT_REF(FEquipmentSkeletalMesh,Z_Param_Out_OutMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectDefaultMesh(Z_Param_Out_SlotTag,Z_Param_Out_OutMesh);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function SelectDefaultMesh

// Begin Class UNinjaEquipmentManagerComponent Function Server_ChangeEquipmentState
struct NinjaEquipmentManagerComponent_eventServer_ChangeEquipmentState_Parms
{
	UNinjaEquipment* Equipment;
	FGameplayTag NewStateTag;
};
static const FName NAME_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState = FName(TEXT("Server_ChangeEquipmentState"));
void UNinjaEquipmentManagerComponent::Server_ChangeEquipmentState(UNinjaEquipment* Equipment, FGameplayTag NewStateTag)
{
	NinjaEquipmentManagerComponent_eventServer_ChangeEquipmentState_Parms Parms;
	Parms.Equipment=Equipment;
	Parms.NewStateTag=NewStateTag;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventServer_ChangeEquipmentState_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::NewProp_NewStateTag = { "NewStateTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventServer_ChangeEquipmentState_Parms, NewStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::NewProp_NewStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "Server_ChangeEquipmentState", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::PropPointers), sizeof(NinjaEquipmentManagerComponent_eventServer_ChangeEquipmentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentManagerComponent_eventServer_ChangeEquipmentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execServer_ChangeEquipmentState)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_GET_STRUCT(FGameplayTag,Z_Param_NewStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ChangeEquipmentState_Validate(Z_Param_Equipment,Z_Param_NewStateTag))
	{
		RPC_ValidateFailed(TEXT("Server_ChangeEquipmentState_Validate"));
		return;
	}
	P_THIS->Server_ChangeEquipmentState_Implementation(Z_Param_Equipment,Z_Param_NewStateTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function Server_ChangeEquipmentState

// Begin Class UNinjaEquipmentManagerComponent Function SetDefaultMeshToSlot
struct NinjaEquipmentManagerComponent_eventSetDefaultMeshToSlot_Parms
{
	FEquipmentSkeletalMesh SkeletalMesh;
	FGameplayTag SlotTag;
};
static const FName NAME_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot = FName(TEXT("SetDefaultMeshToSlot"));
void UNinjaEquipmentManagerComponent::SetDefaultMeshToSlot(FEquipmentSkeletalMesh const& SkeletalMesh, FGameplayTag SlotTag)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentManagerComponent_eventSetDefaultMeshToSlot_Parms Parms;
		Parms.SkeletalMesh=SkeletalMesh;
		Parms.SlotTag=SlotTag;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetDefaultMeshToSlot_Implementation(SkeletalMesh, SlotTag);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Effectively sets a Skeletal Mesh to a given Slot.\n\x09 * \n\x09 * @param SkeletalMesh\x09\x09Skeletal Mesh configuration used to obtain the mesh. \n\x09 * @param SlotTag\x09\x09\x09Slot that will receive the mesh. Must be unassigned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Effectively sets a Skeletal Mesh to a given Slot.\n\n@param SkeletalMesh          Skeletal Mesh configuration used to obtain the mesh.\n@param SlotTag                       Slot that will receive the mesh. Must be unassigned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetDefaultMeshToSlot_Parms, SkeletalMesh), Z_Construct_UScriptStruct_FEquipmentSkeletalMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) }; // 1300637625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetDefaultMeshToSlot_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::NewProp_SlotTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "SetDefaultMeshToSlot", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::PropPointers), sizeof(NinjaEquipmentManagerComponent_eventSetDefaultMeshToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentManagerComponent_eventSetDefaultMeshToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execSetDefaultMeshToSlot)
{
	P_GET_STRUCT_REF(FEquipmentSkeletalMesh,Z_Param_Out_SkeletalMesh);
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultMeshToSlot_Implementation(Z_Param_Out_SkeletalMesh,Z_Param_SlotTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function SetDefaultMeshToSlot

// Begin Class UNinjaEquipmentManagerComponent Function SetSkeletalMeshAsset
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics
{
	struct NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms
	{
		FGameplayTag SlotTag;
		TSoftObjectPtr<USkeletalMesh> MeshPtr;
		FName SocketName;
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Sets a skeletal mesh asset to a specific slot represented by a tag.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09\x09""Component tag used to find the Static Mesh Component\n\x09 * @param MeshPtr\x09\x09\x09\x09Soft pointer to the mesh. Must be valid/loaded.\n\x09 * @param SocketName\x09\x09\x09Optional socket name to attach the component.\n\x09 */" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Sets a skeletal mesh asset to a specific slot represented by a tag.\n\n@param SlotTag                               Component tag used to find the Static Mesh Component\n@param MeshPtr                               Soft pointer to the mesh. Must be valid/loaded.\n@param SocketName                    Optional socket name to attach the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MeshPtr;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_MeshPtr = { "MeshPtr", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms, MeshPtr), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPtr_MetaData), NewProp_MeshPtr_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_MeshPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "SetSkeletalMeshAsset", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::NinjaEquipmentManagerComponent_eventSetSkeletalMeshAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execSetSkeletalMeshAsset)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<USkeletalMesh>,Z_Param_Out_MeshPtr);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->SetSkeletalMeshAsset(Z_Param_Out_SlotTag,Z_Param_Out_MeshPtr,Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function SetSkeletalMeshAsset

// Begin Class UNinjaEquipmentManagerComponent Function SetStaticMeshAsset
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics
{
	struct NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms
	{
		FGameplayTag SlotTag;
		TSoftObjectPtr<UStaticMesh> MeshPtr;
		FName SocketName;
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Sets a static mesh asset to a specific slot represented by a tag.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09\x09""Component tag used to find the Static Mesh Component\n\x09 * @param MeshPtr\x09\x09\x09\x09Soft pointer to the mesh. Must be valid/loaded.\n\x09 * @param SocketName\x09\x09\x09Optional socket name to attach the component.\n\x09 */" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Sets a static mesh asset to a specific slot represented by a tag.\n\n@param SlotTag                               Component tag used to find the Static Mesh Component\n@param MeshPtr                               Soft pointer to the mesh. Must be valid/loaded.\n@param SocketName                    Optional socket name to attach the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MeshPtr;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_MeshPtr = { "MeshPtr", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms, MeshPtr), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPtr_MetaData), NewProp_MeshPtr_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_MeshPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "SetStaticMeshAsset", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::NinjaEquipmentManagerComponent_eventSetStaticMeshAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execSetStaticMeshAsset)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UStaticMesh>,Z_Param_Out_MeshPtr);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->SetStaticMeshAsset(Z_Param_Out_SlotTag,Z_Param_Out_MeshPtr,Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function SetStaticMeshAsset

// Begin Class UNinjaEquipmentManagerComponent Function ShowEquipmentSlots
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics
{
	struct NinjaEquipmentManagerComponent_eventShowEquipmentSlots_Parms
	{
		FGameplayTagContainer SlotTags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Manager" },
		{ "Comment", "/**\n\x09 * Shows equipment slots identified by the Gameplay Tags.\n\x09 *\n\x09 * Meant to be invoked to revert a \"Hide Equipment Slot\" operation.\n\x09 * \n\x09 * @param SlotTags\x09\x09\x09\x09""All tags for slots that must be shown.\n\x09 * @return\x09\x09\x09\x09\x09\x09""Amount of components that were shown.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Shows equipment slots identified by the Gameplay Tags.\n\nMeant to be invoked to revert a \"Hide Equipment Slot\" operation.\n\n@param SlotTags                              All tags for slots that must be shown.\n@return                                              Amount of components that were shown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTags_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::NewProp_SlotTags = { "SlotTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventShowEquipmentSlots_Parms, SlotTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTags_MetaData), NewProp_SlotTags_MetaData) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentManagerComponent_eventShowEquipmentSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::NewProp_SlotTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "ShowEquipmentSlots", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::NinjaEquipmentManagerComponent_eventShowEquipmentSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::NinjaEquipmentManagerComponent_eventShowEquipmentSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execShowEquipmentSlots)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SlotTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ShowEquipmentSlots(Z_Param_Out_SlotTags);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function ShowEquipmentSlots

// Begin Class UNinjaEquipmentManagerComponent Function TryConnectToInventoryManager
struct Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Inventory Manager" },
		{ "Comment", "/**\n\x09 * Attempts to connect to an Inventory Manager already available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Attempts to connect to an Inventory Manager already available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentManagerComponent, nullptr, "TryConnectToInventoryManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentManagerComponent::execTryConnectToInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryConnectToInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentManagerComponent Function TryConnectToInventoryManager

// Begin Class UNinjaEquipmentManagerComponent
void UNinjaEquipmentManagerComponent::StaticRegisterNativesUNinjaEquipmentManagerComponent()
{
	UClass* Class = UNinjaEquipmentManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddEquipment", &UNinjaEquipmentManagerComponent::execAddEquipment },
		{ "ChangeEquipmentState", &UNinjaEquipmentManagerComponent::execChangeEquipmentState },
		{ "ClearMeshAsset", &UNinjaEquipmentManagerComponent::execClearMeshAsset },
		{ "CreateEquipmentActor", &UNinjaEquipmentManagerComponent::execCreateEquipmentActor },
		{ "DestroyEquipment", &UNinjaEquipmentManagerComponent::execDestroyEquipment },
		{ "GetAllEquipmentContainers", &UNinjaEquipmentManagerComponent::execGetAllEquipmentContainers },
		{ "GetAverageGearLevel", &UNinjaEquipmentManagerComponent::execGetAverageGearLevel },
		{ "GetBestEquipmentState", &UNinjaEquipmentManagerComponent::execGetBestEquipmentState },
		{ "GetEquipmentByItem", &UNinjaEquipmentManagerComponent::execGetEquipmentByItem },
		{ "GetEquipmentByQuery", &UNinjaEquipmentManagerComponent::execGetEquipmentByQuery },
		{ "GetEquipmentBySlot", &UNinjaEquipmentManagerComponent::execGetEquipmentBySlot },
		{ "GetEquipmentStateFromContainer", &UNinjaEquipmentManagerComponent::execGetEquipmentStateFromContainer },
		{ "GetFirstEquipmentByQuery", &UNinjaEquipmentManagerComponent::execGetFirstEquipmentByQuery },
		{ "GetHiddenEquipmentSlots", &UNinjaEquipmentManagerComponent::execGetHiddenEquipmentSlots },
		{ "GetInventoryManager", &UNinjaEquipmentManagerComponent::execGetInventoryManager },
		{ "GetMeshComponentForSlotTag", &UNinjaEquipmentManagerComponent::execGetMeshComponentForSlotTag },
		{ "GetRelevantEquipmentContainers", &UNinjaEquipmentManagerComponent::execGetRelevantEquipmentContainers },
		{ "GetSlotTagForAttachmentSocket", &UNinjaEquipmentManagerComponent::execGetSlotTagForAttachmentSocket },
		{ "GetSocketNameForEquipmentSlot", &UNinjaEquipmentManagerComponent::execGetSocketNameForEquipmentSlot },
		{ "GrantToAbilitySystem", &UNinjaEquipmentManagerComponent::execGrantToAbilitySystem },
		{ "HasEquipment", &UNinjaEquipmentManagerComponent::execHasEquipment },
		{ "HasEquipmentSlot", &UNinjaEquipmentManagerComponent::execHasEquipmentSlot },
		{ "HasItemInInventoryQueue", &UNinjaEquipmentManagerComponent::execHasItemInInventoryQueue },
		{ "HideEquipmentSlots", &UNinjaEquipmentManagerComponent::execHideEquipmentSlots },
		{ "InitializeEquipment", &UNinjaEquipmentManagerComponent::execInitializeEquipment },
		{ "InitializeEquipmentForItem", &UNinjaEquipmentManagerComponent::execInitializeEquipmentForItem },
		{ "OnGetAverageGearLevel", &UNinjaEquipmentManagerComponent::execOnGetAverageGearLevel },
		{ "RemoveEquipment", &UNinjaEquipmentManagerComponent::execRemoveEquipment },
		{ "RevertMeshesFromRemovedEquipment", &UNinjaEquipmentManagerComponent::execRevertMeshesFromRemovedEquipment },
		{ "RevertMeshesFromSlots", &UNinjaEquipmentManagerComponent::execRevertMeshesFromSlots },
		{ "RevokeFromAbilitySystem", &UNinjaEquipmentManagerComponent::execRevokeFromAbilitySystem },
		{ "SelectDefaultMesh", &UNinjaEquipmentManagerComponent::execSelectDefaultMesh },
		{ "Server_ChangeEquipmentState", &UNinjaEquipmentManagerComponent::execServer_ChangeEquipmentState },
		{ "SetDefaultMeshToSlot", &UNinjaEquipmentManagerComponent::execSetDefaultMeshToSlot },
		{ "SetSkeletalMeshAsset", &UNinjaEquipmentManagerComponent::execSetSkeletalMeshAsset },
		{ "SetStaticMeshAsset", &UNinjaEquipmentManagerComponent::execSetStaticMeshAsset },
		{ "ShowEquipmentSlots", &UNinjaEquipmentManagerComponent::execShowEquipmentSlots },
		{ "TryConnectToInventoryManager", &UNinjaEquipmentManagerComponent::execTryConnectToInventoryManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentManagerComponent);
UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister()
{
	return UNinjaEquipmentManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages equipment pieces representing items from a backing Inventory Manager.\n */" },
		{ "IncludePath", "Components/NinjaEquipmentManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages equipment pieces representing items from a backing Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentAdded_MetaData[] = {
		{ "Comment", "/** Notifies equipment that has been added. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Notifies equipment that has been added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentStateChanged_MetaData[] = {
		{ "Comment", "/** Notifies a change in an equipment state. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Notifies a change in an equipment state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentRemoved_MetaData[] = {
		{ "Comment", "/** Notifies equipment that has been removed. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Notifies equipment that has been removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllEquipmentContainersQuery_MetaData[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Query used to retrieve equipment slots from the Inventory Manager.\n\x09 * Should return all containers, including ones for cosmetic equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Query used to retrieve equipment slots from the Inventory Manager.\nShould return all containers, including ones for cosmetic equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelevantEquipmentContainersQuery_MetaData[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Query used to retrieve equipment slots from the Inventory Manager.\n\x09 * Should return containers that can contribute to the gear level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Query used to retrieve equipment slots from the Inventory Manager.\nShould return containers that can contribute to the gear level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotSocketMapping_MetaData[] = {
		{ "Categories", "Equipment.Slot" },
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Maps slot tags to attachment socket names.\n\x09 * \n\x09 * Necessary for actors that are attached to sockets and not to specific components,\n\x09 * which is the case for Skeletal and Static Meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Maps slot tags to attachment socket names.\n\nNecessary for actors that are attached to sockets and not to specific components,\nwhich is the case for Skeletal and Static Meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManagerPollInterval_MetaData[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * How often the component will try to retrieve the Inventory Manager Component from the owner.\n\x09 * This only happens during the Equipment Initialization, when the Inventory must be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "How often the component will try to retrieve the Inventory Manager Component from the owner.\nThis only happens during the Equipment Initialization, when the Inventory must be available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManagerMaxWait_MetaData[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/**\n\x09 * Determines for how long the component will wait for the Inventory Manager Component.\n\x09 * This only happens during the Equipment Initialization, when the ASC must be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Determines for how long the component will wait for the Inventory Manager Component.\nThis only happens during the Equipment Initialization, when the ASC must be available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSlotData_MetaData[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/** A data asset containing all default slot configurations. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "A data asset containing all default slot configurations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStateTag_MetaData[] = {
		{ "Category", "Equipment Manager" },
		{ "Comment", "/** State applied to equipment if there's no better alternative. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "State applied to equipment if there's no better alternative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedEquipment_MetaData[] = {
		{ "Comment", "/** All pieces of equipment stored in this inventory. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "All pieces of equipment stored in this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentWaitingForReplication_MetaData[] = {
		{ "Comment", "/**\n\x09 * Equipment that was added, but it is waiting for this component to replicate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Equipment that was added, but it is waiting for this component to replicate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsWaitingForInventory_MetaData[] = {
		{ "Comment", "/**\n\x09 * Items that are waiting for an Inventory Manager to replicate.\n\x09 * They might also be waiting for this component to actually begin play.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Items that are waiting for an Inventory Manager to replicate.\nThey might also be waiting for this component to actually begin play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManagerAction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Action that waits for the Inventory Manager Component to be ready.\n\x09 * This is a pre-requisite for the Equipment Manager to initialize.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentManagerComponent.h" },
		{ "ToolTip", "Action that waits for the Inventory Manager Component to be ready.\nThis is a pre-requisite for the Equipment Manager to initialize." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentRemoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllEquipmentContainersQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelevantEquipmentContainersQuery;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotSocketMapping_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotSocketMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlotSocketMapping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryManagerPollInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryManagerMaxWait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSlotData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManagedEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentWaitingForReplication_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentWaitingForReplication;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsWaitingForInventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsWaitingForInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManagerAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_AddEquipment, "AddEquipment" }, // 2220192860
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ChangeEquipmentState, "ChangeEquipmentState" }, // 4114070536
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ClearMeshAsset, "ClearMeshAsset" }, // 3746380256
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_CreateEquipmentActor, "CreateEquipmentActor" }, // 3613052051
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_DestroyEquipment, "DestroyEquipment" }, // 3549940362
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAllEquipmentContainers, "GetAllEquipmentContainers" }, // 315537286
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetAverageGearLevel, "GetAverageGearLevel" }, // 1931777820
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetBestEquipmentState, "GetBestEquipmentState" }, // 3944903244
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByItem, "GetEquipmentByItem" }, // 2873429378
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentByQuery, "GetEquipmentByQuery" }, // 747749530
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentBySlot, "GetEquipmentBySlot" }, // 2570786723
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetEquipmentStateFromContainer, "GetEquipmentStateFromContainer" }, // 1581184398
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetFirstEquipmentByQuery, "GetFirstEquipmentByQuery" }, // 2791103594
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetHiddenEquipmentSlots, "GetHiddenEquipmentSlots" }, // 2345912496
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetInventoryManager, "GetInventoryManager" }, // 2112378647
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetMeshComponentForSlotTag, "GetMeshComponentForSlotTag" }, // 3789449523
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetRelevantEquipmentContainers, "GetRelevantEquipmentContainers" }, // 3277023802
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSlotTagForAttachmentSocket, "GetSlotTagForAttachmentSocket" }, // 890755055
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GetSocketNameForEquipmentSlot, "GetSocketNameForEquipmentSlot" }, // 2236846810
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_GrantToAbilitySystem, "GrantToAbilitySystem" }, // 1214658686
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipment, "HasEquipment" }, // 910817258
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasEquipmentSlot, "HasEquipmentSlot" }, // 929406121
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HasItemInInventoryQueue, "HasItemInInventoryQueue" }, // 4155274811
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_HideEquipmentSlots, "HideEquipmentSlots" }, // 2275627219
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipment, "InitializeEquipment" }, // 1488884347
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_InitializeEquipmentForItem, "InitializeEquipmentForItem" }, // 2120656339
		{ &Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature, "ManagedEquipmentEvent__DelegateSignature" }, // 1507097253
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_OnGetAverageGearLevel, "OnGetAverageGearLevel" }, // 4214354195
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RemoveEquipment, "RemoveEquipment" }, // 1439473251
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromRemovedEquipment, "RevertMeshesFromRemovedEquipment" }, // 3446033609
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevertMeshesFromSlots, "RevertMeshesFromSlots" }, // 3846608040
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_RevokeFromAbilitySystem, "RevokeFromAbilitySystem" }, // 1378728568
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SelectDefaultMesh, "SelectDefaultMesh" }, // 2575073221
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_Server_ChangeEquipmentState, "Server_ChangeEquipmentState" }, // 1572123146
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetDefaultMeshToSlot, "SetDefaultMeshToSlot" }, // 1539596643
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetSkeletalMeshAsset, "SetSkeletalMeshAsset" }, // 3137933141
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_SetStaticMeshAsset, "SetStaticMeshAsset" }, // 2438988336
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_ShowEquipmentSlots, "ShowEquipmentSlots" }, // 2538087491
		{ &Z_Construct_UFunction_UNinjaEquipmentManagerComponent_TryConnectToInventoryManager, "TryConnectToInventoryManager" }, // 765646440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_OnEquipmentAdded = { "OnEquipmentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, OnEquipmentAdded), Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentAdded_MetaData), NewProp_OnEquipmentAdded_MetaData) }; // 1507097253
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_OnEquipmentStateChanged = { "OnEquipmentStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, OnEquipmentStateChanged), Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentStateChanged_MetaData), NewProp_OnEquipmentStateChanged_MetaData) }; // 1507097253
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_OnEquipmentRemoved = { "OnEquipmentRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, OnEquipmentRemoved), Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentRemoved_MetaData), NewProp_OnEquipmentRemoved_MetaData) }; // 1507097253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_AllEquipmentContainersQuery = { "AllEquipmentContainersQuery", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, AllEquipmentContainersQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllEquipmentContainersQuery_MetaData), NewProp_AllEquipmentContainersQuery_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_RelevantEquipmentContainersQuery = { "RelevantEquipmentContainersQuery", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, RelevantEquipmentContainersQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelevantEquipmentContainersQuery_MetaData), NewProp_RelevantEquipmentContainersQuery_MetaData) }; // 572225232
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_SlotSocketMapping_ValueProp = { "SlotSocketMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_SlotSocketMapping_Key_KeyProp = { "SlotSocketMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_SlotSocketMapping = { "SlotSocketMapping", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, SlotSocketMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotSocketMapping_MetaData), NewProp_SlotSocketMapping_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_InventoryManagerPollInterval = { "InventoryManagerPollInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, InventoryManagerPollInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManagerPollInterval_MetaData), NewProp_InventoryManagerPollInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_InventoryManagerMaxWait = { "InventoryManagerMaxWait", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, InventoryManagerMaxWait), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManagerMaxWait_MetaData), NewProp_InventoryManagerMaxWait_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_DefaultSlotData = { "DefaultSlotData", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, DefaultSlotData), Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSlotData_MetaData), NewProp_DefaultSlotData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_DefaultStateTag = { "DefaultStateTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, DefaultStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStateTag_MetaData), NewProp_DefaultStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_ManagedEquipment = { "ManagedEquipment", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, ManagedEquipment), Z_Construct_UScriptStruct_FEquipmentList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedEquipment_MetaData), NewProp_ManagedEquipment_MetaData) }; // 983259081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_EquipmentWaitingForReplication_Inner = { "EquipmentWaitingForReplication", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_EquipmentWaitingForReplication = { "EquipmentWaitingForReplication", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, EquipmentWaitingForReplication), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentWaitingForReplication_MetaData), NewProp_EquipmentWaitingForReplication_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_ItemsWaitingForInventory_Inner = { "ItemsWaitingForInventory", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_ItemsWaitingForInventory = { "ItemsWaitingForInventory", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, ItemsWaitingForInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsWaitingForInventory_MetaData), NewProp_ItemsWaitingForInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_InventoryManagerAction = { "InventoryManagerAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentManagerComponent, InventoryManagerAction), Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManagerAction_MetaData), NewProp_InventoryManagerAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_OnEquipmentAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_OnEquipmentStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_OnEquipmentRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_AllEquipmentContainersQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_RelevantEquipmentContainersQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_SlotSocketMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_SlotSocketMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_SlotSocketMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_InventoryManagerPollInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_InventoryManagerMaxWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_DefaultSlotData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_DefaultStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_ManagedEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_EquipmentWaitingForReplication_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_EquipmentWaitingForReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_ItemsWaitingForInventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_ItemsWaitingForInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::NewProp_InventoryManagerAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCoreComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::ClassParams = {
	&UNinjaEquipmentManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentManagerComponent.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentManagerComponent>()
{
	return UNinjaEquipmentManagerComponent::StaticClass();
}
void UNinjaEquipmentManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ManagedEquipment(TEXT("ManagedEquipment"));
	const bool bIsValid = true
		&& Name_ManagedEquipment == ClassReps[(int32)ENetFields_Private::ManagedEquipment].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaEquipmentManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentManagerComponent);
UNinjaEquipmentManagerComponent::~UNinjaEquipmentManagerComponent() {}
// End Class UNinjaEquipmentManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentManagerComponent, UNinjaEquipmentManagerComponent::StaticClass, TEXT("UNinjaEquipmentManagerComponent"), &Z_Registration_Info_UClass_UNinjaEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentManagerComponent), 1128521181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_1138793218(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

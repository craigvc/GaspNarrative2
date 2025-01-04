// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/NinjaEquipment.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentMeshTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipment() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UUsableEquipmentInterface_NoRegister();
NINJAINVENTORYEQUIPMENT_API UFunction* Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Delegate FEquipmentEventSignature
struct Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics
{
	struct NinjaEquipment_eventEquipmentEventSignature_Parms
	{
		UNinjaEquipment* Equipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventEquipmentEventSignature_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "EquipmentEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::NinjaEquipment_eventEquipmentEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::NinjaEquipment_eventEquipmentEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaEquipment::FEquipmentEventSignature_DelegateWrapper(const FMulticastScriptDelegate& EquipmentEventSignature, UNinjaEquipment* Equipment)
{
	struct NinjaEquipment_eventEquipmentEventSignature_Parms
	{
		UNinjaEquipment* Equipment;
	};
	NinjaEquipment_eventEquipmentEventSignature_Parms Parms;
	Parms.Equipment=Equipment;
	EquipmentEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEquipmentEventSignature

// Begin Class UNinjaEquipment Function AddContainers
struct Z_Construct_UFunction_UNinjaEquipment_AddContainers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Adds all containers from the current State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Adds all containers from the current State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_AddContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "AddContainers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_AddContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_AddContainers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_AddContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_AddContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execAddContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddContainers();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function AddContainers

// Begin Class UNinjaEquipment Function AddToAbilitySystem
struct Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Grants ability system elements from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Grants ability system elements from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "AddToAbilitySystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execAddToAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToAbilitySystem();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function AddToAbilitySystem

// Begin Class UNinjaEquipment Function AttachEquipmentActor
struct Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics
{
	struct NinjaEquipment_eventAttachEquipmentActor_Parms
	{
		AActor* EquipmentActor;
		TSubclassOf<UNinjaEquipmentSceneComponentSelector> SelectorClass;
		FName SocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Attaches an Equipment Actor following the provided Actor Setup.\n\x09 *\n\x09 * @param EquipmentActor\x09\x09""Actor to be attached.\n\x09 * @param SelectorClass\x09\x09\x09Scene selector for the attachment.\n\x09 * @param SocketName\x09\x09\x09Socket name for the attachment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Attaches an Equipment Actor following the provided Actor Setup.\n\n@param EquipmentActor                Actor to be attached.\n@param SelectorClass                 Scene selector for the attachment.\n@param SocketName                    Socket name for the attachment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NewProp_EquipmentActor = { "EquipmentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventAttachEquipmentActor_Parms, EquipmentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NewProp_SelectorClass = { "SelectorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventAttachEquipmentActor_Parms, SelectorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventAttachEquipmentActor_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NewProp_EquipmentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NewProp_SelectorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "AttachEquipmentActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NinjaEquipment_eventAttachEquipmentActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::NinjaEquipment_eventAttachEquipmentActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execAttachEquipmentActor)
{
	P_GET_OBJECT(AActor,Z_Param_EquipmentActor);
	P_GET_OBJECT(UClass,Z_Param_SelectorClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachEquipmentActor(Z_Param_EquipmentActor,Z_Param_SelectorClass,Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function AttachEquipmentActor

// Begin Class UNinjaEquipment Function BP_OnItemSet
static const FName NAME_UNinjaEquipment_BP_OnItemSet = FName(TEXT("BP_OnItemSet"));
void UNinjaEquipment::BP_OnItemSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_BP_OnItemSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		BP_OnItemSet_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/**\n\x09 * Event triggered when the item is set.\n\x09 *\n\x09 * You can use this hook to cache any information you need from the backing item,\n\x09 * but keep in mind that the equipment's data asset might not be loaded yet, so\n\x09 * make sure to check that, via the \"IsDataLoaded\" function.\n\x09 */" },
		{ "DisplayName", "On Item Set" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Event triggered when the item is set.\n\nYou can use this hook to cache any information you need from the backing item,\nbut keep in mind that the equipment's data asset might not be loaded yet, so\nmake sure to check that, via the \"IsDataLoaded\" function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "BP_OnItemSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execBP_OnItemSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_OnItemSet_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function BP_OnItemSet

// Begin Class UNinjaEquipment Function BP_OnSkeletalMeshRemoved
struct NinjaEquipment_eventBP_OnSkeletalMeshRemoved_Parms
{
	FGameplayTag SlotTag;
	USkeletalMeshComponent* MeshComponent;
};
static const FName NAME_UNinjaEquipment_BP_OnSkeletalMeshRemoved = FName(TEXT("BP_OnSkeletalMeshRemoved"));
void UNinjaEquipment::BP_OnSkeletalMeshRemoved(FGameplayTag SlotTag, USkeletalMeshComponent* MeshComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_BP_OnSkeletalMeshRemoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipment_eventBP_OnSkeletalMeshRemoved_Parms Parms;
		Parms.SlotTag=SlotTag;
		Parms.MeshComponent=MeshComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BP_OnSkeletalMeshRemoved_Implementation(SlotTag, MeshComponent);
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs that a Skeletal Mesh has been removed.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09Slot where the mesh was originally assigned.\n\x09 * @param MeshComponent\x09\x09The Mesh Component that had its mesh removed.\n\x09 */" },
		{ "DisplayName", "On Skeletal Mesh Removed" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs that a Skeletal Mesh has been removed.\n\n@param SlotTag                       Slot where the mesh was originally assigned.\n@param MeshComponent         The Mesh Component that had its mesh removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnSkeletalMeshRemoved_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnSkeletalMeshRemoved_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "BP_OnSkeletalMeshRemoved", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::PropPointers), sizeof(NinjaEquipment_eventBP_OnSkeletalMeshRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipment_eventBP_OnSkeletalMeshRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execBP_OnSkeletalMeshRemoved)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_OnSkeletalMeshRemoved_Implementation(Z_Param_SlotTag,Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function BP_OnSkeletalMeshRemoved

// Begin Class UNinjaEquipment Function BP_OnSkeletalMeshSet
struct NinjaEquipment_eventBP_OnSkeletalMeshSet_Parms
{
	FGameplayTag SlotTag;
	USkeletalMeshComponent* MeshComponent;
};
static const FName NAME_UNinjaEquipment_BP_OnSkeletalMeshSet = FName(TEXT("BP_OnSkeletalMeshSet"));
void UNinjaEquipment::BP_OnSkeletalMeshSet(FGameplayTag SlotTag, USkeletalMeshComponent* MeshComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_BP_OnSkeletalMeshSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipment_eventBP_OnSkeletalMeshSet_Parms Parms;
		Parms.SlotTag=SlotTag;
		Parms.MeshComponent=MeshComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BP_OnSkeletalMeshSet_Implementation(SlotTag, MeshComponent);
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs that a Skeletal Mesh has been set.\n\x09 *\n\x09 * This is useful if this equipment wants to customize the mesh, for scenarios like\n\x09 * customizing materials further (i.e. team colors, skin colors, etc.)\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09Slot where the mesh was assigned.\n\x09 * @param MeshComponent\x09\x09The Mesh Component that received the new mesh.\n\x09 */" },
		{ "DisplayName", "On Skeletal Mesh Set" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs that a Skeletal Mesh has been set.\n\nThis is useful if this equipment wants to customize the mesh, for scenarios like\ncustomizing materials further (i.e. team colors, skin colors, etc.)\n\n@param SlotTag                       Slot where the mesh was assigned.\n@param MeshComponent         The Mesh Component that received the new mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnSkeletalMeshSet_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnSkeletalMeshSet_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "BP_OnSkeletalMeshSet", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::PropPointers), sizeof(NinjaEquipment_eventBP_OnSkeletalMeshSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipment_eventBP_OnSkeletalMeshSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execBP_OnSkeletalMeshSet)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_OnSkeletalMeshSet_Implementation(Z_Param_SlotTag,Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function BP_OnSkeletalMeshSet

// Begin Class UNinjaEquipment Function BP_OnStateTagChanged
struct NinjaEquipment_eventBP_OnStateTagChanged_Parms
{
	FGameplayTag NewStateTag;
	FGameplayTag OldStateTag;
};
static const FName NAME_UNinjaEquipment_BP_OnStateTagChanged = FName(TEXT("BP_OnStateTagChanged"));
void UNinjaEquipment::BP_OnStateTagChanged(FGameplayTag NewStateTag, FGameplayTag OldStateTag)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_BP_OnStateTagChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipment_eventBP_OnStateTagChanged_Parms Parms;
		Parms.NewStateTag=NewStateTag;
		Parms.OldStateTag=OldStateTag;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BP_OnStateTagChanged_Implementation(NewStateTag, OldStateTag);
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/**\n\x09 * Notifies a change in the state tag.\n\x09 *\n\x09 * @param NewStateTag\x09The State this equipment is currently in.\n\x09 * @param OldStateTag\x09The State this equipment was before this change.\n\x09 */" },
		{ "DisplayName", "On State Tag Changed" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Notifies a change in the state tag.\n\n@param NewStateTag   The State this equipment is currently in.\n@param OldStateTag   The State this equipment was before this change." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewStateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::NewProp_NewStateTag = { "NewStateTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnStateTagChanged_Parms, NewStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::NewProp_OldStateTag = { "OldStateTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnStateTagChanged_Parms, OldStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::NewProp_NewStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::NewProp_OldStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "BP_OnStateTagChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::PropPointers), sizeof(NinjaEquipment_eventBP_OnStateTagChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipment_eventBP_OnStateTagChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execBP_OnStateTagChanged)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_NewStateTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_OldStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_OnStateTagChanged_Implementation(Z_Param_NewStateTag,Z_Param_OldStateTag);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function BP_OnStateTagChanged

// Begin Class UNinjaEquipment Function BP_OnStaticMeshRemoved
struct NinjaEquipment_eventBP_OnStaticMeshRemoved_Parms
{
	FGameplayTag SlotTag;
	UStaticMeshComponent* MeshComponent;
};
static const FName NAME_UNinjaEquipment_BP_OnStaticMeshRemoved = FName(TEXT("BP_OnStaticMeshRemoved"));
void UNinjaEquipment::BP_OnStaticMeshRemoved(FGameplayTag SlotTag, UStaticMeshComponent* MeshComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_BP_OnStaticMeshRemoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipment_eventBP_OnStaticMeshRemoved_Parms Parms;
		Parms.SlotTag=SlotTag;
		Parms.MeshComponent=MeshComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BP_OnStaticMeshRemoved_Implementation(SlotTag, MeshComponent);
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs that a Static Mesh has been removed.\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09Slot where the mesh was originally assigned.\n\x09 * @param MeshComponent\x09\x09The Mesh Component that had its mesh removed.\n\x09 */" },
		{ "DisplayName", "On Static Mesh Removed" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs that a Static Mesh has been removed.\n\n@param SlotTag                       Slot where the mesh was originally assigned.\n@param MeshComponent         The Mesh Component that had its mesh removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnStaticMeshRemoved_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnStaticMeshRemoved_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "BP_OnStaticMeshRemoved", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::PropPointers), sizeof(NinjaEquipment_eventBP_OnStaticMeshRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipment_eventBP_OnStaticMeshRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execBP_OnStaticMeshRemoved)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_OnStaticMeshRemoved_Implementation(Z_Param_SlotTag,Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function BP_OnStaticMeshRemoved

// Begin Class UNinjaEquipment Function BP_OnStaticMeshSet
struct NinjaEquipment_eventBP_OnStaticMeshSet_Parms
{
	FGameplayTag SlotTag;
	UStaticMeshComponent* MeshComponent;
};
static const FName NAME_UNinjaEquipment_BP_OnStaticMeshSet = FName(TEXT("BP_OnStaticMeshSet"));
void UNinjaEquipment::BP_OnStaticMeshSet(FGameplayTag SlotTag, UStaticMeshComponent* MeshComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_BP_OnStaticMeshSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipment_eventBP_OnStaticMeshSet_Parms Parms;
		Parms.SlotTag=SlotTag;
		Parms.MeshComponent=MeshComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BP_OnStaticMeshSet_Implementation(SlotTag, MeshComponent);
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs that a Static Mesh has been set.\n\x09 *\n\x09 * This is useful if this equipment wants to customize the mesh, for scenarios like\n\x09 * customizing materials further (i.e. team colors, skin colors, etc.)\n\x09 *\n\x09 * @param SlotTag\x09\x09\x09Slot where the mesh was assigned.\n\x09 * @param MeshComponent\x09\x09The Mesh Component that received the new mesh.\n\x09 */" },
		{ "DisplayName", "On Static Mesh Set" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs that a Static Mesh has been set.\n\nThis is useful if this equipment wants to customize the mesh, for scenarios like\ncustomizing materials further (i.e. team colors, skin colors, etc.)\n\n@param SlotTag                       Slot where the mesh was assigned.\n@param MeshComponent         The Mesh Component that received the new mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnStaticMeshSet_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventBP_OnStaticMeshSet_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "BP_OnStaticMeshSet", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::PropPointers), sizeof(NinjaEquipment_eventBP_OnStaticMeshSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipment_eventBP_OnStaticMeshSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execBP_OnStaticMeshSet)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_OnStaticMeshSet_Implementation(Z_Param_SlotTag,Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function BP_OnStaticMeshSet

// Begin Class UNinjaEquipment Function ClearMeshes
struct Z_Construct_UFunction_UNinjaEquipment_ClearMeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Clears Static and Skeletal Meshes from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Clears Static and Skeletal Meshes from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_ClearMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "ClearMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_ClearMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_ClearMeshes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_ClearMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_ClearMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execClearMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMeshes();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function ClearMeshes

// Begin Class UNinjaEquipment Function ClearUnusedMeshes
struct Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Removes additional meshes from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Removes additional meshes from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "ClearUnusedMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execClearUnusedMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearUnusedMeshes();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function ClearUnusedMeshes

// Begin Class UNinjaEquipment Function DestroyAllActors
struct Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Destroys all actors spawned by this equipment instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Destroys all actors spawned by this equipment instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "DestroyAllActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execDestroyAllActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyAllActors();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function DestroyAllActors

// Begin Class UNinjaEquipment Function GetAbilitySystemComponent
struct Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics
{
	struct NinjaEquipment_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Ability System Component assigned to this equipment's Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Ability System Component assigned to this equipment's Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::NinjaEquipment_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::NinjaEquipment_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetAbilitySystemComponent

// Begin Class UNinjaEquipment Function GetContainer
struct Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics
{
	struct NinjaEquipment_eventGetContainer_Parms
	{
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the container where this equipment is stored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the container where this equipment is stored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::NinjaEquipment_eventGetContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::NinjaEquipment_eventGetContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetContainer();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetContainer

// Begin Class UNinjaEquipment Function GetData
struct Z_Construct_UFunction_UNinjaEquipment_GetData_Statics
{
	struct NinjaEquipment_eventGetData_Parms
	{
		const UNinjaEquipmentDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides this Equipment's Definition data, from the backing Item Instance. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides this Equipment's Definition data, from the backing Item Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetData_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::NinjaEquipment_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::NinjaEquipment_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaEquipmentDataAsset**)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetData

// Begin Class UNinjaEquipment Function GetEffectCauserActor
struct Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics
{
	struct NinjaEquipment_eventGetEffectCauserActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Actor that is marked as an Effect Causer.\n\x09 *\n\x09 * The Equipment Instance uses the \"Equipment Effect Causer Interface\" to determine\n\x09 * the correct Spawned Actor to be used, and it will return the first viable candidate.\n\x09 *\n\x09 * If no actors are marked with the proper interface or pass the interface's check,\n\x09 * then this function will return null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Actor that is marked as an Effect Causer.\n\nThe Equipment Instance uses the \"Equipment Effect Causer Interface\" to determine\nthe correct Spawned Actor to be used, and it will return the first viable candidate.\n\nIf no actors are marked with the proper interface or pass the interface's check,\nthen this function will return null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetEffectCauserActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetEffectCauserActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::NinjaEquipment_eventGetEffectCauserActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::NinjaEquipment_eventGetEffectCauserActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetEffectCauserActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetEffectCauserActor();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetEffectCauserActor

// Begin Class UNinjaEquipment Function GetEquipmentManager
struct Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics
{
	struct NinjaEquipment_eventGetEquipmentManager_Parms
	{
		UNinjaEquipmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Equipment Manager from the owning pawn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Equipment Manager from the owning pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetEquipmentManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetEquipmentManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::NinjaEquipment_eventGetEquipmentManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::NinjaEquipment_eventGetEquipmentManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetEquipmentManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=P_THIS->GetEquipmentManager();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetEquipmentManager

// Begin Class UNinjaEquipment Function GetEquipmentTags
struct Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics
{
	struct NinjaEquipment_eventGetEquipmentTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides a consolidation of tags assigned to this equipment instance.\n\x09 * Sum of Gameplay Tags from the backing item, the container and the equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides a consolidation of tags assigned to this equipment instance.\nSum of Gameplay Tags from the backing item, the container and the equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetEquipmentTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetEquipmentTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::NinjaEquipment_eventGetEquipmentTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::NinjaEquipment_eventGetEquipmentTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetEquipmentTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetEquipmentTags();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetEquipmentTags

// Begin Class UNinjaEquipment Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics
{
	struct NinjaEquipment_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager from the owning pawn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Inventory Manager from the owning pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::NinjaEquipment_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::NinjaEquipment_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetInventoryManager

// Begin Class UNinjaEquipment Function GetItem
struct Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics
{
	struct NinjaEquipment_eventGetItem_Parms
	{
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides this equipment's instigator as the backing Item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides this equipment's instigator as the backing Item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::NinjaEquipment_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::NinjaEquipment_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItem();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetItem

// Begin Class UNinjaEquipment Function GetLinkedAnimationLayers
struct Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics
{
	struct NinjaEquipment_eventGetLinkedAnimationLayers_Parms
	{
		TArray<FStoredEquipmentAnimLayer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides all animation layers linked by this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides all animation layers linked by this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer, METADATA_PARAMS(0, nullptr) }; // 2026335495
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetLinkedAnimationLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2026335495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetLinkedAnimationLayers", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::NinjaEquipment_eventGetLinkedAnimationLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::NinjaEquipment_eventGetLinkedAnimationLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetLinkedAnimationLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FStoredEquipmentAnimLayer>*)Z_Param__Result=P_THIS->GetLinkedAnimationLayers();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetLinkedAnimationLayers

// Begin Class UNinjaEquipment Function GetModifiedMeshComponents
struct Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics
{
	struct NinjaEquipment_eventGetModifiedMeshComponents_Parms
	{
		TArray<FStoredEquipmentMeshComponent> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides slots and components with meshes modified by this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides slots and components with meshes modified by this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent, METADATA_PARAMS(0, nullptr) }; // 3262867707
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetModifiedMeshComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3262867707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetModifiedMeshComponents", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::NinjaEquipment_eventGetModifiedMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::NinjaEquipment_eventGetModifiedMeshComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetModifiedMeshComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FStoredEquipmentMeshComponent>*)Z_Param__Result=P_THIS->GetModifiedMeshComponents();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetModifiedMeshComponents

// Begin Class UNinjaEquipment Function GetPawn
struct Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics
{
	struct NinjaEquipment_eventGetPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Retrieves the Pawn that owns this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Retrieves the Pawn that owns this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetPawn", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::NinjaEquipment_eventGetPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::NinjaEquipment_eventGetPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPawn();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetPawn

// Begin Class UNinjaEquipment Function GetPreviousStateTag
struct Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics
{
	struct NinjaEquipment_eventGetPreviousStateTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Tag representing this instance's previous state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Gameplay Tag representing this instance's previous state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetPreviousStateTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetPreviousStateTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::NinjaEquipment_eventGetPreviousStateTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::NinjaEquipment_eventGetPreviousStateTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetPreviousStateTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetPreviousStateTag();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetPreviousStateTag

// Begin Class UNinjaEquipment Function GetRootComponent
struct NinjaEquipment_eventGetRootComponent_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaEquipment_eventGetRootComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaEquipment_GetRootComponent = FName(TEXT("GetRootComponent"));
USceneComponent* UNinjaEquipment::GetRootComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipment_GetRootComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipment_eventGetRootComponent_Parms Parms;
		const_cast<UNinjaEquipment*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaEquipment*>(this)->GetRootComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Instance" },
		{ "Comment", "/** Retrieves the owner's root component used to attach actors. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Retrieves the owner's root component used to attach actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetRootComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetRootComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::PropPointers), sizeof(NinjaEquipment_eventGetRootComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipment_eventGetRootComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetRootComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetRootComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetRootComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetRootComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetRootComponent

// Begin Class UNinjaEquipment Function GetSlotTag
struct Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics
{
	struct NinjaEquipment_eventGetSlotTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Tag representing this instance's container/equipment slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Gameplay Tag representing this instance's container/equipment slot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetSlotTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetSlotTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::NinjaEquipment_eventGetSlotTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::NinjaEquipment_eventGetSlotTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetSlotTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetSlotTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetSlotTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetSlotTag();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetSlotTag

// Begin Class UNinjaEquipment Function GetSpawnedActors
struct Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics
{
	struct NinjaEquipment_eventGetSpawnedActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides actors spawned by this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides actors spawned by this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetSpawnedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetSpawnedActors", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::NinjaEquipment_eventGetSpawnedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::NinjaEquipment_eventGetSpawnedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetSpawnedActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedActors();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetSpawnedActors

// Begin Class UNinjaEquipment Function GetStateContainers
struct Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics
{
	struct NinjaEquipment_eventGetStateContainers_Parms
	{
		TArray<UNinjaInventoryContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides containers added by this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides containers added by this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetStateContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetStateContainers", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::NinjaEquipment_eventGetStateContainers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::NinjaEquipment_eventGetStateContainers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetStateContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetStateContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetStateContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryContainer*>*)Z_Param__Result=P_THIS->GetStateContainers();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetStateContainers

// Begin Class UNinjaEquipment Function GetStateTag
struct Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics
{
	struct NinjaEquipment_eventGetStateTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Tag representing this instance's state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides the Gameplay Tag representing this instance's state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetStateTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetStateTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::NinjaEquipment_eventGetStateTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::NinjaEquipment_eventGetStateTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetStateTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetStateTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetStateTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetStateTag();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetStateTag

// Begin Class UNinjaEquipment Function GetUnusedMeshComponents
struct Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics
{
	struct NinjaEquipment_eventGetUnusedMeshComponents_Parms
	{
		TArray<FStoredEquipmentMeshComponent> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Provides slots and components with meshes hidden by this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Provides slots and components with meshes hidden by this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent, METADATA_PARAMS(0, nullptr) }; // 3262867707
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventGetUnusedMeshComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3262867707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "GetUnusedMeshComponents", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::NinjaEquipment_eventGetUnusedMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::NinjaEquipment_eventGetUnusedMeshComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execGetUnusedMeshComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FStoredEquipmentMeshComponent>*)Z_Param__Result=P_THIS->GetUnusedMeshComponents();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function GetUnusedMeshComponents

// Begin Class UNinjaEquipment Function IsActivated
struct Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics
{
	struct NinjaEquipment_eventIsActivated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs if this equipment is activated. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs if this equipment is activated." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipment_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipment_eventIsActivated_Parms), &Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "IsActivated", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::NinjaEquipment_eventIsActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::NinjaEquipment_eventIsActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_IsActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_IsActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execIsActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActivated();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function IsActivated

// Begin Class UNinjaEquipment Function IsDataLoaded
struct Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics
{
	struct NinjaEquipment_eventIsDataLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs if the data asset for this equipment is loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs if the data asset for this equipment is loaded." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipment_eventIsDataLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipment_eventIsDataLoaded_Parms), &Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "IsDataLoaded", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::NinjaEquipment_eventIsDataLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::NinjaEquipment_eventIsDataLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execIsDataLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDataLoaded();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function IsDataLoaded

// Begin Class UNinjaEquipment Function IsDeactivated
struct Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics
{
	struct NinjaEquipment_eventIsDeactivated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs if this equipment is deactivated. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs if this equipment is deactivated." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipment_eventIsDeactivated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipment_eventIsDeactivated_Parms), &Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "IsDeactivated", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::NinjaEquipment_eventIsDeactivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::NinjaEquipment_eventIsDeactivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_IsDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_IsDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execIsDeactivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDeactivated();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function IsDeactivated

// Begin Class UNinjaEquipment Function IsWaitingForDataLoad
struct Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics
{
	struct NinjaEquipment_eventIsWaitingForDataLoad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Informs if the equipment is waiting for the data asset to load.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Informs if the equipment is waiting for the data asset to load." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipment_eventIsWaitingForDataLoad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipment_eventIsWaitingForDataLoad_Parms), &Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "IsWaitingForDataLoad", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::NinjaEquipment_eventIsWaitingForDataLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::NinjaEquipment_eventIsWaitingForDataLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execIsWaitingForDataLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWaitingForDataLoad();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function IsWaitingForDataLoad

// Begin Class UNinjaEquipment Function LinkAnimationLayers
struct Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Links Animation Layers from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Links Animation Layers from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "LinkAnimationLayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execLinkAnimationLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LinkAnimationLayers();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function LinkAnimationLayers

// Begin Class UNinjaEquipment Function OnRep_Item
struct Z_Construct_UFunction_UNinjaEquipment_OnRep_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates the item, so we can start using its assets on clients.\n\x09 * If there's anything you'd like to do when this happens, check BP_HandleItem.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Replicates the item, so we can start using its assets on clients.\nIf there's anything you'd like to do when this happens, check BP_HandleItem." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_OnRep_Item_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "OnRep_Item", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_OnRep_Item_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_OnRep_Item_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_OnRep_Item()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_OnRep_Item_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execOnRep_Item)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Item();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function OnRep_Item

// Begin Class UNinjaEquipment Function RemoveContainers
struct Z_Construct_UFunction_UNinjaEquipment_RemoveContainers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Removes all containers from the current State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Removes all containers from the current State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_RemoveContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "RemoveContainers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_RemoveContainers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_RemoveContainers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_RemoveContainers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_RemoveContainers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execRemoveContainers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveContainers();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function RemoveContainers

// Begin Class UNinjaEquipment Function RemoveFromAbilitySystem
struct Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Revokes all elements from the current handle and resets it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Revokes all elements from the current handle and resets it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "RemoveFromAbilitySystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execRemoveFromAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromAbilitySystem();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function RemoveFromAbilitySystem

// Begin Class UNinjaEquipment Function SetMeshes
struct Z_Construct_UFunction_UNinjaEquipment_SetMeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Assigns Static and Skeletal Meshes from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Assigns Static and Skeletal Meshes from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_SetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "SetMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_SetMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_SetMeshes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_SetMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_SetMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execSetMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshes();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function SetMeshes

// Begin Class UNinjaEquipment Function SpawnOrReuseActors
struct Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Spawns actors from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Spawns actors from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "SpawnOrReuseActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execSpawnOrReuseActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnOrReuseActors();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function SpawnOrReuseActors

// Begin Class UNinjaEquipment Function SynchronizeSavedActors
struct Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics
{
	struct NinjaEquipment_eventSynchronizeSavedActors_Parms
	{
		TArray<AActor*> StateActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Stores an array of new state actors, synchronizing the internal array.\n\x09 *\n\x09 * @param StateActors\n\x09 *\x09\x09""Actors that are present and valid in the current state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Stores an array of new state actors, synchronizing the internal array.\n\n@param StateActors\n             Actors that are present and valid in the current state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::NewProp_StateActors_Inner = { "StateActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::NewProp_StateActors = { "StateActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipment_eventSynchronizeSavedActors_Parms, StateActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::NewProp_StateActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::NewProp_StateActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "SynchronizeSavedActors", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::NinjaEquipment_eventSynchronizeSavedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::NinjaEquipment_eventSynchronizeSavedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execSynchronizeSavedActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_StateActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizeSavedActors(Z_Param_Out_StateActors);
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function SynchronizeSavedActors

// Begin Class UNinjaEquipment Function UnlinkAnimationLayers
struct Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Equipment|Equipment Instance" },
		{ "Comment", "/**\n\x09 * Unlinks Animation Layers from the State Configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Unlinks Animation Layers from the State Configuration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipment, nullptr, "UnlinkAnimationLayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipment::execUnlinkAnimationLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkAnimationLayers();
	P_NATIVE_END;
}
// End Class UNinjaEquipment Function UnlinkAnimationLayers

// Begin Class UNinjaEquipment
void UNinjaEquipment::StaticRegisterNativesUNinjaEquipment()
{
	UClass* Class = UNinjaEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddContainers", &UNinjaEquipment::execAddContainers },
		{ "AddToAbilitySystem", &UNinjaEquipment::execAddToAbilitySystem },
		{ "AttachEquipmentActor", &UNinjaEquipment::execAttachEquipmentActor },
		{ "BP_OnItemSet", &UNinjaEquipment::execBP_OnItemSet },
		{ "BP_OnSkeletalMeshRemoved", &UNinjaEquipment::execBP_OnSkeletalMeshRemoved },
		{ "BP_OnSkeletalMeshSet", &UNinjaEquipment::execBP_OnSkeletalMeshSet },
		{ "BP_OnStateTagChanged", &UNinjaEquipment::execBP_OnStateTagChanged },
		{ "BP_OnStaticMeshRemoved", &UNinjaEquipment::execBP_OnStaticMeshRemoved },
		{ "BP_OnStaticMeshSet", &UNinjaEquipment::execBP_OnStaticMeshSet },
		{ "ClearMeshes", &UNinjaEquipment::execClearMeshes },
		{ "ClearUnusedMeshes", &UNinjaEquipment::execClearUnusedMeshes },
		{ "DestroyAllActors", &UNinjaEquipment::execDestroyAllActors },
		{ "GetAbilitySystemComponent", &UNinjaEquipment::execGetAbilitySystemComponent },
		{ "GetContainer", &UNinjaEquipment::execGetContainer },
		{ "GetData", &UNinjaEquipment::execGetData },
		{ "GetEffectCauserActor", &UNinjaEquipment::execGetEffectCauserActor },
		{ "GetEquipmentManager", &UNinjaEquipment::execGetEquipmentManager },
		{ "GetEquipmentTags", &UNinjaEquipment::execGetEquipmentTags },
		{ "GetInventoryManager", &UNinjaEquipment::execGetInventoryManager },
		{ "GetItem", &UNinjaEquipment::execGetItem },
		{ "GetLinkedAnimationLayers", &UNinjaEquipment::execGetLinkedAnimationLayers },
		{ "GetModifiedMeshComponents", &UNinjaEquipment::execGetModifiedMeshComponents },
		{ "GetPawn", &UNinjaEquipment::execGetPawn },
		{ "GetPreviousStateTag", &UNinjaEquipment::execGetPreviousStateTag },
		{ "GetRootComponent", &UNinjaEquipment::execGetRootComponent },
		{ "GetSlotTag", &UNinjaEquipment::execGetSlotTag },
		{ "GetSpawnedActors", &UNinjaEquipment::execGetSpawnedActors },
		{ "GetStateContainers", &UNinjaEquipment::execGetStateContainers },
		{ "GetStateTag", &UNinjaEquipment::execGetStateTag },
		{ "GetUnusedMeshComponents", &UNinjaEquipment::execGetUnusedMeshComponents },
		{ "IsActivated", &UNinjaEquipment::execIsActivated },
		{ "IsDataLoaded", &UNinjaEquipment::execIsDataLoaded },
		{ "IsDeactivated", &UNinjaEquipment::execIsDeactivated },
		{ "IsWaitingForDataLoad", &UNinjaEquipment::execIsWaitingForDataLoad },
		{ "LinkAnimationLayers", &UNinjaEquipment::execLinkAnimationLayers },
		{ "OnRep_Item", &UNinjaEquipment::execOnRep_Item },
		{ "RemoveContainers", &UNinjaEquipment::execRemoveContainers },
		{ "RemoveFromAbilitySystem", &UNinjaEquipment::execRemoveFromAbilitySystem },
		{ "SetMeshes", &UNinjaEquipment::execSetMeshes },
		{ "SpawnOrReuseActors", &UNinjaEquipment::execSpawnOrReuseActors },
		{ "SynchronizeSavedActors", &UNinjaEquipment::execSynchronizeSavedActors },
		{ "UnlinkAnimationLayers", &UNinjaEquipment::execUnlinkAnimationLayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipment);
UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister()
{
	return UNinjaEquipment::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages a piece of equipment that is active and attached to a pawn.\n */" },
		{ "IncludePath", "GameFramework/NinjaEquipment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Manages a piece of equipment that is active and attached to a pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentAdded_MetaData[] = {
		{ "Comment", "/** Broadcasts when the equipment is added. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Broadcasts when the equipment is added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentStateChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the equipment's state changes. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Broadcasts when the equipment's state changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentRemoved_MetaData[] = {
		{ "Comment", "/** Broadcasts when the equipment is removed. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Broadcasts when the equipment is removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Comment", "/** Item instance that backs this equipment. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Item instance that backs this equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentId_MetaData[] = {
		{ "Comment", "/** Identifier for this entry, same as the related item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Identifier for this entry, same as the related item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentManager_MetaData[] = {
		{ "Comment", "/** Equipment Manager owning this instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "Equipment Manager owning this instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[] = {
		{ "Comment", "/** Item definition that backs this instance. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Item definition that backs this instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateContainers_MetaData[] = {
		{ "Comment", "/**\n\x09 * All containers added by this equipment.\n\x09 * Replicated since the owning client should be able to query them.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "All containers added by this equipment.\nReplicated since the owning client should be able to query them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedMeshComponents_MetaData[] = {
		{ "Comment", "/**\n\x09 * All mesh components currently modified by this equipment.\n\x09 * Not replicated since these are already known by each client.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "All mesh components currently modified by this equipment.\nNot replicated since these are already known by each client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnusedMeshComponents_MetaData[] = {
		{ "Comment", "/**\n\x09 * All mesh components deliberately cleared by the state.\n\x09 * Not replicated since these are already known by each client.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "All mesh components deliberately cleared by the state.\nNot replicated since these are already known by each client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimLayers_MetaData[] = {
		{ "Comment", "/**\n\x09 * All animation layers set by the state.\n\x09 * Not replicated since these are already known by each client.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "All animation layers set by the state.\nNot replicated since these are already known by each client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[] = {
		{ "Comment", "/**\n\x09 * All actors spawned by this equipment.\n\x09 * Replicated since the owning client should be able to query them.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipment.h" },
		{ "ToolTip", "All actors spawned by this equipment.\nReplicated since the owning client should be able to query them." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateContainers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMeshComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnusedMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnusedMeshComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipment_AddContainers, "AddContainers" }, // 2776484593
		{ &Z_Construct_UFunction_UNinjaEquipment_AddToAbilitySystem, "AddToAbilitySystem" }, // 1196785327
		{ &Z_Construct_UFunction_UNinjaEquipment_AttachEquipmentActor, "AttachEquipmentActor" }, // 599051811
		{ &Z_Construct_UFunction_UNinjaEquipment_BP_OnItemSet, "BP_OnItemSet" }, // 127234128
		{ &Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshRemoved, "BP_OnSkeletalMeshRemoved" }, // 2883787059
		{ &Z_Construct_UFunction_UNinjaEquipment_BP_OnSkeletalMeshSet, "BP_OnSkeletalMeshSet" }, // 3549713346
		{ &Z_Construct_UFunction_UNinjaEquipment_BP_OnStateTagChanged, "BP_OnStateTagChanged" }, // 2846076399
		{ &Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshRemoved, "BP_OnStaticMeshRemoved" }, // 3910196099
		{ &Z_Construct_UFunction_UNinjaEquipment_BP_OnStaticMeshSet, "BP_OnStaticMeshSet" }, // 3451953033
		{ &Z_Construct_UFunction_UNinjaEquipment_ClearMeshes, "ClearMeshes" }, // 534796779
		{ &Z_Construct_UFunction_UNinjaEquipment_ClearUnusedMeshes, "ClearUnusedMeshes" }, // 1935022975
		{ &Z_Construct_UFunction_UNinjaEquipment_DestroyAllActors, "DestroyAllActors" }, // 1266558281
		{ &Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature, "EquipmentEventSignature__DelegateSignature" }, // 4046452000
		{ &Z_Construct_UFunction_UNinjaEquipment_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 927799781
		{ &Z_Construct_UFunction_UNinjaEquipment_GetContainer, "GetContainer" }, // 4094292
		{ &Z_Construct_UFunction_UNinjaEquipment_GetData, "GetData" }, // 3853509557
		{ &Z_Construct_UFunction_UNinjaEquipment_GetEffectCauserActor, "GetEffectCauserActor" }, // 189032579
		{ &Z_Construct_UFunction_UNinjaEquipment_GetEquipmentManager, "GetEquipmentManager" }, // 3571938076
		{ &Z_Construct_UFunction_UNinjaEquipment_GetEquipmentTags, "GetEquipmentTags" }, // 3911914611
		{ &Z_Construct_UFunction_UNinjaEquipment_GetInventoryManager, "GetInventoryManager" }, // 1835038560
		{ &Z_Construct_UFunction_UNinjaEquipment_GetItem, "GetItem" }, // 2402552226
		{ &Z_Construct_UFunction_UNinjaEquipment_GetLinkedAnimationLayers, "GetLinkedAnimationLayers" }, // 3634030533
		{ &Z_Construct_UFunction_UNinjaEquipment_GetModifiedMeshComponents, "GetModifiedMeshComponents" }, // 1008857910
		{ &Z_Construct_UFunction_UNinjaEquipment_GetPawn, "GetPawn" }, // 4134749577
		{ &Z_Construct_UFunction_UNinjaEquipment_GetPreviousStateTag, "GetPreviousStateTag" }, // 4261941355
		{ &Z_Construct_UFunction_UNinjaEquipment_GetRootComponent, "GetRootComponent" }, // 399428887
		{ &Z_Construct_UFunction_UNinjaEquipment_GetSlotTag, "GetSlotTag" }, // 803223790
		{ &Z_Construct_UFunction_UNinjaEquipment_GetSpawnedActors, "GetSpawnedActors" }, // 728501053
		{ &Z_Construct_UFunction_UNinjaEquipment_GetStateContainers, "GetStateContainers" }, // 2474228448
		{ &Z_Construct_UFunction_UNinjaEquipment_GetStateTag, "GetStateTag" }, // 582322669
		{ &Z_Construct_UFunction_UNinjaEquipment_GetUnusedMeshComponents, "GetUnusedMeshComponents" }, // 2730747186
		{ &Z_Construct_UFunction_UNinjaEquipment_IsActivated, "IsActivated" }, // 3434814598
		{ &Z_Construct_UFunction_UNinjaEquipment_IsDataLoaded, "IsDataLoaded" }, // 2892465537
		{ &Z_Construct_UFunction_UNinjaEquipment_IsDeactivated, "IsDeactivated" }, // 2361594783
		{ &Z_Construct_UFunction_UNinjaEquipment_IsWaitingForDataLoad, "IsWaitingForDataLoad" }, // 1829780504
		{ &Z_Construct_UFunction_UNinjaEquipment_LinkAnimationLayers, "LinkAnimationLayers" }, // 2335454098
		{ &Z_Construct_UFunction_UNinjaEquipment_OnRep_Item, "OnRep_Item" }, // 100644880
		{ &Z_Construct_UFunction_UNinjaEquipment_RemoveContainers, "RemoveContainers" }, // 4256394986
		{ &Z_Construct_UFunction_UNinjaEquipment_RemoveFromAbilitySystem, "RemoveFromAbilitySystem" }, // 2932406135
		{ &Z_Construct_UFunction_UNinjaEquipment_SetMeshes, "SetMeshes" }, // 1822326831
		{ &Z_Construct_UFunction_UNinjaEquipment_SpawnOrReuseActors, "SpawnOrReuseActors" }, // 3987545905
		{ &Z_Construct_UFunction_UNinjaEquipment_SynchronizeSavedActors, "SynchronizeSavedActors" }, // 2983594941
		{ &Z_Construct_UFunction_UNinjaEquipment_UnlinkAnimationLayers, "UnlinkAnimationLayers" }, // 2967305309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_OnEquipmentAdded = { "OnEquipmentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, OnEquipmentAdded), Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentAdded_MetaData), NewProp_OnEquipmentAdded_MetaData) }; // 4046452000
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_OnEquipmentStateChanged = { "OnEquipmentStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, OnEquipmentStateChanged), Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentStateChanged_MetaData), NewProp_OnEquipmentStateChanged_MetaData) }; // 4046452000
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_OnEquipmentRemoved = { "OnEquipmentRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, OnEquipmentRemoved), Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentRemoved_MetaData), NewProp_OnEquipmentRemoved_MetaData) }; // 4046452000
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_Item = { "Item", "OnRep_Item", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_EquipmentId = { "EquipmentId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, EquipmentId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentId_MetaData), NewProp_EquipmentId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_EquipmentManager = { "EquipmentManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, EquipmentManager), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentManager_MetaData), NewProp_EquipmentManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, EquipmentData), Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentData_MetaData), NewProp_EquipmentData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_StateContainers_Inner = { "StateContainers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_StateContainers = { "StateContainers", nullptr, (EPropertyFlags)0x0144000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, StateContainers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateContainers_MetaData), NewProp_StateContainers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_ModifiedMeshComponents_Inner = { "ModifiedMeshComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent, METADATA_PARAMS(0, nullptr) }; // 3262867707
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_ModifiedMeshComponents = { "ModifiedMeshComponents", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, ModifiedMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedMeshComponents_MetaData), NewProp_ModifiedMeshComponents_MetaData) }; // 3262867707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_UnusedMeshComponents_Inner = { "UnusedMeshComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoredEquipmentMeshComponent, METADATA_PARAMS(0, nullptr) }; // 3262867707
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_UnusedMeshComponents = { "UnusedMeshComponents", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, UnusedMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnusedMeshComponents_MetaData), NewProp_UnusedMeshComponents_MetaData) }; // 3262867707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_AnimLayers_Inner = { "AnimLayers", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoredEquipmentAnimLayer, METADATA_PARAMS(0, nullptr) }; // 2026335495
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_AnimLayers = { "AnimLayers", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, AnimLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimLayers_MetaData), NewProp_AnimLayers_MetaData) }; // 2026335495
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0144000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipment, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActors_MetaData), NewProp_SpawnedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_OnEquipmentAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_OnEquipmentStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_OnEquipmentRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_EquipmentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_EquipmentManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_EquipmentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_StateContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_StateContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_ModifiedMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_ModifiedMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_UnusedMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_UnusedMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_AnimLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_AnimLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_SpawnedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipment_Statics::NewProp_SpawnedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaEquipment_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUsableEquipmentInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaEquipment, IUsableEquipmentInterface), false },  // 748208545
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipment_Statics::ClassParams = {
	&UNinjaEquipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaEquipment_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipment_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipment()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipment.OuterSingleton, Z_Construct_UClass_UNinjaEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipment.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipment>()
{
	return UNinjaEquipment::StaticClass();
}
void UNinjaEquipment::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Item(TEXT("Item"));
	static const FName Name_StateContainers(TEXT("StateContainers"));
	static const FName Name_SpawnedActors(TEXT("SpawnedActors"));
	const bool bIsValid = true
		&& Name_Item == ClassReps[(int32)ENetFields_Private::Item].Property->GetFName()
		&& Name_StateContainers == ClassReps[(int32)ENetFields_Private::StateContainers].Property->GetFName()
		&& Name_SpawnedActors == ClassReps[(int32)ENetFields_Private::SpawnedActors].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaEquipment"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipment);
UNinjaEquipment::~UNinjaEquipment() {}
// End Class UNinjaEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipment, UNinjaEquipment::StaticClass, TEXT("UNinjaEquipment"), &Z_Registration_Info_UClass_UNinjaEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipment), 3002877058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_3590585886(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

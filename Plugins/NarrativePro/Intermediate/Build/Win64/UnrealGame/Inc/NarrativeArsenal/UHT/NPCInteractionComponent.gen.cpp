// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/NPCInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCInteractionComponent() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractionComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnTargetedInteractionSlotChanged
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms
	{
		UNarrativeInteractableComponent* InteractableComponent;
		int32 NewSlotIdx;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/NPCInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIdx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms, InteractableComponent), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableComponent_MetaData), NewProp_InteractableComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::NewProp_NewSlotIdx = { "NewSlotIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms, NewSlotIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::NewProp_InteractableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::NewProp_NewSlotIdx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnTargetedInteractionSlotChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTargetedInteractionSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetedInteractionSlotChanged, UNarrativeInteractableComponent* InteractableComponent, int32 NewSlotIdx)
{
	struct _Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms
	{
		UNarrativeInteractableComponent* InteractableComponent;
		int32 NewSlotIdx;
	};
	_Script_NarrativeArsenal_eventOnTargetedInteractionSlotChanged_Parms Parms;
	Parms.InteractableComponent=InteractableComponent;
	Parms.NewSlotIdx=NewSlotIdx;
	OnTargetedInteractionSlotChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTargetedInteractionSlotChanged

// Begin Class UNPCInteractionComponent Function OnTargetSlotTaken
struct Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics
{
	struct NPCInteractionComponent_eventOnTargetSlotTaken_Parms
	{
		int32 Slot;
		UNarrativeInteractionComponent* StealerComp;
		UNarrativeInteractableComponent* InteractableComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when our targeted slot gets invalidated \n" },
		{ "ModuleRelativePath", "Public/Interaction/NPCInteractionComponent.h" },
		{ "ToolTip", "Called when our targeted slot gets invalidated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCInteractionComponent_eventOnTargetSlotTaken_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NewProp_StealerComp = { "StealerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCInteractionComponent_eventOnTargetSlotTaken_Parms, StealerComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealerComp_MetaData), NewProp_StealerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCInteractionComponent_eventOnTargetSlotTaken_Parms, InteractableComp), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableComp_MetaData), NewProp_InteractableComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NewProp_StealerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NewProp_InteractableComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCInteractionComponent, nullptr, "OnTargetSlotTaken", nullptr, nullptr, Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NPCInteractionComponent_eventOnTargetSlotTaken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::NPCInteractionComponent_eventOnTargetSlotTaken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCInteractionComponent::execOnTargetSlotTaken)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_StealerComp);
	P_GET_OBJECT(UNarrativeInteractableComponent,Z_Param_InteractableComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetSlotTaken(Z_Param_Slot,Z_Param_StealerComp,Z_Param_InteractableComp);
	P_NATIVE_END;
}
// End Class UNPCInteractionComponent Function OnTargetSlotTaken

// Begin Class UNPCInteractionComponent Function TargetClosestInteractionSlot
struct Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics
{
	struct NPCInteractionComponent_eventTargetClosestInteractionSlot_Parms
	{
		UNarrativeInteractableComponent* Interactable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Start targeting an interaction slot \n" },
		{ "ModuleRelativePath", "Public/Interaction/NPCInteractionComponent.h" },
		{ "ToolTip", "Start targeting an interaction slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCInteractionComponent_eventTargetClosestInteractionSlot_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
void Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCInteractionComponent_eventTargetClosestInteractionSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCInteractionComponent_eventTargetClosestInteractionSlot_Parms), &Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NewProp_Interactable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCInteractionComponent, nullptr, "TargetClosestInteractionSlot", nullptr, nullptr, Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NPCInteractionComponent_eventTargetClosestInteractionSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::NPCInteractionComponent_eventTargetClosestInteractionSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCInteractionComponent::execTargetClosestInteractionSlot)
{
	P_GET_OBJECT(UNarrativeInteractableComponent,Z_Param_Interactable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TargetClosestInteractionSlot(Z_Param_Interactable);
	P_NATIVE_END;
}
// End Class UNPCInteractionComponent Function TargetClosestInteractionSlot

// Begin Class UNPCInteractionComponent Function TargetInteractionSlot
struct Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics
{
	struct NPCInteractionComponent_eventTargetInteractionSlot_Parms
	{
		UNarrativeInteractableComponent* Interactable;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Start targeting an interaction slot \n" },
		{ "ModuleRelativePath", "Public/Interaction/NPCInteractionComponent.h" },
		{ "ToolTip", "Start targeting an interaction slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCInteractionComponent_eventTargetInteractionSlot_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCInteractionComponent_eventTargetInteractionSlot_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCInteractionComponent_eventTargetInteractionSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCInteractionComponent_eventTargetInteractionSlot_Parms), &Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_Interactable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCInteractionComponent, nullptr, "TargetInteractionSlot", nullptr, nullptr, Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NPCInteractionComponent_eventTargetInteractionSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::NPCInteractionComponent_eventTargetInteractionSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCInteractionComponent::execTargetInteractionSlot)
{
	P_GET_OBJECT(UNarrativeInteractableComponent,Z_Param_Interactable);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TargetInteractionSlot(Z_Param_Interactable,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UNPCInteractionComponent Function TargetInteractionSlot

// Begin Class UNPCInteractionComponent
void UNPCInteractionComponent::StaticRegisterNativesUNPCInteractionComponent()
{
	UClass* Class = UNPCInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetSlotTaken", &UNPCInteractionComponent::execOnTargetSlotTaken },
		{ "TargetClosestInteractionSlot", &UNPCInteractionComponent::execTargetClosestInteractionSlot },
		{ "TargetInteractionSlot", &UNPCInteractionComponent::execTargetInteractionSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCInteractionComponent);
UClass* Z_Construct_UClass_UNPCInteractionComponent_NoRegister()
{
	return UNPCInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UNPCInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interaction component used by NPCCharacters. \n */" },
		{ "IncludePath", "Interaction/NPCInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/NPCInteractionComponent.h" },
		{ "ToolTip", "Interaction component used by NPCCharacters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetedInteractionSlotChanged_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//We broadcast this whenever our targeted slot changes so interact activity can change its BB values. \n" },
		{ "ModuleRelativePath", "Public/Interaction/NPCInteractionComponent.h" },
		{ "ToolTip", "We broadcast this whenever our targeted slot changes so interact activity can change its BB values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetedInteractionSlotChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCInteractionComponent_OnTargetSlotTaken, "OnTargetSlotTaken" }, // 3537936110
		{ &Z_Construct_UFunction_UNPCInteractionComponent_TargetClosestInteractionSlot, "TargetClosestInteractionSlot" }, // 2517313867
		{ &Z_Construct_UFunction_UNPCInteractionComponent_TargetInteractionSlot, "TargetInteractionSlot" }, // 3262036217
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNPCInteractionComponent_Statics::NewProp_OnTargetedInteractionSlotChanged = { "OnTargetedInteractionSlotChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCInteractionComponent, OnTargetedInteractionSlotChanged), Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedInteractionSlotChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetedInteractionSlotChanged_MetaData), NewProp_OnTargetedInteractionSlotChanged_MetaData) }; // 1350073730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCInteractionComponent_Statics::NewProp_OnTargetedInteractionSlotChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeInteractionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCInteractionComponent_Statics::ClassParams = {
	&UNPCInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UNPCInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCInteractionComponent.OuterSingleton, Z_Construct_UClass_UNPCInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCInteractionComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCInteractionComponent>()
{
	return UNPCInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCInteractionComponent);
UNPCInteractionComponent::~UNPCInteractionComponent() {}
// End Class UNPCInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCInteractionComponent, UNPCInteractionComponent::StaticClass, TEXT("UNPCInteractionComponent"), &Z_Registration_Info_UClass_UNPCInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCInteractionComponent), 2079723688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_2903607348(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/InteractionComponent.h"
#include "NarrativeArsenal/Public/Interaction/InteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionSlotClaimHandle();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnFoundInteractable
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnFoundInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFoundInteractable_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnFoundInteractable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnFoundInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnFoundInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFoundInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnFoundInteractable, UNarrativeInteractableComponent* Interactable)
{
	struct _Script_NarrativeArsenal_eventOnFoundInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
	_Script_NarrativeArsenal_eventOnFoundInteractable_Parms Parms;
	Parms.Interactable=Interactable;
	OnFoundInteractable.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFoundInteractable

// Begin Delegate FOnLostInteractable
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnLostInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnLostInteractable_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnLostInteractable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnLostInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnLostInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLostInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnLostInteractable, UNarrativeInteractableComponent* Interactable)
{
	struct _Script_NarrativeArsenal_eventOnLostInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
	_Script_NarrativeArsenal_eventOnLostInteractable_Parms Parms;
	Parms.Interactable=Interactable;
	OnLostInteractable.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLostInteractable

// Begin Delegate FOnInteracted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnInteracted_Parms
	{
		UNarrativeInteractionComponent* Interaction;
		UNarrativeInteractableComponent* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interaction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnInteracted_Parms, Interaction), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interaction_MetaData), NewProp_Interaction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnInteracted_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::NewProp_Interaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnInteracted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteracted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteracted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteracted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteracted_DelegateWrapper(const FMulticastScriptDelegate& OnInteracted, UNarrativeInteractionComponent* Interaction, UNarrativeInteractableComponent* Interactable)
{
	struct _Script_NarrativeArsenal_eventOnInteracted_Parms
	{
		UNarrativeInteractionComponent* Interaction;
		UNarrativeInteractableComponent* Interactable;
	};
	_Script_NarrativeArsenal_eventOnInteracted_Parms Parms;
	Parms.Interaction=Interaction;
	Parms.Interactable=Interactable;
	OnInteracted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteracted

// Begin Delegate FOnInteractPressed
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnInteractPressed_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnInteractPressed_Parms, Interaction), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interaction_MetaData), NewProp_Interaction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::NewProp_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnInteractPressed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteractPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteractPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractPressed_DelegateWrapper(const FMulticastScriptDelegate& OnInteractPressed, UNarrativeInteractionComponent* Interaction)
{
	struct _Script_NarrativeArsenal_eventOnInteractPressed_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
	_Script_NarrativeArsenal_eventOnInteractPressed_Parms Parms;
	Parms.Interaction=Interaction;
	OnInteractPressed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractPressed

// Begin Delegate FOnInteractReleased
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnInteractReleased_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnInteractReleased_Parms, Interaction), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interaction_MetaData), NewProp_Interaction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::NewProp_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnInteractReleased__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteractReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteractReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractReleased_DelegateWrapper(const FMulticastScriptDelegate& OnInteractReleased, UNarrativeInteractionComponent* Interaction)
{
	struct _Script_NarrativeArsenal_eventOnInteractReleased_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
	_Script_NarrativeArsenal_eventOnInteractReleased_Parms Parms;
	Parms.Interaction=Interaction;
	OnInteractReleased.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractReleased

// Begin Delegate FOnUseInteractable
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnUseInteractable_Parms
	{
		AActor* InteractableActor;
		UNarrativeInteractableComponent* InteractableComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when we interact with an interactable object - this works for both Slot based interaction and quick interaction. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Called when we interact with an interactable object - this works for both Slot based interaction and quick interaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::NewProp_InteractableActor = { "InteractableActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnUseInteractable_Parms, InteractableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnUseInteractable_Parms, InteractableComponent), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableComponent_MetaData), NewProp_InteractableComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::NewProp_InteractableActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::NewProp_InteractableComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnUseInteractable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnUseInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnUseInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUseInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnUseInteractable, AActor* InteractableActor, UNarrativeInteractableComponent* InteractableComponent)
{
	struct _Script_NarrativeArsenal_eventOnUseInteractable_Parms
	{
		AActor* InteractableActor;
		UNarrativeInteractableComponent* InteractableComponent;
	};
	_Script_NarrativeArsenal_eventOnUseInteractable_Parms Parms;
	Parms.InteractableActor=InteractableActor;
	Parms.InteractableComponent=InteractableComponent;
	OnUseInteractable.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUseInteractable

// Begin Class UNarrativeInteractionComponent Function ClaimInteractionSlot
struct Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics
{
	struct NarrativeInteractionComponent_eventClaimInteractionSlot_Parms
	{
		UNarrativeInteractableComponent* Interactable;
		int32 SlotIdx;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Claims an interaction slot on the given Interactable\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Claims an interaction slot on the given Interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIdx;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractionComponent_eventClaimInteractionSlot_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_SlotIdx = { "SlotIdx", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractionComponent_eventClaimInteractionSlot_Parms, SlotIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIdx_MetaData), NewProp_SlotIdx_MetaData) };
void Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInteractionComponent_eventClaimInteractionSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractionComponent_eventClaimInteractionSlot_Parms), &Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_Interactable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_SlotIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "ClaimInteractionSlot", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NarrativeInteractionComponent_eventClaimInteractionSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::NarrativeInteractionComponent_eventClaimInteractionSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execClaimInteractionSlot)
{
	P_GET_OBJECT(UNarrativeInteractableComponent,Z_Param_Interactable);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIdx);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClaimInteractionSlot(Z_Param_Interactable,Z_Param_SlotIdx);
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function ClaimInteractionSlot

// Begin Class UNarrativeInteractionComponent Function ReleaseInteractionSlot
struct Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Releases our claimed interactable slot if we have one \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Releases our claimed interactable slot if we have one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "ReleaseInteractionSlot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execReleaseInteractionSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseInteractionSlot();
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function ReleaseInteractionSlot

// Begin Class UNarrativeInteractionComponent
void UNarrativeInteractionComponent::StaticRegisterNativesUNarrativeInteractionComponent()
{
	UClass* Class = UNarrativeInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClaimInteractionSlot", &UNarrativeInteractionComponent::execClaimInteractionSlot },
		{ "ReleaseInteractionSlot", &UNarrativeInteractionComponent::execReleaseInteractionSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeInteractionComponent);
UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister()
{
	return UNarrativeInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/** Added to both Player and NPC controllers. Allows both NPCs and Players to interact with the world. \nSee UPlayer/NPCInteractionComponents for speciaized versions.  */" },
		{ "DisplayName", "Narrative Interaction" },
		{ "IncludePath", "Interaction/InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Added to both Player and NPC controllers. Allows both NPCs and Players to interact with the world.\nSee UPlayer/NPCInteractionComponents for speciaized versions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Our owning character\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Our owning character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Our controller owner\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Our controller owner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSlotClaimHandle_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Our interaction slot claim handle, if we've claimed an interactables slot. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Our interaction slot claim handle, if we've claimed an interactables slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedInteractable_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//The interactable we've claimed a slot on and are currently interacting with\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "The interactable we've claimed a slot on and are currently interacting with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedInteractableGUID_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//The GUID of the occupied interactable so we can restore when the game loads back in\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "The GUID of the occupied interactable so we can restore when the game loads back in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedInteractableSlotIdx_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//The index of the slot we're occupying \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "The index of the slot we're occupying" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginUseInteractable_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Called when we interact with an interactable object - this works for both Slot based interaction and quick interaction. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Called when we interact with an interactable object - this works for both Slot based interaction and quick interaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishUseInteractable_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter|Interaction" },
		{ "Comment", "//Called when the interaction slot we've taken is released as our interaction behavior has finished\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionComponent.h" },
		{ "ToolTip", "Called when the interaction slot we've taken is released as our interaction behavior has finished" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionSlotClaimHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OccupiedInteractable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OccupiedInteractableGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OccupiedInteractableSlotIdx;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginUseInteractable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishUseInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_ClaimInteractionSlot, "ClaimInteractionSlot" }, // 3519416235
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_ReleaseInteractionSlot, "ReleaseInteractionSlot" }, // 2658246319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OwningPawn), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPawn_MetaData), NewProp_OwningPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OwningController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningController_MetaData), NewProp_OwningController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionSlotClaimHandle = { "InteractionSlotClaimHandle", nullptr, (EPropertyFlags)0x0020088000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, InteractionSlotClaimHandle), Z_Construct_UScriptStruct_FInteractionSlotClaimHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSlotClaimHandle_MetaData), NewProp_InteractionSlotClaimHandle_MetaData) }; // 3600068177
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OccupiedInteractable = { "OccupiedInteractable", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OccupiedInteractable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedInteractable_MetaData), NewProp_OccupiedInteractable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OccupiedInteractableGUID = { "OccupiedInteractableGUID", nullptr, (EPropertyFlags)0x0020080001000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OccupiedInteractableGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedInteractableGUID_MetaData), NewProp_OccupiedInteractableGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OccupiedInteractableSlotIdx = { "OccupiedInteractableSlotIdx", nullptr, (EPropertyFlags)0x0020080001000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OccupiedInteractableSlotIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedInteractableSlotIdx_MetaData), NewProp_OccupiedInteractableSlotIdx_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnBeginUseInteractable = { "OnBeginUseInteractable", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnBeginUseInteractable), Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginUseInteractable_MetaData), NewProp_OnBeginUseInteractable_MetaData) }; // 3603375827
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnFinishUseInteractable = { "OnFinishUseInteractable", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnFinishUseInteractable), Z_Construct_UDelegateFunction_NarrativeArsenal_OnUseInteractable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishUseInteractable_MetaData), NewProp_OnFinishUseInteractable_MetaData) }; // 3603375827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionSlotClaimHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OccupiedInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OccupiedInteractableGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OccupiedInteractableSlotIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnBeginUseInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnFinishUseInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeInteractionComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::ClassParams = {
	&UNarrativeInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeInteractionComponent.OuterSingleton, Z_Construct_UClass_UNarrativeInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeInteractionComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeInteractionComponent>()
{
	return UNarrativeInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInteractionComponent);
UNarrativeInteractionComponent::~UNarrativeInteractionComponent() {}
// End Class UNarrativeInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeInteractionComponent, UNarrativeInteractionComponent::StaticClass, TEXT("UNarrativeInteractionComponent"), &Z_Registration_Info_UClass_UNarrativeInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInteractionComponent), 1350329460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_2465435921(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

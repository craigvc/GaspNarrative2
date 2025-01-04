// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInteraction/Public/InteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeInteraction();
// End Cross Module References

// Begin Delegate FOnFoundInteractable
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnFoundInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnFoundInteractable_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnFoundInteractable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnFoundInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnFoundInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFoundInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnFoundInteractable, UNarrativeInteractableComponent* Interactable)
{
	struct _Script_NarrativeInteraction_eventOnFoundInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
	_Script_NarrativeInteraction_eventOnFoundInteractable_Parms Parms;
	Parms.Interactable=Interactable;
	OnFoundInteractable.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFoundInteractable

// Begin Delegate FOnLostInteractable
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnLostInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnLostInteractable_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnLostInteractable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnLostInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnLostInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLostInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnLostInteractable, UNarrativeInteractableComponent* Interactable)
{
	struct _Script_NarrativeInteraction_eventOnLostInteractable_Parms
	{
		UNarrativeInteractableComponent* Interactable;
	};
	_Script_NarrativeInteraction_eventOnLostInteractable_Parms Parms;
	Parms.Interactable=Interactable;
	OnLostInteractable.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLostInteractable

// Begin Delegate FOnInteracted
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnInteracted_Parms
	{
		UNarrativeInteractionComponent* Interaction;
		UNarrativeInteractableComponent* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnInteracted_Parms, Interaction), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interaction_MetaData), NewProp_Interaction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnInteracted_Parms, Interactable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::NewProp_Interaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnInteracted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteracted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteracted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteracted_DelegateWrapper(const FMulticastScriptDelegate& OnInteracted, UNarrativeInteractionComponent* Interaction, UNarrativeInteractableComponent* Interactable)
{
	struct _Script_NarrativeInteraction_eventOnInteracted_Parms
	{
		UNarrativeInteractionComponent* Interaction;
		UNarrativeInteractableComponent* Interactable;
	};
	_Script_NarrativeInteraction_eventOnInteracted_Parms Parms;
	Parms.Interaction=Interaction;
	Parms.Interactable=Interactable;
	OnInteracted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteracted

// Begin Delegate FOnInteractPressed
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnInteractPressed_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnInteractPressed_Parms, Interaction), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interaction_MetaData), NewProp_Interaction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::NewProp_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnInteractPressed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteractPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteractPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractPressed_DelegateWrapper(const FMulticastScriptDelegate& OnInteractPressed, UNarrativeInteractionComponent* Interaction)
{
	struct _Script_NarrativeInteraction_eventOnInteractPressed_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
	_Script_NarrativeInteraction_eventOnInteractPressed_Parms Parms;
	Parms.Interaction=Interaction;
	OnInteractPressed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractPressed

// Begin Delegate FOnInteractReleased
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnInteractReleased_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnInteractReleased_Parms, Interaction), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interaction_MetaData), NewProp_Interaction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::NewProp_Interaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnInteractReleased__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteractReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteractReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractReleased_DelegateWrapper(const FMulticastScriptDelegate& OnInteractReleased, UNarrativeInteractionComponent* Interaction)
{
	struct _Script_NarrativeInteraction_eventOnInteractReleased_Parms
	{
		UNarrativeInteractionComponent* Interaction;
	};
	_Script_NarrativeInteraction_eventOnInteractReleased_Parms Parms;
	Parms.Interaction=Interaction;
	OnInteractReleased.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteractReleased

// Begin Class UNarrativeInteractionComponent Function BeginInteract
struct Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "BeginInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execBeginInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginInteract();
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function BeginInteract

// Begin Class UNarrativeInteractionComponent Function BindToInput
struct Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics
{
	struct NarrativeInteractionComponent_eventBindToInput_Parms
	{
		UEnhancedInputComponent* EnhancedInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Automatically sets up our input component to call the interaction functions \n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "Automatically sets up our input component to call the interaction functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInput_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::NewProp_EnhancedInput = { "EnhancedInput", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractionComponent_eventBindToInput_Parms, EnhancedInput), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInput_MetaData), NewProp_EnhancedInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::NewProp_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "BindToInput", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::NarrativeInteractionComponent_eventBindToInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::NarrativeInteractionComponent_eventBindToInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execBindToInput)
{
	P_GET_OBJECT(UEnhancedInputComponent,Z_Param_EnhancedInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToInput(Z_Param_EnhancedInput);
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function BindToInput

// Begin Class UNarrativeInteractionComponent Function EndInteract
struct Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "EndInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execEndInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteract();
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function EndInteract

// Begin Class UNarrativeInteractionComponent Function ServerBeginInteract
static const FName NAME_UNarrativeInteractionComponent_ServerBeginInteract = FName(TEXT("ServerBeginInteract"));
void UNarrativeInteractionComponent::ServerBeginInteract()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractionComponent_ServerBeginInteract);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "ServerBeginInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execServerBeginInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerBeginInteract_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function ServerBeginInteract

// Begin Class UNarrativeInteractionComponent Function ServerEndInteract
static const FName NAME_UNarrativeInteractionComponent_ServerEndInteract = FName(TEXT("ServerEndInteract"));
void UNarrativeInteractionComponent::ServerEndInteract()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractionComponent_ServerEndInteract);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractionComponent, nullptr, "ServerEndInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractionComponent::execServerEndInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerEndInteract_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeInteractionComponent Function ServerEndInteract

// Begin Class UNarrativeInteractionComponent
void UNarrativeInteractionComponent::StaticRegisterNativesUNarrativeInteractionComponent()
{
	UClass* Class = UNarrativeInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginInteract", &UNarrativeInteractionComponent::execBeginInteract },
		{ "BindToInput", &UNarrativeInteractionComponent::execBindToInput },
		{ "EndInteract", &UNarrativeInteractionComponent::execEndInteract },
		{ "ServerBeginInteract", &UNarrativeInteractionComponent::execServerBeginInteract },
		{ "ServerEndInteract", &UNarrativeInteractionComponent::execServerEndInteract },
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
		{ "Comment", "/**When added to your Player Controller, this component will check if your player is within \ndistance of an interactable and allow you to interact with it. */" },
		{ "DisplayName", "Narrative Interaction" },
		{ "IncludePath", "InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "When added to your Player Controller, this component will check if your player is within\ndistance of an interactable and allow you to interact with it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFoundInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we find a new interactable object \n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we find a new interactable object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLostInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we've lost our interactable\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we've lost our interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteracted_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we interact with an interactable \n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we interact with an interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractPressed_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we start holding the interact key \n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we start holding the interact key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractReleased_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we release the interact key \n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we release the interact key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Our pawn owner\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "Our pawn owner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Our controller owner\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "Our controller owner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The current interactable component we're viewing, if there is one\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "The current interactable component we're viewing, if there is one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "Comment", "//The time when we last checked for an interactable\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "The time when we last checked for an interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInteractHeld_MetaData[] = {
		{ "Comment", "//Whether the local player is holding the interact key\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "Whether the local player is holding the interact key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionInputs_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**All of the input actions that should instigate an interaction. */" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "All of the input actions that should instigate an interaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingInteractTime_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**The amount of time before interaction completes on our current interactable.This is stored per interactor and not per interactable\n\x09""because in a networked game we may want to support multiple players interacting with something and each will have their own time*/" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "The amount of time before interaction completes on our current interactable.This is stored per interactor and not per interactable\n       because in a networked game we may want to support multiple players interacting with something and each will have their own time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckFrequency_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//How often in seconds to check for an interactable object. Set this to zero if you want to check every tick.\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "How often in seconds to check for an interactable object. Set this to zero if you want to check every tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//How far we'll trace when we check if the player is looking at an interactable object\n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "How far we'll trace when we check if the player is looking at an interactable object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckSphereRadius_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//If greater than zero we'll use a sphere trace over an interaction trace \n" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ToolTip", "If greater than zero we'll use a sphere trace over an interaction trace" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFoundInteractable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLostInteractable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteracted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractReleased;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
	static void NewProp_bInteractHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractHeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractionInputs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingInteractTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckSphereRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_BeginInteract, "BeginInteract" }, // 2967936579
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_BindToInput, "BindToInput" }, // 592523428
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_EndInteract, "EndInteract" }, // 869455232
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_ServerBeginInteract, "ServerBeginInteract" }, // 478436532
		{ &Z_Construct_UFunction_UNarrativeInteractionComponent_ServerEndInteract, "ServerEndInteract" }, // 811996322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnFoundInteractable = { "OnFoundInteractable", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnFoundInteractable), Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFoundInteractable_MetaData), NewProp_OnFoundInteractable_MetaData) }; // 1130677026
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnLostInteractable = { "OnLostInteractable", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnLostInteractable), Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLostInteractable_MetaData), NewProp_OnLostInteractable_MetaData) }; // 2399780020
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnInteracted = { "OnInteracted", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnInteracted), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteracted_MetaData), NewProp_OnInteracted_MetaData) }; // 1575182169
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnInteractPressed = { "OnInteractPressed", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnInteractPressed), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractPressed_MetaData), NewProp_OnInteractPressed_MetaData) }; // 1881778146
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnInteractReleased = { "OnInteractReleased", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OnInteractReleased), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractReleased_MetaData), NewProp_OnInteractReleased_MetaData) }; // 2620382436
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPawn_MetaData), NewProp_OwningPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningController_MetaData), NewProp_OwningController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, CurrentInteractable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInteractionCheckTime_MetaData), NewProp_LastInteractionCheckTime_MetaData) };
void Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_bInteractHeld_SetBit(void* Obj)
{
	((UNarrativeInteractionComponent*)Obj)->bInteractHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_bInteractHeld = { "bInteractHeld", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeInteractionComponent), &Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_bInteractHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInteractHeld_MetaData), NewProp_bInteractHeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionInputs_Inner = { "InteractionInputs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionInputs = { "InteractionInputs", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, InteractionInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionInputs_MetaData), NewProp_InteractionInputs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_RemainingInteractTime = { "RemainingInteractTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, RemainingInteractTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingInteractTime_MetaData), NewProp_RemainingInteractTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionCheckFrequency = { "InteractionCheckFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, InteractionCheckFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckFrequency_MetaData), NewProp_InteractionCheckFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionCheckDistance = { "InteractionCheckDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, InteractionCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckDistance_MetaData), NewProp_InteractionCheckDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionCheckSphereRadius = { "InteractionCheckSphereRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractionComponent, InteractionCheckSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckSphereRadius_MetaData), NewProp_InteractionCheckSphereRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnFoundInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnLostInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnInteracted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnInteractPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OnInteractReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_OwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_CurrentInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_LastInteractionCheckTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_bInteractHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_RemainingInteractTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionCheckFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractionComponent_Statics::NewProp_InteractionCheckSphereRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInteractionComponent_Statics::ClassParams = {
	&UNarrativeInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractionComponent_Statics::PropPointers),
	0,
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
template<> NARRATIVEINTERACTION_API UClass* StaticClass<UNarrativeInteractionComponent>()
{
	return UNarrativeInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInteractionComponent);
UNarrativeInteractionComponent::~UNarrativeInteractionComponent() {}
// End Class UNarrativeInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeInteractionComponent, UNarrativeInteractionComponent::StaticClass, TEXT("UNarrativeInteractionComponent"), &Z_Registration_Info_UClass_UNarrativeInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInteractionComponent), 1824861875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_832238516(TEXT("/Script/NarrativeInteraction"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

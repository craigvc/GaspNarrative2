// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/InteractableComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractionSlotBehavior();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractionSlotBehavior_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractAbility_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FActiveInteractionSlot();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionDefiniton();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionSlotClaimHandle();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionSlotConfig();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnBeginInteract
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnBeginInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnBeginInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnBeginInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnBeginInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnBeginInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnBeginInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginInteract_DelegateWrapper(const FMulticastScriptDelegate& OnBeginInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeArsenal_eventOnBeginInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeArsenal_eventOnBeginInteract_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnBeginInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBeginInteract

// Begin Delegate FOnEndInteract
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnEndInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnEndInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnEndInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnEndInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnEndInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnEndInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndInteract_DelegateWrapper(const FMulticastScriptDelegate& OnEndInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeArsenal_eventOnEndInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeArsenal_eventOnEndInteract_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnEndInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEndInteract

// Begin Delegate FOnBeginFocus
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnBeginFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnBeginFocus_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnBeginFocus_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnBeginFocus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnBeginFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnBeginFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginFocus_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeArsenal_eventOnBeginFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeArsenal_eventOnBeginFocus_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnBeginFocus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBeginFocus

// Begin Delegate FOnEndFocus
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnEndFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnEndFocus_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnEndFocus_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnEndFocus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnEndFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnEndFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndFocus_DelegateWrapper(const FMulticastScriptDelegate& OnEndFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeArsenal_eventOnEndFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeArsenal_eventOnEndFocus_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnEndFocus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEndFocus

// Begin Delegate FOnInteract
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeArsenal_eventOnInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeArsenal_eventOnInteract_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteract

// Begin Delegate FOnTargetedSlotTaken
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms
	{
		int32 Slot;
		UNarrativeInteractionComponent* InteractionComp;
		UNarrativeInteractableComponent* InteractableComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms, InteractableComp), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableComp_MetaData), NewProp_InteractableComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::NewProp_InteractionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::NewProp_InteractableComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnTargetedSlotTaken__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTargetedSlotTaken_DelegateWrapper(const FMulticastScriptDelegate& OnTargetedSlotTaken, int32 Slot, UNarrativeInteractionComponent* InteractionComp, UNarrativeInteractableComponent* InteractableComp)
{
	struct _Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms
	{
		int32 Slot;
		UNarrativeInteractionComponent* InteractionComp;
		UNarrativeInteractableComponent* InteractableComp;
	};
	_Script_NarrativeArsenal_eventOnTargetedSlotTaken_Parms Parms;
	Parms.Slot=Slot;
	Parms.InteractionComp=InteractionComp;
	Parms.InteractableComp=InteractableComp;
	OnTargetedSlotTaken.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTargetedSlotTaken

// Begin ScriptStruct FInteractionDefiniton
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionDefiniton;
class UScriptStruct* FInteractionDefiniton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionDefiniton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionDefiniton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionDefiniton, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InteractionDefiniton"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionDefiniton.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInteractionDefiniton>()
{
	return FInteractionDefiniton::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionDefiniton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractDelegate_MetaData[] = {
		{ "Comment", "//TODO figure this out - we need the interaction to define some behavior, for now i'm thinking some sort of delegate \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "TODO figure this out - we need the interaction to define some behavior, for now i'm thinking some sort of delegate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Whether this interaction is active or not \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Whether this interaction is active or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTime_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "//The amount of time the interaction needs its interact key held for \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The amount of time the interaction needs its interact key held for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableNameText_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The name that will come up when the player looks at the interactable\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The name that will come up when the player looks at the interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableVerb_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionInput_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The input action we require to begin this interaction\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The input action we require to begin this interaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAnimation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The animation our player can play during the interact. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The animation our player can play during the interact." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractDelegate;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTime;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractableNameText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractableVerb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionDefiniton>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_OnInteractDelegate = { "OnInteractDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, OnInteractDelegate), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractDelegate_MetaData), NewProp_OnInteractDelegate_MetaData) }; // 1151125034
void Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInteractionDefiniton*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractionDefiniton), &Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractionTime = { "InteractionTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, InteractionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTime_MetaData), NewProp_InteractionTime_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractableNameText = { "InteractableNameText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, InteractableNameText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableNameText_MetaData), NewProp_InteractableNameText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractableVerb = { "InteractableVerb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, InteractableVerb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableVerb_MetaData), NewProp_InteractableVerb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractionInput = { "InteractionInput", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, InteractionInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionInput_MetaData), NewProp_InteractionInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractionAnimation = { "InteractionAnimation", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, InteractionAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAnimation_MetaData), NewProp_InteractionAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_OnInteractDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractableNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractableVerb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_InteractionAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InteractionDefiniton",
	Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::PropPointers),
	sizeof(FInteractionDefiniton),
	alignof(FInteractionDefiniton),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionDefiniton()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionDefiniton.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionDefiniton.InnerSingleton, Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionDefiniton.InnerSingleton;
}
// End ScriptStruct FInteractionDefiniton

// Begin Enum EInteractionSlotStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionSlotStatus;
static UEnum* EInteractionSlotStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInteractionSlotStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInteractionSlotStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EInteractionSlotStatus"));
	}
	return Z_Registration_Info_UEnum_EInteractionSlotStatus.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EInteractionSlotStatus>()
{
	return EInteractionSlotStatus_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ISS_Free.DisplayName", "Free" },
		{ "ISS_Free.Name", "EInteractionSlotStatus::ISS_Free" },
		{ "ISS_Occupied.DisplayName", "Occupied" },
		{ "ISS_Occupied.Name", "EInteractionSlotStatus::ISS_Occupied" },
		{ "ISS_Targeted.DisplayName", "Targeted" },
		{ "ISS_Targeted.Name", "EInteractionSlotStatus::ISS_Targeted" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInteractionSlotStatus::ISS_Free", (int64)EInteractionSlotStatus::ISS_Free },
		{ "EInteractionSlotStatus::ISS_Targeted", (int64)EInteractionSlotStatus::ISS_Targeted },
		{ "EInteractionSlotStatus::ISS_Occupied", (int64)EInteractionSlotStatus::ISS_Occupied },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EInteractionSlotStatus",
	"EInteractionSlotStatus",
	Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus()
{
	if (!Z_Registration_Info_UEnum_EInteractionSlotStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionSlotStatus.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInteractionSlotStatus.InnerSingleton;
}
// End Enum EInteractionSlotStatus

// Begin ScriptStruct FActiveInteractionSlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveInteractionSlot;
class UScriptStruct* FActiveInteractionSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveInteractionSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveInteractionSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveInteractionSlot, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ActiveInteractionSlot"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveInteractionSlot.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FActiveInteractionSlot>()
{
	return FActiveInteractionSlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a slot for interacting with the interactable. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Defines a slot for interacting with the interactable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotStatus_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The status of this slot\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The status of this slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotUser_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The interactor using the slot\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The interactor using the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SlotStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotStatus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveInteractionSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewProp_SlotStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewProp_SlotStatus = { "SlotStatus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveInteractionSlot, SlotStatus), Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotStatus_MetaData), NewProp_SlotStatus_MetaData) }; // 1687533624
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewProp_SlotUser = { "SlotUser", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveInteractionSlot, SlotUser), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotUser_MetaData), NewProp_SlotUser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewProp_SlotStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewProp_SlotStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewProp_SlotUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"ActiveInteractionSlot",
	Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::PropPointers),
	sizeof(FActiveInteractionSlot),
	alignof(FActiveInteractionSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveInteractionSlot()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveInteractionSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveInteractionSlot.InnerSingleton, Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveInteractionSlot.InnerSingleton;
}
// End ScriptStruct FActiveInteractionSlot

// Begin ScriptStruct FInteractionDebugVisualizeSlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot;
class UScriptStruct* FInteractionDebugVisualizeSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InteractionDebugVisualizeSlot"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInteractionDebugVisualizeSlot>()
{
	return FInteractionDebugVisualizeSlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a debug slot the interactable visualizer will draw\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Defines a debug slot the interactable visualizer will draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotDebugTransform_MetaData[] = {
		{ "Category", "Debug Visualize Slot" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotDebugColor_MetaData[] = {
		{ "Category", "Debug Visualize Slot" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotDebugString_MetaData[] = {
		{ "Category", "Debug Visualize Slot" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotDebugTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotDebugColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotDebugString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionDebugVisualizeSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewProp_SlotDebugTransform = { "SlotDebugTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDebugVisualizeSlot, SlotDebugTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotDebugTransform_MetaData), NewProp_SlotDebugTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewProp_SlotDebugColor = { "SlotDebugColor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDebugVisualizeSlot, SlotDebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotDebugColor_MetaData), NewProp_SlotDebugColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewProp_SlotDebugString = { "SlotDebugString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDebugVisualizeSlot, SlotDebugString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotDebugString_MetaData), NewProp_SlotDebugString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewProp_SlotDebugTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewProp_SlotDebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewProp_SlotDebugString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InteractionDebugVisualizeSlot",
	Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::PropPointers),
	sizeof(FInteractionDebugVisualizeSlot),
	alignof(FInteractionDebugVisualizeSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot.InnerSingleton, Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot.InnerSingleton;
}
// End ScriptStruct FInteractionDebugVisualizeSlot

// Begin Class UInteractionSlotBehavior Function GetDebugSlots
struct InteractionSlotBehavior_eventGetDebugSlots_Parms
{
	FTransform SlotTransform;
	FTransform OwnerTransform;
	TArray<FInteractionDebugVisualizeSlot> ReturnValue;
};
static const FName NAME_UInteractionSlotBehavior_GetDebugSlots = FName(TEXT("GetDebugSlots"));
TArray<FInteractionDebugVisualizeSlot> UInteractionSlotBehavior::GetDebugSlots(FTransform const& SlotTransform, FTransform const& OwnerTransform) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractionSlotBehavior_GetDebugSlots);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractionSlotBehavior_eventGetDebugSlots_Parms Parms;
		Parms.SlotTransform=SlotTransform;
		Parms.OwnerTransform=OwnerTransform;
		const_cast<UInteractionSlotBehavior*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInteractionSlotBehavior*>(this)->GetDebugSlots_Implementation(SlotTransform, OwnerTransform);
	}
}
struct Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_SlotTransform = { "SlotTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionSlotBehavior_eventGetDebugSlots_Parms, SlotTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTransform_MetaData), NewProp_SlotTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_OwnerTransform = { "OwnerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionSlotBehavior_eventGetDebugSlots_Parms, OwnerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTransform_MetaData), NewProp_OwnerTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot, METADATA_PARAMS(0, nullptr) }; // 202721004
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionSlotBehavior_eventGetDebugSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 202721004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_SlotTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_OwnerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionSlotBehavior, nullptr, "GetDebugSlots", nullptr, nullptr, Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::PropPointers), sizeof(InteractionSlotBehavior_eventGetDebugSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionSlotBehavior_eventGetDebugSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionSlotBehavior::execGetDebugSlots)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotTransform);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OwnerTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInteractionDebugVisualizeSlot>*)Z_Param__Result=P_THIS->GetDebugSlots_Implementation(Z_Param_Out_SlotTransform,Z_Param_Out_OwnerTransform);
	P_NATIVE_END;
}
// End Class UInteractionSlotBehavior Function GetDebugSlots

// Begin Class UInteractionSlotBehavior
void UInteractionSlotBehavior::StaticRegisterNativesUInteractionSlotBehavior()
{
	UClass* Class = UInteractionSlotBehavior::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDebugSlots", &UInteractionSlotBehavior::execGetDebugSlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionSlotBehavior);
UClass* Z_Construct_UClass_UInteractionSlotBehavior_NoRegister()
{
	return UInteractionSlotBehavior::StaticClass();
}
struct Z_Construct_UClass_UInteractionSlotBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a behavior that should be ran when a player or NPC interacts with an Interaction Slot. Subclass this and add any variables your SlotInteractBehavior requires. \n */" },
		{ "IncludePath", "Interaction/InteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Defines a behavior that should be ran when a player or NPC interacts with an Interaction Slot. Subclass this and add any variables your SlotInteractBehavior requires." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInteractBehavior_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//This ability will be fired when a character interacts with this slot. The slot will release when the ability ends.\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "This ability will be fired when a character interacts with this slot. The slot will release when the ability ends." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlotInteractBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionSlotBehavior_GetDebugSlots, "GetDebugSlots" }, // 3433698955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionSlotBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionSlotBehavior_Statics::NewProp_SlotInteractBehavior = { "SlotInteractBehavior", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionSlotBehavior, SlotInteractBehavior), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeInteractAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInteractBehavior_MetaData), NewProp_SlotInteractBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionSlotBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSlotBehavior_Statics::NewProp_SlotInteractBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSlotBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionSlotBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSlotBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionSlotBehavior_Statics::ClassParams = {
	&UInteractionSlotBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionSlotBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSlotBehavior_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSlotBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionSlotBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionSlotBehavior()
{
	if (!Z_Registration_Info_UClass_UInteractionSlotBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionSlotBehavior.OuterSingleton, Z_Construct_UClass_UInteractionSlotBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionSlotBehavior.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UInteractionSlotBehavior>()
{
	return UInteractionSlotBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionSlotBehavior);
UInteractionSlotBehavior::~UInteractionSlotBehavior() {}
// End Class UInteractionSlotBehavior

// Begin ScriptStruct FInteractionSlotConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionSlotConfig;
class UScriptStruct* FInteractionSlotConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionSlotConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionSlotConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionSlotConfig, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InteractionSlotConfig"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionSlotConfig.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInteractionSlotConfig>()
{
	return FInteractionSlotConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a slot for interacting with the interactable. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Defines a slot for interacting with the interactable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Optional tag used for the slot \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Optional tag used for the slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Debug color for the slot\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Debug color for the slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTransform_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//NPCs will move to this transform when attempting to use the slot, and players can be motion warped to this spot etc if required. \n" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "NPCs will move to this transform when attempting to use the slot, and players can be motion warped to this spot etc if required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInteractBehavior_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//This ability will be fired when a character interacts with this slot. The slot will release when the ability ends.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "This ability will be fired when a character interacts with this slot. The slot will release when the ability ends." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInteractBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionSlotConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionSlotConfig, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionSlotConfig, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_SlotTransform = { "SlotTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionSlotConfig, SlotTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTransform_MetaData), NewProp_SlotTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_SlotInteractBehavior = { "SlotInteractBehavior", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionSlotConfig, SlotInteractBehavior), Z_Construct_UClass_UInteractionSlotBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInteractBehavior_MetaData), NewProp_SlotInteractBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_SlotTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewProp_SlotInteractBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InteractionSlotConfig",
	Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::PropPointers),
	sizeof(FInteractionSlotConfig),
	alignof(FInteractionSlotConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionSlotConfig()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionSlotConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionSlotConfig.InnerSingleton, Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionSlotConfig.InnerSingleton;
}
// End ScriptStruct FInteractionSlotConfig

// Begin ScriptStruct FInteractionSlotClaimHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle;
class UScriptStruct* FInteractionSlotClaimHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionSlotClaimHandle, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InteractionSlotClaimHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInteractionSlotClaimHandle>()
{
	return FInteractionSlotClaimHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Holds information about a claimer\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Holds information about a claimer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleOwner_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandleIndex;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HandleOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionSlotClaimHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::NewProp_HandleIndex = { "HandleIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionSlotClaimHandle, HandleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleIndex_MetaData), NewProp_HandleIndex_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::NewProp_HandleOwner = { "HandleOwner", nullptr, (EPropertyFlags)0x001400000008001d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionSlotClaimHandle, HandleOwner), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleOwner_MetaData), NewProp_HandleOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::NewProp_HandleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::NewProp_HandleOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InteractionSlotClaimHandle",
	Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::PropPointers),
	sizeof(FInteractionSlotClaimHandle),
	alignof(FInteractionSlotClaimHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionSlotClaimHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle.InnerSingleton, Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle.InnerSingleton;
}
// End ScriptStruct FInteractionSlotClaimHandle

// Begin Class UNarrativeInteractableComponent Function CanInteract
struct NarrativeInteractableComponent_eventCanInteract_Parms
{
	APawn* Interactor;
	UNarrativeInteractionComponent* InteractionComp;
	FText OutErrorText;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeInteractableComponent_eventCanInteract_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeInteractableComponent_CanInteract = FName(TEXT("CanInteract"));
bool UNarrativeInteractableComponent::CanInteract(APawn* Interactor, UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractableComponent_CanInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInteractableComponent_eventCanInteract_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.InteractionComp=InteractionComp;
		Parms.OutErrorText=OutErrorText;
	ProcessEvent(Func,&Parms);
		OutErrorText=Parms.OutErrorText;
		return !!Parms.ReturnValue;
	}
	else
	{
		return CanInteract_Implementation(Interactor, InteractionComp, OutErrorText);
	}
}
struct Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09* Return true if the given interactor is allowed to interact with us\n\x09* \n\x09* @param OutErrorText this is the reason why the interact isn't allowed \n\x09*/" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Return true if the given interactor is allowed to interact with us\n\n@param OutErrorText this is the reason why the interact isn't allowed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventCanInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventCanInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_OutErrorText = { "OutErrorText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventCanInteract_Parms, OutErrorText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInteractableComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractableComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_InteractionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_OutErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::PropPointers), sizeof(NarrativeInteractableComponent_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInteractableComponent_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execCanInteract)
{
	P_GET_OBJECT(APawn,Z_Param_Interactor);
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_InteractionComp);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(Z_Param_Interactor,Z_Param_InteractionComp,Z_Param_Out_OutErrorText);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function CanInteract

// Begin Class UNarrativeInteractableComponent Function ClaimSlot
struct Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics
{
	struct NarrativeInteractableComponent_eventClaimSlot_Parms
	{
		UNarrativeInteractionComponent* Claimer;
		int32 SlotToClaimIdx;
		bool bMarkTargeted;
		FInteractionSlotClaimHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**Claim a slot, set its active slot data to our character, and set its status to either targeted or claimed depending on bShouldTarget*/" },
		{ "CPP_Default_bMarkTargeted", "false" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Claim a slot, set its active slot data to our character, and set its status to either targeted or claimed depending on bShouldTarget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Claimer_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkTargeted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Claimer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotToClaimIdx;
	static void NewProp_bMarkTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkTargeted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_Claimer = { "Claimer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventClaimSlot_Parms, Claimer), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Claimer_MetaData), NewProp_Claimer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_SlotToClaimIdx = { "SlotToClaimIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventClaimSlot_Parms, SlotToClaimIdx), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_bMarkTargeted_SetBit(void* Obj)
{
	((NarrativeInteractableComponent_eventClaimSlot_Parms*)Obj)->bMarkTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_bMarkTargeted = { "bMarkTargeted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractableComponent_eventClaimSlot_Parms), &Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_bMarkTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkTargeted_MetaData), NewProp_bMarkTargeted_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventClaimSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FInteractionSlotClaimHandle, METADATA_PARAMS(0, nullptr) }; // 3600068177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_Claimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_SlotToClaimIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_bMarkTargeted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "ClaimSlot", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NarrativeInteractableComponent_eventClaimSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::NarrativeInteractableComponent_eventClaimSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execClaimSlot)
{
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_Claimer);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotToClaimIdx);
	P_GET_UBOOL(Z_Param_bMarkTargeted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInteractionSlotClaimHandle*)Z_Param__Result=P_THIS->ClaimSlot(Z_Param_Claimer,Z_Param_SlotToClaimIdx,Z_Param_bMarkTargeted);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function ClaimSlot

// Begin Class UNarrativeInteractableComponent Function GetAvailableSlots
struct Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics
{
	struct NarrativeInteractableComponent_eventGetAvailableSlots_Parms
	{
		bool bIncludeTargeted;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**Return a list of available slots*/" },
		{ "CPP_Default_bIncludeTargeted", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Return a list of available slots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeTargeted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTargeted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_bIncludeTargeted_SetBit(void* Obj)
{
	((NarrativeInteractableComponent_eventGetAvailableSlots_Parms*)Obj)->bIncludeTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_bIncludeTargeted = { "bIncludeTargeted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractableComponent_eventGetAvailableSlots_Parms), &Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_bIncludeTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeTargeted_MetaData), NewProp_bIncludeTargeted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventGetAvailableSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_bIncludeTargeted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "GetAvailableSlots", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NarrativeInteractableComponent_eventGetAvailableSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::NarrativeInteractableComponent_eventGetAvailableSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execGetAvailableSlots)
{
	P_GET_UBOOL(Z_Param_bIncludeTargeted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetAvailableSlots(Z_Param_bIncludeTargeted);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function GetAvailableSlots

// Begin Class UNarrativeInteractableComponent Function GetClosestAvailableSlot
struct Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics
{
	struct NarrativeInteractableComponent_eventGetClosestAvailableSlot_Parms
	{
		UNarrativeInteractionComponent* Claimer;
		TArray<int32> SlotsToCheck;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**Return the closest slot to the claimer.*/" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Return the closest slot to the claimer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Claimer_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotsToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Claimer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsToCheck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotsToCheck;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_Claimer = { "Claimer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventGetClosestAvailableSlot_Parms, Claimer), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Claimer_MetaData), NewProp_Claimer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_SlotsToCheck_Inner = { "SlotsToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_SlotsToCheck = { "SlotsToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventGetClosestAvailableSlot_Parms, SlotsToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotsToCheck_MetaData), NewProp_SlotsToCheck_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventGetClosestAvailableSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_Claimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_SlotsToCheck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_SlotsToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "GetClosestAvailableSlot", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NarrativeInteractableComponent_eventGetClosestAvailableSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::NarrativeInteractableComponent_eventGetClosestAvailableSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execGetClosestAvailableSlot)
{
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_Claimer);
	P_GET_TARRAY_REF(int32,Z_Param_Out_SlotsToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetClosestAvailableSlot(Z_Param_Claimer,Z_Param_Out_SlotsToCheck);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function GetClosestAvailableSlot

// Begin Class UNarrativeInteractableComponent Function GetConfigAtSlot
struct Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics
{
	struct NarrativeInteractableComponent_eventGetConfigAtSlot_Parms
	{
		int32 SlotIndex;
		FInteractionSlotConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Used by NPCs to reserve the first available slot. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Used by NPCs to reserve the first available slot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventGetConfigAtSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventGetConfigAtSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FInteractionSlotConfig, METADATA_PARAMS(0, nullptr) }; // 345810728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "GetConfigAtSlot", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::NarrativeInteractableComponent_eventGetConfigAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::NarrativeInteractableComponent_eventGetConfigAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execGetConfigAtSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInteractionSlotConfig*)Z_Param__Result=P_THIS->GetConfigAtSlot(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function GetConfigAtSlot

// Begin Class UNarrativeInteractableComponent Function HasSlotAvailable
struct Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics
{
	struct NarrativeInteractableComponent_eventHasSlotAvailable_Parms
	{
		bool bAllowTargeted;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**Ask if any slots are available\n\x09\n\x09@param bAllowTargeted consider a slot available if it is only targeted and not actually occupied */" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Ask if any slots are available\n\n       @param bAllowTargeted consider a slot available if it is only targeted and not actually occupied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTargeted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTargeted;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_bAllowTargeted_SetBit(void* Obj)
{
	((NarrativeInteractableComponent_eventHasSlotAvailable_Parms*)Obj)->bAllowTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_bAllowTargeted = { "bAllowTargeted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractableComponent_eventHasSlotAvailable_Parms), &Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_bAllowTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTargeted_MetaData), NewProp_bAllowTargeted_MetaData) };
void Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInteractableComponent_eventHasSlotAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractableComponent_eventHasSlotAvailable_Parms), &Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_bAllowTargeted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "HasSlotAvailable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NarrativeInteractableComponent_eventHasSlotAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::NarrativeInteractableComponent_eventHasSlotAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execHasSlotAvailable)
{
	P_GET_UBOOL(Z_Param_bAllowTargeted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSlotAvailable(Z_Param_bAllowTargeted);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function HasSlotAvailable

// Begin Class UNarrativeInteractableComponent Function OnBeginInteract
struct NarrativeInteractableComponent_eventOnBeginInteract_Parms
{
	APawn* Interactor;
	UNarrativeInteractionComponent* InteractionComp;
};
static const FName NAME_UNarrativeInteractableComponent_OnBeginInteract = FName(TEXT("OnBeginInteract"));
void UNarrativeInteractableComponent::OnBeginInteract(APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractableComponent_OnBeginInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInteractableComponent_eventOnBeginInteract_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.InteractionComp=InteractionComp;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnBeginInteract_Implementation(Interactor, InteractionComp);
	}
}
struct Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnBeginInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnBeginInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "OnBeginInteract", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::PropPointers), sizeof(NarrativeInteractableComponent_eventOnBeginInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInteractableComponent_eventOnBeginInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execOnBeginInteract)
{
	P_GET_OBJECT(APawn,Z_Param_Interactor);
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_InteractionComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginInteract_Implementation(Z_Param_Interactor,Z_Param_InteractionComp);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function OnBeginInteract

// Begin Class UNarrativeInteractableComponent Function OnEndInteract
struct NarrativeInteractableComponent_eventOnEndInteract_Parms
{
	APawn* Interactor;
	UNarrativeInteractionComponent* InteractionComp;
};
static const FName NAME_UNarrativeInteractableComponent_OnEndInteract = FName(TEXT("OnEndInteract"));
void UNarrativeInteractableComponent::OnEndInteract(APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractableComponent_OnEndInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInteractableComponent_eventOnEndInteract_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.InteractionComp=InteractionComp;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnEndInteract_Implementation(Interactor, InteractionComp);
	}
}
struct Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnEndInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnEndInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "OnEndInteract", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::PropPointers), sizeof(NarrativeInteractableComponent_eventOnEndInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInteractableComponent_eventOnEndInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execOnEndInteract)
{
	P_GET_OBJECT(APawn,Z_Param_Interactor);
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_InteractionComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndInteract_Implementation(Z_Param_Interactor,Z_Param_InteractionComp);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function OnEndInteract

// Begin Class UNarrativeInteractableComponent Function OnInteract
struct NarrativeInteractableComponent_eventOnInteract_Parms
{
	APawn* Interactor;
	UNarrativeInteractionComponent* InteractionComp;
};
static const FName NAME_UNarrativeInteractableComponent_OnInteract = FName(TEXT("OnInteract"));
void UNarrativeInteractableComponent::OnInteract(APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractableComponent_OnInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInteractableComponent_eventOnInteract_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.InteractionComp=InteractionComp;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnInteract_Implementation(Interactor, InteractionComp);
	}
}
struct Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::PropPointers), sizeof(NarrativeInteractableComponent_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInteractableComponent_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execOnInteract)
{
	P_GET_OBJECT(APawn,Z_Param_Interactor);
	P_GET_OBJECT(UNarrativeInteractionComponent,Z_Param_InteractionComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteract_Implementation(Z_Param_Interactor,Z_Param_InteractionComp);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function OnInteract

// Begin Class UNarrativeInteractableComponent Function OnRep_SlotStatuses
struct Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics
{
	struct NarrativeInteractableComponent_eventOnRep_SlotStatuses_Parms
	{
		TArray<FActiveInteractionSlot> OldStatuses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when our slot statuses replicate. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Called when our slot statuses replicate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStatuses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStatuses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OldStatuses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::NewProp_OldStatuses_Inner = { "OldStatuses", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveInteractionSlot, METADATA_PARAMS(0, nullptr) }; // 3221666995
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::NewProp_OldStatuses = { "OldStatuses", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventOnRep_SlotStatuses_Parms, OldStatuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStatuses_MetaData), NewProp_OldStatuses_MetaData) }; // 3221666995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::NewProp_OldStatuses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::NewProp_OldStatuses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "OnRep_SlotStatuses", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::NarrativeInteractableComponent_eventOnRep_SlotStatuses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::NarrativeInteractableComponent_eventOnRep_SlotStatuses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execOnRep_SlotStatuses)
{
	P_GET_TARRAY_REF(FActiveInteractionSlot,Z_Param_Out_OldStatuses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SlotStatuses(Z_Param_Out_OldStatuses);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function OnRep_SlotStatuses

// Begin Class UNarrativeInteractableComponent Function SetInteractableActionText
struct Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics
{
	struct NarrativeInteractableComponent_eventSetInteractableActionText_Parms
	{
		FText NewActionText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewActionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewActionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::NewProp_NewActionText = { "NewActionText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventSetInteractableActionText_Parms, NewActionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewActionText_MetaData), NewProp_NewActionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::NewProp_NewActionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "SetInteractableActionText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::NarrativeInteractableComponent_eventSetInteractableActionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::NarrativeInteractableComponent_eventSetInteractableActionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execSetInteractableActionText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewActionText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractableActionText(Z_Param_Out_NewActionText);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function SetInteractableActionText

// Begin Class UNarrativeInteractableComponent Function SetInteractableNameText
struct Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics
{
	struct NarrativeInteractableComponent_eventSetInteractableNameText_Parms
	{
		FText NewNameText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Call this to change the name of the interactable. Will also refresh the interaction widget.\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Call this to change the name of the interactable. Will also refresh the interaction widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewNameText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewNameText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::NewProp_NewNameText = { "NewNameText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventSetInteractableNameText_Parms, NewNameText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewNameText_MetaData), NewProp_NewNameText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::NewProp_NewNameText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "SetInteractableNameText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::NarrativeInteractableComponent_eventSetInteractableNameText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::NarrativeInteractableComponent_eventSetInteractableNameText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execSetInteractableNameText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewNameText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractableNameText(Z_Param_Out_NewNameText);
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function SetInteractableNameText

// Begin Class UNarrativeInteractableComponent Function UpdateSlotStatus
struct Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics
{
	struct NarrativeInteractableComponent_eventUpdateSlotStatus_Parms
	{
		FInteractionSlotClaimHandle Handle;
		EInteractionSlotStatus NewStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Used by both players and NPCs to release a slot, adding it back into the available handles \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Used by both players and NPCs to release a slot, adding it back into the available handles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventUpdateSlotStatus_Parms, Handle), Z_Construct_UScriptStruct_FInteractionSlotClaimHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3600068177
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractableComponent_eventUpdateSlotStatus_Parms, NewStatus), Z_Construct_UEnum_NarrativeArsenal_EInteractionSlotStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStatus_MetaData), NewProp_NewStatus_MetaData) }; // 1687533624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractableComponent, nullptr, "UpdateSlotStatus", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NarrativeInteractableComponent_eventUpdateSlotStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::NarrativeInteractableComponent_eventUpdateSlotStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractableComponent::execUpdateSlotStatus)
{
	P_GET_STRUCT_REF(FInteractionSlotClaimHandle,Z_Param_Out_Handle);
	P_GET_ENUM(EInteractionSlotStatus,Z_Param_NewStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSlotStatus(Z_Param_Out_Handle,EInteractionSlotStatus(Z_Param_NewStatus));
	P_NATIVE_END;
}
// End Class UNarrativeInteractableComponent Function UpdateSlotStatus

// Begin Class UNarrativeInteractableComponent
void UNarrativeInteractableComponent::StaticRegisterNativesUNarrativeInteractableComponent()
{
	UClass* Class = UNarrativeInteractableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanInteract", &UNarrativeInteractableComponent::execCanInteract },
		{ "ClaimSlot", &UNarrativeInteractableComponent::execClaimSlot },
		{ "GetAvailableSlots", &UNarrativeInteractableComponent::execGetAvailableSlots },
		{ "GetClosestAvailableSlot", &UNarrativeInteractableComponent::execGetClosestAvailableSlot },
		{ "GetConfigAtSlot", &UNarrativeInteractableComponent::execGetConfigAtSlot },
		{ "HasSlotAvailable", &UNarrativeInteractableComponent::execHasSlotAvailable },
		{ "OnBeginInteract", &UNarrativeInteractableComponent::execOnBeginInteract },
		{ "OnEndInteract", &UNarrativeInteractableComponent::execOnEndInteract },
		{ "OnInteract", &UNarrativeInteractableComponent::execOnInteract },
		{ "OnRep_SlotStatuses", &UNarrativeInteractableComponent::execOnRep_SlotStatuses },
		{ "SetInteractableActionText", &UNarrativeInteractableComponent::execSetInteractableActionText },
		{ "SetInteractableNameText", &UNarrativeInteractableComponent::execSetInteractableNameText },
		{ "UpdateSlotStatus", &UNarrativeInteractableComponent::execUpdateSlotStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeInteractableComponent);
UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister()
{
	return UNarrativeInteractableComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeInteractableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**Not to be confused with the NarrativeInteractionComponent which enables a pawn to interact with interactables,\nthe NarrativeInteractableComponent enables an actor to be interacted with in some way. \n\nThis also contains interaction slots - these are a more lightweight implementation of UE's smartobjects however unlike SmartObjects they handle networking, \nand both NPC/Player interaction instead of being AI focused. They implement interaction behavior via a GameplayAbility which works well as lots of interaction \nneed to be latent, which GameplayAbilities excel at.See the UNarrativeInteractAbility class for more. \n\nIf no slots are added, interacting with the interactable object will just fire the OnInteract delegate - great for simple interactions like taking a pickup. \n*/" },
		{ "DisplayName", "Narrative Interactable" },
		{ "IncludePath", "Interaction/InteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "Not to be confused with the NarrativeInteractionComponent which enables a pawn to interact with interactables,\nthe NarrativeInteractableComponent enables an actor to be interacted with in some way.\n\nThis also contains interaction slots - these are a more lightweight implementation of UE's smartobjects however unlike SmartObjects they handle networking,\nand both NPC/Player interaction instead of being AI focused. They implement interaction behavior via a GameplayAbility which works well as lots of interaction\nneed to be latent, which GameplayAbilities excel at.See the UNarrativeInteractAbility class for more.\n\nIf no slots are added, interacting with the interactable object will just fire the OnInteract delegate - great for simple interactions like taking a pickup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSlots_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**The interactables interaction slots - this is essentially a more lightweight implementation of UE's smartobjects\n\x09that handles networking, and both NPC/Player interaction as smartobjects doesn't handle those well. */" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The interactables interaction slots - this is essentially a more lightweight implementation of UE's smartobjects\n       that handles networking, and both NPC/Player interaction as smartobjects doesn't handle those well." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotStatuses_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The active interaction slots\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The active interaction slots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTime_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "//The time the player must hold the interact key to interact with this object\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The time the player must hold the interact key to interact with this object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The max distance the player can be away from this actor before you can interact\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The max distance the player can be away from this actor before you can interact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableNameText_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The name that will come up when the player looks at the interactable\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The name that will come up when the player looks at the interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActionText_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedOverlayMaterial_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//A material to draw over any mesh components our owner has when this interatable is focused \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "A material to draw over any mesh components our owner has when this interatable is focused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginInteracted_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player presses the interact key whilst focusing on this interactable actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndInteracted_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginFocus_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player presses the interact key whilst focusing on this interactable actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndFocus_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteracted_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player has interacted with the item for the required amount of time\n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player has interacted with the item for the required amount of time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetedSlotTaken_MetaData[] = {
		{ "Comment", "//[local + server] Called when a targeted slot gets removed. \n" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when a targeted slot gets removed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractionSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotStatuses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotStatuses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractableNameText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractableActionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedOverlayMaterial;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginInteracted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndInteracted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginFocus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndFocus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteracted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetedSlotTaken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract, "CanInteract" }, // 991419014
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_ClaimSlot, "ClaimSlot" }, // 780699931
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_GetAvailableSlots, "GetAvailableSlots" }, // 3370454744
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_GetClosestAvailableSlot, "GetClosestAvailableSlot" }, // 2338349246
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_GetConfigAtSlot, "GetConfigAtSlot" }, // 62875092
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_HasSlotAvailable, "HasSlotAvailable" }, // 871311676
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract, "OnBeginInteract" }, // 837065739
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract, "OnEndInteract" }, // 2104419739
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract, "OnInteract" }, // 3966365406
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnRep_SlotStatuses, "OnRep_SlotStatuses" }, // 726933476
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText, "SetInteractableActionText" }, // 1605550706
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText, "SetInteractableNameText" }, // 429348005
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_UpdateSlotStatus, "UpdateSlotStatus" }, // 2216044053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionSlots_Inner = { "InteractionSlots", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractionSlotConfig, METADATA_PARAMS(0, nullptr) }; // 345810728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionSlots = { "InteractionSlots", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractionSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSlots_MetaData), NewProp_InteractionSlots_MetaData) }; // 345810728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_SlotStatuses_Inner = { "SlotStatuses", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveInteractionSlot, METADATA_PARAMS(0, nullptr) }; // 3221666995
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_SlotStatuses = { "SlotStatuses", "OnRep_SlotStatuses", (EPropertyFlags)0x0010008100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, SlotStatuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotStatuses_MetaData), NewProp_SlotStatuses_MetaData) }; // 3221666995
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionTime = { "InteractionTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTime_MetaData), NewProp_InteractionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractableNameText = { "InteractableNameText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractableNameText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableNameText_MetaData), NewProp_InteractableNameText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractableActionText = { "InteractableActionText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractableActionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableActionText_MetaData), NewProp_InteractableActionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_FocusedOverlayMaterial = { "FocusedOverlayMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, FocusedOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedOverlayMaterial_MetaData), NewProp_FocusedOverlayMaterial_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnBeginInteracted = { "OnBeginInteracted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnBeginInteracted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginInteracted_MetaData), NewProp_OnBeginInteracted_MetaData) }; // 2983536981
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnEndInteracted = { "OnEndInteracted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnEndInteracted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndInteracted_MetaData), NewProp_OnEndInteracted_MetaData) }; // 1117675632
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnBeginFocus), Z_Construct_UDelegateFunction_NarrativeArsenal_OnBeginFocus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginFocus_MetaData), NewProp_OnBeginFocus_MetaData) }; // 1173465054
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnEndFocus), Z_Construct_UDelegateFunction_NarrativeArsenal_OnEndFocus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndFocus_MetaData), NewProp_OnEndFocus_MetaData) }; // 4127022648
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnInteracted = { "OnInteracted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnInteracted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteracted_MetaData), NewProp_OnInteracted_MetaData) }; // 1151125034
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnTargetedSlotTaken = { "OnTargetedSlotTaken", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnTargetedSlotTaken), Z_Construct_UDelegateFunction_NarrativeArsenal_OnTargetedSlotTaken__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetedSlotTaken_MetaData), NewProp_OnTargetedSlotTaken_MetaData) }; // 4187121569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInteractableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_SlotStatuses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_SlotStatuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractableNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractableActionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_FocusedOverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnBeginInteracted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnEndInteracted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnBeginFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnEndFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnInteracted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnTargetedSlotTaken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInteractableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::ClassParams = {
	&UNarrativeInteractableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeInteractableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeInteractableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeInteractableComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeInteractableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeInteractableComponent.OuterSingleton, Z_Construct_UClass_UNarrativeInteractableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeInteractableComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeInteractableComponent>()
{
	return UNarrativeInteractableComponent::StaticClass();
}
void UNarrativeInteractableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SlotStatuses(TEXT("SlotStatuses"));
	const bool bIsValid = true
		&& Name_SlotStatuses == ClassReps[(int32)ENetFields_Private::SlotStatuses].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeInteractableComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInteractableComponent);
UNarrativeInteractableComponent::~UNarrativeInteractableComponent() {}
// End Class UNarrativeInteractableComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInteractionSlotStatus_StaticEnum, TEXT("EInteractionSlotStatus"), &Z_Registration_Info_UEnum_EInteractionSlotStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1687533624U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionDefiniton::StaticStruct, Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewStructOps, TEXT("InteractionDefiniton"), &Z_Registration_Info_UScriptStruct_InteractionDefiniton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionDefiniton), 1038632964U) },
		{ FActiveInteractionSlot::StaticStruct, Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics::NewStructOps, TEXT("ActiveInteractionSlot"), &Z_Registration_Info_UScriptStruct_ActiveInteractionSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveInteractionSlot), 3221666995U) },
		{ FInteractionDebugVisualizeSlot::StaticStruct, Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics::NewStructOps, TEXT("InteractionDebugVisualizeSlot"), &Z_Registration_Info_UScriptStruct_InteractionDebugVisualizeSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionDebugVisualizeSlot), 202721004U) },
		{ FInteractionSlotConfig::StaticStruct, Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics::NewStructOps, TEXT("InteractionSlotConfig"), &Z_Registration_Info_UScriptStruct_InteractionSlotConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionSlotConfig), 345810728U) },
		{ FInteractionSlotClaimHandle::StaticStruct, Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics::NewStructOps, TEXT("InteractionSlotClaimHandle"), &Z_Registration_Info_UScriptStruct_InteractionSlotClaimHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionSlotClaimHandle), 3600068177U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionSlotBehavior, UInteractionSlotBehavior::StaticClass, TEXT("UInteractionSlotBehavior"), &Z_Registration_Info_UClass_UInteractionSlotBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionSlotBehavior), 1153966979U) },
		{ Z_Construct_UClass_UNarrativeInteractableComponent, UNarrativeInteractableComponent::StaticClass, TEXT("UNarrativeInteractableComponent"), &Z_Registration_Info_UClass_UNarrativeInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInteractableComponent), 331557743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_540456841(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

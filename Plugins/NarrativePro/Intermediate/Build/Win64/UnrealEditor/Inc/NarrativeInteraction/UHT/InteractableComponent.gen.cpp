// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInteraction/Public/InteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature();
NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature();
NARRATIVEINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionDefiniton();
UPackage* Z_Construct_UPackage__Script_NarrativeInteraction();
// End Cross Module References

// Begin Delegate FOnBeginInteract
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnBeginInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnBeginInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnBeginInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnBeginInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnBeginInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnBeginInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginInteract_DelegateWrapper(const FMulticastScriptDelegate& OnBeginInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeInteraction_eventOnBeginInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeInteraction_eventOnBeginInteract_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnBeginInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBeginInteract

// Begin Delegate FOnEndInteract
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnEndInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnEndInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnEndInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnEndInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnEndInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnEndInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndInteract_DelegateWrapper(const FMulticastScriptDelegate& OnEndInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeInteraction_eventOnEndInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeInteraction_eventOnEndInteract_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnEndInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEndInteract

// Begin Delegate FOnBeginFocus
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnBeginFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnBeginFocus_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnBeginFocus_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnBeginFocus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnBeginFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnBeginFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginFocus_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeInteraction_eventOnBeginFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeInteraction_eventOnBeginFocus_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnBeginFocus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBeginFocus

// Begin Delegate FOnEndFocus
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnEndFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnEndFocus_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnEndFocus_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnEndFocus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnEndFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnEndFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndFocus_DelegateWrapper(const FMulticastScriptDelegate& OnEndFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeInteraction_eventOnEndFocus_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeInteraction_eventOnEndFocus_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnEndFocus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEndFocus

// Begin Delegate FOnInteract
struct Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics
{
	struct _Script_NarrativeInteraction_eventOnInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnInteract_Parms, Interactor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInteraction_eventOnInteract_Parms, InteractionComp), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInteraction, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::_Script_NarrativeInteraction_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp)
{
	struct _Script_NarrativeInteraction_eventOnInteract_Parms
	{
		APawn* Interactor;
		UNarrativeInteractionComponent* InteractionComp;
	};
	_Script_NarrativeInteraction_eventOnInteract_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.InteractionComp=InteractionComp;
	OnInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteract

// Begin ScriptStruct FInteractionDefiniton
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionDefiniton;
class UScriptStruct* FInteractionDefiniton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionDefiniton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionDefiniton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionDefiniton, (UObject*)Z_Construct_UPackage__Script_NarrativeInteraction(), TEXT("InteractionDefiniton"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionDefiniton.OuterSingleton;
}
template<> NARRATIVEINTERACTION_API UScriptStruct* StaticStruct<FInteractionDefiniton>()
{
	return FInteractionDefiniton::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionDefiniton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractDelegate_MetaData[] = {
		{ "Comment", "//TODO figure this out - we need the interaction to define some behavior, for now i'm thinking some sort of delegate \n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "TODO figure this out - we need the interaction to define some behavior, for now i'm thinking some sort of delegate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Whether this interaction is active or not \n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "Whether this interaction is active or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTime_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "//The amount of time the interaction needs its interact key held for \n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The amount of time the interaction needs its interact key held for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableNameText_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The name that will come up when the player looks at the interactable\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The name that will come up when the player looks at the interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableVerb_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionInput_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The input action we require to begin this interaction\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The input action we require to begin this interaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAnimation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The animation our player can play during the interact. \n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewProp_OnInteractDelegate = { "OnInteractDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionDefiniton, OnInteractDelegate), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractDelegate_MetaData), NewProp_OnInteractDelegate_MetaData) }; // 495371914
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
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInteraction,
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
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
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

// Begin Class UNarrativeInteractableComponent
void UNarrativeInteractableComponent::StaticRegisterNativesUNarrativeInteractableComponent()
{
	UClass* Class = UNarrativeInteractableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanInteract", &UNarrativeInteractableComponent::execCanInteract },
		{ "OnBeginInteract", &UNarrativeInteractableComponent::execOnBeginInteract },
		{ "OnEndInteract", &UNarrativeInteractableComponent::execOnEndInteract },
		{ "OnInteract", &UNarrativeInteractableComponent::execOnInteract },
		{ "SetInteractableActionText", &UNarrativeInteractableComponent::execSetInteractableActionText },
		{ "SetInteractableNameText", &UNarrativeInteractableComponent::execSetInteractableNameText },
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
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**Not to be confused with the NarrativeInteractionComponent which enables a pawn to interact with interactables,\nthe NarrativeInteractableComponent essentially enables an actor to be interacted with in some way. */" },
		{ "DisplayName", "Narrative Interactable" },
		{ "IncludePath", "InteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "Not to be confused with the NarrativeInteractionComponent which enables a pawn to interact with interactables,\nthe NarrativeInteractableComponent essentially enables an actor to be interacted with in some way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactions_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The available interactions for this \n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The available interactions for this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTime_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "//The time the player must hold the interact key to interact with this object\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The time the player must hold the interact key to interact with this object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The max distance the player can be away from this actor before you can interact\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The max distance the player can be away from this actor before you can interact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableNameText_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The name that will come up when the player looks at the interactable\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The name that will come up when the player looks at the interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActionText_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "The verb that describes how the interaction works, ie \"Sit\" for a chair, \"Eat\" for food, \"Light\" for a fireplace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedOverlayMaterial_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//A material to draw over any mesh components our owner has when this interatable is focused \n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "A material to draw over any mesh components our owner has when this interatable is focused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginInteracted_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player presses the interact key whilst focusing on this interactable actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndInteracted_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginFocus_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player presses the interact key whilst focusing on this interactable actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndFocus_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteracted_MetaData[] = {
		{ "Comment", "//[local + server] Called when the player has interacted with the item for the required amount of time\n" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ToolTip", "[local + server] Called when the player has interacted with the item for the required amount of time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Interactions;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_CanInteract, "CanInteract" }, // 244509170
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnBeginInteract, "OnBeginInteract" }, // 124345201
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnEndInteract, "OnEndInteract" }, // 1753552986
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_OnInteract, "OnInteract" }, // 2870039847
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableActionText, "SetInteractableActionText" }, // 3637490134
		{ &Z_Construct_UFunction_UNarrativeInteractableComponent_SetInteractableNameText, "SetInteractableNameText" }, // 4106383636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_Interactions_Inner = { "Interactions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteractionDefiniton, METADATA_PARAMS(0, nullptr) }; // 4251287609
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_Interactions = { "Interactions", nullptr, (EPropertyFlags)0x0020088000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, Interactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactions_MetaData), NewProp_Interactions_MetaData) }; // 4251287609
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionTime = { "InteractionTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTime_MetaData), NewProp_InteractionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractableNameText = { "InteractableNameText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractableNameText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableNameText_MetaData), NewProp_InteractableNameText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_InteractableActionText = { "InteractableActionText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, InteractableActionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableActionText_MetaData), NewProp_InteractableActionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_FocusedOverlayMaterial = { "FocusedOverlayMaterial", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, FocusedOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedOverlayMaterial_MetaData), NewProp_FocusedOverlayMaterial_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnBeginInteracted = { "OnBeginInteracted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnBeginInteracted), Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginInteracted_MetaData), NewProp_OnBeginInteracted_MetaData) }; // 1819736893
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnEndInteracted = { "OnEndInteracted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnEndInteracted), Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndInteracted_MetaData), NewProp_OnEndInteracted_MetaData) }; // 1919855870
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnBeginFocus), Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginFocus_MetaData), NewProp_OnBeginFocus_MetaData) }; // 1513744979
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnEndFocus), Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndFocus_MetaData), NewProp_OnEndFocus_MetaData) }; // 3623703131
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_OnInteracted = { "OnInteracted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractableComponent, OnInteracted), Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteracted_MetaData), NewProp_OnInteracted_MetaData) }; // 495371914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInteractableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_Interactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractableComponent_Statics::NewProp_Interactions,
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
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInteractableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInteraction,
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
template<> NARRATIVEINTERACTION_API UClass* StaticClass<UNarrativeInteractableComponent>()
{
	return UNarrativeInteractableComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInteractableComponent);
UNarrativeInteractableComponent::~UNarrativeInteractableComponent() {}
// End Class UNarrativeInteractableComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionDefiniton::StaticStruct, Z_Construct_UScriptStruct_FInteractionDefiniton_Statics::NewStructOps, TEXT("InteractionDefiniton"), &Z_Registration_Info_UScriptStruct_InteractionDefiniton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionDefiniton), 4251287609U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeInteractableComponent, UNarrativeInteractableComponent::StaticClass, TEXT("UNarrativeInteractableComponent"), &Z_Registration_Info_UClass_UNarrativeInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInteractableComponent), 3772997013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_3693479998(TEXT("/Script/NarrativeInteraction"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

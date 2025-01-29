// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeInteractAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "NarrativeArsenal/Public/Interaction/InteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeInteractAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractAbility_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionSlotConfig();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeInteractAbility Function CanExitInteraction
struct NarrativeInteractAbility_eventCanExitInteraction_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeInteractAbility_eventCanExitInteraction_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeInteractAbility_CanExitInteraction = FName(TEXT("CanExitInteraction"));
bool UNarrativeInteractAbility::CanExitInteraction() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractAbility_CanExitInteraction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInteractAbility_eventCanExitInteraction_Parms Parms;
		const_cast<UNarrativeInteractAbility*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeInteractAbility*>(this)->CanExitInteraction_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact Ability" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInteractAbility_eventCanExitInteraction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInteractAbility_eventCanExitInteraction_Parms), &Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractAbility, nullptr, "CanExitInteraction", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::PropPointers), sizeof(NarrativeInteractAbility_eventCanExitInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInteractAbility_eventCanExitInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractAbility::execCanExitInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExitInteraction_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeInteractAbility Function CanExitInteraction

// Begin Class UNarrativeInteractAbility Function FinishInteraction
static const FName NAME_UNarrativeInteractAbility_FinishInteraction = FName(TEXT("FinishInteraction"));
void UNarrativeInteractAbility::FinishInteraction()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractAbility_FinishInteraction);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact Ability" },
		{ "Comment", "//Called when interaction needs finished - override this and do any finishing up of the interaction, ie if sitting play your Get Up montage, etc - call EndAbility when done.  \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "Called when interaction needs finished - override this and do any finishing up of the interaction, ie if sitting play your Get Up montage, etc - call EndAbility when done." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractAbility, nullptr, "FinishInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeInteractAbility Function FinishInteraction

// Begin Class UNarrativeInteractAbility Function HandleInteraction
struct NarrativeInteractAbility_eventHandleInteraction_Parms
{
	FInteractionSlotConfig InteractionData;
};
static const FName NAME_UNarrativeInteractAbility_HandleInteraction = FName(TEXT("HandleInteraction"));
void UNarrativeInteractAbility::HandleInteraction(FInteractionSlotConfig InteractionData)
{
	NarrativeInteractAbility_eventHandleInteraction_Parms Parms;
	Parms.InteractionData=InteractionData;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInteractAbility_HandleInteraction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Interaction is simple - override this function, do whatever interaction stuff you need, then call EndInteraction when you're done! The slot will automatically be released for you. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "Interaction is simple - override this function, do whatever interaction stuff you need, then call EndInteraction when you're done! The slot will automatically be released for you." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::NewProp_InteractionData = { "InteractionData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractAbility_eventHandleInteraction_Parms, InteractionData), Z_Construct_UScriptStruct_FInteractionSlotConfig, METADATA_PARAMS(0, nullptr) }; // 345810728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::NewProp_InteractionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractAbility, nullptr, "HandleInteraction", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::PropPointers), sizeof(NarrativeInteractAbility_eventHandleInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInteractAbility_eventHandleInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeInteractAbility Function HandleInteraction

// Begin Class UNarrativeInteractAbility Function OnReceiveEndInteractEvent
struct Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics
{
	struct NarrativeInteractAbility_eventOnReceiveEndInteractEvent_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInteractAbility_eventOnReceiveEndInteractEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInteractAbility, nullptr, "OnReceiveEndInteractEvent", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::NarrativeInteractAbility_eventOnReceiveEndInteractEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::NarrativeInteractAbility_eventOnReceiveEndInteractEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInteractAbility::execOnReceiveEndInteractEvent)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReceiveEndInteractEvent(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UNarrativeInteractAbility Function OnReceiveEndInteractEvent

// Begin Class UNarrativeInteractAbility
void UNarrativeInteractAbility::StaticRegisterNativesUNarrativeInteractAbility()
{
	UClass* Class = UNarrativeInteractAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanExitInteraction", &UNarrativeInteractAbility::execCanExitInteraction },
		{ "OnReceiveEndInteractEvent", &UNarrativeInteractAbility::execOnReceiveEndInteractEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeInteractAbility);
UClass* Z_Construct_UClass_UNarrativeInteractAbility_NoRegister()
{
	return UNarrativeInteractAbility::StaticClass();
}
struct Z_Construct_UClass_UNarrativeInteractAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines how we interact with an Interaction slot. Abilities are great for this - they work well on NPCs and players, and are latent, which interaction often requires - \n * ie wait for anim to finish, wait for input, etc. \n */" },
		{ "IncludePath", "GAS/NarrativeInteractAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "Defines how we interact with an Interaction slot. Abilities are great for this - they work well on NPCs and players, and are latent, which interaction often requires -\nie wait for anim to finish, wait for input, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractingWithComponent_MetaData[] = {
		{ "Category", "Interact Ability" },
		{ "Comment", "//The interactable component this interact ability is acting on. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "The interactable component this interact ability is acting on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotConfiguration_MetaData[] = {
		{ "Category", "Interact Ability" },
		{ "Comment", "//The configuration for the interaction slot we've tried to use\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "The configuration for the interaction slot we've tried to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//The interaction component that owns the interaction \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "The interaction component that owns the interaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitEndInteract_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//The wait gameplay event task \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeInteractAbility.h" },
		{ "ToolTip", "The wait gameplay event task" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingWithComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotConfiguration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaitEndInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeInteractAbility_CanExitInteraction, "CanExitInteraction" }, // 3456638823
		{ &Z_Construct_UFunction_UNarrativeInteractAbility_FinishInteraction, "FinishInteraction" }, // 821907575
		{ &Z_Construct_UFunction_UNarrativeInteractAbility_HandleInteraction, "HandleInteraction" }, // 706978931
		{ &Z_Construct_UFunction_UNarrativeInteractAbility_OnReceiveEndInteractEvent, "OnReceiveEndInteractEvent" }, // 131612780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInteractAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_InteractingWithComponent = { "InteractingWithComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractAbility, InteractingWithComponent), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractingWithComponent_MetaData), NewProp_InteractingWithComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_SlotConfiguration = { "SlotConfiguration", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractAbility, SlotConfiguration), Z_Construct_UScriptStruct_FInteractionSlotConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotConfiguration_MetaData), NewProp_SlotConfiguration_MetaData) }; // 345810728
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractAbility, InteractionComponent), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_WaitEndInteract = { "WaitEndInteract", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInteractAbility, WaitEndInteract), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitEndInteract_MetaData), NewProp_WaitEndInteract_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInteractAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_InteractingWithComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_SlotConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInteractAbility_Statics::NewProp_WaitEndInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInteractAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInteractAbility_Statics::ClassParams = {
	&UNarrativeInteractAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeInteractAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInteractAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeInteractAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeInteractAbility()
{
	if (!Z_Registration_Info_UClass_UNarrativeInteractAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeInteractAbility.OuterSingleton, Z_Construct_UClass_UNarrativeInteractAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeInteractAbility.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeInteractAbility>()
{
	return UNarrativeInteractAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInteractAbility);
UNarrativeInteractAbility::~UNarrativeInteractAbility() {}
// End Class UNarrativeInteractAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeInteractAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeInteractAbility, UNarrativeInteractAbility::StaticClass, TEXT("UNarrativeInteractAbility"), &Z_Registration_Info_UClass_UNarrativeInteractAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInteractAbility), 2096723896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeInteractAbility_h_3642653743(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeInteractAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeInteractAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

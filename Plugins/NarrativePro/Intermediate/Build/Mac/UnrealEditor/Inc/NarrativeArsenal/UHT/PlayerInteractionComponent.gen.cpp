// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/PlayerInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInteractionComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerInteractionComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UPlayerInteractionComponent Function BeginInteract
struct Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionComponent, nullptr, "BeginInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInteractionComponent::execBeginInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginInteract();
	P_NATIVE_END;
}
// End Class UPlayerInteractionComponent Function BeginInteract

// Begin Class UPlayerInteractionComponent Function EndInteract
struct Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionComponent, nullptr, "EndInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInteractionComponent::execEndInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteract();
	P_NATIVE_END;
}
// End Class UPlayerInteractionComponent Function EndInteract

// Begin Class UPlayerInteractionComponent Function ServerBeginInteract
static const FName NAME_UPlayerInteractionComponent_ServerBeginInteract = FName(TEXT("ServerBeginInteract"));
void UPlayerInteractionComponent::ServerBeginInteract()
{
	UFunction* Func = FindFunctionChecked(NAME_UPlayerInteractionComponent_ServerBeginInteract);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionComponent, nullptr, "ServerBeginInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInteractionComponent::execServerBeginInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerBeginInteract_Implementation();
	P_NATIVE_END;
}
// End Class UPlayerInteractionComponent Function ServerBeginInteract

// Begin Class UPlayerInteractionComponent Function ServerEndInteract
static const FName NAME_UPlayerInteractionComponent_ServerEndInteract = FName(TEXT("ServerEndInteract"));
void UPlayerInteractionComponent::ServerEndInteract()
{
	UFunction* Func = FindFunctionChecked(NAME_UPlayerInteractionComponent_ServerEndInteract);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionComponent, nullptr, "ServerEndInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInteractionComponent::execServerEndInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerEndInteract_Implementation();
	P_NATIVE_END;
}
// End Class UPlayerInteractionComponent Function ServerEndInteract

// Begin Class UPlayerInteractionComponent
void UPlayerInteractionComponent::StaticRegisterNativesUPlayerInteractionComponent()
{
	UClass* Class = UPlayerInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginInteract", &UPlayerInteractionComponent::execBeginInteract },
		{ "EndInteract", &UPlayerInteractionComponent::execEndInteract },
		{ "ServerBeginInteract", &UPlayerInteractionComponent::execServerBeginInteract },
		{ "ServerEndInteract", &UPlayerInteractionComponent::execServerEndInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInteractionComponent);
UClass* Z_Construct_UClass_UPlayerInteractionComponent_NoRegister()
{
	return UPlayerInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * Interaction component that exists on the player controller, and contains all the interaction tracing stuff NPCs dont need\n */" },
		{ "DisplayName", "Narrative Player Interaction" },
		{ "IncludePath", "Interaction/PlayerInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "Interaction component that exists on the player controller, and contains all the interaction tracing stuff NPCs dont need" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFoundInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we find a new interactable object \n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we find a new interactable object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLostInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we've lost our interactable\n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we've lost our interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractPressed_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we start holding the interact key \n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we start holding the interact key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractReleased_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//[local + server] Called when we release the interact key \n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "[local + server] Called when we release the interact key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewedInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The current interactable component we're viewing, if there is one\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "The current interactable component we're viewing, if there is one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "Comment", "//The time when we last checked for an interactable\n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "The time when we last checked for an interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInteractHeld_MetaData[] = {
		{ "Comment", "//Whether the local player is holding the interact key\n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "Whether the local player is holding the interact key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionInputs_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**All of the input actions that should instigate an interaction. */" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "All of the input actions that should instigate an interaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingInteractTime_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**The amount of time before interaction completes on our current interactable.This is stored per interactor and not per interactable\n\x09""because in a networked game we may want to support multiple players interacting with something and each will have their own time*/" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "The amount of time before interaction completes on our current interactable.This is stored per interactor and not per interactable\n       because in a networked game we may want to support multiple players interacting with something and each will have their own time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckFrequency_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//How often in seconds to check for an interactable object. Set this to zero if you want to check every tick.\n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "How often in seconds to check for an interactable object. Set this to zero if you want to check every tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//How far we'll trace when we check if the player is looking at an interactable object\n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "How far we'll trace when we check if the player is looking at an interactable object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckSphereRadius_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//If greater than zero we'll use a sphere trace over an interaction trace \n" },
		{ "ModuleRelativePath", "Public/Interaction/PlayerInteractionComponent.h" },
		{ "ToolTip", "If greater than zero we'll use a sphere trace over an interaction trace" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFoundInteractable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLostInteractable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractReleased;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewedInteractable;
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
		{ &Z_Construct_UFunction_UPlayerInteractionComponent_BeginInteract, "BeginInteract" }, // 3599016475
		{ &Z_Construct_UFunction_UPlayerInteractionComponent_EndInteract, "EndInteract" }, // 244674607
		{ &Z_Construct_UFunction_UPlayerInteractionComponent_ServerBeginInteract, "ServerBeginInteract" }, // 83533570
		{ &Z_Construct_UFunction_UPlayerInteractionComponent_ServerEndInteract, "ServerEndInteract" }, // 1753754649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnFoundInteractable = { "OnFoundInteractable", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, OnFoundInteractable), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFoundInteractable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFoundInteractable_MetaData), NewProp_OnFoundInteractable_MetaData) }; // 2610952705
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnLostInteractable = { "OnLostInteractable", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, OnLostInteractable), Z_Construct_UDelegateFunction_NarrativeArsenal_OnLostInteractable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLostInteractable_MetaData), NewProp_OnLostInteractable_MetaData) }; // 2612106902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnInteractPressed = { "OnInteractPressed", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, OnInteractPressed), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractPressed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractPressed_MetaData), NewProp_OnInteractPressed_MetaData) }; // 1306292993
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnInteractReleased = { "OnInteractReleased", nullptr, (EPropertyFlags)0x0010000010090001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, OnInteractReleased), Z_Construct_UDelegateFunction_NarrativeArsenal_OnInteractReleased__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractReleased_MetaData), NewProp_OnInteractReleased_MetaData) }; // 4234389449
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_ViewedInteractable = { "ViewedInteractable", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, ViewedInteractable), Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewedInteractable_MetaData), NewProp_ViewedInteractable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInteractionCheckTime_MetaData), NewProp_LastInteractionCheckTime_MetaData) };
void Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_bInteractHeld_SetBit(void* Obj)
{
	((UPlayerInteractionComponent*)Obj)->bInteractHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_bInteractHeld = { "bInteractHeld", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerInteractionComponent), &Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_bInteractHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInteractHeld_MetaData), NewProp_bInteractHeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionInputs_Inner = { "InteractionInputs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionInputs = { "InteractionInputs", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, InteractionInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionInputs_MetaData), NewProp_InteractionInputs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_RemainingInteractTime = { "RemainingInteractTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, RemainingInteractTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingInteractTime_MetaData), NewProp_RemainingInteractTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionCheckFrequency = { "InteractionCheckFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, InteractionCheckFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckFrequency_MetaData), NewProp_InteractionCheckFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionCheckDistance = { "InteractionCheckDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, InteractionCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckDistance_MetaData), NewProp_InteractionCheckDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionCheckSphereRadius = { "InteractionCheckSphereRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractionComponent, InteractionCheckSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckSphereRadius_MetaData), NewProp_InteractionCheckSphereRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnFoundInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnLostInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnInteractPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_OnInteractReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_ViewedInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_LastInteractionCheckTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_bInteractHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_RemainingInteractTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionCheckFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractionComponent_Statics::NewProp_InteractionCheckSphereRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeInteractionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInteractionComponent_Statics::ClassParams = {
	&UPlayerInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInteractionComponent.OuterSingleton, Z_Construct_UClass_UPlayerInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInteractionComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UPlayerInteractionComponent>()
{
	return UPlayerInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInteractionComponent);
UPlayerInteractionComponent::~UPlayerInteractionComponent() {}
// End Class UPlayerInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_PlayerInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInteractionComponent, UPlayerInteractionComponent::StaticClass, TEXT("UPlayerInteractionComponent"), &Z_Registration_Info_UClass_UPlayerInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInteractionComponent), 186783738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_PlayerInteractionComponent_h_2647031098(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_PlayerInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_PlayerInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

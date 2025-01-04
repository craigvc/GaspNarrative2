// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatComboManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatComboManagerComponent() {}

// Begin Cross Module References
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatComboManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatComboManagerComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatComboManagerComponent_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatComboManagerComponent Function BindToAbilitySystemComponent
struct Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Timer-friendly function to connect to the Ability Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Timer-friendly function to connect to the Ability Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatComboManagerComponent, nullptr, "BindToAbilitySystemComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatComboManagerComponent::execBindToAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UNinjaCombatComboManagerComponent Function BindToAbilitySystemComponent

// Begin Class UNinjaCombatComboManagerComponent Function HandleTreeStatusChanged
struct Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics
{
	struct NinjaCombatComboManagerComponent_eventHandleTreeStatusChanged_Parms
	{
		EStateTreeRunStatus StateTreeRunStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notifies a change in the tree status, so we can cancel/end the combo ability. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Notifies a change in the tree status, so we can cancel/end the combo ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateTreeRunStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateTreeRunStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::NewProp_StateTreeRunStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::NewProp_StateTreeRunStatus = { "StateTreeRunStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatComboManagerComponent_eventHandleTreeStatusChanged_Parms, StateTreeRunStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(0, nullptr) }; // 955675859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::NewProp_StateTreeRunStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::NewProp_StateTreeRunStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatComboManagerComponent, nullptr, "HandleTreeStatusChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::NinjaCombatComboManagerComponent_eventHandleTreeStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::NinjaCombatComboManagerComponent_eventHandleTreeStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatComboManagerComponent::execHandleTreeStatusChanged)
{
	P_GET_ENUM(EStateTreeRunStatus,Z_Param_StateTreeRunStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTreeStatusChanged(EStateTreeRunStatus(Z_Param_StateTreeRunStatus));
	P_NATIVE_END;
}
// End Class UNinjaCombatComboManagerComponent Function HandleTreeStatusChanged

// Begin Class UNinjaCombatComboManagerComponent Function OnRep_ComboCount
static const FName NAME_UNinjaCombatComboManagerComponent_OnRep_ComboCount = FName(TEXT("OnRep_ComboCount"));
void UNinjaCombatComboManagerComponent::OnRep_ComboCount()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatComboManagerComponent_OnRep_ComboCount);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnRep_ComboCount_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/**\n\x09 * Reacts to the replication of the \"Combo Count\" property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Combo Count\" property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatComboManagerComponent, nullptr, "OnRep_ComboCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatComboManagerComponent::execOnRep_ComboCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ComboCount_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatComboManagerComponent Function OnRep_ComboCount

// Begin Class UNinjaCombatComboManagerComponent Function OnRep_InComboWindow
struct NinjaCombatComboManagerComponent_eventOnRep_InComboWindow_Parms
{
	bool bWasInComboWindow;
};
static const FName NAME_UNinjaCombatComboManagerComponent_OnRep_InComboWindow = FName(TEXT("OnRep_InComboWindow"));
void UNinjaCombatComboManagerComponent::OnRep_InComboWindow(bool bWasInComboWindow)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatComboManagerComponent_OnRep_InComboWindow);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatComboManagerComponent_eventOnRep_InComboWindow_Parms Parms;
		Parms.bWasInComboWindow=bWasInComboWindow ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnRep_InComboWindow_Implementation(bWasInComboWindow);
	}
}
struct Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/**\n\x09 * Reacts to the replication of the \"Combo Window\" property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Combo Window\" property." },
	};
#endif // WITH_METADATA
	static void NewProp_bWasInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInComboWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::NewProp_bWasInComboWindow_SetBit(void* Obj)
{
	((NinjaCombatComboManagerComponent_eventOnRep_InComboWindow_Parms*)Obj)->bWasInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::NewProp_bWasInComboWindow = { "bWasInComboWindow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatComboManagerComponent_eventOnRep_InComboWindow_Parms), &Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::NewProp_bWasInComboWindow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::NewProp_bWasInComboWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatComboManagerComponent, nullptr, "OnRep_InComboWindow", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::PropPointers), sizeof(NinjaCombatComboManagerComponent_eventOnRep_InComboWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatComboManagerComponent_eventOnRep_InComboWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatComboManagerComponent::execOnRep_InComboWindow)
{
	P_GET_UBOOL(Z_Param_bWasInComboWindow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InComboWindow_Implementation(Z_Param_bWasInComboWindow);
	P_NATIVE_END;
}
// End Class UNinjaCombatComboManagerComponent Function OnRep_InComboWindow

// Begin Class UNinjaCombatComboManagerComponent Function OnRep_TargetCount
static const FName NAME_UNinjaCombatComboManagerComponent_OnRep_TargetCount = FName(TEXT("OnRep_TargetCount"));
void UNinjaCombatComboManagerComponent::OnRep_TargetCount()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatComboManagerComponent_OnRep_TargetCount);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnRep_TargetCount_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/**\n\x09 * Reacts to the replication of the \"Target Count\" property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Target Count\" property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatComboManagerComponent, nullptr, "OnRep_TargetCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatComboManagerComponent::execOnRep_TargetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TargetCount_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatComboManagerComponent Function OnRep_TargetCount

// Begin Class UNinjaCombatComboManagerComponent
void UNinjaCombatComboManagerComponent::StaticRegisterNativesUNinjaCombatComboManagerComponent()
{
	UClass* Class = UNinjaCombatComboManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToAbilitySystemComponent", &UNinjaCombatComboManagerComponent::execBindToAbilitySystemComponent },
		{ "HandleTreeStatusChanged", &UNinjaCombatComboManagerComponent::execHandleTreeStatusChanged },
		{ "OnRep_ComboCount", &UNinjaCombatComboManagerComponent::execOnRep_ComboCount },
		{ "OnRep_InComboWindow", &UNinjaCombatComboManagerComponent::execOnRep_InComboWindow },
		{ "OnRep_TargetCount", &UNinjaCombatComboManagerComponent::execOnRep_TargetCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatComboManagerComponent);
UClass* Z_Construct_UClass_UNinjaCombatComboManagerComponent_NoRegister()
{
	return UNinjaCombatComboManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Manages a Combo, using a State Tree to determine each possible state and transition.\n */" },
		{ "HideCategories", "Activation Collision Sockets Collision" },
		{ "IncludePath", "Components/NinjaCombatComboManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages a Combo, using a State Tree to determine each possible state and transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComboWindowChanged_MetaData[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/** Notifies that the running combo is in the combo window. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Notifies that the running combo is in the combo window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetCountChanged_MetaData[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/** Notifies the count of targets that were hit by the current attack. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Notifies the count of targets that were hit by the current attack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComboCountChanged_MetaData[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/** Notifies that the combo count has been changed. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Notifies that the combo count has been changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComboFinished_MetaData[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/** Notifies that the running combo has ended. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Notifies that the running combo has ended." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInComboWindow_MetaData[] = {
		{ "Comment", "/** Stores the combo window state. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Stores the combo window state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[] = {
		{ "Comment", "/** Amount of targets hit by the current attack. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Amount of targets hit by the current attack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCount_MetaData[] = {
		{ "Comment", "/** Counts how many iterations in the current combo. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "Counts how many iterations in the current combo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOnEveryTarget_MetaData[] = {
		{ "Category", "Combo Manager" },
		{ "Comment", "/**\n\x09 * If set to true, will broadcast each target received. Otherwise, only the first one.\n\x09 *\n\x09 * If you only need to know if the current ability hit a target, so the combo can continue,\n\x09 * then setting this to false will save replicating of combo values, past one.\n\x09 *\n\x09 * If you need to know the exact count of actors hit, then set this to true, but then the\n\x09 * value will replicate on each target hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatComboManagerComponent.h" },
		{ "ToolTip", "If set to true, will broadcast each target received. Otherwise, only the first one.\n\nIf you only need to know if the current ability hit a target, so the combo can continue,\nthen setting this to false will save replicating of combo values, past one.\n\nIf you need to know the exact count of actors hit, then set this to true, but then the\nvalue will replicate on each target hit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComboWindowChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetCountChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComboCountChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComboFinished;
	static void NewProp_bInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComboWindow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static void NewProp_bUpdateOnEveryTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOnEveryTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatComboManagerComponent_BindToAbilitySystemComponent, "BindToAbilitySystemComponent" }, // 951674317
		{ &Z_Construct_UFunction_UNinjaCombatComboManagerComponent_HandleTreeStatusChanged, "HandleTreeStatusChanged" }, // 2816668787
		{ &Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_ComboCount, "OnRep_ComboCount" }, // 3416695223
		{ &Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_InComboWindow, "OnRep_InComboWindow" }, // 2300766700
		{ &Z_Construct_UFunction_UNinjaCombatComboManagerComponent_OnRep_TargetCount, "OnRep_TargetCount" }, // 1265809222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatComboManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnComboWindowChanged = { "OnComboWindowChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboManagerComponent, OnComboWindowChanged), Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComboWindowChanged_MetaData), NewProp_OnComboWindowChanged_MetaData) }; // 1263278949
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnTargetCountChanged = { "OnTargetCountChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboManagerComponent, OnTargetCountChanged), Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetCountChanged_MetaData), NewProp_OnTargetCountChanged_MetaData) }; // 3949061994
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnComboCountChanged = { "OnComboCountChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboManagerComponent, OnComboCountChanged), Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComboCountChanged_MetaData), NewProp_OnComboCountChanged_MetaData) }; // 1592971307
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnComboFinished = { "OnComboFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboManagerComponent, OnComboFinished), Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComboFinished_MetaData), NewProp_OnComboFinished_MetaData) }; // 2788845440
void Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bInComboWindow_SetBit(void* Obj)
{
	((UNinjaCombatComboManagerComponent*)Obj)->bInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bInComboWindow = { "bInComboWindow", "OnRep_InComboWindow", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNinjaCombatComboManagerComponent), &Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bInComboWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInComboWindow_MetaData), NewProp_bInComboWindow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_TargetCount = { "TargetCount", "OnRep_TargetCount", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboManagerComponent, TargetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCount_MetaData), NewProp_TargetCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_ComboCount = { "ComboCount", "OnRep_ComboCount", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatComboManagerComponent, ComboCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCount_MetaData), NewProp_ComboCount_MetaData) };
void Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bUpdateOnEveryTarget_SetBit(void* Obj)
{
	((UNinjaCombatComboManagerComponent*)Obj)->bUpdateOnEveryTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bUpdateOnEveryTarget = { "bUpdateOnEveryTarget", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatComboManagerComponent), &Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bUpdateOnEveryTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateOnEveryTarget_MetaData), NewProp_bUpdateOnEveryTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnComboWindowChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnTargetCountChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnComboCountChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_OnComboFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bInComboWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_TargetCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_ComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::NewProp_bUpdateOnEveryTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatComboManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatComboManagerComponent, ICombatComboManagerInterface), false },  // 230165360
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::ClassParams = {
	&UNinjaCombatComboManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatComboManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatComboManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatComboManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatComboManagerComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatComboManagerComponent>()
{
	return UNinjaCombatComboManagerComponent::StaticClass();
}
void UNinjaCombatComboManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bInComboWindow(TEXT("bInComboWindow"));
	static const FName Name_TargetCount(TEXT("TargetCount"));
	static const FName Name_ComboCount(TEXT("ComboCount"));
	const bool bIsValid = true
		&& Name_bInComboWindow == ClassReps[(int32)ENetFields_Private::bInComboWindow].Property->GetFName()
		&& Name_TargetCount == ClassReps[(int32)ENetFields_Private::TargetCount].Property->GetFName()
		&& Name_ComboCount == ClassReps[(int32)ENetFields_Private::ComboCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaCombatComboManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatComboManagerComponent);
UNinjaCombatComboManagerComponent::~UNinjaCombatComboManagerComponent() {}
// End Class UNinjaCombatComboManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatComboManagerComponent, UNinjaCombatComboManagerComponent::StaticClass, TEXT("UNinjaCombatComboManagerComponent"), &Z_Registration_Info_UClass_UNinjaCombatComboManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatComboManagerComponent), 4130235448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_3940107136(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

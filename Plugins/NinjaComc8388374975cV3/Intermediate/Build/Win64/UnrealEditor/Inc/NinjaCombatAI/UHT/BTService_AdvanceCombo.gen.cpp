// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatAI/Public/AI/BehaviorTree/BTService_AdvanceCombo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_AdvanceCombo() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode();
NINJACOMBATAI_API UClass* Z_Construct_UClass_UBTService_AdvanceCombo();
NINJACOMBATAI_API UClass* Z_Construct_UClass_UBTService_AdvanceCombo_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatAI();
// End Cross Module References

// Begin Class UBTService_AdvanceCombo Function CheckComboManager
struct Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics
{
	struct BTService_AdvanceCombo_eventCheckComboManager_Parms
	{
		const UActorComponent* ComboManager;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|AI" },
		{ "Comment", "/**\n\x09 * Checks if the provided Combo Manager matches the one in the Service Memory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Checks if the provided Combo Manager matches the one in the Service Memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventCheckComboManager_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BTService_AdvanceCombo_eventCheckComboManager_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTService_AdvanceCombo_eventCheckComboManager_Parms), &Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_AdvanceCombo, nullptr, "CheckComboManager", nullptr, nullptr, Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::BTService_AdvanceCombo_eventCheckComboManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::BTService_AdvanceCombo_eventCheckComboManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_AdvanceCombo::execCheckComboManager)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ComboManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckComboManager(Z_Param_ComboManager);
	P_NATIVE_END;
}
// End Class UBTService_AdvanceCombo Function CheckComboManager

// Begin Class UBTService_AdvanceCombo Function GetBehaviorTreeComponent
struct Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics
{
	struct BTService_AdvanceCombo_eventGetBehaviorTreeComponent_Parms
	{
		const UActorComponent* ComboManager;
		UBehaviorTreeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|AI" },
		{ "Comment", "/**\n\x09 * Retrieves the Behavior Tree Component from the Combo Manager.\n\x09 * \n\x09 * By default,this will go through the Owner's AI Controller, and retrieve the\n\x09 * Behavior Tree Component from there, but if you can override this if you have\n\x09 * a faster path to the Behavior Tree Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Retrieves the Behavior Tree Component from the Combo Manager.\n\nBy default,this will go through the Owner's AI Controller, and retrieve the\nBehavior Tree Component from there, but if you can override this if you have\na faster path to the Behavior Tree Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventGetBehaviorTreeComponent_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventGetBehaviorTreeComponent_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_AdvanceCombo, nullptr, "GetBehaviorTreeComponent", nullptr, nullptr, Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::BTService_AdvanceCombo_eventGetBehaviorTreeComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::BTService_AdvanceCombo_eventGetBehaviorTreeComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_AdvanceCombo::execGetBehaviorTreeComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ComboManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviorTreeComponent**)Z_Param__Result=P_THIS->GetBehaviorTreeComponent(Z_Param_ComboManager);
	P_NATIVE_END;
}
// End Class UBTService_AdvanceCombo Function GetBehaviorTreeComponent

// Begin Class UBTService_AdvanceCombo Function GetComboGameplayTag
struct BTService_AdvanceCombo_eventGetComboGameplayTag_Parms
{
	const AActor* Owner;
	FGameplayTag ReturnValue;
};
static const FName NAME_UBTService_AdvanceCombo_GetComboGameplayTag = FName(TEXT("GetComboGameplayTag"));
FGameplayTag UBTService_AdvanceCombo::GetComboGameplayTag(const AActor* Owner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBTService_AdvanceCombo_GetComboGameplayTag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BTService_AdvanceCombo_eventGetComboGameplayTag_Parms Parms;
		Parms.Owner=Owner;
		const_cast<UBTService_AdvanceCombo*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBTService_AdvanceCombo*>(this)->GetComboGameplayTag_Implementation(Owner);
	}
}
struct Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Service" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Tag used to advance the combo.\n\x09 * Invoked if the Event Mode is set to \"Gameplay Event\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Provides the Gameplay Tag used to advance the combo.\nInvoked if the Event Mode is set to \"Gameplay Event\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventGetComboGameplayTag_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventGetComboGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_AdvanceCombo, nullptr, "GetComboGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::PropPointers), sizeof(BTService_AdvanceCombo_eventGetComboGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_AdvanceCombo_eventGetComboGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_AdvanceCombo::execGetComboGameplayTag)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetComboGameplayTag_Implementation(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UBTService_AdvanceCombo Function GetComboGameplayTag

// Begin Class UBTService_AdvanceCombo Function GetComboInputAction
struct BTService_AdvanceCombo_eventGetComboInputAction_Parms
{
	const AActor* Owner;
	const UInputAction* ReturnValue;

	/** Constructor, initializes return property only **/
	BTService_AdvanceCombo_eventGetComboInputAction_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UBTService_AdvanceCombo_GetComboInputAction = FName(TEXT("GetComboInputAction"));
const UInputAction* UBTService_AdvanceCombo::GetComboInputAction(const AActor* Owner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBTService_AdvanceCombo_GetComboInputAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BTService_AdvanceCombo_eventGetComboInputAction_Parms Parms;
		Parms.Owner=Owner;
		const_cast<UBTService_AdvanceCombo*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBTService_AdvanceCombo*>(this)->GetComboInputAction_Implementation(Owner);
	}
}
struct Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Service" },
		{ "Comment", "/**\n\x09 * Provides the Input Action used to advance the combo.\n\x09 * Invoked if the Event Mode is set to \"Input Action\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Provides the Input Action used to advance the combo.\nInvoked if the Event Mode is set to \"Input Action\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventGetComboInputAction_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventGetComboInputAction_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_AdvanceCombo, nullptr, "GetComboInputAction", nullptr, nullptr, Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::PropPointers), sizeof(BTService_AdvanceCombo_eventGetComboInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_AdvanceCombo_eventGetComboInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_AdvanceCombo::execGetComboInputAction)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->GetComboInputAction_Implementation(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UBTService_AdvanceCombo Function GetComboInputAction

// Begin Class UBTService_AdvanceCombo Function HandleComboWindowChanged
struct BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms
{
	UActorComponent* ComboManager;
	bool bInComboWindow;
};
static const FName NAME_UBTService_AdvanceCombo_HandleComboWindowChanged = FName(TEXT("HandleComboWindowChanged"));
void UBTService_AdvanceCombo::HandleComboWindowChanged(UActorComponent* ComboManager, bool bInComboWindow)
{
	UFunction* Func = FindFunctionChecked(NAME_UBTService_AdvanceCombo_HandleComboWindowChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms Parms;
		Parms.ComboManager=ComboManager;
		Parms.bInComboWindow=bInComboWindow ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleComboWindowChanged_Implementation(ComboManager, bInComboWindow);
	}
}
struct Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Service" },
		{ "Comment", "/**\n\x09 * Handles the new state for a Combo Window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Handles the new state for a Combo Window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComboWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::NewProp_bInComboWindow_SetBit(void* Obj)
{
	((BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms*)Obj)->bInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::NewProp_bInComboWindow = { "bInComboWindow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms), &Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::NewProp_bInComboWindow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::NewProp_bInComboWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_AdvanceCombo, nullptr, "HandleComboWindowChanged", nullptr, nullptr, Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::PropPointers), sizeof(BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_AdvanceCombo_eventHandleComboWindowChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_AdvanceCombo::execHandleComboWindowChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ComboManager);
	P_GET_UBOOL(Z_Param_bInComboWindow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComboWindowChanged_Implementation(Z_Param_ComboManager,Z_Param_bInComboWindow);
	P_NATIVE_END;
}
// End Class UBTService_AdvanceCombo Function HandleComboWindowChanged

// Begin Class UBTService_AdvanceCombo Function SendGameplayEvent
struct Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics
{
	struct BTService_AdvanceCombo_eventSendGameplayEvent_Parms
	{
		const AActor* AbilityOwner;
		FGameplayTag EventTag;
		const UObject* OptionalObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|AI" },
		{ "Comment", "/**\n\x09 * Sends a Gameplay Event to the owner's ASC, using the provided event tag and object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Sends a Gameplay Event to the owner's ASC, using the provided event tag and object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventSendGameplayEvent_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityOwner_MetaData), NewProp_AbilityOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventSendGameplayEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_AdvanceCombo_eventSendGameplayEvent_Parms, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObject_MetaData), NewProp_OptionalObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::NewProp_AbilityOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::NewProp_OptionalObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_AdvanceCombo, nullptr, "SendGameplayEvent", nullptr, nullptr, Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::BTService_AdvanceCombo_eventSendGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::BTService_AdvanceCombo_eventSendGameplayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_AdvanceCombo::execSendGameplayEvent)
{
	P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_OBJECT(UObject,Z_Param_OptionalObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGameplayEvent(Z_Param_AbilityOwner,Z_Param_EventTag,Z_Param_OptionalObject);
	P_NATIVE_END;
}
// End Class UBTService_AdvanceCombo Function SendGameplayEvent

// Begin Class UBTService_AdvanceCombo
void UBTService_AdvanceCombo::StaticRegisterNativesUBTService_AdvanceCombo()
{
	UClass* Class = UBTService_AdvanceCombo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckComboManager", &UBTService_AdvanceCombo::execCheckComboManager },
		{ "GetBehaviorTreeComponent", &UBTService_AdvanceCombo::execGetBehaviorTreeComponent },
		{ "GetComboGameplayTag", &UBTService_AdvanceCombo::execGetComboGameplayTag },
		{ "GetComboInputAction", &UBTService_AdvanceCombo::execGetComboInputAction },
		{ "HandleComboWindowChanged", &UBTService_AdvanceCombo::execHandleComboWindowChanged },
		{ "SendGameplayEvent", &UBTService_AdvanceCombo::execSendGameplayEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_AdvanceCombo);
UClass* Z_Construct_UClass_UBTService_AdvanceCombo_NoRegister()
{
	return UBTService_AdvanceCombo::StaticClass();
}
struct Z_Construct_UClass_UBTService_AdvanceCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n * Advances a Combo using Gameplay Events or Input Actions provided by a customizable logic.\n */" },
		{ "DisplayName", "Advance Combo" },
		{ "IncludePath", "AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Advances a Combo using Gameplay Events or Input Actions provided by a customizable logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventMode_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/** Determines how the combo is advanced by this Service. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Determines how the combo is advanced by this Service." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputAction_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/** Default Input Action used when the Event Mode is set to \"Input Action\". */" },
		{ "EditCondition", "EventMode == ECombatComboEventMode::InpputAction" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Default Input Action used when the Event Mode is set to \"Input Action\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayTag_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/** Default Gameplay Tag used when the Event Mode is set to \"Gameplay Tag. */" },
		{ "EditCondition", "EventMode == ECombatComboEventMode::InpputAction" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_AdvanceCombo.h" },
		{ "ToolTip", "Default Gameplay Tag used when the Event Mode is set to \"Gameplay Tag." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGameplayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTService_AdvanceCombo_CheckComboManager, "CheckComboManager" }, // 743024009
		{ &Z_Construct_UFunction_UBTService_AdvanceCombo_GetBehaviorTreeComponent, "GetBehaviorTreeComponent" }, // 1262982798
		{ &Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboGameplayTag, "GetComboGameplayTag" }, // 298212655
		{ &Z_Construct_UFunction_UBTService_AdvanceCombo_GetComboInputAction, "GetComboInputAction" }, // 75338275
		{ &Z_Construct_UFunction_UBTService_AdvanceCombo_HandleComboWindowChanged, "HandleComboWindowChanged" }, // 3036261298
		{ &Z_Construct_UFunction_UBTService_AdvanceCombo_SendGameplayEvent, "SendGameplayEvent" }, // 209746684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_AdvanceCombo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_EventMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_EventMode = { "EventMode", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_AdvanceCombo, EventMode), Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventMode_MetaData), NewProp_EventMode_MetaData) }; // 1120850582
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_DefaultInputAction = { "DefaultInputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_AdvanceCombo, DefaultInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputAction_MetaData), NewProp_DefaultInputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_DefaultGameplayTag = { "DefaultGameplayTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_AdvanceCombo, DefaultGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayTag_MetaData), NewProp_DefaultGameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_AdvanceCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_EventMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_EventMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_DefaultInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_AdvanceCombo_Statics::NewProp_DefaultGameplayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AdvanceCombo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_AdvanceCombo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AdvanceCombo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_AdvanceCombo_Statics::ClassParams = {
	&UBTService_AdvanceCombo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTService_AdvanceCombo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AdvanceCombo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_AdvanceCombo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_AdvanceCombo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_AdvanceCombo()
{
	if (!Z_Registration_Info_UClass_UBTService_AdvanceCombo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_AdvanceCombo.OuterSingleton, Z_Construct_UClass_UBTService_AdvanceCombo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_AdvanceCombo.OuterSingleton;
}
template<> NINJACOMBATAI_API UClass* StaticClass<UBTService_AdvanceCombo>()
{
	return UBTService_AdvanceCombo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_AdvanceCombo);
UBTService_AdvanceCombo::~UBTService_AdvanceCombo() {}
// End Class UBTService_AdvanceCombo

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_AdvanceCombo, UBTService_AdvanceCombo::StaticClass, TEXT("UBTService_AdvanceCombo"), &Z_Registration_Info_UClass_UBTService_AdvanceCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_AdvanceCombo), 279097531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_3224285271(TEXT("/Script/NinjaCombatAI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

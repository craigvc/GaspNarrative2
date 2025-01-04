// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/NinjaCombatAnimationAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAnimationAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetReceiverInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAnimationAbility Function HasSection
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics
{
	struct NinjaCombatAnimationAbility_eventHasSection_Parms
	{
		FName SectionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Checks if the current animation montage has a given section.\n\x09 * \n\x09 * The default implementation assumes that the current Animation Task is valid and a subtype of the\n\x09 * version provided by the combat system and used by default, \"UAbilityTask_PlayCombatAnimation\".\n\x09 *\n\x09 * @param SectionName\n\x09 *\x09\x09Name of the Montage Section to check. Must be different from NAME_None.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Checks if the current animation montage has a given section.\n\nThe default implementation assumes that the current Animation Task is valid and a subtype of the\nversion provided by the combat system and used by default, \"UAbilityTask_PlayCombatAnimation\".\n\n@param SectionName\n             Name of the Montage Section to check. Must be different from NAME_None." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationAbility_eventHasSection_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatAnimationAbility_eventHasSection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatAnimationAbility_eventHasSection_Parms), &Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "HasSection", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NinjaCombatAnimationAbility_eventHasSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::NinjaCombatAnimationAbility_eventHasSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execHasSection)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSection(Z_Param_SectionName);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function HasSection

// Begin Class UNinjaCombatAnimationAbility Function InitializeAnimationTask
struct NinjaCombatAnimationAbility_eventInitializeAnimationTask_Parms
{
	UAbilityTask* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatAnimationAbility_eventInitializeAnimationTask_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatAnimationAbility_InitializeAnimationTask = FName(TEXT("InitializeAnimationTask"));
UAbilityTask* UNinjaCombatAnimationAbility::InitializeAnimationTask()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationAbility_InitializeAnimationTask);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimationAbility_eventInitializeAnimationTask_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return InitializeAnimationTask_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Ability" },
		{ "Comment", "/**\n\x09 * Handles the initialization of the animation task. It won't be active yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Handles the initialization of the animation task. It won't be active yet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationAbility_eventInitializeAnimationTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "InitializeAnimationTask", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::PropPointers), sizeof(NinjaCombatAnimationAbility_eventInitializeAnimationTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimationAbility_eventInitializeAnimationTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execInitializeAnimationTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask**)Z_Param__Result=P_THIS->InitializeAnimationTask_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function InitializeAnimationTask

// Begin Class UNinjaCombatAnimationAbility Function MoveToSection
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics
{
	struct NinjaCombatAnimationAbility_eventMoveToSection_Parms
	{
		FName SectionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Moves the current animation montage to a given section.\n\x09 *\n\x09 * Before jumping to a section, it will first check if the section is actually valid in the montage,\n\x09 * which is the equivalent of calling \"HasSection\", so you do not need to check that beforehand.\n\x09 * \n\x09 * The default implementation assumes that the current Animation Task is valid and a subtype of the\n\x09 * version provided by the combat system and used by default, \"UAbilityTask_PlayCombatAnimation\".\n\x09 *\n\x09 * @param SectionName\n\x09 *\x09\x09Name of the Montage Section to jump to. Must be different from NAME_None.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Moves the current animation montage to a given section.\n\nBefore jumping to a section, it will first check if the section is actually valid in the montage,\nwhich is the equivalent of calling \"HasSection\", so you do not need to check that beforehand.\n\nThe default implementation assumes that the current Animation Task is valid and a subtype of the\nversion provided by the combat system and used by default, \"UAbilityTask_PlayCombatAnimation\".\n\n@param SectionName\n             Name of the Montage Section to jump to. Must be different from NAME_None." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationAbility_eventMoveToSection_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::NewProp_SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "MoveToSection", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::NinjaCombatAnimationAbility_eventMoveToSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::NinjaCombatAnimationAbility_eventMoveToSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execMoveToSection)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToSection(Z_Param_SectionName);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function MoveToSection

// Begin Class UNinjaCombatAnimationAbility Function OnAnimationCancelled
static const FName NAME_UNinjaCombatAnimationAbility_OnAnimationCancelled = FName(TEXT("OnAnimationCancelled"));
void UNinjaCombatAnimationAbility::OnAnimationCancelled()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationAbility_OnAnimationCancelled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnAnimationCancelled_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Ability" },
		{ "Comment", "/**\n\x09 * Handles a Montage that has been cancelled or interrupted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Handles a Montage that has been cancelled or interrupted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "OnAnimationCancelled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execOnAnimationCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnimationCancelled_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function OnAnimationCancelled

// Begin Class UNinjaCombatAnimationAbility Function OnAnimationFinished
static const FName NAME_UNinjaCombatAnimationAbility_OnAnimationFinished = FName(TEXT("OnAnimationFinished"));
void UNinjaCombatAnimationAbility::OnAnimationFinished()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationAbility_OnAnimationFinished);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnAnimationFinished_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Ability" },
		{ "Comment", "/**\n\x09 * Handles a Montage that has been completed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Handles a Montage that has been completed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "OnAnimationFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execOnAnimationFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnimationFinished_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function OnAnimationFinished

// Begin Class UNinjaCombatAnimationAbility Function OnAnimationStarted
static const FName NAME_UNinjaCombatAnimationAbility_OnAnimationStarted = FName(TEXT("OnAnimationStarted"));
void UNinjaCombatAnimationAbility::OnAnimationStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationAbility_OnAnimationStarted);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnAnimationStarted_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Ability" },
		{ "Comment", "/**\n\x09 * Notifies when the animation starts playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Notifies when the animation starts playing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "OnAnimationStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execOnAnimationStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnimationStarted_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function OnAnimationStarted

// Begin Class UNinjaCombatAnimationAbility Function PlayAnimationMontage
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Plays the Animation Montage at the current Section.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Plays the Animation Montage at the current Section." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "PlayAnimationMontage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execPlayAnimationMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAnimationMontage();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function PlayAnimationMontage

// Begin Class UNinjaCombatAnimationAbility Function SetupAndPlayAnimation
static const FName NAME_UNinjaCombatAnimationAbility_SetupAndPlayAnimation = FName(TEXT("SetupAndPlayAnimation"));
void UNinjaCombatAnimationAbility::SetupAndPlayAnimation()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationAbility_SetupAndPlayAnimation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		SetupAndPlayAnimation_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Ability" },
		{ "Comment", "/**\n\x09 * Flexible method to initialize the Montage Task using the provided function and once\n\x09 * initialized, mark as ready to activate so the framework will activate the task.\n\x09 *\n\x09 * Override this if you want to treat scenarios where the task must be reused, such as\n\x09 * a Combo System or an ongoing animation that can reuse the task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Flexible method to initialize the Montage Task using the provided function and once\ninitialized, mark as ready to activate so the framework will activate the task.\n\nOverride this if you want to treat scenarios where the task must be reused, such as\na Combo System or an ongoing animation that can reuse the task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationAbility, nullptr, "SetupAndPlayAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationAbility::execSetupAndPlayAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAndPlayAnimation_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationAbility Function SetupAndPlayAnimation

// Begin Class UNinjaCombatAnimationAbility
void UNinjaCombatAnimationAbility::StaticRegisterNativesUNinjaCombatAnimationAbility()
{
	UClass* Class = UNinjaCombatAnimationAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasSection", &UNinjaCombatAnimationAbility::execHasSection },
		{ "InitializeAnimationTask", &UNinjaCombatAnimationAbility::execInitializeAnimationTask },
		{ "MoveToSection", &UNinjaCombatAnimationAbility::execMoveToSection },
		{ "OnAnimationCancelled", &UNinjaCombatAnimationAbility::execOnAnimationCancelled },
		{ "OnAnimationFinished", &UNinjaCombatAnimationAbility::execOnAnimationFinished },
		{ "OnAnimationStarted", &UNinjaCombatAnimationAbility::execOnAnimationStarted },
		{ "PlayAnimationMontage", &UNinjaCombatAnimationAbility::execPlayAnimationMontage },
		{ "SetupAndPlayAnimation", &UNinjaCombatAnimationAbility::execSetupAndPlayAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAnimationAbility);
UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility_NoRegister()
{
	return UNinjaCombatAnimationAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A combat ability that plays an Animation.\n */" },
		{ "IncludePath", "AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A combat ability that plays an Animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationProvider_MetaData[] = {
		{ "Category", "Combat Ability|Animation" },
		{ "Comment", "/** Provider used to retrieve an appropriate animation for this montage. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "Provider used to retrieve an appropriate animation for this montage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayMontageWhenActivated_MetaData[] = {
		{ "Category", "Combat Ability|Animation" },
		{ "Comment", "/**\n\x09 * Determines if the montage will be played as soon as the ability activates.\n\x09 *\n\x09 * You may choose not to do that if you want to have some additional condition to execute\n\x09 * before actually triggering the animation, therefore overriding the default behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Determines if the montage will be played as soon as the ability activates.\n\nYou may choose not to do that if you want to have some additional condition to execute\nbefore actually triggering the animation, therefore overriding the default behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchAnimationEnd_MetaData[] = {
		{ "Category", "Combat Ability|Animation" },
		{ "Comment", "/**\n\x09 * Determines if the ability should end/cancel with the Animation Montage.\n\x09 *\n\x09 * Montage events for Completing and Blending Out will result in the Ability being\n\x09 * properly finished and Interruptions or Cancellations will also cancel the ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Determines if the ability should end/cancel with the Animation Montage.\n\nMontage events for Completing and Blending Out will result in the Ability being\nproperly finished and Interruptions or Cancellations will also cancel the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionWarping_MetaData[] = {
		{ "Category", "Combat Ability|Motion Warping" },
		{ "Comment", "/** Determines if this Ability will use Motion Warping. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Determines if this Ability will use Motion Warping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollisionWithTarget_MetaData[] = {
		{ "Category", "Combat Ability|Motion Warping" },
		{ "Comment", "/**\n\x09 * If set to true, disables the collision between the avatar and the target.\n\x09 * Once the ability ends, the collision will be re-established.\n\x09 */" },
		{ "EditCondition", "bEnableMotionWarping" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "If set to true, disables the collision between the avatar and the target.\nOnce the ability ends, the collision will be re-established." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpName_MetaData[] = {
		{ "Category", "Combat Ability|Motion Warping" },
		{ "Comment", "/**\n\x09 * Name of the warp used for this ability.\n\x09 *\n\x09 * The default Motion Warping component implementation will also use this name to find Scene Components\n\x09 * on the target with a matching Component Tag. These Scene Components can be used to better control\n\x09 * the positioning (location and rotation) of the avatar, when a certain warp is triggered.\n\x09 */" },
		{ "EditCondition", "bEnableMotionWarping" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Name of the warp used for this ability.\n\nThe default Motion Warping component implementation will also use this name to find Scene Components\non the target with a matching Component Tag. These Scene Components can be used to better control\nthe positioning (location and rotation) of the avatar, when a certain warp is triggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpOffset_MetaData[] = {
		{ "Category", "Combat Ability|Motion Warping" },
		{ "Comment", "/** An offset added from the Target towards the Source. */" },
		{ "EditCondition", "bEnableMotionWarping" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "An offset added from the Target towards the Source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetProvider_MetaData[] = {
		{ "Category", "Combat Ability|Motion Warping" },
		{ "Comment", "/** Provides the Warp Target for this ability */" },
		{ "EditCondition", "bEnableMotionWarping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "Provides the Warp Target for this ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTask_MetaData[] = {
		{ "Comment", "/** The Ability Task used to play the animation. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAnimationAbility.h" },
		{ "ToolTip", "The Ability Task used to play the animation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationProvider;
	static void NewProp_bPlayMontageWhenActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayMontageWhenActivated;
	static void NewProp_bMatchAnimationEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAnimationEnd;
	static void NewProp_bEnableMotionWarping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionWarping;
	static void NewProp_bDisableCollisionWithTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollisionWithTarget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpTargetProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_HasSection, "HasSection" }, // 4077797104
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_InitializeAnimationTask, "InitializeAnimationTask" }, // 2317450193
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_MoveToSection, "MoveToSection" }, // 3726351568
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationCancelled, "OnAnimationCancelled" }, // 406742857
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationFinished, "OnAnimationFinished" }, // 1742335958
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_OnAnimationStarted, "OnAnimationStarted" }, // 3136447336
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_PlayAnimationMontage, "PlayAnimationMontage" }, // 1051745321
		{ &Z_Construct_UFunction_UNinjaCombatAnimationAbility_SetupAndPlayAnimation, "SetupAndPlayAnimation" }, // 2214760662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAnimationAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_AnimationProvider = { "AnimationProvider", nullptr, (EPropertyFlags)0x012608000209001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationAbility, AnimationProvider), Z_Construct_UClass_UNinjaCombatAnimationProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationProvider_MetaData), NewProp_AnimationProvider_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bPlayMontageWhenActivated_SetBit(void* Obj)
{
	((UNinjaCombatAnimationAbility*)Obj)->bPlayMontageWhenActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bPlayMontageWhenActivated = { "bPlayMontageWhenActivated", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimationAbility), &Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bPlayMontageWhenActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayMontageWhenActivated_MetaData), NewProp_bPlayMontageWhenActivated_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bMatchAnimationEnd_SetBit(void* Obj)
{
	((UNinjaCombatAnimationAbility*)Obj)->bMatchAnimationEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bMatchAnimationEnd = { "bMatchAnimationEnd", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimationAbility), &Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bMatchAnimationEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchAnimationEnd_MetaData), NewProp_bMatchAnimationEnd_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bEnableMotionWarping_SetBit(void* Obj)
{
	((UNinjaCombatAnimationAbility*)Obj)->bEnableMotionWarping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bEnableMotionWarping = { "bEnableMotionWarping", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimationAbility), &Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bEnableMotionWarping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMotionWarping_MetaData), NewProp_bEnableMotionWarping_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bDisableCollisionWithTarget_SetBit(void* Obj)
{
	((UNinjaCombatAnimationAbility*)Obj)->bDisableCollisionWithTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bDisableCollisionWithTarget = { "bDisableCollisionWithTarget", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimationAbility), &Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bDisableCollisionWithTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCollisionWithTarget_MetaData), NewProp_bDisableCollisionWithTarget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_WarpName = { "WarpName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationAbility, WarpName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpName_MetaData), NewProp_WarpName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_WarpOffset = { "WarpOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationAbility, WarpOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpOffset_MetaData), NewProp_WarpOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_WarpTargetProvider = { "WarpTargetProvider", nullptr, (EPropertyFlags)0x012608000209001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationAbility, WarpTargetProvider), Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargetProvider_MetaData), NewProp_WarpTargetProvider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_AnimationTask = { "AnimationTask", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationAbility, AnimationTask), Z_Construct_UClass_UAbilityTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTask_MetaData), NewProp_AnimationTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_AnimationProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bPlayMontageWhenActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bMatchAnimationEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bEnableMotionWarping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_bDisableCollisionWithTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_WarpName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_WarpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_WarpTargetProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::NewProp_AnimationTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatTargetReceiverInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatAnimationAbility, ICombatTargetReceiverInterface), false },  // 1762387683
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::ClassParams = {
	&UNinjaCombatAnimationAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAnimationAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAnimationAbility.OuterSingleton, Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAnimationAbility.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAnimationAbility>()
{
	return UNinjaCombatAnimationAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAnimationAbility);
UNinjaCombatAnimationAbility::~UNinjaCombatAnimationAbility() {}
// End Class UNinjaCombatAnimationAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAnimationAbility, UNinjaCombatAnimationAbility::StaticClass, TEXT("UNinjaCombatAnimationAbility"), &Z_Registration_Info_UClass_UNinjaCombatAnimationAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAnimationAbility), 3346524740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_1969415352(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraMode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeGameplayAbility Function GetOwnerEquippedWeapon
struct Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics
{
	struct NarrativeGameplayAbility_eventGetOwnerEquippedWeapon_Parms
	{
		UWeaponItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Ability" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayAbility_eventGetOwnerEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayAbility, nullptr, "GetOwnerEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::NarrativeGameplayAbility_eventGetOwnerEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::NarrativeGameplayAbility_eventGetOwnerEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameplayAbility::execGetOwnerEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWeaponItem**)Z_Param__Result=P_THIS->GetOwnerEquippedWeapon();
	P_NATIVE_END;
}
// End Class UNarrativeGameplayAbility Function GetOwnerEquippedWeapon

// Begin Class UNarrativeGameplayAbility Function GetOwningController
struct Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics
{
	struct NarrativeGameplayAbility_eventGetOwningController_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Ability" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayAbility_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayAbility, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::NarrativeGameplayAbility_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::NarrativeGameplayAbility_eventGetOwningController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameplayAbility::execGetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetOwningController();
	P_NATIVE_END;
}
// End Class UNarrativeGameplayAbility Function GetOwningController

// Begin Class UNarrativeGameplayAbility Function GetOwningNarrativeCharacter
struct Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics
{
	struct NarrativeGameplayAbility_eventGetOwningNarrativeCharacter_Parms
	{
		ANarrativeCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Ability" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayAbility_eventGetOwningNarrativeCharacter_Parms, ReturnValue), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayAbility, nullptr, "GetOwningNarrativeCharacter", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::NarrativeGameplayAbility_eventGetOwningNarrativeCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::NarrativeGameplayAbility_eventGetOwningNarrativeCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameplayAbility::execGetOwningNarrativeCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeCharacter**)Z_Param__Result=P_THIS->GetOwningNarrativeCharacter();
	P_NATIVE_END;
}
// End Class UNarrativeGameplayAbility Function GetOwningNarrativeCharacter

// Begin Class UNarrativeGameplayAbility Function IsBot
struct Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics
{
	struct NarrativeGameplayAbility_eventIsBot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//True if this ability is being ran by a bot \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
		{ "ToolTip", "True if this ability is being ran by a bot" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeGameplayAbility_eventIsBot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameplayAbility_eventIsBot_Parms), &Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayAbility, nullptr, "IsBot", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::NarrativeGameplayAbility_eventIsBot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::NarrativeGameplayAbility_eventIsBot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameplayAbility::execIsBot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBot();
	P_NATIVE_END;
}
// End Class UNarrativeGameplayAbility Function IsBot

// Begin Class UNarrativeGameplayAbility Function SetCameraMode
struct Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics
{
	struct NarrativeGameplayAbility_eventSetCameraMode_Parms
	{
		TSubclassOf<UNarrativeCameraMode> CameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//Nice function for setting camera mode instead of having to grab camera and doing it manually\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
		{ "ToolTip", "Nice function for setting camera mode instead of having to grab camera and doing it manually" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::NarrativeGameplayAbility_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::NarrativeGameplayAbility_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameplayAbility::execSetCameraMode)
{
	P_GET_OBJECT(UClass,Z_Param_CameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_CameraMode);
	P_NATIVE_END;
}
// End Class UNarrativeGameplayAbility Function SetCameraMode

// Begin Class UNarrativeGameplayAbility
void UNarrativeGameplayAbility::StaticRegisterNativesUNarrativeGameplayAbility()
{
	UClass* Class = UNarrativeGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwnerEquippedWeapon", &UNarrativeGameplayAbility::execGetOwnerEquippedWeapon },
		{ "GetOwningController", &UNarrativeGameplayAbility::execGetOwningController },
		{ "GetOwningNarrativeCharacter", &UNarrativeGameplayAbility::execGetOwningNarrativeCharacter },
		{ "IsBot", &UNarrativeGameplayAbility::execIsBot },
		{ "SetCameraMode", &UNarrativeGameplayAbility::execSetCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeGameplayAbility);
UClass* Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister()
{
	return UNarrativeGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UNarrativeGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all abilities in the Narrative pro toolkit. \n */" },
		{ "IncludePath", "GAS/NarrativeGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
		{ "ToolTip", "The base class for all abilities in the Narrative pro toolkit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//When we grant a set of abilities to the player, this is the input this ability will map to. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
		{ "ToolTip", "When we grant a set of abilities to the player, this is the input this ability will map to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActivateAbilityOnGranted_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "// Tells an ability to activate immediately when its granted\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
		{ "ToolTip", "Tells an ability to activate immediately when its granted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputID;
	static void NewProp_bActivateAbilityOnGranted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateAbilityOnGranted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwnerEquippedWeapon, "GetOwnerEquippedWeapon" }, // 890809742
		{ &Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningController, "GetOwningController" }, // 1551994393
		{ &Z_Construct_UFunction_UNarrativeGameplayAbility_GetOwningNarrativeCharacter, "GetOwningNarrativeCharacter" }, // 258048555
		{ &Z_Construct_UFunction_UNarrativeGameplayAbility_IsBot, "IsBot" }, // 1985120451
		{ &Z_Construct_UFunction_UNarrativeGameplayAbility_SetCameraMode, "SetCameraMode" }, // 103253294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_InputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameplayAbility, InputID), Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputID_MetaData), NewProp_InputID_MetaData) }; // 818456468
void Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_SetBit(void* Obj)
{
	((UNarrativeGameplayAbility*)Obj)->bActivateAbilityOnGranted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted = { "bActivateAbilityOnGranted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeGameplayAbility), &Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActivateAbilityOnGranted_MetaData), NewProp_bActivateAbilityOnGranted_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameplayAbility, CharacterOwner), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_InputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_InputID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayAbility_Statics::NewProp_CharacterOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeGameplayAbility_Statics::ClassParams = {
	&UNarrativeGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UNarrativeGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeGameplayAbility.OuterSingleton, Z_Construct_UClass_UNarrativeGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeGameplayAbility.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeGameplayAbility>()
{
	return UNarrativeGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeGameplayAbility);
UNarrativeGameplayAbility::~UNarrativeGameplayAbility() {}
// End Class UNarrativeGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeGameplayAbility, UNarrativeGameplayAbility::StaticClass, TEXT("UNarrativeGameplayAbility"), &Z_Registration_Info_UClass_UNarrativeGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeGameplayAbility), 3104542454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeGameplayAbility_h_3144673698(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

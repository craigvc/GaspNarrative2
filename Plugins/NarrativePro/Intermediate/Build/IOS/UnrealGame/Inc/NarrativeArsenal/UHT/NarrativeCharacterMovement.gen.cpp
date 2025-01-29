// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Character/NarrativeCharacterMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCharacterMovement() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCharacterMovement();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCharacterMovement_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum ENarrativeCustomMovementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENarrativeCustomMovementMode;
static UEnum* ENarrativeCustomMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENarrativeCustomMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENarrativeCustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ENarrativeCustomMovementMode"));
	}
	return Z_Registration_Info_UEnum_ENarrativeCustomMovementMode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeCustomMovementMode>()
{
	return ENarrativeCustomMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CMOVE_Climb.DisplayName", "Climb" },
		{ "CMOVE_Climb.Name", "CMOVE_Climb" },
		{ "CMOVE_MAX.Hidden", "" },
		{ "CMOVE_MAX.Name", "CMOVE_MAX" },
		{ "CMOVE_None.Hidden", "" },
		{ "CMOVE_None.Name", "CMOVE_None" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CMOVE_None", (int64)CMOVE_None },
		{ "CMOVE_Climb", (int64)CMOVE_Climb },
		{ "CMOVE_MAX", (int64)CMOVE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"ENarrativeCustomMovementMode",
	"ENarrativeCustomMovementMode",
	Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode()
{
	if (!Z_Registration_Info_UEnum_ENarrativeCustomMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENarrativeCustomMovementMode.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENarrativeCustomMovementMode.InnerSingleton;
}
// End Enum ENarrativeCustomMovementMode

// Begin Enum ENarrativeClimbMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENarrativeClimbMode;
static UEnum* ENarrativeClimbMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENarrativeClimbMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENarrativeClimbMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ENarrativeClimbMode"));
	}
	return Z_Registration_Info_UEnum_ENarrativeClimbMode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeClimbMode>()
{
	return ENarrativeClimbMode_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.Name", "ENarrativeClimbMode::Idle" },
		{ "Jump.Comment", "// Lateral Strafing along Climb Surface\n" },
		{ "Jump.Name", "ENarrativeClimbMode::Jump" },
		{ "Jump.ToolTip", "Lateral Strafing along Climb Surface" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "Strafe.Comment", "// Motionless hang on Climb Surface\n" },
		{ "Strafe.Name", "ENarrativeClimbMode::Strafe" },
		{ "Strafe.ToolTip", "Motionless hang on Climb Surface" },
		{ "Turn.Comment", "// Planar Jump Transition to new Climb Surface\n" },
		{ "Turn.Name", "ENarrativeClimbMode::Turn" },
		{ "Turn.ToolTip", "Planar Jump Transition to new Climb Surface" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENarrativeClimbMode::Idle", (int64)ENarrativeClimbMode::Idle },
		{ "ENarrativeClimbMode::Strafe", (int64)ENarrativeClimbMode::Strafe },
		{ "ENarrativeClimbMode::Jump", (int64)ENarrativeClimbMode::Jump },
		{ "ENarrativeClimbMode::Turn", (int64)ENarrativeClimbMode::Turn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"ENarrativeClimbMode",
	"ENarrativeClimbMode",
	Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode()
{
	if (!Z_Registration_Info_UEnum_ENarrativeClimbMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENarrativeClimbMode.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENarrativeClimbMode.InnerSingleton;
}
// End Enum ENarrativeClimbMode

// Begin Class UNarrativeCharacterMovement Function GetClimbMode
struct Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics
{
	struct NarrativeCharacterMovement_eventGetClimbMode_Parms
	{
		ENarrativeClimbMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventGetClimbMode_Parms, ReturnValue), Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode, METADATA_PARAMS(0, nullptr) }; // 3124511179
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "GetClimbMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::NarrativeCharacterMovement_eventGetClimbMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::NarrativeCharacterMovement_eventGetClimbMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execGetClimbMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ENarrativeClimbMode*)Z_Param__Result=P_THIS->GetClimbMode();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function GetClimbMode

// Begin Class UNarrativeCharacterMovement Function GetClimbSurface
struct Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics
{
	struct NarrativeCharacterMovement_eventGetClimbSurface_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventGetClimbSurface_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "GetClimbSurface", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::NarrativeCharacterMovement_eventGetClimbSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::NarrativeCharacterMovement_eventGetClimbSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execGetClimbSurface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetClimbSurface();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function GetClimbSurface

// Begin Class UNarrativeCharacterMovement Function GetDesiredClimbMode
struct Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics
{
	struct NarrativeCharacterMovement_eventGetDesiredClimbMode_Parms
	{
		ENarrativeClimbMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventGetDesiredClimbMode_Parms, ReturnValue), Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode, METADATA_PARAMS(0, nullptr) }; // 3124511179
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "GetDesiredClimbMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::NarrativeCharacterMovement_eventGetDesiredClimbMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::NarrativeCharacterMovement_eventGetDesiredClimbMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execGetDesiredClimbMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ENarrativeClimbMode*)Z_Param__Result=P_THIS->GetDesiredClimbMode();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function GetDesiredClimbMode

// Begin Class UNarrativeCharacterMovement Function GetLocalInputVector
struct Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics
{
	struct NarrativeCharacterMovement_eventGetLocalInputVector_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeCharacterMovement" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventGetLocalInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "GetLocalInputVector", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::NarrativeCharacterMovement_eventGetLocalInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::NarrativeCharacterMovement_eventGetLocalInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execGetLocalInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetLocalInputVector();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function GetLocalInputVector

// Begin Class UNarrativeCharacterMovement Function GetPreviousClimbSurface
struct Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics
{
	struct NarrativeCharacterMovement_eventGetPreviousClimbSurface_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventGetPreviousClimbSurface_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "GetPreviousClimbSurface", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::NarrativeCharacterMovement_eventGetPreviousClimbSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::NarrativeCharacterMovement_eventGetPreviousClimbSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execGetPreviousClimbSurface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetPreviousClimbSurface();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function GetPreviousClimbSurface

// Begin Class UNarrativeCharacterMovement Function IsClimbing
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics
{
	struct NarrativeCharacterMovement_eventIsClimbing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsClimbing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsClimbing_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsClimbing", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::NarrativeCharacterMovement_eventIsClimbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::NarrativeCharacterMovement_eventIsClimbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsClimbing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClimbing();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsClimbing

// Begin Class UNarrativeCharacterMovement Function IsCustomMovementMode
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics
{
	struct NarrativeCharacterMovement_eventIsCustomMovementMode_Parms
	{
		TEnumAsByte<ENarrativeCustomMovementMode> InCustomMovementMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeCharacterMovement" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCustomMovementMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NewProp_InCustomMovementMode = { "InCustomMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventIsCustomMovementMode_Parms, InCustomMovementMode), Z_Construct_UEnum_NarrativeArsenal_ENarrativeCustomMovementMode, METADATA_PARAMS(0, nullptr) }; // 2954134896
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsCustomMovementMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsCustomMovementMode_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NewProp_InCustomMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsCustomMovementMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NarrativeCharacterMovement_eventIsCustomMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::NarrativeCharacterMovement_eventIsCustomMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsCustomMovementMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InCustomMovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCustomMovementMode(ENarrativeCustomMovementMode(Z_Param_InCustomMovementMode));
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsCustomMovementMode

// Begin Class UNarrativeCharacterMovement Function IsMovementMode
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics
{
	struct NarrativeCharacterMovement_eventIsMovementMode_Parms
	{
		TEnumAsByte<EMovementMode> InMovementMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NarrativeCharacterMovement" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMovementMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NewProp_InMovementMode = { "InMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventIsMovementMode_Parms, InMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 1967555749
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsMovementMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsMovementMode_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NewProp_InMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsMovementMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NarrativeCharacterMovement_eventIsMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::NarrativeCharacterMovement_eventIsMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsMovementMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InMovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMovementMode(EMovementMode(Z_Param_InMovementMode));
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsMovementMode

// Begin Class UNarrativeCharacterMovement Function IsMovingForward
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics
{
	struct NarrativeCharacterMovement_eventIsMovingForward_Parms
	{
		float ForwardAngleTolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**Return true if we are moving forward - used by sprint ability \n\x09@param ForwardAngleTolerance the angle degrees we can be off by and still be considered to be moving forwards */" },
		{ "CPP_Default_ForwardAngleTolerance", "10.000000" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Return true if we are moving forward - used by sprint ability\n       @param ForwardAngleTolerance the angle degrees we can be off by and still be considered to be moving forwards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAngleTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAngleTolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NewProp_ForwardAngleTolerance = { "ForwardAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterMovement_eventIsMovingForward_Parms, ForwardAngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAngleTolerance_MetaData), NewProp_ForwardAngleTolerance_MetaData) };
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsMovingForward_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsMovingForward_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NewProp_ForwardAngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsMovingForward", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NarrativeCharacterMovement_eventIsMovingForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::NarrativeCharacterMovement_eventIsMovingForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsMovingForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardAngleTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMovingForward(Z_Param_ForwardAngleTolerance);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsMovingForward

// Begin Class UNarrativeCharacterMovement Function IsSlowWalking
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics
{
	struct NarrativeCharacterMovement_eventIsSlowWalking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**Return true if we are slow walking  */" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Return true if we are slow walking" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsSlowWalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsSlowWalking_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsSlowWalking", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::NarrativeCharacterMovement_eventIsSlowWalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::NarrativeCharacterMovement_eventIsSlowWalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsSlowWalking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlowWalking();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsSlowWalking

// Begin Class UNarrativeCharacterMovement Function IsSprinting
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics
{
	struct NarrativeCharacterMovement_eventIsSprinting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**Return true if we are sprinting  */" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Return true if we are sprinting" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsSprinting_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsSprinting", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::NarrativeCharacterMovement_eventIsSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::NarrativeCharacterMovement_eventIsSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSprinting();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsSprinting

// Begin Class UNarrativeCharacterMovement Function IsTransitionClimbMode
struct Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics
{
	struct NarrativeCharacterMovement_eventIsTransitionClimbMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterMovement_eventIsTransitionClimbMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterMovement_eventIsTransitionClimbMode_Parms), &Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "IsTransitionClimbMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::NarrativeCharacterMovement_eventIsTransitionClimbMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::NarrativeCharacterMovement_eventIsTransitionClimbMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execIsTransitionClimbMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTransitionClimbMode();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function IsTransitionClimbMode

// Begin Class UNarrativeCharacterMovement Function StartSprinting
struct Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**Request to start sprinting*/" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Request to start sprinting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "StartSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execStartSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprinting();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function StartSprinting

// Begin Class UNarrativeCharacterMovement Function StopSprinting
struct Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**Request to stop sprinting*/" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Request to stop sprinting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterMovement, nullptr, "StopSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterMovement::execStopSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprinting();
	P_NATIVE_END;
}
// End Class UNarrativeCharacterMovement Function StopSprinting

// Begin Class UNarrativeCharacterMovement
void UNarrativeCharacterMovement::StaticRegisterNativesUNarrativeCharacterMovement()
{
	UClass* Class = UNarrativeCharacterMovement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClimbMode", &UNarrativeCharacterMovement::execGetClimbMode },
		{ "GetClimbSurface", &UNarrativeCharacterMovement::execGetClimbSurface },
		{ "GetDesiredClimbMode", &UNarrativeCharacterMovement::execGetDesiredClimbMode },
		{ "GetLocalInputVector", &UNarrativeCharacterMovement::execGetLocalInputVector },
		{ "GetPreviousClimbSurface", &UNarrativeCharacterMovement::execGetPreviousClimbSurface },
		{ "IsClimbing", &UNarrativeCharacterMovement::execIsClimbing },
		{ "IsCustomMovementMode", &UNarrativeCharacterMovement::execIsCustomMovementMode },
		{ "IsMovementMode", &UNarrativeCharacterMovement::execIsMovementMode },
		{ "IsMovingForward", &UNarrativeCharacterMovement::execIsMovingForward },
		{ "IsSlowWalking", &UNarrativeCharacterMovement::execIsSlowWalking },
		{ "IsSprinting", &UNarrativeCharacterMovement::execIsSprinting },
		{ "IsTransitionClimbMode", &UNarrativeCharacterMovement::execIsTransitionClimbMode },
		{ "StartSprinting", &UNarrativeCharacterMovement::execStartSprinting },
		{ "StopSprinting", &UNarrativeCharacterMovement::execStopSprinting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCharacterMovement);
UClass* Z_Construct_UClass_UNarrativeCharacterMovement_NoRegister()
{
	return UNarrativeCharacterMovement::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCharacterMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom movement component for Narrative Pro. \n */" },
		{ "IncludePath", "Character/NarrativeCharacterMovement.h" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Custom movement component for Narrative Pro." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Sprint" },
		{ "Comment", "//Units per second we should travel at when sprinting\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Units per second we should travel at when sprinting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowWalkSpeed_MetaData[] = {
		{ "Category", "Walking" },
		{ "Comment", "//Units per second we should travel at when walking \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Units per second we should travel at when walking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbForwardSearchDistance_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbWallOffset_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbHangOffset_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// horizontal offset distance\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "horizontal offset distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbSurfaceReattachDistance_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// vertical hang offset distance\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "vertical hang offset distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbStrafeSpeed_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// distance at which old climb surface resets (prevents instantly reclimbing on same surface)\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "distance at which old climb surface resets (prevents instantly reclimbing on same surface)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbRotationSpeedDegrees_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbJumpReachDistance_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbJumpReachWidth_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMaxLedgeAngleDegrees_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbLocalAscendTransitionBoost_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbLocalDecendTransitionBoost_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// controls the climb surface ascent spring transition\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "controls the climb surface ascent spring transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbTurnReachDepth_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// controls the climb surface decent spring transition\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "controls the climb surface decent spring transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbJumpZVelocity_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbJumpHorizontalVelocity_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbTransitionSpeedFactor_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbTransitionForceFactor_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbSurface_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// Wall point the capsule is \"attached\" to, with rotation corresponding to X-Axis = -WallNormal and Z-Axis = LedgeUpVector\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Wall point the capsule is \"attached\" to, with rotation corresponding to X-Axis = -WallNormal and Z-Axis = LedgeUpVector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousClimbSurface_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// Previous climb surface, either a fractional step in behind strafe point or the previous climb point we are transitioning from\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "Previous climb surface, either a fractional step in behind strafe point or the previous climb point we are transitioning from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMode_MetaData[] = {
		{ "Category", "Climb" },
		{ "Comment", "// UPROPERTY(VisibleAnywhere)\n// bool bTransitioning;\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere)\nbool bTransitioning;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredClimbMode_MetaData[] = {
		{ "Category", "Climb" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeCharacterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbForwardSearchDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbWallOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbHangOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbSurfaceReattachDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbStrafeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbRotationSpeedDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbJumpReachDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbJumpReachWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbMaxLedgeAngleDegrees;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClimbLocalAscendTransitionBoost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClimbLocalDecendTransitionBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbTurnReachDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbJumpZVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbJumpHorizontalVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbTransitionSpeedFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbTransitionForceFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClimbSurface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousClimbSurface;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClimbMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClimbMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredClimbMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredClimbMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeCharacterOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbMode, "GetClimbMode" }, // 1643966106
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_GetClimbSurface, "GetClimbSurface" }, // 3494924044
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_GetDesiredClimbMode, "GetDesiredClimbMode" }, // 3082771507
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_GetLocalInputVector, "GetLocalInputVector" }, // 3854894472
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_GetPreviousClimbSurface, "GetPreviousClimbSurface" }, // 2112551216
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsClimbing, "IsClimbing" }, // 927207504
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsCustomMovementMode, "IsCustomMovementMode" }, // 1489621093
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovementMode, "IsMovementMode" }, // 4157190507
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsMovingForward, "IsMovingForward" }, // 2436775043
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsSlowWalking, "IsSlowWalking" }, // 3607348209
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsSprinting, "IsSprinting" }, // 493330419
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_IsTransitionClimbMode, "IsTransitionClimbMode" }, // 727933227
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_StartSprinting, "StartSprinting" }, // 3248296309
		{ &Z_Construct_UFunction_UNarrativeCharacterMovement_StopSprinting, "StopSprinting" }, // 848863534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCharacterMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_SlowWalkSpeed = { "SlowWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, SlowWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowWalkSpeed_MetaData), NewProp_SlowWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbForwardSearchDistance = { "ClimbForwardSearchDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbForwardSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbForwardSearchDistance_MetaData), NewProp_ClimbForwardSearchDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbWallOffset = { "ClimbWallOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbWallOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbWallOffset_MetaData), NewProp_ClimbWallOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbHangOffset = { "ClimbHangOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbHangOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbHangOffset_MetaData), NewProp_ClimbHangOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbSurfaceReattachDistance = { "ClimbSurfaceReattachDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbSurfaceReattachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbSurfaceReattachDistance_MetaData), NewProp_ClimbSurfaceReattachDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbStrafeSpeed = { "ClimbStrafeSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbStrafeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbStrafeSpeed_MetaData), NewProp_ClimbStrafeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbRotationSpeedDegrees = { "ClimbRotationSpeedDegrees", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbRotationSpeedDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbRotationSpeedDegrees_MetaData), NewProp_ClimbRotationSpeedDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpReachDistance = { "ClimbJumpReachDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbJumpReachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbJumpReachDistance_MetaData), NewProp_ClimbJumpReachDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpReachWidth = { "ClimbJumpReachWidth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbJumpReachWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbJumpReachWidth_MetaData), NewProp_ClimbJumpReachWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbMaxLedgeAngleDegrees = { "ClimbMaxLedgeAngleDegrees", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbMaxLedgeAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMaxLedgeAngleDegrees_MetaData), NewProp_ClimbMaxLedgeAngleDegrees_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbLocalAscendTransitionBoost = { "ClimbLocalAscendTransitionBoost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbLocalAscendTransitionBoost), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbLocalAscendTransitionBoost_MetaData), NewProp_ClimbLocalAscendTransitionBoost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbLocalDecendTransitionBoost = { "ClimbLocalDecendTransitionBoost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbLocalDecendTransitionBoost), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbLocalDecendTransitionBoost_MetaData), NewProp_ClimbLocalDecendTransitionBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbTurnReachDepth = { "ClimbTurnReachDepth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbTurnReachDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbTurnReachDepth_MetaData), NewProp_ClimbTurnReachDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpZVelocity = { "ClimbJumpZVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbJumpZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbJumpZVelocity_MetaData), NewProp_ClimbJumpZVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpHorizontalVelocity = { "ClimbJumpHorizontalVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbJumpHorizontalVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbJumpHorizontalVelocity_MetaData), NewProp_ClimbJumpHorizontalVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbTransitionSpeedFactor = { "ClimbTransitionSpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbTransitionSpeedFactor), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbTransitionSpeedFactor_MetaData), NewProp_ClimbTransitionSpeedFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbTransitionForceFactor = { "ClimbTransitionForceFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbTransitionForceFactor), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbTransitionForceFactor_MetaData), NewProp_ClimbTransitionForceFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbSurface = { "ClimbSurface", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbSurface), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbSurface_MetaData), NewProp_ClimbSurface_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_PreviousClimbSurface = { "PreviousClimbSurface", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, PreviousClimbSurface), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousClimbSurface_MetaData), NewProp_PreviousClimbSurface_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbMode = { "ClimbMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, ClimbMode), Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMode_MetaData), NewProp_ClimbMode_MetaData) }; // 3124511179
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_DesiredClimbMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_DesiredClimbMode = { "DesiredClimbMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, DesiredClimbMode), Z_Construct_UEnum_NarrativeArsenal_ENarrativeClimbMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredClimbMode_MetaData), NewProp_DesiredClimbMode_MetaData) }; // 3124511179
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_NarrativeCharacterOwner = { "NarrativeCharacterOwner", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterMovement, NarrativeCharacterOwner), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeCharacterOwner_MetaData), NewProp_NarrativeCharacterOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCharacterMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_SlowWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbForwardSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbWallOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbHangOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbSurfaceReattachDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbStrafeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbRotationSpeedDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpReachDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpReachWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbMaxLedgeAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbLocalAscendTransitionBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbLocalDecendTransitionBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbTurnReachDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbJumpHorizontalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbTransitionSpeedFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbTransitionForceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_PreviousClimbSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_ClimbMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_DesiredClimbMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_DesiredClimbMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterMovement_Statics::NewProp_NarrativeCharacterOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCharacterMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCharacterMovement_Statics::ClassParams = {
	&UNarrativeCharacterMovement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCharacterMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterMovement_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCharacterMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCharacterMovement()
{
	if (!Z_Registration_Info_UClass_UNarrativeCharacterMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCharacterMovement.OuterSingleton, Z_Construct_UClass_UNarrativeCharacterMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCharacterMovement.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCharacterMovement>()
{
	return UNarrativeCharacterMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCharacterMovement);
UNarrativeCharacterMovement::~UNarrativeCharacterMovement() {}
// End Class UNarrativeCharacterMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENarrativeCustomMovementMode_StaticEnum, TEXT("ENarrativeCustomMovementMode"), &Z_Registration_Info_UEnum_ENarrativeCustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2954134896U) },
		{ ENarrativeClimbMode_StaticEnum, TEXT("ENarrativeClimbMode"), &Z_Registration_Info_UEnum_ENarrativeClimbMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3124511179U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCharacterMovement, UNarrativeCharacterMovement::StaticClass, TEXT("UNarrativeCharacterMovement"), &Z_Registration_Info_UClass_UNarrativeCharacterMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCharacterMovement), 562958715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_313903049(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

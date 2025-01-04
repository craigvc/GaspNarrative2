// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Damage/Handlers/DamageHandler_CameraShake.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler_CameraShake() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_CameraShake();
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_CameraShake_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDamageReaction();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FCameraShakeDamageReaction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction;
class UScriptStruct* FCameraShakeDamageReaction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeDamageReaction, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("CameraShakeDamageReaction"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FCameraShakeDamageReaction>()
{
	return FCameraShakeDamageReaction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configuration Class for the Camera Shake. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Configuration Class for the Camera Shake." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Categories", "Combat.Effect.Damage" },
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Tags for the camera shake. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Tags for the camera shake." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** If present, these tags will not trigger the shake. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "If present, these tags will not trigger the shake." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Camera shake for this reaction. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Camera shake for this reaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Scale for this camera shake. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Scale for this camera shake." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeDamageReaction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeDamageReaction, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeDamageReaction, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedTags_MetaData), NewProp_BlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeDamageReaction, CameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShake_MetaData), NewProp_CameraShake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeDamageReaction, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_BlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_CameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"CameraShakeDamageReaction",
	Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::PropPointers),
	sizeof(FCameraShakeDamageReaction),
	alignof(FCameraShakeDamageReaction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDamageReaction()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction.InnerSingleton;
}
// End ScriptStruct FCameraShakeDamageReaction

// Begin Class UDamageHandler_CameraShake Function GetCameraShake
struct Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics
{
	struct DamageHandler_CameraShake_eventGetCameraShake_Parms
	{
		FGameplayCueParameters Parameters;
		TSubclassOf<UCameraShakeBase> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Provides the camera shake to be used, based on the provided Parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Provides the camera shake to be used, based on the provided Parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageHandler_CameraShake_eventGetCameraShake_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageHandler_CameraShake_eventGetCameraShake_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageHandler_CameraShake, nullptr, "GetCameraShake", nullptr, nullptr, Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::DamageHandler_CameraShake_eventGetCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::DamageHandler_CameraShake_eventGetCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDamageHandler_CameraShake::execGetCameraShake)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UCameraShakeBase>*)Z_Param__Result=P_THIS->GetCameraShake(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UDamageHandler_CameraShake Function GetCameraShake

// Begin Class UDamageHandler_CameraShake Function GetScale
struct Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics
{
	struct DamageHandler_CameraShake_eventGetScale_Parms
	{
		FGameplayCueParameters Parameters;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Provides the scale to be used for the camera shake, based on the provided Parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Provides the scale to be used for the camera shake, based on the provided Parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageHandler_CameraShake_eventGetScale_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageHandler_CameraShake_eventGetScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageHandler_CameraShake, nullptr, "GetScale", nullptr, nullptr, Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::DamageHandler_CameraShake_eventGetScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::DamageHandler_CameraShake_eventGetScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDamageHandler_CameraShake::execGetScale)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScale(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UDamageHandler_CameraShake Function GetScale

// Begin Class UDamageHandler_CameraShake
void UDamageHandler_CameraShake::StaticRegisterNativesUDamageHandler_CameraShake()
{
	UClass* Class = UDamageHandler_CameraShake::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraShake", &UDamageHandler_CameraShake::execGetCameraShake },
		{ "GetScale", &UDamageHandler_CameraShake::execGetScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageHandler_CameraShake);
UClass* Z_Construct_UClass_UDamageHandler_CameraShake_NoRegister()
{
	return UDamageHandler_CameraShake::StaticClass();
}
struct Z_Construct_UClass_UDamageHandler_CameraShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Plays a camera shake from incoming damage.\n */" },
		{ "DisplayName", "Camera Shake" },
		{ "IncludePath", "Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Plays a camera shake from incoming damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraShake_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** Default Camera Shake in case a specific one is not found. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Default Camera Shake in case a specific one is not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualCameraShakes_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** Contextual camera shakes, played for certain types of damage. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "Contextual camera shakes, played for certain types of damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScale_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** A default scale for this camera shake. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_CameraShake.h" },
		{ "ToolTip", "A default scale for this camera shake." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCameraShake;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextualCameraShakes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextualCameraShakes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageHandler_CameraShake_GetCameraShake, "GetCameraShake" }, // 1819313388
		{ &Z_Construct_UFunction_UDamageHandler_CameraShake_GetScale, "GetScale" }, // 900639897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageHandler_CameraShake>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_DefaultCameraShake = { "DefaultCameraShake", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageHandler_CameraShake, DefaultCameraShake), Z_Construct_UScriptStruct_FCameraShakeDamageReaction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraShake_MetaData), NewProp_DefaultCameraShake_MetaData) }; // 1262705924
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_ContextualCameraShakes_Inner = { "ContextualCameraShakes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraShakeDamageReaction, METADATA_PARAMS(0, nullptr) }; // 1262705924
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_ContextualCameraShakes = { "ContextualCameraShakes", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageHandler_CameraShake, ContextualCameraShakes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualCameraShakes_MetaData), NewProp_ContextualCameraShakes_MetaData) }; // 1262705924
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_DefaultScale = { "DefaultScale", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageHandler_CameraShake, DefaultScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScale_MetaData), NewProp_DefaultScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageHandler_CameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_DefaultCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_ContextualCameraShakes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_ContextualCameraShakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_CameraShake_Statics::NewProp_DefaultScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_CameraShake_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageHandler_CameraShake_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDamageHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_CameraShake_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_CameraShake_Statics::ClassParams = {
	&UDamageHandler_CameraShake::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDamageHandler_CameraShake_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_CameraShake_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_CameraShake_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageHandler_CameraShake_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageHandler_CameraShake()
{
	if (!Z_Registration_Info_UClass_UDamageHandler_CameraShake.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageHandler_CameraShake.OuterSingleton, Z_Construct_UClass_UDamageHandler_CameraShake_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageHandler_CameraShake.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UDamageHandler_CameraShake>()
{
	return UDamageHandler_CameraShake::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler_CameraShake);
UDamageHandler_CameraShake::~UDamageHandler_CameraShake() {}
// End Class UDamageHandler_CameraShake

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_CameraShake_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraShakeDamageReaction::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeDamageReaction_Statics::NewStructOps, TEXT("CameraShakeDamageReaction"), &Z_Registration_Info_UScriptStruct_CameraShakeDamageReaction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeDamageReaction), 1262705924U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageHandler_CameraShake, UDamageHandler_CameraShake::StaticClass, TEXT("UDamageHandler_CameraShake"), &Z_Registration_Info_UClass_UDamageHandler_CameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageHandler_CameraShake), 2894925410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_CameraShake_h_231565055(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_CameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_CameraShake_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_CameraShake_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_CameraShake_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatProjectileActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatProjectileActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatProjectileActor();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatProjectileActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatProjectileInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCosmeticsComponent_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_ANinjaCombatPoolableActor();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum EProjectileAimingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileAimingMode;
static UEnum* EProjectileAimingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileAimingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileAimingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("EProjectileAimingMode"));
	}
	return Z_Registration_Info_UEnum_EProjectileAimingMode.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<EProjectileAimingMode>()
{
	return EProjectileAimingMode_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** How the projectile will be aimed for first launch. */" },
		{ "Forward.Name", "EProjectileAimingMode::Forward" },
		{ "Location.Name", "EProjectileAimingMode::Location" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "TargetingSystem.Name", "EProjectileAimingMode::TargetingSystem" },
		{ "ToolTip", "How the projectile will be aimed for first launch." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileAimingMode::Forward", (int64)EProjectileAimingMode::Forward },
		{ "EProjectileAimingMode::TargetingSystem", (int64)EProjectileAimingMode::TargetingSystem },
		{ "EProjectileAimingMode::Location", (int64)EProjectileAimingMode::Location },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"EProjectileAimingMode",
	"EProjectileAimingMode",
	Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode()
{
	if (!Z_Registration_Info_UEnum_EProjectileAimingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileAimingMode.InnerSingleton, Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileAimingMode.InnerSingleton;
}
// End Enum EProjectileAimingMode

// Begin Class ANinjaCombatProjectileActor Function AdjustHitResult
struct NinjaCombatProjectileActor_eventAdjustHitResult_Parms
{
	FHitResult ImpactResult;
	FHitResult AdjustedResult;
};
static const FName NAME_ANinjaCombatProjectileActor_AdjustHitResult = FName(TEXT("AdjustHitResult"));
void ANinjaCombatProjectileActor::AdjustHitResult(FHitResult const& ImpactResult, FHitResult& AdjustedResult)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_AdjustHitResult);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventAdjustHitResult_Parms Parms;
		Parms.ImpactResult=ImpactResult;
		Parms.AdjustedResult=AdjustedResult;
	ProcessEvent(Func,&Parms);
		AdjustedResult=Parms.AdjustedResult;
	}
	else
	{
		AdjustHitResult_Implementation(ImpactResult, AdjustedResult);
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Adjusts a Hit Result in case you need to trace from an impact on the Capsule to one on the Mesh.\n\x09 *\n\x09 * @param ImpactResult\x09\x09The Impact Result from a collision. \n\x09 * @param AdjustedResult\x09The Adjusted Result used in the Gameplay Effect Context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Adjusts a Hit Result in case you need to trace from an impact on the Capsule to one on the Mesh.\n\n@param ImpactResult          The Impact Result from a collision.\n@param AdjustedResult        The Adjusted Result used in the Gameplay Effect Context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustedResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventAdjustHitResult_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::NewProp_AdjustedResult = { "AdjustedResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventAdjustHitResult_Parms, AdjustedResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::NewProp_AdjustedResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "AdjustHitResult", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventAdjustHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventAdjustHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execAdjustHitResult)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_AdjustedResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustHitResult_Implementation(Z_Param_Out_ImpactResult,Z_Param_Out_AdjustedResult);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function AdjustHitResult

// Begin Class ANinjaCombatProjectileActor Function GetAdditionalSetByCallerMagnitudes
struct NinjaCombatProjectileActor_eventGetAdditionalSetByCallerMagnitudes_Parms
{
	TMap<FGameplayTag,float> ReturnValue;
};
static const FName NAME_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes = FName(TEXT("GetAdditionalSetByCallerMagnitudes"));
TMap<FGameplayTag,float> ANinjaCombatProjectileActor::GetAdditionalSetByCallerMagnitudes() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventGetAdditionalSetByCallerMagnitudes_Parms Parms;
		const_cast<ANinjaCombatProjectileActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatProjectileActor*>(this)->GetAdditionalSetByCallerMagnitudes_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/**\n\x09 * Allows the caller to set any additional magnitudes, based on any applicable rule.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Allows the caller to set any additional magnitudes, based on any applicable rule." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetAdditionalSetByCallerMagnitudes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetAdditionalSetByCallerMagnitudes", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventGetAdditionalSetByCallerMagnitudes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventGetAdditionalSetByCallerMagnitudes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetAdditionalSetByCallerMagnitudes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FGameplayTag,float>*)Z_Param__Result=P_THIS->GetAdditionalSetByCallerMagnitudes_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetAdditionalSetByCallerMagnitudes

// Begin Class ANinjaCombatProjectileActor Function GetBounceCount
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics
{
	struct NinjaCombatProjectileActor_eventGetBounceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Projectile" },
		{ "Comment", "/**\n\x09 * Provides the amount of bounces that happened in this projectile.\n\x09 * Bounciness must be enabled for this to be counted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Provides the amount of bounces that happened in this projectile.\nBounciness must be enabled for this to be counted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetBounceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetBounceCount", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::NinjaCombatProjectileActor_eventGetBounceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::NinjaCombatProjectileActor_eventGetBounceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetBounceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBounceCount();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetBounceCount

// Begin Class ANinjaCombatProjectileActor Function GetCapsuleComponent
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics
{
	struct NinjaCombatProjectileActor_eventGetCapsuleComponent_Parms
	{
		USphereComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Projectile" },
		{ "Comment", "/**\n\x09 * Provides the Capsule Component that's the main projectile collision.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Provides the Capsule Component that's the main projectile collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetCapsuleComponent_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetCapsuleComponent", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::NinjaCombatProjectileActor_eventGetCapsuleComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::NinjaCombatProjectileActor_eventGetCapsuleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetCapsuleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USphereComponent**)Z_Param__Result=P_THIS->GetCapsuleComponent();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetCapsuleComponent

// Begin Class ANinjaCombatProjectileActor Function GetDynamicGameplayTags
struct NinjaCombatProjectileActor_eventGetDynamicGameplayTags_Parms
{
	FGameplayTagContainer ReturnValue;
};
static const FName NAME_ANinjaCombatProjectileActor_GetDynamicGameplayTags = FName(TEXT("GetDynamicGameplayTags"));
FGameplayTagContainer ANinjaCombatProjectileActor::GetDynamicGameplayTags() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_GetDynamicGameplayTags);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventGetDynamicGameplayTags_Parms Parms;
		const_cast<ANinjaCombatProjectileActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatProjectileActor*>(this)->GetDynamicGameplayTags_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/**\n\x09 * Allows the caller to set any Dynamic Gameplay Tags to the outgoing effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Allows the caller to set any Dynamic Gameplay Tags to the outgoing effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetDynamicGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetDynamicGameplayTags", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventGetDynamicGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventGetDynamicGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetDynamicGameplayTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetDynamicGameplayTags_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetDynamicGameplayTags

// Begin Class ANinjaCombatProjectileActor Function GetInitialLocation
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics
{
	struct NinjaCombatProjectileActor_eventGetInitialLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Projectile" },
		{ "Comment", "/**\n\x09 * Retrieves the Initial Location set to this project.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Retrieves the Initial Location set to this project." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetInitialLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetInitialLocation", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::NinjaCombatProjectileActor_eventGetInitialLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::NinjaCombatProjectileActor_eventGetInitialLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetInitialLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetInitialLocation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetInitialLocation

// Begin Class ANinjaCombatProjectileActor Function GetInitialRotation
struct NinjaCombatProjectileActor_eventGetInitialRotation_Parms
{
	FRotator ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatProjectileActor_eventGetInitialRotation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_ANinjaCombatProjectileActor_GetInitialRotation = FName(TEXT("GetInitialRotation"));
FRotator ANinjaCombatProjectileActor::GetInitialRotation() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_GetInitialRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventGetInitialRotation_Parms Parms;
		const_cast<ANinjaCombatProjectileActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatProjectileActor*>(this)->GetInitialRotation_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Calculates the Initial Rotation for a forward-orienting projectile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Calculates the Initial Rotation for a forward-orienting projectile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetInitialRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetInitialRotation", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventGetInitialRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventGetInitialRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetInitialRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetInitialRotation_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetInitialRotation

// Begin Class ANinjaCombatProjectileActor Function GetProjectileMovement
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics
{
	struct NinjaCombatProjectileActor_eventGetProjectileMovement_Parms
	{
		UProjectileMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Projectile" },
		{ "Comment", "/**\n\x09 * Provides the Projectile Movement Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Provides the Projectile Movement Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventGetProjectileMovement_Parms, ReturnValue), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "GetProjectileMovement", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::NinjaCombatProjectileActor_eventGetProjectileMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::NinjaCombatProjectileActor_eventGetProjectileMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execGetProjectileMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UProjectileMovementComponent**)Z_Param__Result=P_THIS->GetProjectileMovement();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function GetProjectileMovement

// Begin Class ANinjaCombatProjectileActor Function HandleActorHit
struct NinjaCombatProjectileActor_eventHandleActorHit_Parms
{
	FHitResult ImpactResult;
};
static const FName NAME_ANinjaCombatProjectileActor_HandleActorHit = FName(TEXT("HandleActorHit"));
void ANinjaCombatProjectileActor::HandleActorHit(FHitResult const& ImpactResult)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_HandleActorHit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventHandleActorHit_Parms Parms;
		Parms.ImpactResult=ImpactResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleActorHit_Implementation(ImpactResult);
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Handles a collision with an actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Handles a collision with an actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventHandleActorHit_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::NewProp_ImpactResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "HandleActorHit", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventHandleActorHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventHandleActorHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execHandleActorHit)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActorHit_Implementation(Z_Param_Out_ImpactResult);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function HandleActorHit

// Begin Class ANinjaCombatProjectileActor Function HandleProjectileExhausted
static const FName NAME_ANinjaCombatProjectileActor_HandleProjectileExhausted = FName(TEXT("HandleProjectileExhausted"));
void ANinjaCombatProjectileActor::HandleProjectileExhausted()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_HandleProjectileExhausted);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleProjectileExhausted_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Handles the projectile in the end of its lifecycle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Handles the projectile in the end of its lifecycle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "HandleProjectileExhausted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execHandleProjectileExhausted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleProjectileExhausted_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function HandleProjectileExhausted

// Begin Class ANinjaCombatProjectileActor Function LaunchForward
static const FName NAME_ANinjaCombatProjectileActor_LaunchForward = FName(TEXT("LaunchForward"));
void ANinjaCombatProjectileActor::LaunchForward()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_LaunchForward);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		LaunchForward_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Launches the projectile forward, considering the Initial Rotation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Launches the projectile forward, considering the Initial Rotation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "LaunchForward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execLaunchForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchForward_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function LaunchForward

// Begin Class ANinjaCombatProjectileActor Function LaunchToLocation
struct NinjaCombatProjectileActor_eventLaunchToLocation_Parms
{
	FVector Location;
};
static const FName NAME_ANinjaCombatProjectileActor_LaunchToLocation = FName(TEXT("LaunchToLocation"));
void ANinjaCombatProjectileActor::LaunchToLocation(FVector Location)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_LaunchToLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventLaunchToLocation_Parms Parms;
		Parms.Location=Location;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		LaunchToLocation_Implementation(Location);
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Launches towards the location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Launches towards the location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventLaunchToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "LaunchToLocation", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventLaunchToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventLaunchToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execLaunchToLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchToLocation_Implementation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function LaunchToLocation

// Begin Class ANinjaCombatProjectileActor Function LaunchToTarget
struct NinjaCombatProjectileActor_eventLaunchToTarget_Parms
{
	const AActor* Target;
};
static const FName NAME_ANinjaCombatProjectileActor_LaunchToTarget = FName(TEXT("LaunchToTarget"));
void ANinjaCombatProjectileActor::LaunchToTarget(const AActor* Target)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_LaunchToTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventLaunchToTarget_Parms Parms;
		Parms.Target=Target;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		LaunchToTarget_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Launches towards the target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Launches towards the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventLaunchToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "LaunchToTarget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventLaunchToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventLaunchToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execLaunchToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchToTarget_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function LaunchToTarget

// Begin Class ANinjaCombatProjectileActor Function OnImpactHitAudioFinished
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "OnImpactHitAudioFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execOnImpactHitAudioFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnImpactHitAudioFinished();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function OnImpactHitAudioFinished

// Begin Class ANinjaCombatProjectileActor Function OnProjectileBounce
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics
{
	struct NinjaCombatProjectileActor_eventOnProjectileBounce_Parms
	{
		FHitResult ImpactResult;
		FVector ImpactVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Hidden handler to ensure internal logic is correct. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Hidden handler to ensure internal logic is correct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventOnProjectileBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventOnProjectileBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVelocity_MetaData), NewProp_ImpactVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::NewProp_ImpactVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "OnProjectileBounce", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::NinjaCombatProjectileActor_eventOnProjectileBounce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::NinjaCombatProjectileActor_eventOnProjectileBounce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execOnProjectileBounce)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function OnProjectileBounce

// Begin Class ANinjaCombatProjectileActor Function OnProjectileStop
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics
{
	struct NinjaCombatProjectileActor_eventOnProjectileStop_Parms
	{
		FHitResult ImpactResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Hidden handler to ensure internal logic is correct. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Hidden handler to ensure internal logic is correct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventOnProjectileStop_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::NewProp_ImpactResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "OnProjectileStop", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::NinjaCombatProjectileActor_eventOnProjectileStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::NinjaCombatProjectileActor_eventOnProjectileStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execOnProjectileStop)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileStop(Z_Param_Out_ImpactResult);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function OnProjectileStop

// Begin Class ANinjaCombatProjectileActor Function OnRep_LaunchVelocity
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "OnRep_LaunchVelocity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execOnRep_LaunchVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LaunchVelocity();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function OnRep_LaunchVelocity

// Begin Class ANinjaCombatProjectileActor Function SelectHitImpactParticles
struct NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	TSoftObjectPtr<UNiagaraSystem> ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaCombatProjectileActor_SelectHitImpactParticles = FName(TEXT("SelectHitImpactParticles"));
TSoftObjectPtr<UNiagaraSystem> ANinjaCombatProjectileActor::SelectHitImpactParticles(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_SelectHitImpactParticles);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms Parms;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<ANinjaCombatProjectileActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatProjectileActor*>(this)->SelectHitImpactParticles_Implementation(HitResult, SourceTags, TargetTags);
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Selects the Hit Impact Particles, compatible with the provided criteria.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Selects the Hit Impact Particles, compatible with the provided criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "SelectHitImpactParticles", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventSelectHitImpactParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execSelectHitImpactParticles)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UNiagaraSystem>*)Z_Param__Result=P_THIS->SelectHitImpactParticles_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function SelectHitImpactParticles

// Begin Class ANinjaCombatProjectileActor Function SelectHitImpactSound
struct NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	TSoftObjectPtr<USoundBase> ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaCombatProjectileActor_SelectHitImpactSound = FName(TEXT("SelectHitImpactSound"));
TSoftObjectPtr<USoundBase> ANinjaCombatProjectileActor::SelectHitImpactSound(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_SelectHitImpactSound);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms Parms;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<ANinjaCombatProjectileActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatProjectileActor*>(this)->SelectHitImpactSound_Implementation(HitResult, SourceTags, TargetTags);
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Selects the Hit Impact Sound, compatible with the provided criteria.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Selects the Hit Impact Sound, compatible with the provided criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "SelectHitImpactSound", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::PropPointers), sizeof(NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileActor_eventSelectHitImpactSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execSelectHitImpactSound)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<USoundBase>*)Z_Param__Result=P_THIS->SelectHitImpactSound_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function SelectHitImpactSound

// Begin Class ANinjaCombatProjectileActor Function SetInitialLocation
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics
{
	struct NinjaCombatProjectileActor_eventSetInitialLocation_Parms
	{
		FVector NewInitialLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Projectile" },
		{ "Comment", "/**\n\x09 * Sets the initial location for the projectile.\n\x09 * \n\x09 * Has to be called if the projectile aiming mode is set to \"Location\". This should always\n\x09 * be updated before launching the projectile, most likely by a Gameplay Ability or by a\n\x09 * projectile superclass implementing the \"Before Launch\" event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Sets the initial location for the projectile.\n\nHas to be called if the projectile aiming mode is set to \"Location\". This should always\nbe updated before launching the projectile, most likely by a Gameplay Ability or by a\nprojectile superclass implementing the \"Before Launch\" event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInitialLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::NewProp_NewInitialLocation = { "NewInitialLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileActor_eventSetInitialLocation_Parms, NewInitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::NewProp_NewInitialLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "SetInitialLocation", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::NinjaCombatProjectileActor_eventSetInitialLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::NinjaCombatProjectileActor_eventSetInitialLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execSetInitialLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewInitialLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialLocation(Z_Param_NewInitialLocation);
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function SetInitialLocation

// Begin Class ANinjaCombatProjectileActor Function SetupIgnoredActors
static const FName NAME_ANinjaCombatProjectileActor_SetupIgnoredActors = FName(TEXT("SetupIgnoredActors"));
void ANinjaCombatProjectileActor::SetupIgnoredActors()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatProjectileActor_SetupIgnoredActors);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		SetupIgnoredActors_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Configures actors that should be ignored by this projectile.\n\x09 * By default, the projectile ignores the instigator and vice versa.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Configures actors that should be ignored by this projectile.\nBy default, the projectile ignores the instigator and vice versa." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatProjectileActor, nullptr, "SetupIgnoredActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatProjectileActor::execSetupIgnoredActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupIgnoredActors_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatProjectileActor Function SetupIgnoredActors

// Begin Class ANinjaCombatProjectileActor
void ANinjaCombatProjectileActor::StaticRegisterNativesANinjaCombatProjectileActor()
{
	UClass* Class = ANinjaCombatProjectileActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustHitResult", &ANinjaCombatProjectileActor::execAdjustHitResult },
		{ "GetAdditionalSetByCallerMagnitudes", &ANinjaCombatProjectileActor::execGetAdditionalSetByCallerMagnitudes },
		{ "GetBounceCount", &ANinjaCombatProjectileActor::execGetBounceCount },
		{ "GetCapsuleComponent", &ANinjaCombatProjectileActor::execGetCapsuleComponent },
		{ "GetDynamicGameplayTags", &ANinjaCombatProjectileActor::execGetDynamicGameplayTags },
		{ "GetInitialLocation", &ANinjaCombatProjectileActor::execGetInitialLocation },
		{ "GetInitialRotation", &ANinjaCombatProjectileActor::execGetInitialRotation },
		{ "GetProjectileMovement", &ANinjaCombatProjectileActor::execGetProjectileMovement },
		{ "HandleActorHit", &ANinjaCombatProjectileActor::execHandleActorHit },
		{ "HandleProjectileExhausted", &ANinjaCombatProjectileActor::execHandleProjectileExhausted },
		{ "LaunchForward", &ANinjaCombatProjectileActor::execLaunchForward },
		{ "LaunchToLocation", &ANinjaCombatProjectileActor::execLaunchToLocation },
		{ "LaunchToTarget", &ANinjaCombatProjectileActor::execLaunchToTarget },
		{ "OnImpactHitAudioFinished", &ANinjaCombatProjectileActor::execOnImpactHitAudioFinished },
		{ "OnProjectileBounce", &ANinjaCombatProjectileActor::execOnProjectileBounce },
		{ "OnProjectileStop", &ANinjaCombatProjectileActor::execOnProjectileStop },
		{ "OnRep_LaunchVelocity", &ANinjaCombatProjectileActor::execOnRep_LaunchVelocity },
		{ "SelectHitImpactParticles", &ANinjaCombatProjectileActor::execSelectHitImpactParticles },
		{ "SelectHitImpactSound", &ANinjaCombatProjectileActor::execSelectHitImpactSound },
		{ "SetInitialLocation", &ANinjaCombatProjectileActor::execSetInitialLocation },
		{ "SetupIgnoredActors", &ANinjaCombatProjectileActor::execSetupIgnoredActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatProjectileActor);
UClass* Z_Construct_UClass_ANinjaCombatProjectileActor_NoRegister()
{
	return ANinjaCombatProjectileActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatProjectileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base implementation of a projectile.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatProjectileActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base implementation of a projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingMode_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Aiming mode for the projectile. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Aiming mode for the projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactStrength_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Impact Strength for physical animations. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Impact Strength for physical animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBounces_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Maximum bounces the projectile can do. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Maximum bounces the projectile can do." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffectClass_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Impact effect used by this projectile. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Impact effect used by this projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesProjectileDamage_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Informs if this instance overrides the melee damage. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Informs if this instance overrides the melee damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Sets the Projectile Damage in the Damage Gameplay Effect used by this actor.\n\x09 *\n\x09 * The amount of damage applied by the Gameplay Effect can be defined by a backing attribute,\n\x09 * such as the \"Base Damage\", but depending on the game design, it could also be defined\n\x09 * by the projectile itself, using this property.\n\x09 *\n\x09 * In that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\n\x09 * For that, the gameplay effect must be prepared with the \"Combat.Data.Damage\" data name.\n\x09 */" },
		{ "EditCondition", "bOverridesProjectileDamage" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Sets the Projectile Damage in the Damage Gameplay Effect used by this actor.\n\nThe amount of damage applied by the Gameplay Effect can be defined by a backing attribute,\nsuch as the \"Base Damage\", but depending on the game design, it could also be defined\nby the projectile itself, using this property.\n\nIn that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\nFor that, the gameplay effect must be prepared with the \"Combat.Data.Damage\" data name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesPoisonConsumption_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Informs if this instance overrides the poison consumption. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Informs if this instance overrides the poison consumption." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseConsumption_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Sets the Projectile Damage in the Damage Gameplay Effect used by this actor.\n\x09 *\n\x09 * The amount of poise consumed by the Gameplay Effect can be defined by a backing attribute,\n\x09 * such as the \"Poise Consumption\", but depending on the game design, it could also be defined\n\x09 * by the projectile itself, using this property.\n\x09 *\n\x09 * In that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\n\x09 * For that, the gameplay effect must be prepared with the \"Combat.Data.PoiseConsumption\" data name.\n\x09 */" },
		{ "EditCondition", "bOverridesPoisonConsumption" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Sets the Projectile Damage in the Damage Gameplay Effect used by this actor.\n\nThe amount of poise consumed by the Gameplay Effect can be defined by a backing attribute,\nsuch as the \"Poise Consumption\", but depending on the game design, it could also be defined\nby the projectile itself, using this property.\n\nIn that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\nFor that, the gameplay effect must be prepared with the \"Combat.Data.PoiseConsumption\" data name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactFX_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Particle Effect played when the projectile hits something. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Particle Effect played when the projectile hits something." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionFX_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Particle Effect played when the projectile is being destroyed. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Particle Effect played when the projectile is being destroyed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Sound Effect played when the projectile hits something. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Sound Effect played when the projectile hits something." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Trace Channel used for Projectile Traces.\n\x09 * It's recommended to create a dedicated Channel for Projectile Traces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Trace Channel used for Projectile Traces.\nIt's recommended to create a dedicated Channel for Projectile Traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesTargetingSystem_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** If set to true, it will use the targeting system to collect targets for launch and bounces. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "If set to true, it will use the targeting system to collect targets for launch and bounces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteAsync_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/** Defines if the targeting will execute asynchronously. */" },
		{ "EditCondition", "AimingMode == EProjectileAimingMode::TargetingSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Defines if the targeting will execute asynchronously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * The Targeting Preset used to collect a target and every other target after a bounce.\n\x09 * Can be left empty, in which case the projectile will simply follow the initial trajectory.\n\x09 */" },
		{ "EditCondition", "AimingMode == EProjectileAimingMode::TargetingSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "The Targeting Preset used to collect a target and every other target after a bounce.\nCan be left empty, in which case the projectile will simply follow the initial trajectory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Combat Projectile" },
		{ "Comment", "/**\n\x09 * Determines if the Debug Mode is activated for this projectile.\n\x09 * This will display trace adjustments and impacts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Determines if the Debug Mode is activated for this projectile.\nThis will display trace adjustments and impacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Sphere component used as root for the projectile. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Sphere component used as root for the projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Movement Component for projectiles. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Movement Component for projectiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactCosmetics_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Dedicated cosmetic handling, integrated with the Asset Manager. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Dedicated cosmetic handling, integrated with the Asset Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactHitAudio_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Audio component used to play melee hit impact sounds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "Audio component used to play melee hit impact sounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsHit_MetaData[] = {
		{ "Comment", "/** List of all actors that were hit by this projectile. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileActor.h" },
		{ "ToolTip", "List of all actors that were hit by this projectile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AimingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AimingMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBounces;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImpactEffectClass;
	static void NewProp_bOverridesProjectileDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesProjectileDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
	static void NewProp_bOverridesPoisonConsumption_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesPoisonConsumption;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoiseConsumption;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DestructionFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bUsesTargetingSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesTargetingSystem;
	static void NewProp_bExecuteAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteAsync;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactCosmetics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeImpactHitAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsHit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_AdjustHitResult, "AdjustHitResult" }, // 2080346430
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetAdditionalSetByCallerMagnitudes, "GetAdditionalSetByCallerMagnitudes" }, // 1229089116
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetBounceCount, "GetBounceCount" }, // 61171051
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetCapsuleComponent, "GetCapsuleComponent" }, // 1772410489
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetDynamicGameplayTags, "GetDynamicGameplayTags" }, // 1289217104
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialLocation, "GetInitialLocation" }, // 1786255399
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetInitialRotation, "GetInitialRotation" }, // 4250526459
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_GetProjectileMovement, "GetProjectileMovement" }, // 861890660
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleActorHit, "HandleActorHit" }, // 38480017
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_HandleProjectileExhausted, "HandleProjectileExhausted" }, // 255355573
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchForward, "LaunchForward" }, // 1631658514
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToLocation, "LaunchToLocation" }, // 4216293694
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_LaunchToTarget, "LaunchToTarget" }, // 2611297196
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_OnImpactHitAudioFinished, "OnImpactHitAudioFinished" }, // 55746889
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileBounce, "OnProjectileBounce" }, // 4268251666
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_OnProjectileStop, "OnProjectileStop" }, // 1609452083
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_OnRep_LaunchVelocity, "OnRep_LaunchVelocity" }, // 338490708
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactParticles, "SelectHitImpactParticles" }, // 2906590716
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_SelectHitImpactSound, "SelectHitImpactSound" }, // 4080809907
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_SetInitialLocation, "SetInitialLocation" }, // 858308547
		{ &Z_Construct_UFunction_ANinjaCombatProjectileActor_SetupIgnoredActors, "SetupIgnoredActors" }, // 3892213555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatProjectileActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_AimingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_AimingMode = { "AimingMode", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, AimingMode), Z_Construct_UEnum_NinjaCombat_EProjectileAimingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingMode_MetaData), NewProp_AimingMode_MetaData) }; // 2221364996
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactStrength = { "ImpactStrength", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ImpactStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactStrength_MetaData), NewProp_ImpactStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_MaxBounces = { "MaxBounces", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, MaxBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBounces_MetaData), NewProp_MaxBounces_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactEffectClass = { "ImpactEffectClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ImpactEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactEffectClass_MetaData), NewProp_ImpactEffectClass_MetaData) };
void Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesProjectileDamage_SetBit(void* Obj)
{
	((ANinjaCombatProjectileActor*)Obj)->bOverridesProjectileDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesProjectileDamage = { "bOverridesProjectileDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatProjectileActor), &Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesProjectileDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesProjectileDamage_MetaData), NewProp_bOverridesProjectileDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ProjectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamage_MetaData), NewProp_ProjectileDamage_MetaData) };
void Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesPoisonConsumption_SetBit(void* Obj)
{
	((ANinjaCombatProjectileActor*)Obj)->bOverridesPoisonConsumption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesPoisonConsumption = { "bOverridesPoisonConsumption", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatProjectileActor), &Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesPoisonConsumption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesPoisonConsumption_MetaData), NewProp_bOverridesPoisonConsumption_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_PoiseConsumption = { "PoiseConsumption", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, PoiseConsumption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseConsumption_MetaData), NewProp_PoiseConsumption_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactFX = { "ImpactFX", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ImpactFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactFX_MetaData), NewProp_ImpactFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_DestructionFX = { "DestructionFX", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, DestructionFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionFX_MetaData), NewProp_DestructionFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bUsesTargetingSystem_SetBit(void* Obj)
{
	((ANinjaCombatProjectileActor*)Obj)->bUsesTargetingSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bUsesTargetingSystem = { "bUsesTargetingSystem", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatProjectileActor), &Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bUsesTargetingSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesTargetingSystem_MetaData), NewProp_bUsesTargetingSystem_MetaData) };
void Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bExecuteAsync_SetBit(void* Obj)
{
	((ANinjaCombatProjectileActor*)Obj)->bExecuteAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bExecuteAsync = { "bExecuteAsync", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatProjectileActor), &Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bExecuteAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecuteAsync_MetaData), NewProp_bExecuteAsync_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingPreset_MetaData), NewProp_TargetingPreset_MetaData) };
void Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((ANinjaCombatProjectileActor*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatProjectileActor), &Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebug_MetaData), NewProp_bEnableDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", "OnRep_LaunchVelocity", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchVelocity_MetaData), NewProp_LaunchVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactCosmetics = { "ImpactCosmetics", nullptr, (EPropertyFlags)0x014400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ImpactCosmetics), Z_Construct_UClass_UNinjaCombatCosmeticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactCosmetics_MetaData), NewProp_ImpactCosmetics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_MeleeImpactHitAudio = { "MeleeImpactHitAudio", nullptr, (EPropertyFlags)0x014400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, MeleeImpactHitAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeImpactHitAudio_MetaData), NewProp_MeleeImpactHitAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ActorsHit_Inner = { "ActorsHit", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ActorsHit = { "ActorsHit", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatProjectileActor, ActorsHit), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsHit_MetaData), NewProp_ActorsHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_AimingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_AimingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_MaxBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bOverridesPoisonConsumption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_PoiseConsumption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_DestructionFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bUsesTargetingSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bExecuteAsync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_TargetingPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_LaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ImpactCosmetics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_MeleeImpactHitAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ActorsHit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::NewProp_ActorsHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaCombatPoolableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatProjectileActor, ICombatProjectileInterface), false },  // 2752543980
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::ClassParams = {
	&ANinjaCombatProjectileActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatProjectileActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatProjectileActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatProjectileActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatProjectileActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatProjectileActor.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<ANinjaCombatProjectileActor>()
{
	return ANinjaCombatProjectileActor::StaticClass();
}
void ANinjaCombatProjectileActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_LaunchVelocity(TEXT("LaunchVelocity"));
	const bool bIsValid = true
		&& Name_LaunchVelocity == ClassReps[(int32)ENetFields_Private::LaunchVelocity].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANinjaCombatProjectileActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatProjectileActor);
ANinjaCombatProjectileActor::~ANinjaCombatProjectileActor() {}
// End Class ANinjaCombatProjectileActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileAimingMode_StaticEnum, TEXT("EProjectileAimingMode"), &Z_Registration_Info_UEnum_EProjectileAimingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2221364996U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatProjectileActor, ANinjaCombatProjectileActor::StaticClass, TEXT("ANinjaCombatProjectileActor"), &Z_Registration_Info_UClass_ANinjaCombatProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatProjectileActor), 398317658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_2260850215(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

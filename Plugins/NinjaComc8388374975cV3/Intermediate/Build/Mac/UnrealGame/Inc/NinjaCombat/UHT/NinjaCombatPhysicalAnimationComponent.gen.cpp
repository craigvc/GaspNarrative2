// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatPhysicalAnimationComponent.h"
#include "NinjaCombat/Public/Types/FCombatPhysicalAnimationSettings.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatPhysicalAnimationComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatPhysicalAnimationInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatPhysicalAnimationComponent Function CalculateImpulse
struct Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics
{
	struct NinjaCombatPhysicalAnimationComponent_eventCalculateImpulse_Parms
	{
		FHitResult Hit;
		float Strength;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Physical Animation" },
		{ "Comment", "/**\n\x09 * Calculates the impulse to be applied from a given hit.\n\x09 *\n\x09 * @param Hit\x09\x09Information about the Hit.\n\x09 * @param Strength\x09Strength of the impulse being applied.\n\x09 * @return\x09\x09\x09Impulse added to a bone from the given hit.\x09\x09\x09\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "ToolTip", "Calculates the impulse to be applied from a given hit.\n\n@param Hit           Information about the Hit.\n@param Strength      Strength of the impulse being applied.\n@return                      Impulse added to a bone from the given hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventCalculateImpulse_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventCalculateImpulse_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventCalculateImpulse_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent, nullptr, "CalculateImpulse", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NinjaCombatPhysicalAnimationComponent_eventCalculateImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C82401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::NinjaCombatPhysicalAnimationComponent_eventCalculateImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatPhysicalAnimationComponent::execCalculateImpulse)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UNinjaCombatPhysicalAnimationComponent::CalculateImpulse(Z_Param_Out_Hit,Z_Param_Strength);
	P_NATIVE_END;
}
// End Class UNinjaCombatPhysicalAnimationComponent Function CalculateImpulse

// Begin Class UNinjaCombatPhysicalAnimationComponent Function GetBoneName
struct Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics
{
	struct NinjaCombatPhysicalAnimationComponent_eventGetBoneName_Parms
	{
		FHitResult Hit;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Physical Animation" },
		{ "Comment", "/**\n\x09 * Provides the bone name affected bu the provided context.\n\x09 * \n\x09 * @param Hit\x09\x09Information about the Hit.\n\x09 * @return\x09\x09\x09The Bone Name included in the Effect Context's Hit Result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "ToolTip", "Provides the bone name affected bu the provided context.\n\n@param Hit           Information about the Hit.\n@return                      The Bone Name included in the Effect Context's Hit Result." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventGetBoneName_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent, nullptr, "GetBoneName", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::NinjaCombatPhysicalAnimationComponent_eventGetBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::NinjaCombatPhysicalAnimationComponent_eventGetBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatPhysicalAnimationComponent::execGetBoneName)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBoneName(Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class UNinjaCombatPhysicalAnimationComponent Function GetBoneName

// Begin Class UNinjaCombatPhysicalAnimationComponent Function GetStrength
struct Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics
{
	struct NinjaCombatPhysicalAnimationComponent_eventGetStrength_Parms
	{
		const AActor* EffectCauser;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Physical Animation" },
		{ "Comment", "/**\n\x09 * Provides the impact strength from the causer, or default.\n\x09 * \n\x09 * @param EffectCauser\x09\x09The source for this impact, potentially implementing an interface. \n\x09 * @return\x09\x09\x09\x09\x09Impact strength retrieved via interface, or the default value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "ToolTip", "Provides the impact strength from the causer, or default.\n\n@param EffectCauser          The source for this impact, potentially implementing an interface.\n@return                                      Impact strength retrieved via interface, or the default value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectCauser;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventGetStrength_Parms, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectCauser_MetaData), NewProp_EffectCauser_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventGetStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::NewProp_EffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent, nullptr, "GetStrength", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::NinjaCombatPhysicalAnimationComponent_eventGetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::NinjaCombatPhysicalAnimationComponent_eventGetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatPhysicalAnimationComponent::execGetStrength)
{
	P_GET_OBJECT(AActor,Z_Param_EffectCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStrength(Z_Param_EffectCauser);
	P_NATIVE_END;
}
// End Class UNinjaCombatPhysicalAnimationComponent Function GetStrength

// Begin Class UNinjaCombatPhysicalAnimationComponent Function HandleSimulationReset
struct NinjaCombatPhysicalAnimationComponent_eventHandleSimulationReset_Parms
{
	float DeltaTime;
};
static const FName NAME_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset = FName(TEXT("HandleSimulationReset"));
void UNinjaCombatPhysicalAnimationComponent::HandleSimulationReset(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatPhysicalAnimationComponent_eventHandleSimulationReset_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleSimulationReset_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Physical Animation" },
		{ "Comment", "/**\n\x09 * Evaluates the current state and resets simulation if needed.\n\x09 *\n\x09 * @param DeltaTime\n\x09 *\x09\x09Time elapsed since last frame. Provided by the Tick Function, from where\n\x09 *\x09\x09this function is usually invoked. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "ToolTip", "Evaluates the current state and resets simulation if needed.\n\n@param DeltaTime\n             Time elapsed since last frame. Provided by the Tick Function, from where\n             this function is usually invoked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPhysicalAnimationComponent_eventHandleSimulationReset_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent, nullptr, "HandleSimulationReset", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::PropPointers), sizeof(NinjaCombatPhysicalAnimationComponent_eventHandleSimulationReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatPhysicalAnimationComponent_eventHandleSimulationReset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatPhysicalAnimationComponent::execHandleSimulationReset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSimulationReset_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UNinjaCombatPhysicalAnimationComponent Function HandleSimulationReset

// Begin Class UNinjaCombatPhysicalAnimationComponent
void UNinjaCombatPhysicalAnimationComponent::StaticRegisterNativesUNinjaCombatPhysicalAnimationComponent()
{
	UClass* Class = UNinjaCombatPhysicalAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateImpulse", &UNinjaCombatPhysicalAnimationComponent::execCalculateImpulse },
		{ "GetBoneName", &UNinjaCombatPhysicalAnimationComponent::execGetBoneName },
		{ "GetStrength", &UNinjaCombatPhysicalAnimationComponent::execGetStrength },
		{ "HandleSimulationReset", &UNinjaCombatPhysicalAnimationComponent::execHandleSimulationReset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatPhysicalAnimationComponent);
UClass* Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_NoRegister()
{
	return UNinjaCombatPhysicalAnimationComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Specialized version of the Motion Warping Component, integrated with the Combat System.\n */" },
		{ "IncludePath", "Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Specialized version of the Motion Warping Component, integrated with the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Physical Animation Component" },
		{ "Comment", "/** Settings for this component */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatPhysicalAnimationComponent.h" },
		{ "ToolTip", "Settings for this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_CalculateImpulse, "CalculateImpulse" }, // 170889783
		{ &Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetBoneName, "GetBoneName" }, // 3438480489
		{ &Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_GetStrength, "GetStrength" }, // 2229078323
		{ &Z_Construct_UFunction_UNinjaCombatPhysicalAnimationComponent_HandleSimulationReset, "HandleSimulationReset" }, // 3830868983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatPhysicalAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatPhysicalAnimationComponent, Settings), Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4045535615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalAnimationComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatPhysicalAnimationInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatPhysicalAnimationComponent, ICombatPhysicalAnimationInterface), false },  // 4053396698
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::ClassParams = {
	&UNinjaCombatPhysicalAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatPhysicalAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatPhysicalAnimationComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatPhysicalAnimationComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatPhysicalAnimationComponent>()
{
	return UNinjaCombatPhysicalAnimationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatPhysicalAnimationComponent);
UNinjaCombatPhysicalAnimationComponent::~UNinjaCombatPhysicalAnimationComponent() {}
// End Class UNinjaCombatPhysicalAnimationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatPhysicalAnimationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatPhysicalAnimationComponent, UNinjaCombatPhysicalAnimationComponent::StaticClass, TEXT("UNinjaCombatPhysicalAnimationComponent"), &Z_Registration_Info_UClass_UNinjaCombatPhysicalAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatPhysicalAnimationComponent), 906224756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatPhysicalAnimationComponent_h_1931122720(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatPhysicalAnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatPhysicalAnimationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

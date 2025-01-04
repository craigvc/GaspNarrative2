// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatMotionWarpingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatMotionWarpingComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMotionWarpingInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatMotionWarpingComponent Function AddOrUpdateWarpTargetFromLocationAndRotationWithOffset
struct Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics
{
	struct NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms
	{
		FName WarpName;
		FVector TargetLocation;
		FRotator TargetRotation;
		float Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name.\n\x09 * \n\x09 * @param WarpName\x09\x09\x09Warp target identifier.\n\x09 * @param TargetLocation\x09Location for the warp target.\n\x09 * @param TargetRotation\x09Rotation for the warp target.\n\x09 * @param Offset\x09\x09\x09Offset added from the target towards the source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatMotionWarpingComponent.h" },
		{ "ToolTip", "Create and adds or update a target associated with a specified name.\n\n@param WarpName                      Warp target identifier.\n@param TargetLocation        Location for the warp target.\n@param TargetRotation        Rotation for the warp target.\n@param Offset                        Offset added from the target towards the source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_WarpName = { "WarpName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms, WarpName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_WarpName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromLocationAndRotationWithOffset", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::NinjaCombatMotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotationWithOffset)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpName);
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateWarpTargetFromLocationAndRotationWithOffset(Z_Param_WarpName,Z_Param_TargetLocation,Z_Param_TargetRotation,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UNinjaCombatMotionWarpingComponent Function AddOrUpdateWarpTargetFromLocationAndRotationWithOffset

// Begin Class UNinjaCombatMotionWarpingComponent Function CalculateWarpLocation
struct NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms
{
	const AActor* Target;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation = FName(TEXT("CalculateWarpLocation"));
FVector UNinjaCombatMotionWarpingComponent::CalculateWarpLocation(const AActor* Target) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms Parms;
		Parms.Target=Target;
		const_cast<UNinjaCombatMotionWarpingComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatMotionWarpingComponent*>(this)->CalculateWarpLocation_Implementation(Target);
	}
}
struct Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/**\n\x09 * Calculates the Warp Location for a target.\n\x09 * \n\x09 * @param Target\x09\x09""Actor used as a reference for the Warp Location calculation. \n\x09 * @return\x09\x09\x09\x09""A Vector representing the desired location for the warp.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatMotionWarpingComponent.h" },
		{ "ToolTip", "Calculates the Warp Location for a target.\n\n@param Target                Actor used as a reference for the Warp Location calculation.\n@return                              A Vector representing the desired location for the warp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMotionWarpingComponent, nullptr, "CalculateWarpLocation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::PropPointers), sizeof(NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMotionWarpingComponent_eventCalculateWarpLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMotionWarpingComponent::execCalculateWarpLocation)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateWarpLocation_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaCombatMotionWarpingComponent Function CalculateWarpLocation

// Begin Class UNinjaCombatMotionWarpingComponent Function CalculateWarpRotation
struct NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms
{
	const AActor* Target;
	FRotator ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation = FName(TEXT("CalculateWarpRotation"));
FRotator UNinjaCombatMotionWarpingComponent::CalculateWarpRotation(const AActor* Target) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms Parms;
		Parms.Target=Target;
		const_cast<UNinjaCombatMotionWarpingComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatMotionWarpingComponent*>(this)->CalculateWarpRotation_Implementation(Target);
	}
}
struct Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/**\n\x09 * Calculates the Warp Rotation for a target.\n\x09 * \n\x09 * @param Target\x09\x09""Actor used as a reference for the Warp Rotation calculation. \n\x09 * @return\x09\x09\x09\x09""A Rotator representing the desired direction for the warp.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatMotionWarpingComponent.h" },
		{ "ToolTip", "Calculates the Warp Rotation for a target.\n\n@param Target                Actor used as a reference for the Warp Rotation calculation.\n@return                              A Rotator representing the desired direction for the warp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMotionWarpingComponent, nullptr, "CalculateWarpRotation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::PropPointers), sizeof(NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMotionWarpingComponent_eventCalculateWarpRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMotionWarpingComponent::execCalculateWarpRotation)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->CalculateWarpRotation_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaCombatMotionWarpingComponent Function CalculateWarpRotation

// Begin Class UNinjaCombatMotionWarpingComponent
void UNinjaCombatMotionWarpingComponent::StaticRegisterNativesUNinjaCombatMotionWarpingComponent()
{
	UClass* Class = UNinjaCombatMotionWarpingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateWarpTargetFromLocationAndRotationWithOffset", &UNinjaCombatMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotationWithOffset },
		{ "CalculateWarpLocation", &UNinjaCombatMotionWarpingComponent::execCalculateWarpLocation },
		{ "CalculateWarpRotation", &UNinjaCombatMotionWarpingComponent::execCalculateWarpRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatMotionWarpingComponent);
UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_NoRegister()
{
	return UNinjaCombatMotionWarpingComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Specialized version of the Motion Warping Component, integrated with the Combat System.\n */" },
		{ "IncludePath", "Components/NinjaCombatMotionWarpingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatMotionWarpingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Specialized version of the Motion Warping Component, integrated with the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchForAnchorComponents_MetaData[] = {
		{ "Category", "Combat Warping" },
		{ "Comment", "/** Enables searching for components tagged with the warp name. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatMotionWarpingComponent.h" },
		{ "ToolTip", "Enables searching for components tagged with the warp name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugMode_MetaData[] = {
		{ "Category", "Combat Warping" },
		{ "Comment", "/** Determines if this component is running in debug mode or not. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatMotionWarpingComponent.h" },
		{ "ToolTip", "Determines if this component is running in debug mode or not." },
	};
#endif // WITH_METADATA
	static void NewProp_bSearchForAnchorComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchForAnchorComponents;
	static void NewProp_bEnableDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotationWithOffset, "AddOrUpdateWarpTargetFromLocationAndRotationWithOffset" }, // 3946260517
		{ &Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpLocation, "CalculateWarpLocation" }, // 3169849027
		{ &Z_Construct_UFunction_UNinjaCombatMotionWarpingComponent_CalculateWarpRotation, "CalculateWarpRotation" }, // 3479383419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatMotionWarpingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bSearchForAnchorComponents_SetBit(void* Obj)
{
	((UNinjaCombatMotionWarpingComponent*)Obj)->bSearchForAnchorComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bSearchForAnchorComponents = { "bSearchForAnchorComponents", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatMotionWarpingComponent), &Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bSearchForAnchorComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchForAnchorComponents_MetaData), NewProp_bSearchForAnchorComponents_MetaData) };
void Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bEnableDebugMode_SetBit(void* Obj)
{
	((UNinjaCombatMotionWarpingComponent*)Obj)->bEnableDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bEnableDebugMode = { "bEnableDebugMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatMotionWarpingComponent), &Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bEnableDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugMode_MetaData), NewProp_bEnableDebugMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bSearchForAnchorComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::NewProp_bEnableDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMotionWarpingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatMotionWarpingInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatMotionWarpingComponent, ICombatMotionWarpingInterface), false },  // 2429923449
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::ClassParams = {
	&UNinjaCombatMotionWarpingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatMotionWarpingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatMotionWarpingComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatMotionWarpingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatMotionWarpingComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatMotionWarpingComponent>()
{
	return UNinjaCombatMotionWarpingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatMotionWarpingComponent);
UNinjaCombatMotionWarpingComponent::~UNinjaCombatMotionWarpingComponent() {}
// End Class UNinjaCombatMotionWarpingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatMotionWarpingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatMotionWarpingComponent, UNinjaCombatMotionWarpingComponent::StaticClass, TEXT("UNinjaCombatMotionWarpingComponent"), &Z_Registration_Info_UClass_UNinjaCombatMotionWarpingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatMotionWarpingComponent), 4289276874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatMotionWarpingComponent_h_2135415617(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatMotionWarpingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatMotionWarpingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

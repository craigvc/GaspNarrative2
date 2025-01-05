// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Camera/NarrativeCameraMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCameraMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraMode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeCameraMode Function EnterMode
static const FName NAME_UNarrativeCameraMode_EnterMode = FName(TEXT("EnterMode"));
void UNarrativeCameraMode::EnterMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCameraMode_EnterMode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EnterMode_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCameraMode_EnterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Mode" },
		{ "Comment", "//Enter/exit mode handlers if your mode wants to do anything custom\n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "Enter/exit mode handlers if your mode wants to do anything custom" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraMode_EnterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraMode, nullptr, "EnterMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_EnterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraMode_EnterMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCameraMode_EnterMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraMode_EnterMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraMode::execEnterMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterMode_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCameraMode Function EnterMode

// Begin Class UNarrativeCameraMode Function ExitMode
static const FName NAME_UNarrativeCameraMode_ExitMode = FName(TEXT("ExitMode"));
void UNarrativeCameraMode::ExitMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCameraMode_ExitMode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ExitMode_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCameraMode_ExitMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Mode" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraMode_ExitMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraMode, nullptr, "ExitMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_ExitMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraMode_ExitMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCameraMode_ExitMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraMode_ExitMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraMode::execExitMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitMode_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCameraMode Function ExitMode

// Begin Class UNarrativeCameraMode Function GetCameraDesiredOffset
struct NarrativeCameraMode_eventGetCameraDesiredOffset_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCameraMode_eventGetCameraDesiredOffset_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNarrativeCameraMode_GetCameraDesiredOffset = FName(TEXT("GetCameraDesiredOffset"));
FVector UNarrativeCameraMode::GetCameraDesiredOffset()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCameraMode_GetCameraDesiredOffset);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCameraMode_eventGetCameraDesiredOffset_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetCameraDesiredOffset_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Mode" },
		{ "Comment", "//What the cameras target arm offset should be. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "What the cameras target arm offset should be." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCameraMode_eventGetCameraDesiredOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraMode, nullptr, "GetCameraDesiredOffset", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::PropPointers), sizeof(NarrativeCameraMode_eventGetCameraDesiredOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCameraMode_eventGetCameraDesiredOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraMode::execGetCameraDesiredOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraDesiredOffset_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCameraMode Function GetCameraDesiredOffset

// Begin Class UNarrativeCameraMode Function GetCameraPivotLocation
struct NarrativeCameraMode_eventGetCameraPivotLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCameraMode_eventGetCameraPivotLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNarrativeCameraMode_GetCameraPivotLocation = FName(TEXT("GetCameraPivotLocation"));
FVector UNarrativeCameraMode::GetCameraPivotLocation()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCameraMode_GetCameraPivotLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCameraMode_eventGetCameraPivotLocation_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetCameraPivotLocation_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Mode" },
		{ "Comment", "//Where the cameras target arm should attach to the character.\n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "Where the cameras target arm should attach to the character." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCameraMode_eventGetCameraPivotLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraMode, nullptr, "GetCameraPivotLocation", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::PropPointers), sizeof(NarrativeCameraMode_eventGetCameraPivotLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCameraMode_eventGetCameraPivotLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraMode::execGetCameraPivotLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraPivotLocation_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCameraMode Function GetCameraPivotLocation

// Begin Class UNarrativeCameraMode Function GetOwningCamera
struct Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics
{
	struct NarrativeCameraMode_eventGetOwningCamera_Parms
	{
		UNarrativeCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Mode" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCameraMode_eventGetOwningCamera_Parms, ReturnValue), Z_Construct_UClass_UNarrativeCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraMode, nullptr, "GetOwningCamera", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::NarrativeCameraMode_eventGetOwningCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::NarrativeCameraMode_eventGetOwningCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraMode::execGetOwningCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeCameraComponent**)Z_Param__Result=P_THIS->GetOwningCamera();
	P_NATIVE_END;
}
// End Class UNarrativeCameraMode Function GetOwningCamera

// Begin Class UNarrativeCameraMode
void UNarrativeCameraMode::StaticRegisterNativesUNarrativeCameraMode()
{
	UClass* Class = UNarrativeCameraMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterMode", &UNarrativeCameraMode::execEnterMode },
		{ "ExitMode", &UNarrativeCameraMode::execExitMode },
		{ "GetCameraDesiredOffset", &UNarrativeCameraMode::execGetCameraDesiredOffset },
		{ "GetCameraPivotLocation", &UNarrativeCameraMode::execGetCameraPivotLocation },
		{ "GetOwningCamera", &UNarrativeCameraMode::execGetOwningCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCameraMode);
UClass* Z_Construct_UClass_UNarrativeCameraMode_NoRegister()
{
	return UNarrativeCameraMode::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera modes are managed by the UNarrativeCameraComponent and allow us to blend between different camera behaviours. \n * \n * Camera modes are extremely simple - a mode just specifies the cameras desired FOV and location, and the camera component blends towards it based on its blendspeed. \n */" },
		{ "IncludePath", "Camera/NarrativeCameraMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Camera modes are managed by the UNarrativeCameraComponent and allow us to blend between different camera behaviours.\n\nCamera modes are extremely simple - a mode just specifies the cameras desired FOV and location, and the camera component blends towards it based on its blendspeed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFOV_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//The FOV this camera mode wants. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "The FOV this camera mode wants." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//The offset from the character this mode wants. If you don't want an offset, or need something more complex, you can override GetCameraDesiredTransform()\n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "The offset from the character this mode wants. If you don't want an offset, or need something more complex, you can override GetCameraDesiredTransform()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVInterpSpeed_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//TODO move these to time based instead of units/s\n//units/s Speed to interp FOV at \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "TODO move these to time based instead of units/s\nunits/s Speed to interp FOV at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetInterpSpeed_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//units/s Speed to interp offset at \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "units/s Speed to interp offset at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotInterpSpeed_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//units/s Speed to interp offset at \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraMode.h" },
		{ "ToolTip", "units/s Speed to interp offset at" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetFOV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCameraMode_EnterMode, "EnterMode" }, // 84794299
		{ &Z_Construct_UFunction_UNarrativeCameraMode_ExitMode, "ExitMode" }, // 3183329509
		{ &Z_Construct_UFunction_UNarrativeCameraMode_GetCameraDesiredOffset, "GetCameraDesiredOffset" }, // 2078505944
		{ &Z_Construct_UFunction_UNarrativeCameraMode_GetCameraPivotLocation, "GetCameraPivotLocation" }, // 2881622904
		{ &Z_Construct_UFunction_UNarrativeCameraMode_GetOwningCamera, "GetOwningCamera" }, // 3583950025
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_TargetFOV = { "TargetFOV", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraMode, TargetFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFOV_MetaData), NewProp_TargetFOV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraMode, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_FOVInterpSpeed = { "FOVInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraMode, FOVInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVInterpSpeed_MetaData), NewProp_FOVInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_OffsetInterpSpeed = { "OffsetInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraMode, OffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetInterpSpeed_MetaData), NewProp_OffsetInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_PivotInterpSpeed = { "PivotInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraMode, PivotInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotInterpSpeed_MetaData), NewProp_PivotInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_TargetFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_FOVInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_OffsetInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraMode_Statics::NewProp_PivotInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCameraMode_Statics::ClassParams = {
	&UNarrativeCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraMode_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCameraMode()
{
	if (!Z_Registration_Info_UClass_UNarrativeCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCameraMode.OuterSingleton, Z_Construct_UClass_UNarrativeCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCameraMode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCameraMode>()
{
	return UNarrativeCameraMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCameraMode);
UNarrativeCameraMode::~UNarrativeCameraMode() {}
// End Class UNarrativeCameraMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCameraMode, UNarrativeCameraMode::StaticClass, TEXT("UNarrativeCameraMode"), &Z_Registration_Info_UClass_UNarrativeCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCameraMode), 2543353729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraMode_h_3428162003(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
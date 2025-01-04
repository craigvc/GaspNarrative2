// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatProjectileRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatProjectileRequest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatProjectileRequest Function GetInstigator
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics
{
	struct NinjaCombatProjectileRequest_eventGetInstigator_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Provides the instigator for this request, which can be used by Gameplay Effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Provides the instigator for this request, which can be used by Gameplay Effects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::NinjaCombatProjectileRequest_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::NinjaCombatProjectileRequest_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function GetInstigator

// Begin Class UNinjaCombatProjectileRequest Function GetRequestOwner
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics
{
	struct NinjaCombatProjectileRequest_eventGetRequestOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Provides the owner for this request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Provides the owner for this request." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventGetRequestOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "GetRequestOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::NinjaCombatProjectileRequest_eventGetRequestOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::NinjaCombatProjectileRequest_eventGetRequestOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execGetRequestOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetRequestOwner();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function GetRequestOwner

// Begin Class UNinjaCombatProjectileRequest Function GetRequestSource
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics
{
	struct NinjaCombatProjectileRequest_eventGetRequestSource_Parms
	{
		const UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Provides the source for the request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Provides the source for the request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventGetRequestSource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "GetRequestSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::NinjaCombatProjectileRequest_eventGetRequestSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::NinjaCombatProjectileRequest_eventGetRequestSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execGetRequestSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UObject**)Z_Param__Result=P_THIS->GetRequestSource();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function GetRequestSource

// Begin Class UNinjaCombatProjectileRequest Function GetSocketName
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics
{
	struct NinjaCombatProjectileRequest_eventGetSocketName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Provides the socket name used as an origin for the projectile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Provides the socket name used as an origin for the projectile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventGetSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "GetSocketName", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::NinjaCombatProjectileRequest_eventGetSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::NinjaCombatProjectileRequest_eventGetSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execGetSocketName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketName();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function GetSocketName

// Begin Class UNinjaCombatProjectileRequest Function GetSourceLocation
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics
{
	struct NinjaCombatProjectileRequest_eventGetSourceLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Calculates and provides the Source Rotation that can be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Calculates and provides the Source Rotation that can be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventGetSourceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "GetSourceLocation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::NinjaCombatProjectileRequest_eventGetSourceLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::NinjaCombatProjectileRequest_eventGetSourceLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execGetSourceLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSourceLocation();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function GetSourceLocation

// Begin Class UNinjaCombatProjectileRequest Function GetSourceRotation
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics
{
	struct NinjaCombatProjectileRequest_eventGetSourceRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Calculates and provides the Source Rotation that can be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Calculates and provides the Source Rotation that can be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventGetSourceRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "GetSourceRotation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::NinjaCombatProjectileRequest_eventGetSourceRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::NinjaCombatProjectileRequest_eventGetSourceRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execGetSourceRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetSourceRotation();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function GetSourceRotation

// Begin Class UNinjaCombatProjectileRequest Function HasValidRequestData
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics
{
	struct NinjaCombatProjectileRequest_eventHasValidRequestData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Checks if this instance has valid parameters to request a projectile launch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Checks if this instance has valid parameters to request a projectile launch." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatProjectileRequest_eventHasValidRequestData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatProjectileRequest_eventHasValidRequestData_Parms), &Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "HasValidRequestData", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::NinjaCombatProjectileRequest_eventHasValidRequestData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::NinjaCombatProjectileRequest_eventHasValidRequestData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execHasValidRequestData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidRequestData();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function HasValidRequestData

// Begin Class UNinjaCombatProjectileRequest Function ModifyProjectileActor
struct NinjaCombatProjectileRequest_eventModifyProjectileActor_Parms
{
	AActor* ProjectileActor;
};
static const FName NAME_UNinjaCombatProjectileRequest_ModifyProjectileActor = FName(TEXT("ModifyProjectileActor"));
void UNinjaCombatProjectileRequest::ModifyProjectileActor(AActor* ProjectileActor) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatProjectileRequest_ModifyProjectileActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatProjectileRequest_eventModifyProjectileActor_Parms Parms;
		Parms.ProjectileActor=ProjectileActor;
		const_cast<UNinjaCombatProjectileRequest*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatProjectileRequest*>(this)->ModifyProjectileActor_Implementation(ProjectileActor);
	}
}
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/**\n\x09 * Modifies the projectile once it's available.\n\x09 * \n\x09 * Keep in mind that the projectile might be coming from a pool, so these changes\n\x09 * could carry over to the next usage. Make sure to account for that when using this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Modifies the projectile once it's available.\n\nKeep in mind that the projectile might be coming from a pool, so these changes\ncould carry over to the next usage. Make sure to account for that when using this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::NewProp_ProjectileActor = { "ProjectileActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventModifyProjectileActor_Parms, ProjectileActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::NewProp_ProjectileActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "ModifyProjectileActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::PropPointers), sizeof(NinjaCombatProjectileRequest_eventModifyProjectileActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatProjectileRequest_eventModifyProjectileActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execModifyProjectileActor)
{
	P_GET_OBJECT(AActor,Z_Param_ProjectileActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyProjectileActor_Implementation(Z_Param_ProjectileActor);
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function ModifyProjectileActor

// Begin Class UNinjaCombatProjectileRequest Function NewInstance
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics
{
	struct NinjaCombatProjectileRequest_eventNewInstance_Parms
	{
		TSubclassOf<UNinjaCombatProjectileRequest> RequestClass;
		const UObject* Source;
		AActor* Owner;
		AActor* Instigator;
		UMeshComponent* SourceMesh;
		FName SocketName;
		TSubclassOf<AActor> ProjectileClass;
		UNinjaCombatProjectileRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Creates a new Projectile Request, with required data.\n\x09 *\n\x09 * @param RequestClass\x09\x09Optional class used for the request, in case the default one is being extended.\n\x09 * @param Source\x09\x09\x09Source spawning the projectile.\n\x09 * @param Owner\x09\x09\x09\x09Owner for this request.\n\x09 * @param Instigator\x09\x09Instigator used for the projectile.\n\x09 * @param SourceMesh\x09\x09Source mesh from where the projectile will be spawned.\n\x09 * @param SocketName\x09\x09Socket in the mesh to use as a launch origin.\n\x09 * @param ProjectileClass\x09""Class representing the projectile that will be spawned.\n\x09 * @return\x09\x09\x09\x09\x09The projectile request, ready to be used.\n\x09 */" },
		{ "DisplayName", "New Projectile Request Instance" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Creates a new Projectile Request, with required data.\n\n@param RequestClass          Optional class used for the request, in case the default one is being extended.\n@param Source                        Source spawning the projectile.\n@param Owner                         Owner for this request.\n@param Instigator            Instigator used for the projectile.\n@param SourceMesh            Source mesh from where the projectile will be spawned.\n@param SocketName            Socket in the mesh to use as a launch origin.\n@param ProjectileClass       Class representing the projectile that will be spawned.\n@return                                      The projectile request, ready to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatProjectileInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RequestClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_RequestClass = { "RequestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, RequestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, SourceMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventNewInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_RequestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "NewInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NinjaCombatProjectileRequest_eventNewInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::NinjaCombatProjectileRequest_eventNewInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execNewInstance)
{
	P_GET_OBJECT(UClass,Z_Param_RequestClass);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UMeshComponent,Z_Param_SourceMesh);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatProjectileRequest**)Z_Param__Result=UNinjaCombatProjectileRequest::NewInstance(Z_Param_RequestClass,Z_Param_Source,Z_Param_Owner,Z_Param_Instigator,Z_Param_SourceMesh,Z_Param_SocketName,Z_Param_ProjectileClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function NewInstance

// Begin Class UNinjaCombatProjectileRequest Function ReinforceProjectileClass
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics
{
	struct NinjaCombatProjectileRequest_eventReinforceProjectileClass_Parms
	{
		TSubclassOf<AActor> NewProjectileClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Reinforces the Projectile class used by this request.\n\x09 * Only takes effect it the current value is not set yet.\n\x09 *\n\x09 * @param NewProjectileClass\n\x09 *\x09\x09The projectile class to set, reinforcing the internal value.\n\x09 *\x09\x09Must be valid and implement CombatProjectileInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Reinforces the Projectile class used by this request.\nOnly takes effect it the current value is not set yet.\n\n@param NewProjectileClass\n             The projectile class to set, reinforcing the internal value.\n             Must be valid and implement CombatProjectileInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectileClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatProjectileInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::NewProp_NewProjectileClass = { "NewProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventReinforceProjectileClass_Parms, NewProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewProjectileClass_MetaData), NewProp_NewProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::NewProp_NewProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "ReinforceProjectileClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::NinjaCombatProjectileRequest_eventReinforceProjectileClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::NinjaCombatProjectileRequest_eventReinforceProjectileClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execReinforceProjectileClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewProjectileClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReinforceProjectileClass(Z_Param_NewProjectileClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function ReinforceProjectileClass

// Begin Class UNinjaCombatProjectileRequest Function SetInstigator
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics
{
	struct NinjaCombatProjectileRequest_eventSetInstigator_Parms
	{
		APawn* NewInstigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Sets an instigator for this request, overriding the default one.\n\x09 * \n\x09 * @param NewInstigator\n\x09 *\x09\x09New instigator used for this request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Sets an instigator for this request, overriding the default one.\n\n@param NewInstigator\n             New instigator used for this request." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventSetInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::NewProp_NewInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "SetInstigator", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::NinjaCombatProjectileRequest_eventSetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::NinjaCombatProjectileRequest_eventSetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execSetInstigator)
{
	P_GET_OBJECT(APawn,Z_Param_NewInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInstigator(Z_Param_NewInstigator);
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function SetInstigator

// Begin Class UNinjaCombatProjectileRequest Function SetTargetLocation
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics
{
	struct NinjaCombatProjectileRequest_eventSetTargetLocation_Parms
	{
		FVector NewTargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Sets a target location to aim the projectile at. Optional.\n\x09 * \n\x09 * @param NewTargetLocation\n\x09 *\x09\x09Location used as target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Sets a target location to aim the projectile at. Optional.\n\n@param NewTargetLocation\n             Location used as target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::NewProp_NewTargetLocation = { "NewTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventSetTargetLocation_Parms, NewTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTargetLocation_MetaData), NewProp_NewTargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::NewProp_NewTargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "SetTargetLocation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::NinjaCombatProjectileRequest_eventSetTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::NinjaCombatProjectileRequest_eventSetTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execSetTargetLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewTargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetLocation(Z_Param_Out_NewTargetLocation);
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function SetTargetLocation

// Begin Class UNinjaCombatProjectileRequest Function SpawnProjectileActor
struct Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics
{
	struct NinjaCombatProjectileRequest_eventSpawnProjectileActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Projectile Request" },
		{ "Comment", "/**\n\x09 * Spawns the projectile, based on the internal definition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Spawns the projectile, based on the internal definition." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatProjectileRequest_eventSpawnProjectileActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatProjectileRequest, nullptr, "SpawnProjectileActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::NinjaCombatProjectileRequest_eventSpawnProjectileActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::NinjaCombatProjectileRequest_eventSpawnProjectileActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatProjectileRequest::execSpawnProjectileActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnProjectileActor();
	P_NATIVE_END;
}
// End Class UNinjaCombatProjectileRequest Function SpawnProjectileActor

// Begin Class UNinjaCombatProjectileRequest
void UNinjaCombatProjectileRequest::StaticRegisterNativesUNinjaCombatProjectileRequest()
{
	UClass* Class = UNinjaCombatProjectileRequest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstigator", &UNinjaCombatProjectileRequest::execGetInstigator },
		{ "GetRequestOwner", &UNinjaCombatProjectileRequest::execGetRequestOwner },
		{ "GetRequestSource", &UNinjaCombatProjectileRequest::execGetRequestSource },
		{ "GetSocketName", &UNinjaCombatProjectileRequest::execGetSocketName },
		{ "GetSourceLocation", &UNinjaCombatProjectileRequest::execGetSourceLocation },
		{ "GetSourceRotation", &UNinjaCombatProjectileRequest::execGetSourceRotation },
		{ "HasValidRequestData", &UNinjaCombatProjectileRequest::execHasValidRequestData },
		{ "ModifyProjectileActor", &UNinjaCombatProjectileRequest::execModifyProjectileActor },
		{ "NewInstance", &UNinjaCombatProjectileRequest::execNewInstance },
		{ "ReinforceProjectileClass", &UNinjaCombatProjectileRequest::execReinforceProjectileClass },
		{ "SetInstigator", &UNinjaCombatProjectileRequest::execSetInstigator },
		{ "SetTargetLocation", &UNinjaCombatProjectileRequest::execSetTargetLocation },
		{ "SpawnProjectileActor", &UNinjaCombatProjectileRequest::execSpawnProjectileActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatProjectileRequest);
UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister()
{
	return UNinjaCombatProjectileRequest::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a request to launch a projectile.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatProjectileRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Represents a request to launch a projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestSource_MetaData[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/** Object that has instantiated the projectile request. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Object that has instantiated the projectile request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestOwner_MetaData[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/** Actor that has triggered the projectile. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Actor that has triggered the projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/** Instigator for this projectile, which can be used by Gameplay Effects. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Instigator for this projectile, which can be used by Gameplay Effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/** The Mesh Component from which the projectile will spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "The Mesh Component from which the projectile will spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/** Socket used to retrieve the origin location. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Socket used to retrieve the origin location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/** Class representing the projectile that will be spawned. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatProjectileRequest.h" },
		{ "ToolTip", "Class representing the projectile that will be spawned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetInstigator, "GetInstigator" }, // 1880125236
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestOwner, "GetRequestOwner" }, // 324434196
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetRequestSource, "GetRequestSource" }, // 1121481117
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSocketName, "GetSocketName" }, // 3640246955
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceLocation, "GetSourceLocation" }, // 1543700914
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_GetSourceRotation, "GetSourceRotation" }, // 2981732311
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_HasValidRequestData, "HasValidRequestData" }, // 2203518891
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_ModifyProjectileActor, "ModifyProjectileActor" }, // 576789726
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_NewInstance, "NewInstance" }, // 3704995424
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_ReinforceProjectileClass, "ReinforceProjectileClass" }, // 4227677055
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetInstigator, "SetInstigator" }, // 3618816002
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_SetTargetLocation, "SetTargetLocation" }, // 923488682
		{ &Z_Construct_UFunction_UNinjaCombatProjectileRequest_SpawnProjectileActor, "SpawnProjectileActor" }, // 4051231668
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatProjectileRequest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_RequestSource = { "RequestSource", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatProjectileRequest, RequestSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestSource_MetaData), NewProp_RequestSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_RequestOwner = { "RequestOwner", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatProjectileRequest, RequestOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestOwner_MetaData), NewProp_RequestOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatProjectileRequest, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatProjectileRequest, SourceMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatProjectileRequest, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatProjectileRequest, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_RequestSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_RequestOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::ClassParams = {
	&UNinjaCombatProjectileRequest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatProjectileRequest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatProjectileRequest.OuterSingleton, Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatProjectileRequest.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatProjectileRequest>()
{
	return UNinjaCombatProjectileRequest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatProjectileRequest);
UNinjaCombatProjectileRequest::~UNinjaCombatProjectileRequest() {}
// End Class UNinjaCombatProjectileRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatProjectileRequest, UNinjaCombatProjectileRequest::StaticClass, TEXT("UNinjaCombatProjectileRequest"), &Z_Registration_Info_UClass_UNinjaCombatProjectileRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatProjectileRequest), 1166191711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_192616867(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

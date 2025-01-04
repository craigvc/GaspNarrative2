// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatCastRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatCastRequest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCastRequest();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatCastRequest Function GetCastTransform
struct Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics
{
	struct NinjaCombatCastRequest_eventGetCastTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Provides the transform for the cast.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Provides the transform for the cast." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventGetCastTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "GetCastTransform", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::NinjaCombatCastRequest_eventGetCastTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::NinjaCombatCastRequest_eventGetCastTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execGetCastTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetCastTransform();
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function GetCastTransform

// Begin Class UNinjaCombatCastRequest Function GetInstigator
struct Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics
{
	struct NinjaCombatCastRequest_eventGetInstigator_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Provides the instigator for this request, which can be used by Gameplay Effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Provides the instigator for this request, which can be used by Gameplay Effects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::NinjaCombatCastRequest_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::NinjaCombatCastRequest_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function GetInstigator

// Begin Class UNinjaCombatCastRequest Function GetRequestOwner
struct Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics
{
	struct NinjaCombatCastRequest_eventGetRequestOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Provides the owner for this request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Provides the owner for this request." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventGetRequestOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "GetRequestOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::NinjaCombatCastRequest_eventGetRequestOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::NinjaCombatCastRequest_eventGetRequestOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execGetRequestOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetRequestOwner();
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function GetRequestOwner

// Begin Class UNinjaCombatCastRequest Function GetRequestSource
struct Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics
{
	struct NinjaCombatCastRequest_eventGetRequestSource_Parms
	{
		const UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Provides the source for the request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventGetRequestSource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "GetRequestSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::NinjaCombatCastRequest_eventGetRequestSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::NinjaCombatCastRequest_eventGetRequestSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execGetRequestSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UObject**)Z_Param__Result=P_THIS->GetRequestSource();
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function GetRequestSource

// Begin Class UNinjaCombatCastRequest Function GetSourceLocation
struct Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics
{
	struct NinjaCombatCastRequest_eventGetSourceLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Calculates and provides the Source Rotation that can be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Calculates and provides the Source Rotation that can be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventGetSourceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "GetSourceLocation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::NinjaCombatCastRequest_eventGetSourceLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::NinjaCombatCastRequest_eventGetSourceLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execGetSourceLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSourceLocation();
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function GetSourceLocation

// Begin Class UNinjaCombatCastRequest Function ModifyCastActor
struct NinjaCombatCastRequest_eventModifyCastActor_Parms
{
	AActor* CastActor;
};
static const FName NAME_UNinjaCombatCastRequest_ModifyCastActor = FName(TEXT("ModifyCastActor"));
void UNinjaCombatCastRequest::ModifyCastActor(AActor* CastActor) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCastRequest_ModifyCastActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCastRequest_eventModifyCastActor_Parms Parms;
		Parms.CastActor=CastActor;
		const_cast<UNinjaCombatCastRequest*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatCastRequest*>(this)->ModifyCastActor_Implementation(CastActor);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Request" },
		{ "Comment", "/**\n\x09 * Modifies the cast once it's available.\n\x09 * \n\x09 * Keep in mind that the cast might be coming from a pool, so these changes could\n\x09 * carry over to the next usage. Make sure to account for that when using this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Modifies the cast once it's available.\n\nKeep in mind that the cast might be coming from a pool, so these changes could\ncarry over to the next usage. Make sure to account for that when using this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::NewProp_CastActor = { "CastActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventModifyCastActor_Parms, CastActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::NewProp_CastActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "ModifyCastActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::PropPointers), sizeof(NinjaCombatCastRequest_eventModifyCastActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCastRequest_eventModifyCastActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execModifyCastActor)
{
	P_GET_OBJECT(AActor,Z_Param_CastActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyCastActor_Implementation(Z_Param_CastActor);
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function ModifyCastActor

// Begin Class UNinjaCombatCastRequest Function NewInstance
struct Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics
{
	struct NinjaCombatCastRequest_eventNewInstance_Parms
	{
		TSubclassOf<UNinjaCombatCastRequest> RequestClass;
		const UObject* Source;
		AActor* Owner;
		AActor* Instigator;
		TSubclassOf<AActor> CastClass;
		UNinjaCombatCastRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Creates a new Cast Request, with required data.\n\x09 *\n\x09 * @param RequestClass\x09\x09Optional class used for the request, in case the default one is being extended.\n\x09 * @param Source\x09\x09\x09Source requesting the cast.\n\x09 * @param Owner\x09\x09\x09\x09Owner for this request.\n\x09 * @param Instigator\x09\x09Instigator used for the projectile.\n\x09 * @param CastClass\x09\x09\x09""Class representing the cast that will be spawned.\n\x09 * @return\x09\x09\x09\x09\x09The cast request, ready to be used.\n\x09 */" },
		{ "DefaultToSelf", "Source" },
		{ "DisplayName", "New Cast Request Instance" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Creates a new Cast Request, with required data.\n\n@param RequestClass          Optional class used for the request, in case the default one is being extended.\n@param Source                        Source requesting the cast.\n@param Owner                         Owner for this request.\n@param Instigator            Instigator used for the projectile.\n@param CastClass                     Class representing the cast that will be spawned.\n@return                                      The cast request, ready to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatCastInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RequestClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_RequestClass = { "RequestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventNewInstance_Parms, RequestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventNewInstance_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventNewInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventNewInstance_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_CastClass = { "CastClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventNewInstance_Parms, CastClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastClass_MetaData), NewProp_CastClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventNewInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_RequestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_CastClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "NewInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NinjaCombatCastRequest_eventNewInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::NinjaCombatCastRequest_eventNewInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execNewInstance)
{
	P_GET_OBJECT(UClass,Z_Param_RequestClass);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UClass,Z_Param_CastClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatCastRequest**)Z_Param__Result=UNinjaCombatCastRequest::NewInstance(Z_Param_RequestClass,Z_Param_Source,Z_Param_Owner,Z_Param_Instigator,Z_Param_CastClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function NewInstance

// Begin Class UNinjaCombatCastRequest Function ReinforceCastClass
struct Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics
{
	struct NinjaCombatCastRequest_eventReinforceCastClass_Parms
	{
		TSubclassOf<AActor> NewCastClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Reinforces the Cast class used by this request.\n\x09 * Only takes effect it the current value is not set yet.\n\x09 *\n\x09 * @param NewCastClass\n\x09 *\x09\x09The projectile class to set, reinforcing the internal value.\n\x09 *\x09\x09Must be valid and implement CombatCastInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Reinforces the Cast class used by this request.\nOnly takes effect it the current value is not set yet.\n\n@param NewCastClass\n             The projectile class to set, reinforcing the internal value.\n             Must be valid and implement CombatCastInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCastClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatCastInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewCastClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::NewProp_NewCastClass = { "NewCastClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventReinforceCastClass_Parms, NewCastClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCastClass_MetaData), NewProp_NewCastClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::NewProp_NewCastClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "ReinforceCastClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::NinjaCombatCastRequest_eventReinforceCastClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::NinjaCombatCastRequest_eventReinforceCastClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execReinforceCastClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewCastClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReinforceCastClass(Z_Param_NewCastClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function ReinforceCastClass

// Begin Class UNinjaCombatCastRequest Function SetCastTransform
struct Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics
{
	struct NinjaCombatCastRequest_eventSetCastTransform_Parms
	{
		FTransform NewCastTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Sets a new transform for the cast actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Sets a new transform for the cast actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCastTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::NewProp_NewCastTransform = { "NewCastTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventSetCastTransform_Parms, NewCastTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::NewProp_NewCastTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "SetCastTransform", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::NinjaCombatCastRequest_eventSetCastTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::NinjaCombatCastRequest_eventSetCastTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execSetCastTransform)
{
	P_GET_STRUCT(FTransform,Z_Param_NewCastTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastTransform(Z_Param_NewCastTransform);
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function SetCastTransform

// Begin Class UNinjaCombatCastRequest Function SetInstigator
struct Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics
{
	struct NinjaCombatCastRequest_eventSetInstigator_Parms
	{
		APawn* NewInstigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Sets an instigator for this request, overriding the default one.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Sets an instigator for this request, overriding the default one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventSetInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::NewProp_NewInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "SetInstigator", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::NinjaCombatCastRequest_eventSetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::NinjaCombatCastRequest_eventSetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execSetInstigator)
{
	P_GET_OBJECT(APawn,Z_Param_NewInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInstigator(Z_Param_NewInstigator);
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function SetInstigator

// Begin Class UNinjaCombatCastRequest Function SpawnCastActor
struct Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics
{
	struct NinjaCombatCastRequest_eventSpawnCastActor_Parms
	{
		bool bAutoActivate;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast Request" },
		{ "Comment", "/**\n\x09 * Spawns the cast, based on the internal definition.\n\x09 */" },
		{ "CPP_Default_bAutoActivate", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Spawns the cast, based on the internal definition." },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
{
	((NinjaCombatCastRequest_eventSpawnCastActor_Parms*)Obj)->bAutoActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatCastRequest_eventSpawnCastActor_Parms), &Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastRequest_eventSpawnCastActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NewProp_bAutoActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCastRequest, nullptr, "SpawnCastActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NinjaCombatCastRequest_eventSpawnCastActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::NinjaCombatCastRequest_eventSpawnCastActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCastRequest::execSpawnCastActor)
{
	P_GET_UBOOL(Z_Param_bAutoActivate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnCastActor(Z_Param_bAutoActivate);
	P_NATIVE_END;
}
// End Class UNinjaCombatCastRequest Function SpawnCastActor

// Begin Class UNinjaCombatCastRequest
void UNinjaCombatCastRequest::StaticRegisterNativesUNinjaCombatCastRequest()
{
	UClass* Class = UNinjaCombatCastRequest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCastTransform", &UNinjaCombatCastRequest::execGetCastTransform },
		{ "GetInstigator", &UNinjaCombatCastRequest::execGetInstigator },
		{ "GetRequestOwner", &UNinjaCombatCastRequest::execGetRequestOwner },
		{ "GetRequestSource", &UNinjaCombatCastRequest::execGetRequestSource },
		{ "GetSourceLocation", &UNinjaCombatCastRequest::execGetSourceLocation },
		{ "ModifyCastActor", &UNinjaCombatCastRequest::execModifyCastActor },
		{ "NewInstance", &UNinjaCombatCastRequest::execNewInstance },
		{ "ReinforceCastClass", &UNinjaCombatCastRequest::execReinforceCastClass },
		{ "SetCastTransform", &UNinjaCombatCastRequest::execSetCastTransform },
		{ "SetInstigator", &UNinjaCombatCastRequest::execSetInstigator },
		{ "SpawnCastActor", &UNinjaCombatCastRequest::execSpawnCastActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatCastRequest);
UClass* Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister()
{
	return UNinjaCombatCastRequest::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatCastRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a request to spawn a cast actor\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatCastRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Represents a request to spawn a cast actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestSource_MetaData[] = {
		{ "Category", "Cast Request" },
		{ "Comment", "/** Object that has instantiated the cast request. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Object that has instantiated the cast request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestOwner_MetaData[] = {
		{ "Category", "Cast Request" },
		{ "Comment", "/** Actor that has triggered the cast. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Actor that has triggered the cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Cast Request" },
		{ "Comment", "/** Instigator for this projectile, which can be used by Gameplay Effects. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Instigator for this projectile, which can be used by Gameplay Effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastClass_MetaData[] = {
		{ "Category", "Cast Request" },
		{ "Comment", "/** Class representing the cast that will be spawned. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Class representing the cast that will be spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastTransform_MetaData[] = {
		{ "Category", "Cast Request" },
		{ "Comment", "/** Transform assigned to the cast actor. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastRequest.h" },
		{ "ToolTip", "Transform assigned to the cast actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_GetCastTransform, "GetCastTransform" }, // 2765350236
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_GetInstigator, "GetInstigator" }, // 2183264749
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestOwner, "GetRequestOwner" }, // 1609217945
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_GetRequestSource, "GetRequestSource" }, // 120704019
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_GetSourceLocation, "GetSourceLocation" }, // 2968914496
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_ModifyCastActor, "ModifyCastActor" }, // 4086241898
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_NewInstance, "NewInstance" }, // 3238459434
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_ReinforceCastClass, "ReinforceCastClass" }, // 1179215299
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_SetCastTransform, "SetCastTransform" }, // 2114266956
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_SetInstigator, "SetInstigator" }, // 2689473623
		{ &Z_Construct_UFunction_UNinjaCombatCastRequest_SpawnCastActor, "SpawnCastActor" }, // 2464099477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatCastRequest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_RequestSource = { "RequestSource", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCastRequest, RequestSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestSource_MetaData), NewProp_RequestSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_RequestOwner = { "RequestOwner", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCastRequest, RequestOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestOwner_MetaData), NewProp_RequestOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCastRequest, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_CastClass = { "CastClass", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCastRequest, CastClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastClass_MetaData), NewProp_CastClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_CastTransform = { "CastTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCastRequest, CastTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastTransform_MetaData), NewProp_CastTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatCastRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_RequestSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_RequestOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_CastClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCastRequest_Statics::NewProp_CastTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCastRequest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatCastRequest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCastRequest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatCastRequest_Statics::ClassParams = {
	&UNinjaCombatCastRequest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatCastRequest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCastRequest_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCastRequest_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatCastRequest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatCastRequest()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatCastRequest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatCastRequest.OuterSingleton, Z_Construct_UClass_UNinjaCombatCastRequest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatCastRequest.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatCastRequest>()
{
	return UNinjaCombatCastRequest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatCastRequest);
UNinjaCombatCastRequest::~UNinjaCombatCastRequest() {}
// End Class UNinjaCombatCastRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatCastRequest, UNinjaCombatCastRequest::StaticClass, TEXT("UNinjaCombatCastRequest"), &Z_Registration_Info_UClass_UNinjaCombatCastRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatCastRequest), 4170925224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_1543373047(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

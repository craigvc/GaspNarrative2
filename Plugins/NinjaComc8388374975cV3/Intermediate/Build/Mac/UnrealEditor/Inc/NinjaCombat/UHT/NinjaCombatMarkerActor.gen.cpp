// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatMarkerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatMarkerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatMarkerActor();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_ANinjaCombatPoolableActor();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class ANinjaCombatMarkerActor Function AttachToTarget
struct NinjaCombatMarkerActor_eventAttachToTarget_Parms
{
	USceneComponent* AnchorComponent;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatMarkerActor_eventAttachToTarget_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ANinjaCombatMarkerActor_AttachToTarget = FName(TEXT("AttachToTarget"));
bool ANinjaCombatMarkerActor::AttachToTarget(USceneComponent* AnchorComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatMarkerActor_AttachToTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMarkerActor_eventAttachToTarget_Parms Parms;
		Parms.AnchorComponent=AnchorComponent;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return AttachToTarget_Implementation(AnchorComponent);
	}
}
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/**\n\x09 * Attaches to the Anchor Component provided to the function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Attaches to the Anchor Component provided to the function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::NewProp_AnchorComponent = { "AnchorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventAttachToTarget_Parms, AnchorComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorComponent_MetaData), NewProp_AnchorComponent_MetaData) };
void Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatMarkerActor_eventAttachToTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatMarkerActor_eventAttachToTarget_Parms), &Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::NewProp_AnchorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "AttachToTarget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::PropPointers), sizeof(NinjaCombatMarkerActor_eventAttachToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMarkerActor_eventAttachToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execAttachToTarget)
{
	P_GET_OBJECT(USceneComponent,Z_Param_AnchorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AttachToTarget_Implementation(Z_Param_AnchorComponent);
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function AttachToTarget

// Begin Class ANinjaCombatMarkerActor Function DetachFromTarget
static const FName NAME_ANinjaCombatMarkerActor_DetachFromTarget = FName(TEXT("DetachFromTarget"));
void ANinjaCombatMarkerActor::DetachFromTarget()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatMarkerActor_DetachFromTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		DetachFromTarget_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/**\n\x09 * Performs tasks that will detach this actor and remove it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Performs tasks that will detach this actor and remove it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "DetachFromTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execDetachFromTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetachFromTarget_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function DetachFromTarget

// Begin Class ANinjaCombatMarkerActor Function DismissTarget
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Marker Actor" },
		{ "Comment", "/**\n\x09 * Detaches from the current target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Detaches from the current target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "DismissTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execDismissTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismissTarget();
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function DismissTarget

// Begin Class ANinjaCombatMarkerActor Function FindAttachAnchor
struct NinjaCombatMarkerActor_eventFindAttachAnchor_Parms
{
	const AActor* Target;
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatMarkerActor_eventFindAttachAnchor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaCombatMarkerActor_FindAttachAnchor = FName(TEXT("FindAttachAnchor"));
USceneComponent* ANinjaCombatMarkerActor::FindAttachAnchor(const AActor* Target) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatMarkerActor_FindAttachAnchor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMarkerActor_eventFindAttachAnchor_Parms Parms;
		Parms.Target=Target;
		const_cast<ANinjaCombatMarkerActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatMarkerActor*>(this)->FindAttachAnchor_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/**\n\x09 * Finds a proper scene component in the actor, that can be used as an Anchor Point.\n\x09 *\n\x09 * This component should also contain the proper attachment socket, for proper positioning,\n\x09 * but you can obviously override this behavior either in Blueprint or C++, in case you want\n\x09 * to determine the anchor point using other means.\n\x09 *\n\x09 * A common use case for that would be a Third Person Game where you are facing a big enemy,\n\x09 * like a dragon, and you want to attach this to specific locations that can be seen by the\n\x09 * player, such as the legs. For that, you might want to do line traces from the camera and\n\x09 * see which Scene Component will be hit at the center of the screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Finds a proper scene component in the actor, that can be used as an Anchor Point.\n\nThis component should also contain the proper attachment socket, for proper positioning,\nbut you can obviously override this behavior either in Blueprint or C++, in case you want\nto determine the anchor point using other means.\n\nA common use case for that would be a Third Person Game where you are facing a big enemy,\nlike a dragon, and you want to attach this to specific locations that can be seen by the\nplayer, such as the legs. For that, you might want to do line traces from the camera and\nsee which Scene Component will be hit at the center of the screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventFindAttachAnchor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventFindAttachAnchor_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "FindAttachAnchor", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::PropPointers), sizeof(NinjaCombatMarkerActor_eventFindAttachAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMarkerActor_eventFindAttachAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execFindAttachAnchor)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->FindAttachAnchor_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function FindAttachAnchor

// Begin Class ANinjaCombatMarkerActor Function GetCurrentTarget
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics
{
	struct NinjaCombatMarkerActor_eventGetCurrentTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Marker Actor" },
		{ "Comment", "/**\n\x09 * Provides the current target assigned to this lock actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Provides the current target assigned to this lock actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventGetCurrentTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "GetCurrentTarget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::NinjaCombatMarkerActor_eventGetCurrentTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::NinjaCombatMarkerActor_eventGetCurrentTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execGetCurrentTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCurrentTarget();
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function GetCurrentTarget

// Begin Class ANinjaCombatMarkerActor Function GetTargetLockWidget
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics
{
	struct NinjaCombatMarkerActor_eventGetTargetLockWidget_Parms
	{
		UWidgetComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Marker Actor" },
		{ "Comment", "/**\n\x09 * Provides the Widget Component used to show the target lock.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Provides the Widget Component used to show the target lock." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventGetTargetLockWidget_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "GetTargetLockWidget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::NinjaCombatMarkerActor_eventGetTargetLockWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::NinjaCombatMarkerActor_eventGetTargetLockWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execGetTargetLockWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetComponent**)Z_Param__Result=P_THIS->GetTargetLockWidget();
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function GetTargetLockWidget

// Begin Class ANinjaCombatMarkerActor Function HandleTargetCleared
struct NinjaCombatMarkerActor_eventHandleTargetCleared_Parms
{
	AActor* Target;
};
static const FName NAME_ANinjaCombatMarkerActor_HandleTargetCleared = FName(TEXT("HandleTargetCleared"));
void ANinjaCombatMarkerActor::HandleTargetCleared(AActor* Target)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatMarkerActor_HandleTargetCleared);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMarkerActor_eventHandleTargetCleared_Parms Parms;
		Parms.Target=Target;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleTargetCleared_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/**\n\x09 * Event dedicated to running any logic when a target is cleared.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Event dedicated to running any logic when a target is cleared." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventHandleTargetCleared_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "HandleTargetCleared", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::PropPointers), sizeof(NinjaCombatMarkerActor_eventHandleTargetCleared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMarkerActor_eventHandleTargetCleared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execHandleTargetCleared)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetCleared_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function HandleTargetCleared

// Begin Class ANinjaCombatMarkerActor Function HandleTargetSet
struct NinjaCombatMarkerActor_eventHandleTargetSet_Parms
{
	AActor* Target;
};
static const FName NAME_ANinjaCombatMarkerActor_HandleTargetSet = FName(TEXT("HandleTargetSet"));
void ANinjaCombatMarkerActor::HandleTargetSet(AActor* Target)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatMarkerActor_HandleTargetSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMarkerActor_eventHandleTargetSet_Parms Parms;
		Parms.Target=Target;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleTargetSet_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/**\n\x09 * Event dedicated to running any logic when a target is set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Event dedicated to running any logic when a target is set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventHandleTargetSet_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "HandleTargetSet", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::PropPointers), sizeof(NinjaCombatMarkerActor_eventHandleTargetSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMarkerActor_eventHandleTargetSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execHandleTargetSet)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetSet_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function HandleTargetSet

// Begin Class ANinjaCombatMarkerActor Function LockOnTarget
struct Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics
{
	struct NinjaCombatMarkerActor_eventLockOnTarget_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Marker Actor" },
		{ "Comment", "/**\n\x09 * Locks on a given target.\n\x09 *\n\x09 * The proper positioning to attach to is determined by this actor's \"FindAttachAnchor\" function,\n\x09 * which can be further extended to create more complex attachment scenarios. Please check that\n\x09 * function's documentation for more information.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Locks on a given target.\n\nThe proper positioning to attach to is determined by this actor's \"FindAttachAnchor\" function,\nwhich can be further extended to create more complex attachment scenarios. Please check that\nfunction's documentation for more information." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMarkerActor_eventLockOnTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatMarkerActor, nullptr, "LockOnTarget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::NinjaCombatMarkerActor_eventLockOnTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::NinjaCombatMarkerActor_eventLockOnTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatMarkerActor::execLockOnTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockOnTarget(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatMarkerActor Function LockOnTarget

// Begin Class ANinjaCombatMarkerActor
void ANinjaCombatMarkerActor::StaticRegisterNativesANinjaCombatMarkerActor()
{
	UClass* Class = ANinjaCombatMarkerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachToTarget", &ANinjaCombatMarkerActor::execAttachToTarget },
		{ "DetachFromTarget", &ANinjaCombatMarkerActor::execDetachFromTarget },
		{ "DismissTarget", &ANinjaCombatMarkerActor::execDismissTarget },
		{ "FindAttachAnchor", &ANinjaCombatMarkerActor::execFindAttachAnchor },
		{ "GetCurrentTarget", &ANinjaCombatMarkerActor::execGetCurrentTarget },
		{ "GetTargetLockWidget", &ANinjaCombatMarkerActor::execGetTargetLockWidget },
		{ "HandleTargetCleared", &ANinjaCombatMarkerActor::execHandleTargetCleared },
		{ "HandleTargetSet", &ANinjaCombatMarkerActor::execHandleTargetSet },
		{ "LockOnTarget", &ANinjaCombatMarkerActor::execLockOnTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatMarkerActor);
UClass* Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister()
{
	return ANinjaCombatMarkerActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatMarkerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An actor used to indicate multiple effects and status on a target.\n * \n * This is only used for the local player. Unless there's an actual target locked on it, it will always have a duration.\n * Otherwise, it will always be returned to the pool after the pre-established amount of time.\n *\n * The expected usage scenario for this is to have a Scene Component in the owner, tagged with the value set in the\n * \"TargetMeshTag\" property. This Scene Component is attached to the appropriate socket and can be moved as needed.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatMarkerActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "An actor used to indicate multiple effects and status on a target.\n\nThis is only used for the local player. Unless there's an actual target locked on it, it will always have a duration.\nOtherwise, it will always be returned to the pool after the pre-established amount of time.\n\nThe expected usage scenario for this is to have a Scene Component in the owner, tagged with the value set in the\n\"TargetMeshTag\" property. This Scene Component is attached to the appropriate socket and can be moved as needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnDetach_MetaData[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/**\n\x09 * If set to true, it will destroy the actor when detached from a target.\n\x09 * Otherwise, it will detach the actor and make it invisible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "If set to true, it will destroy the actor when detached from a target.\nOtherwise, it will detach the actor and make it invisible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshTag_MetaData[] = {
		{ "Category", "Marker Actor" },
		{ "Comment", "/** Tag used to obtain the mesh  */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Tag used to obtain the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Comment", "/** Current target. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Current target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidget_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Widget Component rendering the target lock representation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMarkerActor.h" },
		{ "ToolTip", "Widget Component rendering the target lock representation." },
	};
#endif // WITH_METADATA
	static void NewProp_bDestroyOnDetach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnDetach;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_AttachToTarget, "AttachToTarget" }, // 2758309004
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_DetachFromTarget, "DetachFromTarget" }, // 1029013757
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_DismissTarget, "DismissTarget" }, // 3474613871
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_FindAttachAnchor, "FindAttachAnchor" }, // 3884344267
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_GetCurrentTarget, "GetCurrentTarget" }, // 3967454
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_GetTargetLockWidget, "GetTargetLockWidget" }, // 3228460328
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetCleared, "HandleTargetCleared" }, // 2656906417
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_HandleTargetSet, "HandleTargetSet" }, // 3521100163
		{ &Z_Construct_UFunction_ANinjaCombatMarkerActor_LockOnTarget, "LockOnTarget" }, // 3158631367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatMarkerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_bDestroyOnDetach_SetBit(void* Obj)
{
	((ANinjaCombatMarkerActor*)Obj)->bDestroyOnDetach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_bDestroyOnDetach = { "bDestroyOnDetach", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatMarkerActor), &Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_bDestroyOnDetach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOnDetach_MetaData), NewProp_bDestroyOnDetach_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_TargetMeshTag = { "TargetMeshTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatMarkerActor, TargetMeshTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshTag_MetaData), NewProp_TargetMeshTag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatMarkerActor, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_TargetLockWidget = { "TargetLockWidget", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatMarkerActor, TargetLockWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockWidget_MetaData), NewProp_TargetLockWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_bDestroyOnDetach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_TargetMeshTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::NewProp_TargetLockWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaCombatPoolableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::ClassParams = {
	&ANinjaCombatMarkerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatMarkerActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatMarkerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatMarkerActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatMarkerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatMarkerActor.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<ANinjaCombatMarkerActor>()
{
	return ANinjaCombatMarkerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatMarkerActor);
ANinjaCombatMarkerActor::~ANinjaCombatMarkerActor() {}
// End Class ANinjaCombatMarkerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatMarkerActor, ANinjaCombatMarkerActor::StaticClass, TEXT("ANinjaCombatMarkerActor"), &Z_Registration_Info_UClass_ANinjaCombatMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatMarkerActor), 2603555960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_3343967431(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

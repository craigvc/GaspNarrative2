// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/GameFramework/NinjaCombatPoolableActor.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatPoolableActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_ANinjaCombatPoolableActor();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_ANinjaCombatPoolableActor_NoRegister();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UCombatPoolableActorInterface_NoRegister();
NINJACOMBATACTORPOOL_API UEnum* Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin Class ANinjaCombatPoolableActor Function HandleTimerExpired
struct Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Handles the actor once the timer has expired.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "Handles the actor once the timer has expired." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatPoolableActor, nullptr, "HandleTimerExpired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatPoolableActor::execHandleTimerExpired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTimerExpired();
	P_NATIVE_END;
}
// End Class ANinjaCombatPoolableActor Function HandleTimerExpired

// Begin Class ANinjaCombatPoolableActor Function OnActivation
static const FName NAME_ANinjaCombatPoolableActor_OnActivation = FName(TEXT("OnActivation"));
void ANinjaCombatPoolableActor::OnActivation()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatPoolableActor_OnActivation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnActivation_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Poolable Actor" },
		{ "Comment", "/**\n\x09 * Reacts to this actor being activated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "Reacts to this actor being activated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatPoolableActor, nullptr, "OnActivation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatPoolableActor::execOnActivation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActivation_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatPoolableActor Function OnActivation

// Begin Class ANinjaCombatPoolableActor Function OnDeactivation
static const FName NAME_ANinjaCombatPoolableActor_OnDeactivation = FName(TEXT("OnDeactivation"));
void ANinjaCombatPoolableActor::OnDeactivation()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatPoolableActor_OnDeactivation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDeactivation_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Poolable Actor" },
		{ "Comment", "/**\n\x09 * Reacts to this actor being deactivated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "Reacts to this actor being deactivated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatPoolableActor, nullptr, "OnDeactivation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatPoolableActor::execOnDeactivation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeactivation_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatPoolableActor Function OnDeactivation

// Begin Class ANinjaCombatPoolableActor Function OnRep_PoolableActorState
struct Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics
{
	struct NinjaCombatPoolableActor_eventOnRep_PoolableActorState_Parms
	{
		EPoolableActorState PreviousActorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the replication of the Poolable Actor State property.\n\x09 * Allows objects to perform certain tasks during different lifecycle states.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "Reacts to the replication of the Poolable Actor State property.\nAllows objects to perform certain tasks during different lifecycle states." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousActorState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousActorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::NewProp_PreviousActorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::NewProp_PreviousActorState = { "PreviousActorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatPoolableActor_eventOnRep_PoolableActorState_Parms, PreviousActorState), Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState, METADATA_PARAMS(0, nullptr) }; // 280490186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::NewProp_PreviousActorState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::NewProp_PreviousActorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatPoolableActor, nullptr, "OnRep_PoolableActorState", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::NinjaCombatPoolableActor_eventOnRep_PoolableActorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::NinjaCombatPoolableActor_eventOnRep_PoolableActorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatPoolableActor::execOnRep_PoolableActorState)
{
	P_GET_ENUM(EPoolableActorState,Z_Param_PreviousActorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PoolableActorState(EPoolableActorState(Z_Param_PreviousActorState));
	P_NATIVE_END;
}
// End Class ANinjaCombatPoolableActor Function OnRep_PoolableActorState

// Begin Class ANinjaCombatPoolableActor Function Server_Deactivate
static const FName NAME_ANinjaCombatPoolableActor_Server_Deactivate = FName(TEXT("Server_Deactivate"));
void ANinjaCombatPoolableActor::Server_Deactivate()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatPoolableActor_Server_Deactivate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Deactivates the actor in the server.\n\x09 * Useful for scenarios where deactivation comes from cosmetics (niagara, etc.).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "Deactivates the actor in the server.\nUseful for scenarios where deactivation comes from cosmetics (niagara, etc.)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatPoolableActor, nullptr, "Server_Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatPoolableActor::execServer_Deactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Deactivate_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Deactivate_Validate"));
		return;
	}
	P_THIS->Server_Deactivate_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatPoolableActor Function Server_Deactivate

// Begin Class ANinjaCombatPoolableActor
void ANinjaCombatPoolableActor::StaticRegisterNativesANinjaCombatPoolableActor()
{
	UClass* Class = ANinjaCombatPoolableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleTimerExpired", &ANinjaCombatPoolableActor::execHandleTimerExpired },
		{ "OnActivation", &ANinjaCombatPoolableActor::execOnActivation },
		{ "OnDeactivation", &ANinjaCombatPoolableActor::execOnDeactivation },
		{ "OnRep_PoolableActorState", &ANinjaCombatPoolableActor::execOnRep_PoolableActorState },
		{ "Server_Deactivate", &ANinjaCombatPoolableActor::execServer_Deactivate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatPoolableActor);
UClass* Z_Construct_UClass_ANinjaCombatPoolableActor_NoRegister()
{
	return ANinjaCombatPoolableActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatPoolableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for actors that can be pooled.\n *\n * The Pool will require the implemented interface, Combat Poolable Actor, however, this class\n * provides basic functionality for Replication, Time To Live and extensible event hooks.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatPoolableActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for actors that can be pooled.\n\nThe Pool will require the implemented interface, Combat Poolable Actor, however, this class\nprovides basic functionality for Replication, Time To Live and extensible event hooks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToLiveOutsidePool_MetaData[] = {
		{ "Category", "Poolable Actor" },
		{ "Comment", "/** The time this actor can live outside the pool. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "The time this actor can live outside the pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActorState_MetaData[] = {
		{ "Comment", "/** The state of this actor in the pool. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "The state of this actor in the pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarkedForDeferredDestruction_MetaData[] = {
		{ "Comment", "/** Informs when the pool has been deactivated. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatPoolableActor.h" },
		{ "ToolTip", "Informs when the pool has been deactivated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToLiveOutsidePool;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoolableActorState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PoolableActorState;
	static void NewProp_bIsMarkedForDeferredDestruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarkedForDeferredDestruction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatPoolableActor_HandleTimerExpired, "HandleTimerExpired" }, // 3890924810
		{ &Z_Construct_UFunction_ANinjaCombatPoolableActor_OnActivation, "OnActivation" }, // 312936850
		{ &Z_Construct_UFunction_ANinjaCombatPoolableActor_OnDeactivation, "OnDeactivation" }, // 3483989051
		{ &Z_Construct_UFunction_ANinjaCombatPoolableActor_OnRep_PoolableActorState, "OnRep_PoolableActorState" }, // 1670852044
		{ &Z_Construct_UFunction_ANinjaCombatPoolableActor_Server_Deactivate, "Server_Deactivate" }, // 492423410
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatPoolableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_TimeToLiveOutsidePool = { "TimeToLiveOutsidePool", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatPoolableActor, TimeToLiveOutsidePool), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToLiveOutsidePool_MetaData), NewProp_TimeToLiveOutsidePool_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_PoolableActorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_PoolableActorState = { "PoolableActorState", "OnRep_PoolableActorState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatPoolableActor, PoolableActorState), Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableActorState_MetaData), NewProp_PoolableActorState_MetaData) }; // 280490186
void Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_bIsMarkedForDeferredDestruction_SetBit(void* Obj)
{
	((ANinjaCombatPoolableActor*)Obj)->bIsMarkedForDeferredDestruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_bIsMarkedForDeferredDestruction = { "bIsMarkedForDeferredDestruction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANinjaCombatPoolableActor), &Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_bIsMarkedForDeferredDestruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarkedForDeferredDestruction_MetaData), NewProp_bIsMarkedForDeferredDestruction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_TimeToLiveOutsidePool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_PoolableActorState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_PoolableActorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::NewProp_bIsMarkedForDeferredDestruction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatPoolableActorInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatPoolableActor, ICombatPoolableActorInterface), false },  // 1828283635
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::ClassParams = {
	&ANinjaCombatPoolableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatPoolableActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatPoolableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatPoolableActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatPoolableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatPoolableActor.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<ANinjaCombatPoolableActor>()
{
	return ANinjaCombatPoolableActor::StaticClass();
}
void ANinjaCombatPoolableActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PoolableActorState(TEXT("PoolableActorState"));
	const bool bIsValid = true
		&& Name_PoolableActorState == ClassReps[(int32)ENetFields_Private::PoolableActorState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANinjaCombatPoolableActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatPoolableActor);
ANinjaCombatPoolableActor::~ANinjaCombatPoolableActor() {}
// End Class ANinjaCombatPoolableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatPoolableActor, ANinjaCombatPoolableActor::StaticClass, TEXT("ANinjaCombatPoolableActor"), &Z_Registration_Info_UClass_ANinjaCombatPoolableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatPoolableActor), 2525737004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_3524405739(TEXT("/Script/NinjaCombatActorPool"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

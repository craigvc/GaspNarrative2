// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_SpawnCast() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_SpawnCast();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_SpawnCast_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FCastReady
struct Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics
{
	struct AbilityTask_SpawnCast_eventCastReady_Parms
	{
		const UNinjaCombatCastRequest* Request;
		AActor* CastActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnCast_eventCastReady_Parms, Request), Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::NewProp_CastActor = { "CastActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnCast_eventCastReady_Parms, CastActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::NewProp_CastActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnCast, nullptr, "CastReady__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::AbilityTask_SpawnCast_eventCastReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::AbilityTask_SpawnCast_eventCastReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityTask_SpawnCast::FCastReady_DelegateWrapper(const FMulticastScriptDelegate& CastReady, const UNinjaCombatCastRequest* Request, AActor* CastActor)
{
	struct AbilityTask_SpawnCast_eventCastReady_Parms
	{
		const UNinjaCombatCastRequest* Request;
		AActor* CastActor;
	};
	AbilityTask_SpawnCast_eventCastReady_Parms Parms;
	Parms.Request=Request;
	Parms.CastActor=CastActor;
	CastReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCastReady

// Begin Class UAbilityTask_SpawnCast Function AddCastRequest
struct Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics
{
	struct AbilityTask_SpawnCast_eventAddCastRequest_Parms
	{
		UNinjaCombatCastRequest* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Ability Tasks" },
		{ "Comment", "/**\n\x09 * Adds a new Cast Request to this task.\n\x09 * \n\x09 * @param Request\n\x09 *\x09\x09New request for a cast to be spawned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "Adds a new Cast Request to this task.\n\n@param Request\n             New request for a cast to be spawned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnCast_eventAddCastRequest_Parms, Request), Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnCast, nullptr, "AddCastRequest", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::AbilityTask_SpawnCast_eventAddCastRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::AbilityTask_SpawnCast_eventAddCastRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnCast::execAddCastRequest)
{
	P_GET_OBJECT(UNinjaCombatCastRequest,Z_Param_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCastRequest(Z_Param_Request);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnCast Function AddCastRequest

// Begin Class UAbilityTask_SpawnCast Function CreateTask
struct Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics
{
	struct AbilityTask_SpawnCast_eventCreateTask_Parms
	{
		UGameplayAbility* OwningAbility;
		TSubclassOf<AActor> CastActorClass;
		bool bEnableDebug;
		UAbilityTask_SpawnCast* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Creates the appropriate Ability Task, based on the provided data.\n\x09 */" },
		{ "CPP_Default_bEnableDebug", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "Creates the appropriate Ability Task, based on the provided data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastActorClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatCastInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastActorClass;
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnCast_eventCreateTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_CastActorClass = { "CastActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnCast_eventCreateTask_Parms, CastActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastActorClass_MetaData), NewProp_CastActorClass_MetaData) };
void Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((AbilityTask_SpawnCast_eventCreateTask_Parms*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_SpawnCast_eventCreateTask_Parms), &Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnCast_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_SpawnCast_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_CastActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnCast, nullptr, "CreateTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::AbilityTask_SpawnCast_eventCreateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::AbilityTask_SpawnCast_eventCreateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnCast::execCreateTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(UClass,Z_Param_CastActorClass);
	P_GET_UBOOL(Z_Param_bEnableDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_SpawnCast**)Z_Param__Result=UAbilityTask_SpawnCast::CreateTask(Z_Param_OwningAbility,Z_Param_CastActorClass,Z_Param_bEnableDebug);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnCast Function CreateTask

// Begin Class UAbilityTask_SpawnCast
void UAbilityTask_SpawnCast::StaticRegisterNativesUAbilityTask_SpawnCast()
{
	UClass* Class = UAbilityTask_SpawnCast::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCastRequest", &UAbilityTask_SpawnCast::execAddCastRequest },
		{ "CreateTask", &UAbilityTask_SpawnCast::execCreateTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_SpawnCast);
UClass* Z_Construct_UClass_UAbilityTask_SpawnCast_NoRegister()
{
	return UAbilityTask_SpawnCast::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_SpawnCast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Executes a cast.\n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "Executes a cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCastReady_MetaData[] = {
		{ "Comment", "/** Broadcasts when the cast actor is ready to be spawned. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "Broadcasts when the cast actor is ready to be spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCastFinished_MetaData[] = {
		{ "Comment", "/** Broadcasts when the cast actor has finished spawning. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "Broadcasts when the cast actor has finished spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastClass_MetaData[] = {
		{ "Category", "Spawn Cast" },
		{ "Comment", "/** Class that will be spawned. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "Class that will be spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastRequests_MetaData[] = {
		{ "Comment", "/** All instances participating in this task. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnCast.h" },
		{ "ToolTip", "All instances participating in this task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCastReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCastFinished;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastRequests_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastRequests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CastRequests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_SpawnCast_AddCastRequest, "AddCastRequest" }, // 1757259224
		{ &Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature, "CastReady__DelegateSignature" }, // 3730459171
		{ &Z_Construct_UFunction_UAbilityTask_SpawnCast_CreateTask, "CreateTask" }, // 904711037
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_SpawnCast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_OnCastReady = { "OnCastReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnCast, OnCastReady), Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCastReady_MetaData), NewProp_OnCastReady_MetaData) }; // 3730459171
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_OnCastFinished = { "OnCastFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnCast, OnCastFinished), Z_Construct_UDelegateFunction_UAbilityTask_SpawnCast_CastReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCastFinished_MetaData), NewProp_OnCastFinished_MetaData) }; // 3730459171
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastClass = { "CastClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnCast, CastClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastClass_MetaData), NewProp_CastClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastRequests_ValueProp = { "CastRequests", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastRequests_Key_KeyProp = { "CastRequests_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastRequests = { "CastRequests", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnCast, CastRequests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastRequests_MetaData), NewProp_CastRequests_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_OnCastReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_OnCastFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastRequests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastRequests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::NewProp_CastRequests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::ClassParams = {
	&UAbilityTask_SpawnCast::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_SpawnCast()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_SpawnCast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_SpawnCast.OuterSingleton, Z_Construct_UClass_UAbilityTask_SpawnCast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_SpawnCast.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_SpawnCast>()
{
	return UAbilityTask_SpawnCast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_SpawnCast);
UAbilityTask_SpawnCast::~UAbilityTask_SpawnCast() {}
// End Class UAbilityTask_SpawnCast

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_SpawnCast, UAbilityTask_SpawnCast::StaticClass, TEXT("UAbilityTask_SpawnCast"), &Z_Registration_Info_UClass_UAbilityTask_SpawnCast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_SpawnCast), 1097326330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_2247324921(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

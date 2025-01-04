// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_SpawnProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_SpawnProjectile();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_SpawnProjectile_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FProjectileLaunch
struct Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics
{
	struct AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms
	{
		const UNinjaCombatProjectileRequest* Request;
		AActor* Projectile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms, Request), Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms, Projectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::NewProp_Projectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnProjectile, nullptr, "ProjectileLaunch__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityTask_SpawnProjectile::FProjectileLaunch_DelegateWrapper(const FMulticastScriptDelegate& ProjectileLaunch, const UNinjaCombatProjectileRequest* Request, AActor* Projectile)
{
	struct AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms
	{
		const UNinjaCombatProjectileRequest* Request;
		AActor* Projectile;
	};
	AbilityTask_SpawnProjectile_eventProjectileLaunch_Parms Parms;
	Parms.Request=Request;
	Parms.Projectile=Projectile;
	ProjectileLaunch.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FProjectileLaunch

// Begin Class UAbilityTask_SpawnProjectile Function AddProjectileRequest
struct Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics
{
	struct AbilityTask_SpawnProjectile_eventAddProjectileRequest_Parms
	{
		const UNinjaCombatProjectileRequest* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Ability Tasks" },
		{ "Comment", "/**\n\x09 * Adds a new Projectile Request to this task.\n\x09 * \n\x09 * @param Request\n\x09 *\x09\x09New request for a projectile to be spawned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Adds a new Projectile Request to this task.\n\n@param Request\n             New request for a projectile to be spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnProjectile_eventAddProjectileRequest_Parms, Request), Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnProjectile, nullptr, "AddProjectileRequest", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::AbilityTask_SpawnProjectile_eventAddProjectileRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::AbilityTask_SpawnProjectile_eventAddProjectileRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnProjectile::execAddProjectileRequest)
{
	P_GET_OBJECT(UNinjaCombatProjectileRequest,Z_Param_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddProjectileRequest(Z_Param_Request);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnProjectile Function AddProjectileRequest

// Begin Class UAbilityTask_SpawnProjectile Function CreateTask
struct Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics
{
	struct AbilityTask_SpawnProjectile_eventCreateTask_Parms
	{
		UGameplayAbility* OwningAbility;
		bool bEnableDebug;
		UAbilityTask_SpawnProjectile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Creates the appropriate Ability Task, based on the provided data.\n\x09 */" },
		{ "CPP_Default_bEnableDebug", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Creates the appropriate Ability Task, based on the provided data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnProjectile_eventCreateTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((AbilityTask_SpawnProjectile_eventCreateTask_Parms*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_SpawnProjectile_eventCreateTask_Parms), &Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnProjectile_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_SpawnProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnProjectile, nullptr, "CreateTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::AbilityTask_SpawnProjectile_eventCreateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::AbilityTask_SpawnProjectile_eventCreateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnProjectile::execCreateTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_UBOOL(Z_Param_bEnableDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_SpawnProjectile**)Z_Param__Result=UAbilityTask_SpawnProjectile::CreateTask(Z_Param_OwningAbility,Z_Param_bEnableDebug);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnProjectile Function CreateTask

// Begin Class UAbilityTask_SpawnProjectile
void UAbilityTask_SpawnProjectile::StaticRegisterNativesUAbilityTask_SpawnProjectile()
{
	UClass* Class = UAbilityTask_SpawnProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddProjectileRequest", &UAbilityTask_SpawnProjectile::execAddProjectileRequest },
		{ "CreateTask", &UAbilityTask_SpawnProjectile::execCreateTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_SpawnProjectile);
UClass* Z_Construct_UClass_UAbilityTask_SpawnProjectile_NoRegister()
{
	return UAbilityTask_SpawnProjectile::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Launches a projectile.\n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Launches a projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileLaunched_MetaData[] = {
		{ "Comment", "/** Broadcasts each projectile launched. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Broadcasts each projectile launched." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRequests_MetaData[] = {
		{ "Comment", "/** All instances participating in this task. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "All instances participating in this task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileLaunched;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileRequests_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileRequests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ProjectileRequests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_SpawnProjectile_AddProjectileRequest, "AddProjectileRequest" }, // 845953470
		{ &Z_Construct_UFunction_UAbilityTask_SpawnProjectile_CreateTask, "CreateTask" }, // 3751609962
		{ &Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature, "ProjectileLaunch__DelegateSignature" }, // 4013159257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_SpawnProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_OnProjectileLaunched = { "OnProjectileLaunched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnProjectile, OnProjectileLaunched), Z_Construct_UDelegateFunction_UAbilityTask_SpawnProjectile_ProjectileLaunch__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProjectileLaunched_MetaData), NewProp_OnProjectileLaunched_MetaData) }; // 4013159257
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileRequests_ValueProp = { "ProjectileRequests", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileRequests_Key_KeyProp = { "ProjectileRequests_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileRequests = { "ProjectileRequests", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnProjectile, ProjectileRequests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileRequests_MetaData), NewProp_ProjectileRequests_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_OnProjectileLaunched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileRequests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileRequests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileRequests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::ClassParams = {
	&UAbilityTask_SpawnProjectile::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_SpawnProjectile()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_SpawnProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_SpawnProjectile.OuterSingleton, Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_SpawnProjectile.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_SpawnProjectile>()
{
	return UAbilityTask_SpawnProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_SpawnProjectile);
UAbilityTask_SpawnProjectile::~UAbilityTask_SpawnProjectile() {}
// End Class UAbilityTask_SpawnProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_SpawnProjectile, UAbilityTask_SpawnProjectile::StaticClass, TEXT("UAbilityTask_SpawnProjectile"), &Z_Registration_Info_UClass_UAbilityTask_SpawnProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_SpawnProjectile), 2751043825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_4163973130(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

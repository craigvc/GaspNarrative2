// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Async/NinjaInventoryAction_WaitForInventorySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryAction_WaitForInventorySystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_BaseWait();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryAction_WaitForInventorySystem Function CreateAction
struct Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics
{
	struct NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms
	{
		UObject* Context;
		AActor* InventoryOwner;
		float CheckInterval;
		float MaxWait;
		UNinjaInventoryAction_WaitForInventorySystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ninja Inventory|Async" },
		{ "Comment", "/**\n\x09 * Creates the Action to wait for an Inventory Component in an Actor.\n\x09 *\n\x09 * @param Context\x09\x09\x09""Context used to obtain the world.\n\x09 * @param InventoryOwner\x09Owner of the Inventory Manager Component, must be valid.\n\x09 * @param CheckInterval\x09\x09How often the task will check for a valid Inventory Manager Component.\n\x09 * @param MaxWait\x09\x09\x09Maximum time to wait in seconds.\n\x09 * @return\x09\x09\x09\x09\x09""Configured instance of the async task.\n\x09 */" },
		{ "CPP_Default_MaxWait", "3.000000" },
		{ "DisplayName", "Wait For Inventory System" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForInventorySystem.h" },
		{ "ToolTip", "Creates the Action to wait for an Inventory Component in an Actor.\n\n@param Context                       Context used to obtain the world.\n@param InventoryOwner        Owner of the Inventory Manager Component, must be valid.\n@param CheckInterval         How often the task will check for a valid Inventory Manager Component.\n@param MaxWait                       Maximum time to wait in seconds.\n@return                                      Configured instance of the async task." },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_InventoryOwner = { "InventoryOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms, InventoryOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_CheckInterval = { "CheckInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms, CheckInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_MaxWait = { "MaxWait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms, MaxWait), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_InventoryOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_CheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_MaxWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem, nullptr, "CreateAction", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::NinjaInventoryAction_WaitForInventorySystem_eventCreateAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_WaitForInventorySystem::execCreateAction)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_OBJECT(AActor,Z_Param_InventoryOwner);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CheckInterval);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWait);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryAction_WaitForInventorySystem**)Z_Param__Result=UNinjaInventoryAction_WaitForInventorySystem::CreateAction(Z_Param_Context,Z_Param_InventoryOwner,Z_Param_CheckInterval,Z_Param_MaxWait);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_WaitForInventorySystem Function CreateAction

// Begin Class UNinjaInventoryAction_WaitForInventorySystem Function GetInventoryOwner
struct Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics
{
	struct NinjaInventoryAction_WaitForInventorySystem_eventGetInventoryOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Async" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Owner set to this task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForInventorySystem.h" },
		{ "ToolTip", "Provides the Inventory Owner set to this task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForInventorySystem_eventGetInventoryOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem, nullptr, "GetInventoryOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::NinjaInventoryAction_WaitForInventorySystem_eventGetInventoryOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::NinjaInventoryAction_WaitForInventorySystem_eventGetInventoryOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_WaitForInventorySystem::execGetInventoryOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetInventoryOwner();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_WaitForInventorySystem Function GetInventoryOwner

// Begin Class UNinjaInventoryAction_WaitForInventorySystem Function HandleInventoryInitialized
struct Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Broadcasts when the Inventory finishes initializing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForInventorySystem.h" },
		{ "ToolTip", "Broadcasts when the Inventory finishes initializing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem, nullptr, "HandleInventoryInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_WaitForInventorySystem::execHandleInventoryInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInventoryInitialized();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_WaitForInventorySystem Function HandleInventoryInitialized

// Begin Class UNinjaInventoryAction_WaitForInventorySystem
void UNinjaInventoryAction_WaitForInventorySystem::StaticRegisterNativesUNinjaInventoryAction_WaitForInventorySystem()
{
	UClass* Class = UNinjaInventoryAction_WaitForInventorySystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAction", &UNinjaInventoryAction_WaitForInventorySystem::execCreateAction },
		{ "GetInventoryOwner", &UNinjaInventoryAction_WaitForInventorySystem::execGetInventoryOwner },
		{ "HandleInventoryInitialized", &UNinjaInventoryAction_WaitForInventorySystem::execHandleInventoryInitialized },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryAction_WaitForInventorySystem);
UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister()
{
	return UNinjaInventoryAction_WaitForInventorySystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Waits for an Inventory System to become available and initialized.\n */" },
		{ "IncludePath", "Async/NinjaInventoryAction_WaitForInventorySystem.h" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForInventorySystem.h" },
		{ "ToolTip", "Waits for an Inventory System to become available and initialized." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_CreateAction, "CreateAction" }, // 966264968
		{ &Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_GetInventoryOwner, "GetInventoryOwner" }, // 435033021
		{ &Z_Construct_UFunction_UNinjaInventoryAction_WaitForInventorySystem_HandleInventoryInitialized, "HandleInventoryInitialized" }, // 1333978375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryAction_WaitForInventorySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryAction_BaseWait,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics::ClassParams = {
	&UNinjaInventoryAction_WaitForInventorySystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForInventorySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForInventorySystem.OuterSingleton, Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForInventorySystem.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryAction_WaitForInventorySystem>()
{
	return UNinjaInventoryAction_WaitForInventorySystem::StaticClass();
}
UNinjaInventoryAction_WaitForInventorySystem::UNinjaInventoryAction_WaitForInventorySystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryAction_WaitForInventorySystem);
UNinjaInventoryAction_WaitForInventorySystem::~UNinjaInventoryAction_WaitForInventorySystem() {}
// End Class UNinjaInventoryAction_WaitForInventorySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Async_NinjaInventoryAction_WaitForInventorySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem, UNinjaInventoryAction_WaitForInventorySystem::StaticClass, TEXT("UNinjaInventoryAction_WaitForInventorySystem"), &Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForInventorySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryAction_WaitForInventorySystem), 3929201761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Async_NinjaInventoryAction_WaitForInventorySystem_h_1065146573(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Async_NinjaInventoryAction_WaitForInventorySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Async_NinjaInventoryAction_WaitForInventorySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

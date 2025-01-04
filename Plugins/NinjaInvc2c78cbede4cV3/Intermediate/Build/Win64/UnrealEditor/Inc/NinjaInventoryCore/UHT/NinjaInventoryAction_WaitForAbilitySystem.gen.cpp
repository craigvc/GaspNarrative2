// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryCore/Public/Async/NinjaInventoryAction_WaitForAbilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryAction_WaitForAbilitySystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_BaseWait();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryCore();
// End Cross Module References

// Begin Class UNinjaInventoryAction_WaitForAbilitySystem Function CreateAction
struct Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics
{
	struct NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms
	{
		UNinjaInventoryCoreComponent* Component;
		AActor* AbilityOwner;
		float CheckInterval;
		float MaxWait;
		UNinjaInventoryAction_WaitForAbilitySystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ninja Inventory|Async" },
		{ "Comment", "/**\n\x09 * Creates the Action to wait for an Ability System Component in an Actor.\n\x09 *\n\x09 * @param Component\x09\x09\x09""Core Inventory Component requesting the task.\n\x09 * @param AbilityOwner\x09\x09Owner of the Ability System Component, must be valid.\n\x09 * @param CheckInterval\x09\x09How often the task will check for a valid Ability System Component.\n\x09 * @param MaxWait\x09\x09\x09Maximum time to wait in seconds.\n\x09 * @return\x09\x09\x09\x09\x09""Configured instance of the async action.\n\x09 */" },
		{ "CPP_Default_MaxWait", "3.000000" },
		{ "DefaultToSelf", "Component" },
		{ "DisplayName", "Wait For Ability System" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Creates the Action to wait for an Ability System Component in an Actor.\n\n@param Component                     Core Inventory Component requesting the task.\n@param AbilityOwner          Owner of the Ability System Component, must be valid.\n@param CheckInterval         How often the task will check for a valid Ability System Component.\n@param MaxWait                       Maximum time to wait in seconds.\n@return                                      Configured instance of the async action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms, Component), Z_Construct_UClass_UNinjaInventoryCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_CheckInterval = { "CheckInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms, CheckInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_MaxWait = { "MaxWait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms, MaxWait), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_AbilityOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_CheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_MaxWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem, nullptr, "CreateAction", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::NinjaInventoryAction_WaitForAbilitySystem_eventCreateAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_WaitForAbilitySystem::execCreateAction)
{
	P_GET_OBJECT(UNinjaInventoryCoreComponent,Z_Param_Component);
	P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CheckInterval);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWait);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryAction_WaitForAbilitySystem**)Z_Param__Result=UNinjaInventoryAction_WaitForAbilitySystem::CreateAction(Z_Param_Component,Z_Param_AbilityOwner,Z_Param_CheckInterval,Z_Param_MaxWait);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_WaitForAbilitySystem Function CreateAction

// Begin Class UNinjaInventoryAction_WaitForAbilitySystem Function GetAbilityOwner
struct Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics
{
	struct NinjaInventoryAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Async" },
		{ "Comment", "/**\n\x09 * Provides the Ability Owner set to this task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Provides the Ability Owner set to this task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem, nullptr, "GetAbilityOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NinjaInventoryAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NinjaInventoryAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_WaitForAbilitySystem::execGetAbilityOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAbilityOwner();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_WaitForAbilitySystem Function GetAbilityOwner

// Begin Class UNinjaInventoryAction_WaitForAbilitySystem Function GetCoreComponent
struct Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics
{
	struct NinjaInventoryAction_WaitForAbilitySystem_eventGetCoreComponent_Parms
	{
		UNinjaInventoryCoreComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Async" },
		{ "Comment", "/**\n\x09 * Provides the Core Component assigned to this task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Provides the Core Component assigned to this task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAction_WaitForAbilitySystem_eventGetCoreComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem, nullptr, "GetCoreComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::NinjaInventoryAction_WaitForAbilitySystem_eventGetCoreComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::NinjaInventoryAction_WaitForAbilitySystem_eventGetCoreComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_WaitForAbilitySystem::execGetCoreComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryCoreComponent**)Z_Param__Result=P_THIS->GetCoreComponent();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_WaitForAbilitySystem Function GetCoreComponent

// Begin Class UNinjaInventoryAction_WaitForAbilitySystem
void UNinjaInventoryAction_WaitForAbilitySystem::StaticRegisterNativesUNinjaInventoryAction_WaitForAbilitySystem()
{
	UClass* Class = UNinjaInventoryAction_WaitForAbilitySystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAction", &UNinjaInventoryAction_WaitForAbilitySystem::execCreateAction },
		{ "GetAbilityOwner", &UNinjaInventoryAction_WaitForAbilitySystem::execGetAbilityOwner },
		{ "GetCoreComponent", &UNinjaInventoryAction_WaitForAbilitySystem::execGetCoreComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryAction_WaitForAbilitySystem);
UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_NoRegister()
{
	return UNinjaInventoryAction_WaitForAbilitySystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Waits for an Ability System to become available and initialized.\n */" },
		{ "IncludePath", "Async/NinjaInventoryAction_WaitForAbilitySystem.h" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Waits for an Ability System to become available and initialized." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_CreateAction, "CreateAction" }, // 130428996
		{ &Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetAbilityOwner, "GetAbilityOwner" }, // 510048955
		{ &Z_Construct_UFunction_UNinjaInventoryAction_WaitForAbilitySystem_GetCoreComponent, "GetCoreComponent" }, // 1537616538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryAction_WaitForAbilitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryAction_BaseWait,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics::ClassParams = {
	&UNinjaInventoryAction_WaitForAbilitySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForAbilitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForAbilitySystem.OuterSingleton, Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForAbilitySystem.OuterSingleton;
}
template<> NINJAINVENTORYCORE_API UClass* StaticClass<UNinjaInventoryAction_WaitForAbilitySystem>()
{
	return UNinjaInventoryAction_WaitForAbilitySystem::StaticClass();
}
UNinjaInventoryAction_WaitForAbilitySystem::UNinjaInventoryAction_WaitForAbilitySystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryAction_WaitForAbilitySystem);
UNinjaInventoryAction_WaitForAbilitySystem::~UNinjaInventoryAction_WaitForAbilitySystem() {}
// End Class UNinjaInventoryAction_WaitForAbilitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_WaitForAbilitySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryAction_WaitForAbilitySystem, UNinjaInventoryAction_WaitForAbilitySystem::StaticClass, TEXT("UNinjaInventoryAction_WaitForAbilitySystem"), &Z_Registration_Info_UClass_UNinjaInventoryAction_WaitForAbilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryAction_WaitForAbilitySystem), 3707512480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_WaitForAbilitySystem_h_2004571247(TEXT("/Script/NinjaInventoryCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_WaitForAbilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_WaitForAbilitySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

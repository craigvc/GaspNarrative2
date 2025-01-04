// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatBaseWeaponManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatBaseWeaponManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatBaseWeaponManagerComponent Function HandleOwnerDeath
struct NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerDeath_Parms
{
	AActor* Actor;
};
static const FName NAME_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath = FName(TEXT("HandleOwnerDeath"));
void UNinjaCombatBaseWeaponManagerComponent::HandleOwnerDeath(AActor* Actor)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerDeath_Parms Parms;
		Parms.Actor=Actor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleOwnerDeath_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Manager" },
		{ "Comment", "/**\n\x09 * Handles the owner's death, when broadcast by the Damage Manager.\n\x09 * Useful to destroy any weapon actors created by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseWeaponManagerComponent.h" },
		{ "ToolTip", "Handles the owner's death, when broadcast by the Damage Manager.\nUseful to destroy any weapon actors created by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerDeath_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent, nullptr, "HandleOwnerDeath", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::PropPointers), sizeof(NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseWeaponManagerComponent::execHandleOwnerDeath)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerDeath_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseWeaponManagerComponent Function HandleOwnerDeath

// Begin Class UNinjaCombatBaseWeaponManagerComponent Function HandleOwnerFinishedDying
struct NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerFinishedDying_Parms
{
	AActor* Actor;
};
static const FName NAME_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying = FName(TEXT("HandleOwnerFinishedDying"));
void UNinjaCombatBaseWeaponManagerComponent::HandleOwnerFinishedDying(AActor* Actor)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerFinishedDying_Parms Parms;
		Parms.Actor=Actor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleOwnerFinishedDying_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Manager" },
		{ "Comment", "/**\n\x09 * Handles the end of the death flow, when broadcast by the damage manager.\n\x09 * Useful to destroy any weapon actors created by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseWeaponManagerComponent.h" },
		{ "ToolTip", "Handles the end of the death flow, when broadcast by the damage manager.\nUseful to destroy any weapon actors created by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerFinishedDying_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent, nullptr, "HandleOwnerFinishedDying", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::PropPointers), sizeof(NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerFinishedDying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatBaseWeaponManagerComponent_eventHandleOwnerFinishedDying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseWeaponManagerComponent::execHandleOwnerFinishedDying)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerFinishedDying_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseWeaponManagerComponent Function HandleOwnerFinishedDying

// Begin Class UNinjaCombatBaseWeaponManagerComponent
void UNinjaCombatBaseWeaponManagerComponent::StaticRegisterNativesUNinjaCombatBaseWeaponManagerComponent()
{
	UClass* Class = UNinjaCombatBaseWeaponManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleOwnerDeath", &UNinjaCombatBaseWeaponManagerComponent::execHandleOwnerDeath },
		{ "HandleOwnerFinishedDying", &UNinjaCombatBaseWeaponManagerComponent::execHandleOwnerFinishedDying },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatBaseWeaponManagerComponent);
UClass* Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_NoRegister()
{
	return UNinjaCombatBaseWeaponManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Weapon Manager Component that can be used as a base to switch between different implementations.\n */" },
		{ "IncludePath", "Components/NinjaCombatBaseWeaponManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseWeaponManagerComponent.h" },
		{ "ToolTip", "Base Weapon Manager Component that can be used as a base to switch between different implementations." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerDeath, "HandleOwnerDeath" }, // 1750784937
		{ &Z_Construct_UFunction_UNinjaCombatBaseWeaponManagerComponent_HandleOwnerFinishedDying, "HandleOwnerFinishedDying" }, // 2930299258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatBaseWeaponManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatWeaponManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatBaseWeaponManagerComponent, ICombatWeaponManagerInterface), false },  // 1001928686
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::ClassParams = {
	&UNinjaCombatBaseWeaponManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatBaseWeaponManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatBaseWeaponManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatBaseWeaponManagerComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatBaseWeaponManagerComponent>()
{
	return UNinjaCombatBaseWeaponManagerComponent::StaticClass();
}
UNinjaCombatBaseWeaponManagerComponent::UNinjaCombatBaseWeaponManagerComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatBaseWeaponManagerComponent);
UNinjaCombatBaseWeaponManagerComponent::~UNinjaCombatBaseWeaponManagerComponent() {}
// End Class UNinjaCombatBaseWeaponManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseWeaponManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent, UNinjaCombatBaseWeaponManagerComponent::StaticClass, TEXT("UNinjaCombatBaseWeaponManagerComponent"), &Z_Registration_Info_UClass_UNinjaCombatBaseWeaponManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatBaseWeaponManagerComponent), 1665770879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseWeaponManagerComponent_h_2435571946(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseWeaponManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseWeaponManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

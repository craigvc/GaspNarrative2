// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatProjectileProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatProjectileProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatProjectileProviderInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatProjectileProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatProjectileProviderInterface Function GetProjectileClass
struct CombatProjectileProviderInterface_eventGetProjectileClass_Parms
{
	TSubclassOf<AActor> ProjectileClass;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileProviderInterface_eventGetProjectileClass_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatProjectileProviderInterface::GetProjectileClass(TSubclassOf<AActor>& ProjectileClass) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProjectileClass instead.");
	CombatProjectileProviderInterface_eventGetProjectileClass_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileProviderInterface_GetProjectileClass = FName(TEXT("GetProjectileClass"));
bool ICombatProjectileProviderInterface::Execute_GetProjectileClass(const UObject* O, TSubclassOf<AActor>& ProjectileClass)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileProviderInterface::StaticClass()));
	CombatProjectileProviderInterface_eventGetProjectileClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileProviderInterface_GetProjectileClass);
	if (Func)
	{
		Parms.ProjectileClass=ProjectileClass;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		ProjectileClass=Parms.ProjectileClass;
	}
	else if (auto I = (const ICombatProjectileProviderInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetProjectileClass_Implementation(ProjectileClass);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides a specific projectile class.\n\x09 * The class must be a valid implementation of \"CombatProjectileInterface\". \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileProviderInterface.h" },
		{ "ToolTip", "Provides a specific projectile class.\nThe class must be a valid implementation of \"CombatProjectileInterface\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatProjectileInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileProviderInterface_eventGetProjectileClass_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
void Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatProjectileProviderInterface_eventGetProjectileClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatProjectileProviderInterface_eventGetProjectileClass_Parms), &Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileProviderInterface, nullptr, "GetProjectileClass", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::PropPointers), sizeof(CombatProjectileProviderInterface_eventGetProjectileClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileProviderInterface_eventGetProjectileClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileProviderInterface::execGetProjectileClass)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_ProjectileClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetProjectileClass_Implementation(Z_Param_Out_ProjectileClass);
	P_NATIVE_END;
}
// End Interface UCombatProjectileProviderInterface Function GetProjectileClass

// Begin Interface UCombatProjectileProviderInterface
void UCombatProjectileProviderInterface::StaticRegisterNativesUCombatProjectileProviderInterface()
{
	UClass* Class = UCombatProjectileProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetProjectileClass", &ICombatProjectileProviderInterface::execGetProjectileClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatProjectileProviderInterface);
UClass* Z_Construct_UClass_UCombatProjectileProviderInterface_NoRegister()
{
	return UCombatProjectileProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatProjectileProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatProjectileProviderInterface_GetProjectileClass, "GetProjectileClass" }, // 1591169571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatProjectileProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatProjectileProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatProjectileProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatProjectileProviderInterface_Statics::ClassParams = {
	&UCombatProjectileProviderInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatProjectileProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatProjectileProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatProjectileProviderInterface()
{
	if (!Z_Registration_Info_UClass_UCombatProjectileProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatProjectileProviderInterface.OuterSingleton, Z_Construct_UClass_UCombatProjectileProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatProjectileProviderInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatProjectileProviderInterface>()
{
	return UCombatProjectileProviderInterface::StaticClass();
}
UCombatProjectileProviderInterface::UCombatProjectileProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatProjectileProviderInterface);
UCombatProjectileProviderInterface::~UCombatProjectileProviderInterface() {}
// End Interface UCombatProjectileProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatProjectileProviderInterface, UCombatProjectileProviderInterface::StaticClass, TEXT("UCombatProjectileProviderInterface"), &Z_Registration_Info_UClass_UCombatProjectileProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatProjectileProviderInterface), 1918450308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileProviderInterface_h_3689993848(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatRangedInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatRangedInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRangedInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRangedInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatRangedInterface Function GetProjectileSourceMesh
struct CombatRangedInterface_eventGetProjectileSourceMesh_Parms
{
	FName SocketName;
	UMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatRangedInterface_eventGetProjectileSourceMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
UMeshComponent* ICombatRangedInterface::GetProjectileSourceMesh(FName SocketName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProjectileSourceMesh instead.");
	CombatRangedInterface_eventGetProjectileSourceMesh_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatRangedInterface_GetProjectileSourceMesh = FName(TEXT("GetProjectileSourceMesh"));
UMeshComponent* ICombatRangedInterface::Execute_GetProjectileSourceMesh(const UObject* O, FName SocketName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatRangedInterface::StaticClass()));
	CombatRangedInterface_eventGetProjectileSourceMesh_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatRangedInterface_GetProjectileSourceMesh);
	if (Func)
	{
		Parms.SocketName=SocketName;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatRangedInterface*)(O->GetNativeInterfaceAddress(UCombatRangedInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetProjectileSourceMesh_Implementation(SocketName);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ranged Interface" },
		{ "Comment", "/**\n\x09 * Provides the main mesh component that represents the source mesh.\n\x09 *\n\x09 * @param SocketName\x09\x09Name of the socket, from which the projectile will be launched.\n\x09 * @return\x09\x09\x09\x09\x09Mesh Component to be used as source for the projectile.\n\x09 */" },
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatRangedInterface.h" },
		{ "ToolTip", "Provides the main mesh component that represents the source mesh.\n\n@param SocketName            Name of the socket, from which the projectile will be launched.\n@return                                      Mesh Component to be used as source for the projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatRangedInterface_eventGetProjectileSourceMesh_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatRangedInterface_eventGetProjectileSourceMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatRangedInterface, nullptr, "GetProjectileSourceMesh", nullptr, nullptr, Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::PropPointers), sizeof(CombatRangedInterface_eventGetProjectileSourceMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatRangedInterface_eventGetProjectileSourceMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatRangedInterface::execGetProjectileSourceMesh)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->GetProjectileSourceMesh_Implementation(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Interface UCombatRangedInterface Function GetProjectileSourceMesh

// Begin Interface UCombatRangedInterface
void UCombatRangedInterface::StaticRegisterNativesUCombatRangedInterface()
{
	UClass* Class = UCombatRangedInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetProjectileSourceMesh", &ICombatRangedInterface::execGetProjectileSourceMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatRangedInterface);
UClass* Z_Construct_UClass_UCombatRangedInterface_NoRegister()
{
	return UCombatRangedInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatRangedInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatRangedInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatRangedInterface_GetProjectileSourceMesh, "GetProjectileSourceMesh" }, // 809854044
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatRangedInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatRangedInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatRangedInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatRangedInterface_Statics::ClassParams = {
	&UCombatRangedInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatRangedInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatRangedInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatRangedInterface()
{
	if (!Z_Registration_Info_UClass_UCombatRangedInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatRangedInterface.OuterSingleton, Z_Construct_UClass_UCombatRangedInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatRangedInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatRangedInterface>()
{
	return UCombatRangedInterface::StaticClass();
}
UCombatRangedInterface::UCombatRangedInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatRangedInterface);
UCombatRangedInterface::~UCombatRangedInterface() {}
// End Interface UCombatRangedInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatRangedInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatRangedInterface, UCombatRangedInterface::StaticClass, TEXT("UCombatRangedInterface"), &Z_Registration_Info_UClass_UCombatRangedInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatRangedInterface), 1535881293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatRangedInterface_h_1759511895(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatRangedInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatRangedInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

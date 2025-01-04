// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatDissolveManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatDissolveManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDissolveManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDissolveManagerInterface_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDissolveMaterialParameter();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FDissolveMaterialParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DissolveMaterialParameter;
class UScriptStruct* FDissolveMaterialParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DissolveMaterialParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DissolveMaterialParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDissolveMaterialParameter, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("DissolveMaterialParameter"));
	}
	return Z_Registration_Info_UScriptStruct_DissolveMaterialParameter.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FDissolveMaterialParameter>()
{
	return FDissolveMaterialParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configures a parameter for the dissolve material. */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDissolveManagerInterface.h" },
		{ "ToolTip", "Configures a parameter for the dissolve material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "Dissolve Settings" },
		{ "Comment", "/** Parameter name in the Material. */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDissolveManagerInterface.h" },
		{ "ToolTip", "Parameter name in the Material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[] = {
		{ "Category", "Dissolve Settings" },
		{ "Comment", "/** Curve used to retrieve parameter values. */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDissolveManagerInterface.h" },
		{ "ToolTip", "Curve used to retrieve parameter values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDissolveMaterialParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDissolveMaterialParameter, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDissolveMaterialParameter, CurveValue), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveValue_MetaData), NewProp_CurveValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::NewProp_CurveValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"DissolveMaterialParameter",
	Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::PropPointers),
	sizeof(FDissolveMaterialParameter),
	alignof(FDissolveMaterialParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDissolveMaterialParameter()
{
	if (!Z_Registration_Info_UScriptStruct_DissolveMaterialParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DissolveMaterialParameter.InnerSingleton, Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DissolveMaterialParameter.InnerSingleton;
}
// End ScriptStruct FDissolveMaterialParameter

// Begin Interface UCombatDissolveManagerInterface Function Dissolve
struct CombatDissolveManagerInterface_eventDissolve_Parms
{
	TArray<FDissolveMaterialParameter> DissolveSettings;
};
void ICombatDissolveManagerInterface::Dissolve(TArray<FDissolveMaterialParameter> const& DissolveSettings)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Dissolve instead.");
}
static FName NAME_UCombatDissolveManagerInterface_Dissolve = FName(TEXT("Dissolve"));
void ICombatDissolveManagerInterface::Execute_Dissolve(UObject* O, TArray<FDissolveMaterialParameter> const& DissolveSettings)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDissolveManagerInterface::StaticClass()));
	CombatDissolveManagerInterface_eventDissolve_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDissolveManagerInterface_Dissolve);
	if (Func)
	{
		Parms.DissolveSettings=DissolveSettings;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDissolveManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDissolveManagerInterface::StaticClass())))
	{
		I->Dissolve_Implementation(DissolveSettings);
	}
}
struct Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dissolve Manager Interface" },
		{ "Comment", "/**\n\x09 * Dissolves the owner, using the provided parameters and curves.\n\x09 *\n\x09 * @param DissolveSettings\n\x09 *\x09\x09Settings for the dissolve effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDissolveManagerInterface.h" },
		{ "ToolTip", "Dissolves the owner, using the provided parameters and curves.\n\n@param DissolveSettings\n             Settings for the dissolve effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DissolveSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DissolveSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::NewProp_DissolveSettings_Inner = { "DissolveSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDissolveMaterialParameter, METADATA_PARAMS(0, nullptr) }; // 4088481081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::NewProp_DissolveSettings = { "DissolveSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDissolveManagerInterface_eventDissolve_Parms, DissolveSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveSettings_MetaData), NewProp_DissolveSettings_MetaData) }; // 4088481081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::NewProp_DissolveSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::NewProp_DissolveSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDissolveManagerInterface, nullptr, "Dissolve", nullptr, nullptr, Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::PropPointers), sizeof(CombatDissolveManagerInterface_eventDissolve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDissolveManagerInterface_eventDissolve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDissolveManagerInterface::execDissolve)
{
	P_GET_TARRAY_REF(FDissolveMaterialParameter,Z_Param_Out_DissolveSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dissolve_Implementation(Z_Param_Out_DissolveSettings);
	P_NATIVE_END;
}
// End Interface UCombatDissolveManagerInterface Function Dissolve

// Begin Interface UCombatDissolveManagerInterface
void UCombatDissolveManagerInterface::StaticRegisterNativesUCombatDissolveManagerInterface()
{
	UClass* Class = UCombatDissolveManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Dissolve", &ICombatDissolveManagerInterface::execDissolve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatDissolveManagerInterface);
UClass* Z_Construct_UClass_UCombatDissolveManagerInterface_NoRegister()
{
	return UCombatDissolveManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatDissolveManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDissolveManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDissolveManagerInterface_Dissolve, "Dissolve" }, // 335946223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatDissolveManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatDissolveManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDissolveManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatDissolveManagerInterface_Statics::ClassParams = {
	&UCombatDissolveManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDissolveManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatDissolveManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatDissolveManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatDissolveManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDissolveManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatDissolveManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDissolveManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatDissolveManagerInterface>()
{
	return UCombatDissolveManagerInterface::StaticClass();
}
UCombatDissolveManagerInterface::UCombatDissolveManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatDissolveManagerInterface);
UCombatDissolveManagerInterface::~UCombatDissolveManagerInterface() {}
// End Interface UCombatDissolveManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDissolveManagerInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDissolveMaterialParameter::StaticStruct, Z_Construct_UScriptStruct_FDissolveMaterialParameter_Statics::NewStructOps, TEXT("DissolveMaterialParameter"), &Z_Registration_Info_UScriptStruct_DissolveMaterialParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDissolveMaterialParameter), 4088481081U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDissolveManagerInterface, UCombatDissolveManagerInterface::StaticClass, TEXT("UCombatDissolveManagerInterface"), &Z_Registration_Info_UClass_UCombatDissolveManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDissolveManagerInterface), 1337716620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDissolveManagerInterface_h_481337844(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDissolveManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDissolveManagerInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDissolveManagerInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDissolveManagerInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

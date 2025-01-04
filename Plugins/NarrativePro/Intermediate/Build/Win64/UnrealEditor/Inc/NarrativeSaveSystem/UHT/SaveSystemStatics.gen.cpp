// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/SaveSystemStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSystemStatics() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemStatics();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin Class USaveSystemStatics Function CreateSaveGuid
struct Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics
{
	struct SaveSystemStatics_eventCreateSaveGuid_Parms
	{
		FGuid OutGuid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Save System" },
		{ "Comment", "//Sets the in guid to a valid guid, but only if it hasn't already been generated before, useful for in constructors where this may get called multiple times \n" },
		{ "ModuleRelativePath", "Public/SaveSystemStatics.h" },
		{ "ToolTip", "Sets the in guid to a valid guid, but only if it hasn't already been generated before, useful for in constructors where this may get called multiple times" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::NewProp_OutGuid = { "OutGuid", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSystemStatics_eventCreateSaveGuid_Parms, OutGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::NewProp_OutGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSystemStatics, nullptr, "CreateSaveGuid", nullptr, nullptr, Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::SaveSystemStatics_eventCreateSaveGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::SaveSystemStatics_eventCreateSaveGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSystemStatics::execCreateSaveGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	USaveSystemStatics::CreateSaveGuid(Z_Param_Out_OutGuid);
	P_NATIVE_END;
}
// End Class USaveSystemStatics Function CreateSaveGuid

// Begin Class USaveSystemStatics
void USaveSystemStatics::StaticRegisterNativesUSaveSystemStatics()
{
	UClass* Class = USaveSystemStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSaveGuid", &USaveSystemStatics::execCreateSaveGuid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSystemStatics);
UClass* Z_Construct_UClass_USaveSystemStatics_NoRegister()
{
	return USaveSystemStatics::StaticClass();
}
struct Z_Construct_UClass_USaveSystemStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveSystemStatics.h" },
		{ "ModuleRelativePath", "Public/SaveSystemStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid, "CreateSaveGuid" }, // 3174749880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSystemStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveSystemStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSystemStatics_Statics::ClassParams = {
	&USaveSystemStatics::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSystemStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSystemStatics()
{
	if (!Z_Registration_Info_UClass_USaveSystemStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSystemStatics.OuterSingleton, Z_Construct_UClass_USaveSystemStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSystemStatics.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<USaveSystemStatics>()
{
	return USaveSystemStatics::StaticClass();
}
USaveSystemStatics::USaveSystemStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSystemStatics);
USaveSystemStatics::~USaveSystemStatics() {}
// End Class USaveSystemStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSystemStatics, USaveSystemStatics::StaticClass, TEXT("USaveSystemStatics"), &Z_Registration_Info_UClass_USaveSystemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSystemStatics), 1227380174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_3451914080(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

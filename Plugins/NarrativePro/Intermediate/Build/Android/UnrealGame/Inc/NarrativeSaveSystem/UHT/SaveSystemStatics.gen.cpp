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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSystemStatics, nullptr, "CreateSaveGuid", nullptr, nullptr, Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::SaveSystemStatics_eventCreateSaveGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid_Statics::Function_MetaDataParams) };
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

// Begin Class USaveSystemStatics Function LoadSingleActor
struct Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics
{
	struct SaveSystemStatics_eventLoadSingleActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Update a single actor so its state matches that of the saved record for that actor. */" },
		{ "ModuleRelativePath", "Public/SaveSystemStatics.h" },
		{ "ToolTip", "Update a single actor so its state matches that of the saved record for that actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSystemStatics_eventLoadSingleActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveSystemStatics_eventLoadSingleActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSystemStatics_eventLoadSingleActor_Parms), &Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSystemStatics, nullptr, "LoadSingleActor", nullptr, nullptr, Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::SaveSystemStatics_eventLoadSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::SaveSystemStatics_eventLoadSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSystemStatics::execLoadSingleActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USaveSystemStatics::LoadSingleActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class USaveSystemStatics Function LoadSingleActor

// Begin Class USaveSystemStatics Function RemoveSingleActor
struct Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics
{
	struct SaveSystemStatics_eventRemoveSingleActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/* Remove a single actor from the save file */" },
		{ "ModuleRelativePath", "Public/SaveSystemStatics.h" },
		{ "ToolTip", "Remove a single actor from the save file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSystemStatics_eventRemoveSingleActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveSystemStatics_eventRemoveSingleActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSystemStatics_eventRemoveSingleActor_Parms), &Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSystemStatics, nullptr, "RemoveSingleActor", nullptr, nullptr, Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::SaveSystemStatics_eventRemoveSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::SaveSystemStatics_eventRemoveSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSystemStatics::execRemoveSingleActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USaveSystemStatics::RemoveSingleActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class USaveSystemStatics Function RemoveSingleActor

// Begin Class USaveSystemStatics Function SaveSingleActor
struct Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics
{
	struct SaveSystemStatics_eventSaveSingleActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Update a single actor so its state matches that of the saved record for that actor. \n\x09\n\x09@param bDontRespawn tells the save system that this actor should not automatically be respawned by the save system, we need to do it manually.*/" },
		{ "ModuleRelativePath", "Public/SaveSystemStatics.h" },
		{ "ToolTip", "Update a single actor so its state matches that of the saved record for that actor.\n\n      @param bDontRespawn tells the save system that this actor should not automatically be respawned by the save system, we need to do it manually." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSystemStatics_eventSaveSingleActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveSystemStatics_eventSaveSingleActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSystemStatics_eventSaveSingleActor_Parms), &Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSystemStatics, nullptr, "SaveSingleActor", nullptr, nullptr, Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::SaveSystemStatics_eventSaveSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::SaveSystemStatics_eventSaveSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSystemStatics::execSaveSingleActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USaveSystemStatics::SaveSingleActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class USaveSystemStatics Function SaveSingleActor

// Begin Class USaveSystemStatics
void USaveSystemStatics::StaticRegisterNativesUSaveSystemStatics()
{
	UClass* Class = USaveSystemStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSaveGuid", &USaveSystemStatics::execCreateSaveGuid },
		{ "LoadSingleActor", &USaveSystemStatics::execLoadSingleActor },
		{ "RemoveSingleActor", &USaveSystemStatics::execRemoveSingleActor },
		{ "SaveSingleActor", &USaveSystemStatics::execSaveSingleActor },
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
		{ &Z_Construct_UFunction_USaveSystemStatics_CreateSaveGuid, "CreateSaveGuid" }, // 3215104655
		{ &Z_Construct_UFunction_USaveSystemStatics_LoadSingleActor, "LoadSingleActor" }, // 3456326494
		{ &Z_Construct_UFunction_USaveSystemStatics_RemoveSingleActor, "RemoveSingleActor" }, // 4184463189
		{ &Z_Construct_UFunction_USaveSystemStatics_SaveSingleActor, "SaveSingleActor" }, // 1442422881
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
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSystemStatics, USaveSystemStatics::StaticClass, TEXT("USaveSystemStatics"), &Z_Registration_Info_UClass_USaveSystemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSystemStatics), 1101009864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_1279337219(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

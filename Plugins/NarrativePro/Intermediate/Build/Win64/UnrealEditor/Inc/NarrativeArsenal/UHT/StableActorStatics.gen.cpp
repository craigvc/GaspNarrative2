// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/StableActor/StableActorStatics.h"
#include "NarrativeArsenal/Public/StableActor/StableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStableActorStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UStableActorStatics();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UStableActorStatics_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FStableActor();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UStableActorStatics Function GetStableActor
struct Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics
{
	struct StableActorStatics_eventGetStableActor_Parms
	{
		const UObject* WorldContextObject;
		FStableActor StableActor;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stable Actor" },
		{ "Comment", "//Create a stable actor from an actor reference \n" },
		{ "ModuleRelativePath", "Public/StableActor/StableActorStatics.h" },
		{ "ToolTip", "Create a stable actor from an actor reference" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StableActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventGetStableActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::NewProp_StableActor = { "StableActor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventGetStableActor_Parms, StableActor), Z_Construct_UScriptStruct_FStableActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableActor_MetaData), NewProp_StableActor_MetaData) }; // 445850525
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventGetStableActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::NewProp_StableActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStableActorStatics, nullptr, "GetStableActor", nullptr, nullptr, Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::StableActorStatics_eventGetStableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::StableActorStatics_eventGetStableActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStableActorStatics_GetStableActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStableActorStatics_GetStableActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStableActorStatics::execGetStableActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FStableActor,Z_Param_Out_StableActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UStableActorStatics::GetStableActor(Z_Param_WorldContextObject,Z_Param_Out_StableActor);
	P_NATIVE_END;
}
// End Class UStableActorStatics Function GetStableActor

// Begin Class UStableActorStatics Function MakeStableActor
struct Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics
{
	struct StableActorStatics_eventMakeStableActor_Parms
	{
		AActor* Actor;
		FStableActor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stable Actor" },
		{ "Comment", "//Create a stable actor from an actor reference \n" },
		{ "ModuleRelativePath", "Public/StableActor/StableActorStatics.h" },
		{ "ToolTip", "Create a stable actor from an actor reference" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventMakeStableActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventMakeStableActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FStableActor, METADATA_PARAMS(0, nullptr) }; // 445850525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStableActorStatics, nullptr, "MakeStableActor", nullptr, nullptr, Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::StableActorStatics_eventMakeStableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::StableActorStatics_eventMakeStableActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStableActorStatics_MakeStableActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStableActorStatics_MakeStableActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStableActorStatics::execMakeStableActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStableActor*)Z_Param__Result=UStableActorStatics::MakeStableActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UStableActorStatics Function MakeStableActor

// Begin Class UStableActorStatics Function MakeStableActorFromGUID
struct Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics
{
	struct StableActorStatics_eventMakeStableActorFromGUID_Parms
	{
		const UObject* WorldContextObject;
		FGuid StableActorGuid;
		FStableActor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stable Actor" },
		{ "Comment", "//Create a stable actor from an actor reference \n" },
		{ "ModuleRelativePath", "Public/StableActor/StableActorStatics.h" },
		{ "ToolTip", "Create a stable actor from an actor reference" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableActorGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StableActorGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventMakeStableActorFromGUID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::NewProp_StableActorGuid = { "StableActorGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventMakeStableActorFromGUID_Parms, StableActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableActorGuid_MetaData), NewProp_StableActorGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StableActorStatics_eventMakeStableActorFromGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FStableActor, METADATA_PARAMS(0, nullptr) }; // 445850525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::NewProp_StableActorGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStableActorStatics, nullptr, "MakeStableActorFromGUID", nullptr, nullptr, Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::StableActorStatics_eventMakeStableActorFromGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::StableActorStatics_eventMakeStableActorFromGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStableActorStatics::execMakeStableActorFromGUID)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_StableActorGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStableActor*)Z_Param__Result=UStableActorStatics::MakeStableActorFromGUID(Z_Param_WorldContextObject,Z_Param_Out_StableActorGuid);
	P_NATIVE_END;
}
// End Class UStableActorStatics Function MakeStableActorFromGUID

// Begin Class UStableActorStatics
void UStableActorStatics::StaticRegisterNativesUStableActorStatics()
{
	UClass* Class = UStableActorStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStableActor", &UStableActorStatics::execGetStableActor },
		{ "MakeStableActor", &UStableActorStatics::execMakeStableActor },
		{ "MakeStableActorFromGUID", &UStableActorStatics::execMakeStableActorFromGUID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStableActorStatics);
UClass* Z_Construct_UClass_UStableActorStatics_NoRegister()
{
	return UStableActorStatics::StaticClass();
}
struct Z_Construct_UClass_UStableActorStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Functions that simply working with FStableActors. \n */" },
		{ "IncludePath", "StableActor/StableActorStatics.h" },
		{ "ModuleRelativePath", "Public/StableActor/StableActorStatics.h" },
		{ "ToolTip", "Functions that simply working with FStableActors." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStableActorStatics_GetStableActor, "GetStableActor" }, // 4281589301
		{ &Z_Construct_UFunction_UStableActorStatics_MakeStableActor, "MakeStableActor" }, // 3879075821
		{ &Z_Construct_UFunction_UStableActorStatics_MakeStableActorFromGUID, "MakeStableActorFromGUID" }, // 1972230893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStableActorStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStableActorStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStableActorStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStableActorStatics_Statics::ClassParams = {
	&UStableActorStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStableActorStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UStableActorStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStableActorStatics()
{
	if (!Z_Registration_Info_UClass_UStableActorStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStableActorStatics.OuterSingleton, Z_Construct_UClass_UStableActorStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStableActorStatics.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UStableActorStatics>()
{
	return UStableActorStatics::StaticClass();
}
UStableActorStatics::UStableActorStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStableActorStatics);
UStableActorStatics::~UStableActorStatics() {}
// End Class UStableActorStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActorStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStableActorStatics, UStableActorStatics::StaticClass, TEXT("UStableActorStatics"), &Z_Registration_Info_UClass_UStableActorStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStableActorStatics), 2049078398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActorStatics_h_3117103336(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActorStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActorStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

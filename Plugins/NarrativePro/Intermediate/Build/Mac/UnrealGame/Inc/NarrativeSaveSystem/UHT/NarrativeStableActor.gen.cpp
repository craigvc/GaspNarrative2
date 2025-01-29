// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/NarrativeStableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeStableActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeStableActor();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeStableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin Interface UNarrativeStableActor Function GetActorGUID
struct NarrativeStableActor_eventGetActorGUID_Parms
{
	FGuid ReturnValue;
};
FGuid INarrativeStableActor::GetActorGUID() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorGUID instead.");
	NarrativeStableActor_eventGetActorGUID_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UNarrativeStableActor_GetActorGUID = FName(TEXT("GetActorGUID"));
FGuid INarrativeStableActor::Execute_GetActorGUID(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeStableActor::StaticClass()));
	NarrativeStableActor_eventGetActorGUID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UNarrativeStableActor_GetActorGUID);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const INarrativeStableActor*)(O->GetNativeInterfaceAddress(UNarrativeStableActor::StaticClass())))
	{
		Parms.ReturnValue = I->GetActorGUID_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stable Actor" },
		{ "Comment", "//Get the actors stable GUID.\n" },
		{ "ModuleRelativePath", "Public/NarrativeStableActor.h" },
		{ "ToolTip", "Get the actors stable GUID." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeStableActor_eventGetActorGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeStableActor, nullptr, "GetActorGUID", nullptr, nullptr, Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::PropPointers), sizeof(NarrativeStableActor_eventGetActorGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeStableActor_eventGetActorGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeStableActor::execGetActorGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetActorGUID_Implementation();
	P_NATIVE_END;
}
// End Interface UNarrativeStableActor Function GetActorGUID

// Begin Interface UNarrativeStableActor
void UNarrativeStableActor::StaticRegisterNativesUNarrativeStableActor()
{
	UClass* Class = UNarrativeStableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorGUID", &INarrativeStableActor::execGetActorGUID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeStableActor);
UClass* Z_Construct_UClass_UNarrativeStableActor_NoRegister()
{
	return UNarrativeStableActor::StaticClass();
}
struct Z_Construct_UClass_UNarrativeStableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NarrativeStableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeStableActor_GetActorGUID, "GetActorGUID" }, // 230848068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INarrativeStableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeStableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeStableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeStableActor_Statics::ClassParams = {
	&UNarrativeStableActor::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeStableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeStableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeStableActor()
{
	if (!Z_Registration_Info_UClass_UNarrativeStableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeStableActor.OuterSingleton, Z_Construct_UClass_UNarrativeStableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeStableActor.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<UNarrativeStableActor>()
{
	return UNarrativeStableActor::StaticClass();
}
UNarrativeStableActor::UNarrativeStableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeStableActor);
UNarrativeStableActor::~UNarrativeStableActor() {}
// End Interface UNarrativeStableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeStableActor, UNarrativeStableActor::StaticClass, TEXT("UNarrativeStableActor"), &Z_Registration_Info_UClass_UNarrativeStableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeStableActor), 2445607432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_804696901(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

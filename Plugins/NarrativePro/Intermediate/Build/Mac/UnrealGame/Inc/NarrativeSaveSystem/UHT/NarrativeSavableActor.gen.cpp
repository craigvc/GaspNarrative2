// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/NarrativeSavableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSavableActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeStableActor();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin Interface UNarrativeSavableActor Function Load
void INarrativeSavableActor::Load()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Load instead.");
}
static FName NAME_UNarrativeSavableActor_Load = FName(TEXT("Load"));
void INarrativeSavableActor::Execute_Load(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeSavableActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UNarrativeSavableActor_Load);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (INarrativeSavableActor*)(O->GetNativeInterfaceAddress(UNarrativeSavableActor::StaticClass())))
	{
		I->Load_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeSavableActor_Load_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Tell the actor it has been loaded in from a save. \n" },
		{ "ModuleRelativePath", "Public/NarrativeSavableActor.h" },
		{ "ToolTip", "Tell the actor it has been loaded in from a save." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSavableActor_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSavableActor, nullptr, "Load", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_Load_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSavableActor_Load_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeSavableActor_Load()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSavableActor_Load_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeSavableActor::execLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Load_Implementation();
	P_NATIVE_END;
}
// End Interface UNarrativeSavableActor Function Load

// Begin Interface UNarrativeSavableActor Function PrepareForSave
void INarrativeSavableActor::PrepareForSave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareForSave instead.");
}
static FName NAME_UNarrativeSavableActor_PrepareForSave = FName(TEXT("PrepareForSave"));
void INarrativeSavableActor::Execute_PrepareForSave(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeSavableActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UNarrativeSavableActor_PrepareForSave);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (INarrativeSavableActor*)(O->GetNativeInterfaceAddress(UNarrativeSavableActor::StaticClass())))
	{
		I->PrepareForSave_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Tell the actor it is about to be saved, and needs to populate all its save data \n" },
		{ "ModuleRelativePath", "Public/NarrativeSavableActor.h" },
		{ "ToolTip", "Tell the actor it is about to be saved, and needs to populate all its save data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSavableActor, nullptr, "PrepareForSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeSavableActor::execPrepareForSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareForSave_Implementation();
	P_NATIVE_END;
}
// End Interface UNarrativeSavableActor Function PrepareForSave

// Begin Interface UNarrativeSavableActor Function SetActorGUID
struct NarrativeSavableActor_eventSetActorGUID_Parms
{
	FGuid SavedGUID;
};
void INarrativeSavableActor::SetActorGUID(FGuid const& SavedGUID)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActorGUID instead.");
}
static FName NAME_UNarrativeSavableActor_SetActorGUID = FName(TEXT("SetActorGUID"));
void INarrativeSavableActor::Execute_SetActorGUID(UObject* O, FGuid const& SavedGUID)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeSavableActor::StaticClass()));
	NarrativeSavableActor_eventSetActorGUID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UNarrativeSavableActor_SetActorGUID);
	if (Func)
	{
		Parms.SavedGUID=SavedGUID;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (INarrativeSavableActor*)(O->GetNativeInterfaceAddress(UNarrativeSavableActor::StaticClass())))
	{
		I->SetActorGUID_Implementation(SavedGUID);
	}
}
struct Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Used for dynamic actors to set the stable GUID to the one the save system got from the actors record - that way the save system will correctly save this actor again in future \n" },
		{ "ModuleRelativePath", "Public/NarrativeSavableActor.h" },
		{ "ToolTip", "Used for dynamic actors to set the stable GUID to the one the save system got from the actors record - that way the save system will correctly save this actor again in future" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::NewProp_SavedGUID = { "SavedGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSavableActor_eventSetActorGUID_Parms, SavedGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedGUID_MetaData), NewProp_SavedGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::NewProp_SavedGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSavableActor, nullptr, "SetActorGUID", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::PropPointers), sizeof(NarrativeSavableActor_eventSetActorGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeSavableActor_eventSetActorGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeSavableActor::execSetActorGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_SavedGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorGUID_Implementation(Z_Param_Out_SavedGUID);
	P_NATIVE_END;
}
// End Interface UNarrativeSavableActor Function SetActorGUID

// Begin Interface UNarrativeSavableActor Function ShouldRespawn
struct NarrativeSavableActor_eventShouldRespawn_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeSavableActor_eventShouldRespawn_Parms()
		: ReturnValue(false)
	{
	}
};
bool INarrativeSavableActor::ShouldRespawn() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldRespawn instead.");
	NarrativeSavableActor_eventShouldRespawn_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UNarrativeSavableActor_ShouldRespawn = FName(TEXT("ShouldRespawn"));
bool INarrativeSavableActor::Execute_ShouldRespawn(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeSavableActor::StaticClass()));
	NarrativeSavableActor_eventShouldRespawn_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UNarrativeSavableActor_ShouldRespawn);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const INarrativeSavableActor*)(O->GetNativeInterfaceAddress(UNarrativeSavableActor::StaticClass())))
	{
		Parms.ReturnValue = I->ShouldRespawn_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Allows us to define whether we want the save system to auto-respawn a dynamic actor, or whether we'll do it ourselves manually. \n//At the moment we just have this feature for NPCs - they should't auto-respawn if part of a settlement, as the settlement spawns them instead. \n" },
		{ "ModuleRelativePath", "Public/NarrativeSavableActor.h" },
		{ "ToolTip", "Allows us to define whether we want the save system to auto-respawn a dynamic actor, or whether we'll do it ourselves manually.\nAt the moment we just have this feature for NPCs - they should't auto-respawn if part of a settlement, as the settlement spawns them instead." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSavableActor_eventShouldRespawn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSavableActor_eventShouldRespawn_Parms), &Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSavableActor, nullptr, "ShouldRespawn", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::PropPointers), sizeof(NarrativeSavableActor_eventShouldRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeSavableActor_eventShouldRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeSavableActor::execShouldRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldRespawn_Implementation();
	P_NATIVE_END;
}
// End Interface UNarrativeSavableActor Function ShouldRespawn

// Begin Interface UNarrativeSavableActor
void UNarrativeSavableActor::StaticRegisterNativesUNarrativeSavableActor()
{
	UClass* Class = UNarrativeSavableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Load", &INarrativeSavableActor::execLoad },
		{ "PrepareForSave", &INarrativeSavableActor::execPrepareForSave },
		{ "SetActorGUID", &INarrativeSavableActor::execSetActorGUID },
		{ "ShouldRespawn", &INarrativeSavableActor::execShouldRespawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSavableActor);
UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister()
{
	return UNarrativeSavableActor::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSavableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NarrativeSavableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeSavableActor_Load, "Load" }, // 3802203318
		{ &Z_Construct_UFunction_UNarrativeSavableActor_PrepareForSave, "PrepareForSave" }, // 3915796830
		{ &Z_Construct_UFunction_UNarrativeSavableActor_SetActorGUID, "SetActorGUID" }, // 930070989
		{ &Z_Construct_UFunction_UNarrativeSavableActor_ShouldRespawn, "ShouldRespawn" }, // 3692203415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INarrativeSavableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeSavableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeStableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSavableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSavableActor_Statics::ClassParams = {
	&UNarrativeSavableActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSavableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSavableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSavableActor()
{
	if (!Z_Registration_Info_UClass_UNarrativeSavableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSavableActor.OuterSingleton, Z_Construct_UClass_UNarrativeSavableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSavableActor.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<UNarrativeSavableActor>()
{
	return UNarrativeSavableActor::StaticClass();
}
UNarrativeSavableActor::UNarrativeSavableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSavableActor);
UNarrativeSavableActor::~UNarrativeSavableActor() {}
// End Interface UNarrativeSavableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSavableActor, UNarrativeSavableActor::StaticClass, TEXT("UNarrativeSavableActor"), &Z_Registration_Info_UClass_UNarrativeSavableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSavableActor), 2545445142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_1218118542(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

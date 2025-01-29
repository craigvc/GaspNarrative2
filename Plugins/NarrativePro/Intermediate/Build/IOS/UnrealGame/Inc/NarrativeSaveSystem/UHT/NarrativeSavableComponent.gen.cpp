// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/NarrativeSavableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSavableComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin Interface UNarrativeSavableComponent Function Load
void INarrativeSavableComponent::Load()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Load instead.");
}
static FName NAME_UNarrativeSavableComponent_Load = FName(TEXT("Load"));
void INarrativeSavableComponent::Execute_Load(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeSavableComponent::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UNarrativeSavableComponent_Load);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (INarrativeSavableComponent*)(O->GetNativeInterfaceAddress(UNarrativeSavableComponent::StaticClass())))
	{
		I->Load_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeSavableComponent_Load_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Tell the Component it has been loaded in from a save. \n" },
		{ "ModuleRelativePath", "Public/NarrativeSavableComponent.h" },
		{ "ToolTip", "Tell the Component it has been loaded in from a save." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSavableComponent_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSavableComponent, nullptr, "Load", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableComponent_Load_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSavableComponent_Load_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeSavableComponent_Load()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSavableComponent_Load_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeSavableComponent::execLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Load_Implementation();
	P_NATIVE_END;
}
// End Interface UNarrativeSavableComponent Function Load

// Begin Interface UNarrativeSavableComponent Function PrepareForSave
void INarrativeSavableComponent::PrepareForSave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareForSave instead.");
}
static FName NAME_UNarrativeSavableComponent_PrepareForSave = FName(TEXT("PrepareForSave"));
void INarrativeSavableComponent::Execute_PrepareForSave(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UNarrativeSavableComponent::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UNarrativeSavableComponent_PrepareForSave);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (INarrativeSavableComponent*)(O->GetNativeInterfaceAddress(UNarrativeSavableComponent::StaticClass())))
	{
		I->PrepareForSave_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Tell the Component it is about to be saved, and needs to populate all its save data \n" },
		{ "ModuleRelativePath", "Public/NarrativeSavableComponent.h" },
		{ "ToolTip", "Tell the Component it is about to be saved, and needs to populate all its save data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSavableComponent, nullptr, "PrepareForSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INarrativeSavableComponent::execPrepareForSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareForSave_Implementation();
	P_NATIVE_END;
}
// End Interface UNarrativeSavableComponent Function PrepareForSave

// Begin Interface UNarrativeSavableComponent
void UNarrativeSavableComponent::StaticRegisterNativesUNarrativeSavableComponent()
{
	UClass* Class = UNarrativeSavableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Load", &INarrativeSavableComponent::execLoad },
		{ "PrepareForSave", &INarrativeSavableComponent::execPrepareForSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSavableComponent);
UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister()
{
	return UNarrativeSavableComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSavableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NarrativeSavableComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeSavableComponent_Load, "Load" }, // 343992263
		{ &Z_Construct_UFunction_UNarrativeSavableComponent_PrepareForSave, "PrepareForSave" }, // 2699929727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INarrativeSavableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeSavableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSavableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSavableComponent_Statics::ClassParams = {
	&UNarrativeSavableComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSavableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSavableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSavableComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeSavableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSavableComponent.OuterSingleton, Z_Construct_UClass_UNarrativeSavableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSavableComponent.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<UNarrativeSavableComponent>()
{
	return UNarrativeSavableComponent::StaticClass();
}
UNarrativeSavableComponent::UNarrativeSavableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSavableComponent);
UNarrativeSavableComponent::~UNarrativeSavableComponent() {}
// End Interface UNarrativeSavableComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSavableComponent, UNarrativeSavableComponent::StaticClass, TEXT("UNarrativeSavableComponent"), &Z_Registration_Info_UClass_UNarrativeSavableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSavableComponent), 1573843113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_1823010330(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

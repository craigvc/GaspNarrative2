// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/Interfaces/CombatViewModelInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatViewModelInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UCombatViewModelInterface();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UCombatViewModelInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Interface UCombatViewModelInterface Function ClearWidgetOwner
void ICombatViewModelInterface::ClearWidgetOwner()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearWidgetOwner instead.");
}
static FName NAME_UCombatViewModelInterface_ClearWidgetOwner = FName(TEXT("ClearWidgetOwner"));
void ICombatViewModelInterface::Execute_ClearWidgetOwner(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatViewModelInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatViewModelInterface_ClearWidgetOwner);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatViewModelInterface*)(O->GetNativeInterfaceAddress(UCombatViewModelInterface::StaticClass())))
	{
		I->ClearWidgetOwner_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat View Model Interface" },
		{ "Comment", "/**\n\x09 * Clears the widget owner, allowing any cleanup (i.e. unbinding from delegates).\n\x09 * This is usually invoked when the widget is being removed/destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/CombatViewModelInterface.h" },
		{ "ToolTip", "Clears the widget owner, allowing any cleanup (i.e. unbinding from delegates).\nThis is usually invoked when the widget is being removed/destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatViewModelInterface, nullptr, "ClearWidgetOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatViewModelInterface::execClearWidgetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearWidgetOwner_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatViewModelInterface Function ClearWidgetOwner

// Begin Interface UCombatViewModelInterface Function SetWidgetOwner
struct CombatViewModelInterface_eventSetWidgetOwner_Parms
{
	APlayerController* WidgetOwner;
};
void ICombatViewModelInterface::SetWidgetOwner(APlayerController* WidgetOwner)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetWidgetOwner instead.");
}
static FName NAME_UCombatViewModelInterface_SetWidgetOwner = FName(TEXT("SetWidgetOwner"));
void ICombatViewModelInterface::Execute_SetWidgetOwner(UObject* O, APlayerController* WidgetOwner)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatViewModelInterface::StaticClass()));
	CombatViewModelInterface_eventSetWidgetOwner_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatViewModelInterface_SetWidgetOwner);
	if (Func)
	{
		Parms.WidgetOwner=WidgetOwner;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatViewModelInterface*)(O->GetNativeInterfaceAddress(UCombatViewModelInterface::StaticClass())))
	{
		I->SetWidgetOwner_Implementation(WidgetOwner);
	}
}
struct Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat View Model Interface" },
		{ "Comment", "/**\n\x09 * Sets the widget's owner to the View Model, which may be different from the Combat Owner.\n\x09 * As per the Widget's API, this is usually the Controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/CombatViewModelInterface.h" },
		{ "ToolTip", "Sets the widget's owner to the View Model, which may be different from the Combat Owner.\nAs per the Widget's API, this is usually the Controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::NewProp_WidgetOwner = { "WidgetOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatViewModelInterface_eventSetWidgetOwner_Parms, WidgetOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::NewProp_WidgetOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatViewModelInterface, nullptr, "SetWidgetOwner", nullptr, nullptr, Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::PropPointers), sizeof(CombatViewModelInterface_eventSetWidgetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatViewModelInterface_eventSetWidgetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatViewModelInterface::execSetWidgetOwner)
{
	P_GET_OBJECT(APlayerController,Z_Param_WidgetOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetOwner_Implementation(Z_Param_WidgetOwner);
	P_NATIVE_END;
}
// End Interface UCombatViewModelInterface Function SetWidgetOwner

// Begin Interface UCombatViewModelInterface
void UCombatViewModelInterface::StaticRegisterNativesUCombatViewModelInterface()
{
	UClass* Class = UCombatViewModelInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearWidgetOwner", &ICombatViewModelInterface::execClearWidgetOwner },
		{ "SetWidgetOwner", &ICombatViewModelInterface::execSetWidgetOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatViewModelInterface);
UClass* Z_Construct_UClass_UCombatViewModelInterface_NoRegister()
{
	return UCombatViewModelInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatViewModelInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/CombatViewModelInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatViewModelInterface_ClearWidgetOwner, "ClearWidgetOwner" }, // 389052412
		{ &Z_Construct_UFunction_UCombatViewModelInterface_SetWidgetOwner, "SetWidgetOwner" }, // 1023807139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatViewModelInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatViewModelInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatViewModelInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatViewModelInterface_Statics::ClassParams = {
	&UCombatViewModelInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatViewModelInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatViewModelInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatViewModelInterface()
{
	if (!Z_Registration_Info_UClass_UCombatViewModelInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatViewModelInterface.OuterSingleton, Z_Construct_UClass_UCombatViewModelInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatViewModelInterface.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UCombatViewModelInterface>()
{
	return UCombatViewModelInterface::StaticClass();
}
UCombatViewModelInterface::UCombatViewModelInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatViewModelInterface);
UCombatViewModelInterface::~UCombatViewModelInterface() {}
// End Interface UCombatViewModelInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatViewModelInterface, UCombatViewModelInterface::StaticClass, TEXT("UCombatViewModelInterface"), &Z_Registration_Info_UClass_UCombatViewModelInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatViewModelInterface), 2870042973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_1230433483(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

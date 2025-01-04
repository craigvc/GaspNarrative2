// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/Interfaces/CombatWidgetInterface.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UCombatWidgetInterface();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UCombatWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Interface UCombatWidgetInterface Function HandleGameplayCue
struct CombatWidgetInterface_eventHandleGameplayCue_Parms
{
	FGameplayCueParameters CueParameters;
};
void ICombatWidgetInterface::HandleGameplayCue(FGameplayCueParameters const& CueParameters)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleGameplayCue instead.");
}
static FName NAME_UCombatWidgetInterface_HandleGameplayCue = FName(TEXT("HandleGameplayCue"));
void ICombatWidgetInterface::Execute_HandleGameplayCue(UObject* O, FGameplayCueParameters const& CueParameters)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatWidgetInterface::StaticClass()));
	CombatWidgetInterface_eventHandleGameplayCue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatWidgetInterface_HandleGameplayCue);
	if (Func)
	{
		Parms.CueParameters=CueParameters;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatWidgetInterface*)(O->GetNativeInterfaceAddress(UCombatWidgetInterface::StaticClass())))
	{
		I->HandleGameplayCue_Implementation(CueParameters);
	}
}
struct Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Widget Interface" },
		{ "Comment", "/**\n\x09 * Allows this widget to react to a certain Gameplay Cue.\n\x09 *\n\x09 * This is an optional implementation, yet useful to widgets that must react to certain events\n\x09 * such as damage that has been received by the owning Combat Actor.\n\x09 * \n\x09 * @param CueParameters\n\x09 *\x09\x09Information about the Gameplay Cue being handled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/CombatWidgetInterface.h" },
		{ "ToolTip", "Allows this widget to react to a certain Gameplay Cue.\n\nThis is an optional implementation, yet useful to widgets that must react to certain events\nsuch as damage that has been received by the owning Combat Actor.\n\n@param CueParameters\n             Information about the Gameplay Cue being handled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::NewProp_CueParameters = { "CueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWidgetInterface_eventHandleGameplayCue_Parms, CueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueParameters_MetaData), NewProp_CueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::NewProp_CueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatWidgetInterface, nullptr, "HandleGameplayCue", nullptr, nullptr, Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::PropPointers), sizeof(CombatWidgetInterface_eventHandleGameplayCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatWidgetInterface_eventHandleGameplayCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatWidgetInterface::execHandleGameplayCue)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_CueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGameplayCue_Implementation(Z_Param_Out_CueParameters);
	P_NATIVE_END;
}
// End Interface UCombatWidgetInterface Function HandleGameplayCue

// Begin Interface UCombatWidgetInterface
void UCombatWidgetInterface::StaticRegisterNativesUCombatWidgetInterface()
{
	UClass* Class = UCombatWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleGameplayCue", &ICombatWidgetInterface::execHandleGameplayCue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatWidgetInterface);
UClass* Z_Construct_UClass_UCombatWidgetInterface_NoRegister()
{
	return UCombatWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/CombatWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatWidgetInterface_HandleGameplayCue, "HandleGameplayCue" }, // 1072675641
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatWidgetInterface_Statics::ClassParams = {
	&UCombatWidgetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UCombatWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatWidgetInterface.OuterSingleton, Z_Construct_UClass_UCombatWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatWidgetInterface.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UCombatWidgetInterface>()
{
	return UCombatWidgetInterface::StaticClass();
}
UCombatWidgetInterface::UCombatWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatWidgetInterface);
UCombatWidgetInterface::~UCombatWidgetInterface() {}
// End Interface UCombatWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatWidgetInterface, UCombatWidgetInterface::StaticClass, TEXT("UCombatWidgetInterface"), &Z_Registration_Info_UClass_UCombatWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatWidgetInterface), 1290153397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatWidgetInterface_h_4220151405(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

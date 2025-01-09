// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameMode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameMode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativeGameMode Function GetPlayerDefinitionForController
struct NarrativeGameMode_eventGetPlayerDefinitionForController_Parms
{
	AController* InController;
	UPlayerDefinition* ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeGameMode_eventGetPlayerDefinitionForController_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANarrativeGameMode_GetPlayerDefinitionForController = FName(TEXT("GetPlayerDefinitionForController"));
UPlayerDefinition* ANarrativeGameMode::GetPlayerDefinitionForController(AController* InController)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeGameMode_GetPlayerDefinitionForController);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeGameMode_eventGetPlayerDefinitionForController_Parms Parms;
		Parms.InController=InController;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetPlayerDefinitionForController_Implementation(InController);
	}
}
struct Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** Returns default player definition class for a controller joining the game. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameMode.h" },
		{ "ToolTip", "Returns default player definition class for a controller joining the game." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameMode_eventGetPlayerDefinitionForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameMode_eventGetPlayerDefinitionForController_Parms, ReturnValue), Z_Construct_UClass_UPlayerDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::NewProp_InController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameMode, nullptr, "GetPlayerDefinitionForController", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::PropPointers), sizeof(NarrativeGameMode_eventGetPlayerDefinitionForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeGameMode_eventGetPlayerDefinitionForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameMode::execGetPlayerDefinitionForController)
{
	P_GET_OBJECT(AController,Z_Param_InController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerDefinition**)Z_Param__Result=P_THIS->GetPlayerDefinitionForController_Implementation(Z_Param_InController);
	P_NATIVE_END;
}
// End Class ANarrativeGameMode Function GetPlayerDefinitionForController

// Begin Class ANarrativeGameMode
void ANarrativeGameMode::StaticRegisterNativesANarrativeGameMode()
{
	UClass* Class = ANarrativeGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerDefinitionForController", &ANarrativeGameMode::execGetPlayerDefinitionForController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeGameMode);
UClass* Z_Construct_UClass_ANarrativeGameMode_NoRegister()
{
	return ANarrativeGameMode::StaticClass();
}
struct Z_Construct_UClass_ANarrativeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project. \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativeGameMode.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDefinitions_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** By default, Narrative assigns each player a definition using this list for each joining player. If you need different functionality, simply override GetPlayerDefinitionForController */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameMode.h" },
		{ "ToolTip", "By default, Narrative assigns each player a definition using this list for each joining player. If you need different functionality, simply override GetPlayerDefinitionForController" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeGameMode_GetPlayerDefinitionForController, "GetPlayerDefinitionForController" }, // 1790941110
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeGameMode_Statics::NewProp_PlayerDefinitions_Inner = { "PlayerDefinitions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeGameMode_Statics::NewProp_PlayerDefinitions = { "PlayerDefinitions", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameMode, PlayerDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDefinitions_MetaData), NewProp_PlayerDefinitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameMode_Statics::NewProp_PlayerDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameMode_Statics::NewProp_PlayerDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeGameMode_Statics::ClassParams = {
	&ANarrativeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeGameMode()
{
	if (!Z_Registration_Info_UClass_ANarrativeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeGameMode.OuterSingleton, Z_Construct_UClass_ANarrativeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeGameMode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeGameMode>()
{
	return ANarrativeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeGameMode);
ANarrativeGameMode::~ANarrativeGameMode() {}
// End Class ANarrativeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeGameMode, ANarrativeGameMode::StaticClass, TEXT("ANarrativeGameMode"), &Z_Registration_Info_UClass_ANarrativeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeGameMode), 3969329686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_2462180574(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

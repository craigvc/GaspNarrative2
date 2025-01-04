// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativePlayerController.h"
#include "NarrativeNavigator/Public/NavigationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPointOfInterestLocation();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativePlayerController Function FastTravelToPOI
struct NarrativePlayerController_eventFastTravelToPOI_Parms
{
	FPointOfInterestLocation POI;
};
static const FName NAME_ANarrativePlayerController_FastTravelToPOI = FName(TEXT("FastTravelToPOI"));
void ANarrativePlayerController::FastTravelToPOI(FPointOfInterestLocation const& POI)
{
	NarrativePlayerController_eventFastTravelToPOI_Parms Parms;
	Parms.POI=POI;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_FastTravelToPOI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Fast Travel" },
		{ "Comment", "//POI marker calls this to perform fast travelling, which we implement in BP \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "POI marker calls this to perform fast travelling, which we implement in BP" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::NewProp_POI = { "POI", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventFastTravelToPOI_Parms, POI), Z_Construct_UScriptStruct_FPointOfInterestLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_MetaData), NewProp_POI_MetaData) }; // 3732342648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::NewProp_POI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "FastTravelToPOI", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers), sizeof(NarrativePlayerController_eventFastTravelToPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventFastTravelToPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativePlayerController Function FastTravelToPOI

// Begin Class ANarrativePlayerController
void ANarrativePlayerController::StaticRegisterNativesANarrativePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativePlayerController);
UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister()
{
	return ANarrativePlayerController::StaticClass();
}
struct Z_Construct_UClass_ANarrativePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativePlayerController.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TalesComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationComponent_MetaData[] = {
		{ "Category", "Narrative|Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[] = {
		{ "Category", "Narrative|Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TalesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI, "FastTravelToPOI" }, // 2283633645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, InteractionComponent), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_TalesComponent = { "TalesComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, TalesComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TalesComponent_MetaData), NewProp_TalesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NavigationComponent = { "NavigationComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, NavigationComponent), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationComponent_MetaData), NewProp_NavigationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, NarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeComponent_MetaData), NewProp_NarrativeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_TalesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NavigationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NarrativeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativePlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, INarrativeTeamAgentInterface), false },  // 1836146804
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativePlayerController_Statics::ClassParams = {
	&ANarrativePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativePlayerController()
{
	if (!Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton, Z_Construct_UClass_ANarrativePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativePlayerController>()
{
	return ANarrativePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativePlayerController);
ANarrativePlayerController::~ANarrativePlayerController() {}
// End Class ANarrativePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativePlayerController, ANarrativePlayerController::StaticClass, TEXT("ANarrativePlayerController"), &Z_Registration_Info_UClass_ANarrativePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativePlayerController), 3815804356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_2414395151(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

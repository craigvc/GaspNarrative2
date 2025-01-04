// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/Widgets/NinjaCombatBaseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatBaseWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
NINJACOMBATCORE_API UClass* Z_Construct_UClass_UCombatActorAwareInterface_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatBaseWidget();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatBaseWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UNinjaCombatBaseWidget Function GetAbilityComponent
struct Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics
{
	struct NinjaCombatBaseWidget_eventGetAbilityComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the Ability Component assigned to this widget's Combat Actor.\n\x09 * \n\x09 * Please note that, for replicated actors with an Ability Component in the player state,\n\x09 * it may take a moment before the Ability Component becomes available for the Widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ToolTip", "Provides the Ability Component assigned to this widget's Combat Actor.\n\nPlease note that, for replicated actors with an Ability Component in the player state,\nit may take a moment before the Ability Component becomes available for the Widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseWidget_eventGetAbilityComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseWidget, nullptr, "GetAbilityComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::NinjaCombatBaseWidget_eventGetAbilityComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::NinjaCombatBaseWidget_eventGetAbilityComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseWidget::execGetAbilityComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilityComponent();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseWidget Function GetAbilityComponent

// Begin Class UNinjaCombatBaseWidget Function GetCombatActor
struct Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics
{
	struct NinjaCombatBaseWidget_eventGetCombatActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Widgets" },
		{ "Comment", "/** \n\x09 * Provides the Combat Actor for this Widget.\n\x09 *\n\x09 * It could be the usual owning pawn or, if set differently via the Combat Widget Interface,\n\x09 * a custom actor, such as the one that owns the hosting Widget Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ToolTip", "Provides the Combat Actor for this Widget.\n\nIt could be the usual owning pawn or, if set differently via the Combat Widget Interface,\na custom actor, such as the one that owns the hosting Widget Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseWidget_eventGetCombatActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseWidget, nullptr, "GetCombatActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::NinjaCombatBaseWidget_eventGetCombatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::NinjaCombatBaseWidget_eventGetCombatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseWidget::execGetCombatActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCombatActor();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseWidget Function GetCombatActor

// Begin Class UNinjaCombatBaseWidget
void UNinjaCombatBaseWidget::StaticRegisterNativesUNinjaCombatBaseWidget()
{
	UClass* Class = UNinjaCombatBaseWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilityComponent", &UNinjaCombatBaseWidget::execGetAbilityComponent },
		{ "GetCombatActor", &UNinjaCombatBaseWidget::execGetCombatActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatBaseWidget);
UClass* Z_Construct_UClass_UNinjaCombatBaseWidget_NoRegister()
{
	return UNinjaCombatBaseWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatBaseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base combat widget with common functionality.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base combat widget with common functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetWithCombatActor_MetaData[] = {
		{ "Category", "Combat Widget" },
		{ "Comment", "/** If set, automatically shows the widget, using its default visibility, when a combat actor is set. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ToolTip", "If set, automatically shows the widget, using its default visibility, when a combat actor is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseWidgetWithoutCombatActor_MetaData[] = {
		{ "Category", "Combat Widget" },
		{ "Comment", "/** If set, automatically collapses the widget visibility when a combat actor deliberately not set. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ToolTip", "If set, automatically collapses the widget visibility when a combat actor deliberately not set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVisibility_MetaData[] = {
		{ "Category", "Combat Widget" },
		{ "Comment", "/** Default Widget Visibility used when it must be restored later. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ToolTip", "Default Widget Visibility used when it must be restored later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatActor_MetaData[] = {
		{ "Comment", "/** Combat Actor that should be considered the Combat Owner. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaCombatBaseWidget.h" },
		{ "ToolTip", "Combat Actor that should be considered the Combat Owner." },
	};
#endif // WITH_METADATA
	static void NewProp_bShowWidgetWithCombatActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetWithCombatActor;
	static void NewProp_bCollapseWidgetWithoutCombatActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseWidgetWithoutCombatActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultVisibility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatBaseWidget_GetAbilityComponent, "GetAbilityComponent" }, // 2612568556
		{ &Z_Construct_UFunction_UNinjaCombatBaseWidget_GetCombatActor, "GetCombatActor" }, // 1343923778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatBaseWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bShowWidgetWithCombatActor_SetBit(void* Obj)
{
	((UNinjaCombatBaseWidget*)Obj)->bShowWidgetWithCombatActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bShowWidgetWithCombatActor = { "bShowWidgetWithCombatActor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatBaseWidget), &Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bShowWidgetWithCombatActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWidgetWithCombatActor_MetaData), NewProp_bShowWidgetWithCombatActor_MetaData) };
void Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bCollapseWidgetWithoutCombatActor_SetBit(void* Obj)
{
	((UNinjaCombatBaseWidget*)Obj)->bCollapseWidgetWithoutCombatActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bCollapseWidgetWithoutCombatActor = { "bCollapseWidgetWithoutCombatActor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatBaseWidget), &Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bCollapseWidgetWithoutCombatActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollapseWidgetWithoutCombatActor_MetaData), NewProp_bCollapseWidgetWithoutCombatActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_DefaultVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_DefaultVisibility = { "DefaultVisibility", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatBaseWidget, DefaultVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVisibility_MetaData), NewProp_DefaultVisibility_MetaData) }; // 2974316103
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_CombatActor = { "CombatActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatBaseWidget, CombatActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatActor_MetaData), NewProp_CombatActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bShowWidgetWithCombatActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_bCollapseWidgetWithoutCombatActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_DefaultVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_DefaultVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::NewProp_CombatActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatActorAwareInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatBaseWidget, ICombatActorAwareInterface), false },  // 1763291407
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::ClassParams = {
	&UNinjaCombatBaseWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatBaseWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatBaseWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatBaseWidget.OuterSingleton, Z_Construct_UClass_UNinjaCombatBaseWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatBaseWidget.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UNinjaCombatBaseWidget>()
{
	return UNinjaCombatBaseWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatBaseWidget);
UNinjaCombatBaseWidget::~UNinjaCombatBaseWidget() {}
// End Class UNinjaCombatBaseWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Widgets_NinjaCombatBaseWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatBaseWidget, UNinjaCombatBaseWidget::StaticClass, TEXT("UNinjaCombatBaseWidget"), &Z_Registration_Info_UClass_UNinjaCombatBaseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatBaseWidget), 2943152766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Widgets_NinjaCombatBaseWidget_h_3642888554(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Widgets_NinjaCombatBaseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Widgets_NinjaCombatBaseWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

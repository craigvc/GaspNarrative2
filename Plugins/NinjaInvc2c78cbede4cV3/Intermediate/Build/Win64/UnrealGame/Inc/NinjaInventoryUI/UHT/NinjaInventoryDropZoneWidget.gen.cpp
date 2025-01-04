// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryDropZoneWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryDropZoneWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryDropZoneWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryDropZoneWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryDropZoneWidget Function DetermineDropScope
struct NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms
{
	const UNinjaInventoryItem* Item;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInventoryDropZoneWidget_DetermineDropScope = FName(TEXT("DetermineDropScope"));
bool UNinjaInventoryDropZoneWidget::DetermineDropScope(const UNinjaInventoryItem* Item) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryDropZoneWidget_DetermineDropScope);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms Parms;
		Parms.Item=Item;
		const_cast<UNinjaInventoryDropZoneWidget*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryDropZoneWidget*>(this)->DetermineDropScope_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drop Zone" },
		{ "Comment", "/**\n\x09 * Determines the drop scope for items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryDropZoneWidget.h" },
		{ "ToolTip", "Determines the drop scope for items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms), &Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDropZoneWidget, nullptr, "DetermineDropScope", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::PropPointers), sizeof(NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryDropZoneWidget_eventDetermineDropScope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDropZoneWidget::execDetermineDropScope)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DetermineDropScope_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryDropZoneWidget Function DetermineDropScope

// Begin Class UNinjaInventoryDropZoneWidget Function GetDropLocationInWorldSpace
struct NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms
{
	const UNinjaInventoryDragDropOperation* Operation;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace = FName(TEXT("GetDropLocationInWorldSpace"));
FVector UNinjaInventoryDropZoneWidget::GetDropLocationInWorldSpace(const UNinjaInventoryDragDropOperation* Operation) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms Parms;
		Parms.Operation=Operation;
		const_cast<UNinjaInventoryDropZoneWidget*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryDropZoneWidget*>(this)->GetDropLocationInWorldSpace_Implementation(Operation);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drop Zone" },
		{ "Comment", "/**\n\x09 * Provides the Drop Location in World Space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryDropZoneWidget.h" },
		{ "ToolTip", "Provides the Drop Location in World Space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms, Operation), Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDropZoneWidget, nullptr, "GetDropLocationInWorldSpace", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::PropPointers), sizeof(NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryDropZoneWidget_eventGetDropLocationInWorldSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDropZoneWidget::execGetDropLocationInWorldSpace)
{
	P_GET_OBJECT(UNinjaInventoryDragDropOperation,Z_Param_Operation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDropLocationInWorldSpace_Implementation(Z_Param_Operation);
	P_NATIVE_END;
}
// End Class UNinjaInventoryDropZoneWidget Function GetDropLocationInWorldSpace

// Begin Class UNinjaInventoryDropZoneWidget
void UNinjaInventoryDropZoneWidget::StaticRegisterNativesUNinjaInventoryDropZoneWidget()
{
	UClass* Class = UNinjaInventoryDropZoneWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetermineDropScope", &UNinjaInventoryDropZoneWidget::execDetermineDropScope },
		{ "GetDropLocationInWorldSpace", &UNinjaInventoryDropZoneWidget::execGetDropLocationInWorldSpace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryDropZoneWidget);
UClass* Z_Construct_UClass_UNinjaInventoryDropZoneWidget_NoRegister()
{
	return UNinjaInventoryDropZoneWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a drop zone that can handle an Inventory Drop Operation.\n */" },
		{ "DisplayName", "Inventory Drop Zone" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryDropZoneWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryDropZoneWidget.h" },
		{ "ToolTip", "Defines a drop zone that can handle an Inventory Drop Operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalOnly_MetaData[] = {
		{ "Category", "Drop Zone" },
		{ "Comment", "/** Determines if items dropped by the player are shown locally or globally. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryDropZoneWidget.h" },
		{ "ToolTip", "Determines if items dropped by the player are shown locally or globally." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLocalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_DetermineDropScope, "DetermineDropScope" }, // 1121597852
		{ &Z_Construct_UFunction_UNinjaInventoryDropZoneWidget_GetDropLocationInWorldSpace, "GetDropLocationInWorldSpace" }, // 1195568333
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryDropZoneWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::NewProp_bIsLocalOnly_SetBit(void* Obj)
{
	((UNinjaInventoryDropZoneWidget*)Obj)->bIsLocalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::NewProp_bIsLocalOnly = { "bIsLocalOnly", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryDropZoneWidget), &Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::NewProp_bIsLocalOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocalOnly_MetaData), NewProp_bIsLocalOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::NewProp_bIsLocalOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::ClassParams = {
	&UNinjaInventoryDropZoneWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryDropZoneWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryDropZoneWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryDropZoneWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryDropZoneWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryDropZoneWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryDropZoneWidget>()
{
	return UNinjaInventoryDropZoneWidget::StaticClass();
}
UNinjaInventoryDropZoneWidget::UNinjaInventoryDropZoneWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryDropZoneWidget);
UNinjaInventoryDropZoneWidget::~UNinjaInventoryDropZoneWidget() {}
// End Class UNinjaInventoryDropZoneWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryDropZoneWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryDropZoneWidget, UNinjaInventoryDropZoneWidget::StaticClass, TEXT("UNinjaInventoryDropZoneWidget"), &Z_Registration_Info_UClass_UNinjaInventoryDropZoneWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryDropZoneWidget), 2801327416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryDropZoneWidget_h_4253825186(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryDropZoneWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryDropZoneWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

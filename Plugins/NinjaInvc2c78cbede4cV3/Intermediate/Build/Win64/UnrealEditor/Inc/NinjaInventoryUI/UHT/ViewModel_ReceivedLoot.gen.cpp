// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ReceivedLoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ReceivedLoot() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ReceivedLoot();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ReceivedLoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ReceivedLoot Function HandleLootDismissed
struct ViewModel_ReceivedLoot_eventHandleLootDismissed_Parms
{
	UNinjaInventoryLootComponent* Source;
};
static const FName NAME_UViewModel_ReceivedLoot_HandleLootDismissed = FName(TEXT("HandleLootDismissed"));
void UViewModel_ReceivedLoot::HandleLootDismissed(UNinjaInventoryLootComponent* Source)
{
	UFunction* Func = FindFunctionChecked(NAME_UViewModel_ReceivedLoot_HandleLootDismissed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ViewModel_ReceivedLoot_eventHandleLootDismissed_Parms Parms;
		Parms.Source=Source;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleLootDismissed_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot" },
		{ "Comment", "/**\n\x09 * Handles loot dismissed by the owner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ReceivedLoot.h" },
		{ "ToolTip", "Handles loot dismissed by the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ReceivedLoot_eventHandleLootDismissed_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ReceivedLoot, nullptr, "HandleLootDismissed", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::PropPointers), sizeof(ViewModel_ReceivedLoot_eventHandleLootDismissed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::Function_MetaDataParams) };
static_assert(sizeof(ViewModel_ReceivedLoot_eventHandleLootDismissed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ReceivedLoot::execHandleLootDismissed)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLootDismissed_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UViewModel_ReceivedLoot Function HandleLootDismissed

// Begin Class UViewModel_ReceivedLoot Function HandleLootReceived
struct ViewModel_ReceivedLoot_eventHandleLootReceived_Parms
{
	UNinjaInventoryLootComponent* Source;
	TArray<UNinjaInventoryLoot*> NewSelectedLoot;
};
static const FName NAME_UViewModel_ReceivedLoot_HandleLootReceived = FName(TEXT("HandleLootReceived"));
void UViewModel_ReceivedLoot::HandleLootReceived(UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*> const& NewSelectedLoot)
{
	UFunction* Func = FindFunctionChecked(NAME_UViewModel_ReceivedLoot_HandleLootReceived);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ViewModel_ReceivedLoot_eventHandleLootReceived_Parms Parms;
		Parms.Source=Source;
		Parms.NewSelectedLoot=NewSelectedLoot;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleLootReceived_Implementation(Source, NewSelectedLoot);
	}
}
struct Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot" },
		{ "Comment", "/**\n\x09 * Handles loot received by the Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ReceivedLoot.h" },
		{ "ToolTip", "Handles loot received by the Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSelectedLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ReceivedLoot_eventHandleLootReceived_Parms, Source), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::NewProp_NewSelectedLoot_Inner = { "NewSelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::NewProp_NewSelectedLoot = { "NewSelectedLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ReceivedLoot_eventHandleLootReceived_Parms, NewSelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSelectedLoot_MetaData), NewProp_NewSelectedLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::NewProp_NewSelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::NewProp_NewSelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ReceivedLoot, nullptr, "HandleLootReceived", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::PropPointers), sizeof(ViewModel_ReceivedLoot_eventHandleLootReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(ViewModel_ReceivedLoot_eventHandleLootReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ReceivedLoot::execHandleLootReceived)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_Source);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_NewSelectedLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLootReceived_Implementation(Z_Param_Source,Z_Param_Out_NewSelectedLoot);
	P_NATIVE_END;
}
// End Class UViewModel_ReceivedLoot Function HandleLootReceived

// Begin Class UViewModel_ReceivedLoot
void UViewModel_ReceivedLoot::GetbHasLoot_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_ReceivedLoot* Obj = (const UViewModel_ReceivedLoot*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasLoot();
}
void UViewModel_ReceivedLoot::GetSelectedLoot_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_ReceivedLoot* Obj = (const UViewModel_ReceivedLoot*)Object;
	TArray<UNinjaInventoryLoot*>& Result = *(TArray<UNinjaInventoryLoot*>*)OutValue;
	Result = (TArray<UNinjaInventoryLoot*>)Obj->GetSelectedLoot();
}
void UViewModel_ReceivedLoot::StaticRegisterNativesUViewModel_ReceivedLoot()
{
	UClass* Class = UViewModel_ReceivedLoot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleLootDismissed", &UViewModel_ReceivedLoot::execHandleLootDismissed },
		{ "HandleLootReceived", &UViewModel_ReceivedLoot::execHandleLootReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ReceivedLoot);
UClass* Z_Construct_UClass_UViewModel_ReceivedLoot_NoRegister()
{
	return UViewModel_ReceivedLoot::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ReceivedLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A View Model that can process loot that has been received or discarded by an Inventory Manager.\n */" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ReceivedLoot.h" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ReceivedLoot.h" },
		{ "ToolTip", "A View Model that can process loot that has been received or discarded by an Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLoot_MetaData[] = {
		{ "Category", "Selected Loot" },
		{ "Comment", "/** Informs if there's loot selected, even if it's empty. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ReceivedLoot.h" },
		{ "ToolTip", "Informs if there's loot selected, even if it's empty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "Category", "Selected Loot" },
		{ "Comment", "/** Consolidated list of all items managed by the inventory. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ReceivedLoot.h" },
		{ "ToolTip", "Consolidated list of all items managed by the inventory." },
	};
#endif // WITH_METADATA
	static void NewProp_bHasLoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootDismissed, "HandleLootDismissed" }, // 2685915513
		{ &Z_Construct_UFunction_UViewModel_ReceivedLoot_HandleLootReceived, "HandleLootReceived" }, // 1004275768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ReceivedLoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_bHasLoot_SetBit(void* Obj)
{
	((UViewModel_ReceivedLoot*)Obj)->bHasLoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_bHasLoot = { "bHasLoot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UViewModel_ReceivedLoot::GetbHasLoot_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_ReceivedLoot), &Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_bHasLoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLoot_MetaData), NewProp_bHasLoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UViewModel_ReceivedLoot::GetSelectedLoot_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_ReceivedLoot, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_bHasLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::NewProp_SelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::ClassParams = {
	&UViewModel_ReceivedLoot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ReceivedLoot()
{
	if (!Z_Registration_Info_UClass_UViewModel_ReceivedLoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ReceivedLoot.OuterSingleton, Z_Construct_UClass_UViewModel_ReceivedLoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ReceivedLoot.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ReceivedLoot>()
{
	return UViewModel_ReceivedLoot::StaticClass();
}
UViewModel_ReceivedLoot::UViewModel_ReceivedLoot() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ReceivedLoot);
UViewModel_ReceivedLoot::~UViewModel_ReceivedLoot() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ReceivedLoot, bHasLoot)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ReceivedLoot, SelectedLoot)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ReceivedLoot)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ReceivedLoot, bHasLoot)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ReceivedLoot, SelectedLoot)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ReceivedLoot);
// End Class UViewModel_ReceivedLoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ReceivedLoot, UViewModel_ReceivedLoot::StaticClass, TEXT("UViewModel_ReceivedLoot"), &Z_Registration_Info_UClass_UViewModel_ReceivedLoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ReceivedLoot), 994900981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_1215652248(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

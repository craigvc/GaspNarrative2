// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Interfaces/InventoryLootViewInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryLootViewInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryLootViewInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryLootViewInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Interface UInventoryLootViewInterface Function GetLoot
struct InventoryLootViewInterface_eventGetLoot_Parms
{
	UNinjaInventoryLoot* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryLootViewInterface_eventGetLoot_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaInventoryLoot* IInventoryLootViewInterface::GetLoot() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLoot instead.");
	InventoryLootViewInterface_eventGetLoot_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryLootViewInterface_GetLoot = FName(TEXT("GetLoot"));
UNinjaInventoryLoot* IInventoryLootViewInterface::Execute_GetLoot(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryLootViewInterface::StaticClass()));
	InventoryLootViewInterface_eventGetLoot_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryLootViewInterface_GetLoot);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryLootViewInterface*)(O->GetNativeInterfaceAddress(UInventoryLootViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLoot_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Provides the loot currently assigned to this view. May be null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryLootViewInterface.h" },
		{ "ToolTip", "Provides the loot currently assigned to this view. May be null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryLootViewInterface_eventGetLoot_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLootViewInterface, nullptr, "GetLoot", nullptr, nullptr, Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::PropPointers), sizeof(InventoryLootViewInterface_eventGetLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryLootViewInterface_eventGetLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryLootViewInterface::execGetLoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryLoot**)Z_Param__Result=P_THIS->GetLoot_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryLootViewInterface Function GetLoot

// Begin Interface UInventoryLootViewInterface Function HasLoot
struct InventoryLootViewInterface_eventHasLoot_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryLootViewInterface_eventHasLoot_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInventoryLootViewInterface::HasLoot() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasLoot instead.");
	InventoryLootViewInterface_eventHasLoot_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryLootViewInterface_HasLoot = FName(TEXT("HasLoot"));
bool IInventoryLootViewInterface::Execute_HasLoot(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryLootViewInterface::StaticClass()));
	InventoryLootViewInterface_eventHasLoot_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryLootViewInterface_HasLoot);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryLootViewInterface*)(O->GetNativeInterfaceAddress(UInventoryLootViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->HasLoot_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Informs if the view has a loot assigned to it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryLootViewInterface.h" },
		{ "ToolTip", "Informs if the view has a loot assigned to it." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryLootViewInterface_eventHasLoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryLootViewInterface_eventHasLoot_Parms), &Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLootViewInterface, nullptr, "HasLoot", nullptr, nullptr, Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::PropPointers), sizeof(InventoryLootViewInterface_eventHasLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryLootViewInterface_eventHasLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryLootViewInterface::execHasLoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasLoot_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryLootViewInterface Function HasLoot

// Begin Interface UInventoryLootViewInterface Function SetLoot
struct InventoryLootViewInterface_eventSetLoot_Parms
{
	UNinjaInventoryLoot* NewLoot;
};
void IInventoryLootViewInterface::SetLoot(UNinjaInventoryLoot* NewLoot)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLoot instead.");
}
static FName NAME_UInventoryLootViewInterface_SetLoot = FName(TEXT("SetLoot"));
void IInventoryLootViewInterface::Execute_SetLoot(UObject* O, UNinjaInventoryLoot* NewLoot)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryLootViewInterface::StaticClass()));
	InventoryLootViewInterface_eventSetLoot_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryLootViewInterface_SetLoot);
	if (Func)
	{
		Parms.NewLoot=NewLoot;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryLootViewInterface*)(O->GetNativeInterfaceAddress(UInventoryLootViewInterface::StaticClass())))
	{
		I->SetLoot_Implementation(NewLoot);
	}
}
struct Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Sets the loot represented by this view.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryLootViewInterface.h" },
		{ "ToolTip", "Sets the loot represented by this view." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::NewProp_NewLoot = { "NewLoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryLootViewInterface_eventSetLoot_Parms, NewLoot), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::NewProp_NewLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryLootViewInterface, nullptr, "SetLoot", nullptr, nullptr, Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::PropPointers), sizeof(InventoryLootViewInterface_eventSetLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryLootViewInterface_eventSetLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryLootViewInterface::execSetLoot)
{
	P_GET_OBJECT(UNinjaInventoryLoot,Z_Param_NewLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLoot_Implementation(Z_Param_NewLoot);
	P_NATIVE_END;
}
// End Interface UInventoryLootViewInterface Function SetLoot

// Begin Interface UInventoryLootViewInterface
void UInventoryLootViewInterface::StaticRegisterNativesUInventoryLootViewInterface()
{
	UClass* Class = UInventoryLootViewInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLoot", &IInventoryLootViewInterface::execGetLoot },
		{ "HasLoot", &IInventoryLootViewInterface::execHasLoot },
		{ "SetLoot", &IInventoryLootViewInterface::execSetLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryLootViewInterface);
UClass* Z_Construct_UClass_UInventoryLootViewInterface_NoRegister()
{
	return UInventoryLootViewInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryLootViewInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryLootViewInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryLootViewInterface_GetLoot, "GetLoot" }, // 1410626782
		{ &Z_Construct_UFunction_UInventoryLootViewInterface_HasLoot, "HasLoot" }, // 2705661726
		{ &Z_Construct_UFunction_UInventoryLootViewInterface_SetLoot, "SetLoot" }, // 1303609518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryLootViewInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryLootViewInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLootViewInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryLootViewInterface_Statics::ClassParams = {
	&UInventoryLootViewInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLootViewInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryLootViewInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryLootViewInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryLootViewInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryLootViewInterface.OuterSingleton, Z_Construct_UClass_UInventoryLootViewInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryLootViewInterface.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UInventoryLootViewInterface>()
{
	return UInventoryLootViewInterface::StaticClass();
}
UInventoryLootViewInterface::UInventoryLootViewInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryLootViewInterface);
UInventoryLootViewInterface::~UInventoryLootViewInterface() {}
// End Interface UInventoryLootViewInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryLootViewInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryLootViewInterface, UInventoryLootViewInterface::StaticClass, TEXT("UInventoryLootViewInterface"), &Z_Registration_Info_UClass_UInventoryLootViewInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryLootViewInterface), 3675546065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryLootViewInterface_h_763665146(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryLootViewInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryLootViewInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

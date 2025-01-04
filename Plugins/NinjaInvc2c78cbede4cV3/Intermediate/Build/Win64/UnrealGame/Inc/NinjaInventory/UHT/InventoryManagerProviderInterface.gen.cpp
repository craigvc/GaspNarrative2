// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/InventoryManagerProviderInterface.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManagerProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryManagerProviderInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryManagerProviderInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItem();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UInventoryManagerProviderInterface Function GetDefaultItems
struct InventoryManagerProviderInterface_eventGetDefaultItems_Parms
{
	TArray<FInventoryDefaultItem> OutDefaultItems;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryManagerProviderInterface_eventGetDefaultItems_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInventoryManagerProviderInterface::GetDefaultItems(TArray<FInventoryDefaultItem>& OutDefaultItems) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefaultItems instead.");
	InventoryManagerProviderInterface_eventGetDefaultItems_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryManagerProviderInterface_GetDefaultItems = FName(TEXT("GetDefaultItems"));
bool IInventoryManagerProviderInterface::Execute_GetDefaultItems(const UObject* O, TArray<FInventoryDefaultItem>& OutDefaultItems)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryManagerProviderInterface::StaticClass()));
	InventoryManagerProviderInterface_eventGetDefaultItems_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryManagerProviderInterface_GetDefaultItems);
	if (Func)
	{
		Parms.OutDefaultItems=OutDefaultItems;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutDefaultItems=Parms.OutDefaultItems;
	}
	else if (auto I = (const IInventoryManagerProviderInterface*)(O->GetNativeInterfaceAddress(UInventoryManagerProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDefaultItems_Implementation(OutDefaultItems);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager Provider" },
		{ "Comment", "/**\n\x09 * Provides all default items for a character. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryManagerProviderInterface.h" },
		{ "ToolTip", "Provides all default items for a character." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDefaultItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDefaultItems;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_OutDefaultItems_Inner = { "OutDefaultItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItem, METADATA_PARAMS(0, nullptr) }; // 3037943603
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_OutDefaultItems = { "OutDefaultItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManagerProviderInterface_eventGetDefaultItems_Parms, OutDefaultItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3037943603
void Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryManagerProviderInterface_eventGetDefaultItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryManagerProviderInterface_eventGetDefaultItems_Parms), &Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_OutDefaultItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_OutDefaultItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManagerProviderInterface, nullptr, "GetDefaultItems", nullptr, nullptr, Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::PropPointers), sizeof(InventoryManagerProviderInterface_eventGetDefaultItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryManagerProviderInterface_eventGetDefaultItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryManagerProviderInterface::execGetDefaultItems)
{
	P_GET_TARRAY_REF(FInventoryDefaultItem,Z_Param_Out_OutDefaultItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDefaultItems_Implementation(Z_Param_Out_OutDefaultItems);
	P_NATIVE_END;
}
// End Interface UInventoryManagerProviderInterface Function GetDefaultItems

// Begin Interface UInventoryManagerProviderInterface Function GetInventoryLayout
struct InventoryManagerProviderInterface_eventGetInventoryLayout_Parms
{
	const UNinjaInventoryLayoutDataAsset* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryManagerProviderInterface_eventGetInventoryLayout_Parms()
		: ReturnValue(NULL)
	{
	}
};
const UNinjaInventoryLayoutDataAsset* IInventoryManagerProviderInterface::GetInventoryLayout() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInventoryLayout instead.");
	InventoryManagerProviderInterface_eventGetInventoryLayout_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryManagerProviderInterface_GetInventoryLayout = FName(TEXT("GetInventoryLayout"));
const UNinjaInventoryLayoutDataAsset* IInventoryManagerProviderInterface::Execute_GetInventoryLayout(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryManagerProviderInterface::StaticClass()));
	InventoryManagerProviderInterface_eventGetInventoryLayout_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryManagerProviderInterface_GetInventoryLayout);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryManagerProviderInterface*)(O->GetNativeInterfaceAddress(UInventoryManagerProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInventoryLayout_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager Provider" },
		{ "Comment", "/**\n\x09 * Provides the Layout for the inventory, for a given character.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryManagerProviderInterface.h" },
		{ "ToolTip", "Provides the Layout for the inventory, for a given character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManagerProviderInterface_eventGetInventoryLayout_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManagerProviderInterface, nullptr, "GetInventoryLayout", nullptr, nullptr, Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::PropPointers), sizeof(InventoryManagerProviderInterface_eventGetInventoryLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryManagerProviderInterface_eventGetInventoryLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryManagerProviderInterface::execGetInventoryLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryLayoutDataAsset**)Z_Param__Result=P_THIS->GetInventoryLayout_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryManagerProviderInterface Function GetInventoryLayout

// Begin Interface UInventoryManagerProviderInterface Function GetInventoryManager
struct InventoryManagerProviderInterface_eventGetInventoryManager_Parms
{
	UNinjaInventoryManagerComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryManagerProviderInterface_eventGetInventoryManager_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaInventoryManagerComponent* IInventoryManagerProviderInterface::GetInventoryManager() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInventoryManager instead.");
	InventoryManagerProviderInterface_eventGetInventoryManager_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryManagerProviderInterface_GetInventoryManager = FName(TEXT("GetInventoryManager"));
UNinjaInventoryManagerComponent* IInventoryManagerProviderInterface::Execute_GetInventoryManager(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryManagerProviderInterface::StaticClass()));
	InventoryManagerProviderInterface_eventGetInventoryManager_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryManagerProviderInterface_GetInventoryManager);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryManagerProviderInterface*)(O->GetNativeInterfaceAddress(UInventoryManagerProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInventoryManager_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager Provider" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager assigned to an actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryManagerProviderInterface.h" },
		{ "ToolTip", "Provides the Inventory Manager assigned to an actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManagerProviderInterface_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManagerProviderInterface, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::PropPointers), sizeof(InventoryManagerProviderInterface_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryManagerProviderInterface_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryManagerProviderInterface::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryManagerProviderInterface Function GetInventoryManager

// Begin Interface UInventoryManagerProviderInterface
void UInventoryManagerProviderInterface::StaticRegisterNativesUInventoryManagerProviderInterface()
{
	UClass* Class = UInventoryManagerProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultItems", &IInventoryManagerProviderInterface::execGetDefaultItems },
		{ "GetInventoryLayout", &IInventoryManagerProviderInterface::execGetInventoryLayout },
		{ "GetInventoryManager", &IInventoryManagerProviderInterface::execGetInventoryManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryManagerProviderInterface);
UClass* Z_Construct_UClass_UInventoryManagerProviderInterface_NoRegister()
{
	return UInventoryManagerProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryManagerProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryManagerProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryManagerProviderInterface_GetDefaultItems, "GetDefaultItems" }, // 3328422097
		{ &Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryLayout, "GetInventoryLayout" }, // 2135076709
		{ &Z_Construct_UFunction_UInventoryManagerProviderInterface_GetInventoryManager, "GetInventoryManager" }, // 1198239107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryManagerProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryManagerProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManagerProviderInterface_Statics::ClassParams = {
	&UInventoryManagerProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryManagerProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryManagerProviderInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryManagerProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryManagerProviderInterface.OuterSingleton, Z_Construct_UClass_UInventoryManagerProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryManagerProviderInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UInventoryManagerProviderInterface>()
{
	return UInventoryManagerProviderInterface::StaticClass();
}
UInventoryManagerProviderInterface::UInventoryManagerProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManagerProviderInterface);
UInventoryManagerProviderInterface::~UInventoryManagerProviderInterface() {}
// End Interface UInventoryManagerProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryManagerProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryManagerProviderInterface, UInventoryManagerProviderInterface::StaticClass, TEXT("UInventoryManagerProviderInterface"), &Z_Registration_Info_UClass_UInventoryManagerProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryManagerProviderInterface), 1011136481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryManagerProviderInterface_h_3793535265(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryManagerProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryManagerProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Serialization/InventorySerializableFragmentInterface.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySerializableFragmentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventorySerializableFragmentInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventorySerializableFragmentInterface_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UInventorySerializableFragmentInterface Function CanBeSerialized
struct InventorySerializableFragmentInterface_eventCanBeSerialized_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InventorySerializableFragmentInterface_eventCanBeSerialized_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInventorySerializableFragmentInterface::CanBeSerialized() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeSerialized instead.");
	InventorySerializableFragmentInterface_eventCanBeSerialized_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventorySerializableFragmentInterface_CanBeSerialized = FName(TEXT("CanBeSerialized"));
bool IInventorySerializableFragmentInterface::Execute_CanBeSerialized(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventorySerializableFragmentInterface::StaticClass()));
	InventorySerializableFragmentInterface_eventCanBeSerialized_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventorySerializableFragmentInterface_CanBeSerialized);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventorySerializableFragmentInterface*)(O->GetNativeInterfaceAddress(UInventorySerializableFragmentInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanBeSerialized_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Serializable Fragment Interface" },
		{ "Comment", "/**\n\x09 * Informs if this fragment can be serialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Serialization/InventorySerializableFragmentInterface.h" },
		{ "ToolTip", "Informs if this fragment can be serialized." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventorySerializableFragmentInterface_eventCanBeSerialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventorySerializableFragmentInterface_eventCanBeSerialized_Parms), &Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySerializableFragmentInterface, nullptr, "CanBeSerialized", nullptr, nullptr, Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::PropPointers), sizeof(InventorySerializableFragmentInterface_eventCanBeSerialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventorySerializableFragmentInterface_eventCanBeSerialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventorySerializableFragmentInterface::execCanBeSerialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeSerialized_Implementation();
	P_NATIVE_END;
}
// End Interface UInventorySerializableFragmentInterface Function CanBeSerialized

// Begin Interface UInventorySerializableFragmentInterface Function RestoreFromSavedMemory
struct InventorySerializableFragmentInterface_eventRestoreFromSavedMemory_Parms
{
	FInventoryDefaultItemMemory Memory;
};
void IInventorySerializableFragmentInterface::RestoreFromSavedMemory(FInventoryDefaultItemMemory const& Memory)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RestoreFromSavedMemory instead.");
}
static FName NAME_UInventorySerializableFragmentInterface_RestoreFromSavedMemory = FName(TEXT("RestoreFromSavedMemory"));
void IInventorySerializableFragmentInterface::Execute_RestoreFromSavedMemory(UObject* O, FInventoryDefaultItemMemory const& Memory)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventorySerializableFragmentInterface::StaticClass()));
	InventorySerializableFragmentInterface_eventRestoreFromSavedMemory_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventorySerializableFragmentInterface_RestoreFromSavedMemory);
	if (Func)
	{
		Parms.Memory=Memory;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventorySerializableFragmentInterface*)(O->GetNativeInterfaceAddress(UInventorySerializableFragmentInterface::StaticClass())))
	{
		I->RestoreFromSavedMemory_Implementation(Memory);
	}
}
struct Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Serializable Fragment Interface" },
		{ "Comment", "/**\n\x09 * Restores the fragment from a saved memory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Serialization/InventorySerializableFragmentInterface.h" },
		{ "ToolTip", "Restores the fragment from a saved memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySerializableFragmentInterface_eventRestoreFromSavedMemory_Parms, Memory), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::NewProp_Memory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySerializableFragmentInterface, nullptr, "RestoreFromSavedMemory", nullptr, nullptr, Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::PropPointers), sizeof(InventorySerializableFragmentInterface_eventRestoreFromSavedMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventorySerializableFragmentInterface_eventRestoreFromSavedMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventorySerializableFragmentInterface::execRestoreFromSavedMemory)
{
	P_GET_STRUCT_REF(FInventoryDefaultItemMemory,Z_Param_Out_Memory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreFromSavedMemory_Implementation(Z_Param_Out_Memory);
	P_NATIVE_END;
}
// End Interface UInventorySerializableFragmentInterface Function RestoreFromSavedMemory

// Begin Interface UInventorySerializableFragmentInterface
void UInventorySerializableFragmentInterface::StaticRegisterNativesUInventorySerializableFragmentInterface()
{
	UClass* Class = UInventorySerializableFragmentInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeSerialized", &IInventorySerializableFragmentInterface::execCanBeSerialized },
		{ "RestoreFromSavedMemory", &IInventorySerializableFragmentInterface::execRestoreFromSavedMemory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventorySerializableFragmentInterface);
UClass* Z_Construct_UClass_UInventorySerializableFragmentInterface_NoRegister()
{
	return UInventorySerializableFragmentInterface::StaticClass();
}
struct Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Serialization/InventorySerializableFragmentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySerializableFragmentInterface_CanBeSerialized, "CanBeSerialized" }, // 587594636
		{ &Z_Construct_UFunction_UInventorySerializableFragmentInterface_RestoreFromSavedMemory, "RestoreFromSavedMemory" }, // 1457422340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventorySerializableFragmentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics::ClassParams = {
	&UInventorySerializableFragmentInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySerializableFragmentInterface()
{
	if (!Z_Registration_Info_UClass_UInventorySerializableFragmentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySerializableFragmentInterface.OuterSingleton, Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySerializableFragmentInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UInventorySerializableFragmentInterface>()
{
	return UInventorySerializableFragmentInterface::StaticClass();
}
UInventorySerializableFragmentInterface::UInventorySerializableFragmentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySerializableFragmentInterface);
UInventorySerializableFragmentInterface::~UInventorySerializableFragmentInterface() {}
// End Interface UInventorySerializableFragmentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySerializableFragmentInterface, UInventorySerializableFragmentInterface::StaticClass, TEXT("UInventorySerializableFragmentInterface"), &Z_Registration_Info_UClass_UInventorySerializableFragmentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySerializableFragmentInterface), 3391732129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_2836482690(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

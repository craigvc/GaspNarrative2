// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/InventoryPickupInterface.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryPickupInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryPickupInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryPickupInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UInventoryPickupInterface Function GetItemData
struct InventoryPickupInterface_eventGetItemData_Parms
{
	const UNinjaInventoryItemDataAsset* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryPickupInterface_eventGetItemData_Parms()
		: ReturnValue(NULL)
	{
	}
};
const UNinjaInventoryItemDataAsset* IInventoryPickupInterface::GetItemData() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItemData instead.");
	InventoryPickupInterface_eventGetItemData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryPickupInterface_GetItemData = FName(TEXT("GetItemData"));
const UNinjaInventoryItemDataAsset* IInventoryPickupInterface::Execute_GetItemData(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventGetItemData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_GetItemData);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetItemData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Provides the item granted by the pickup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Provides the item granted by the pickup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::PropPointers), sizeof(InventoryPickupInterface_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryItemDataAsset**)Z_Param__Result=P_THIS->GetItemData_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function GetItemData

// Begin Interface UInventoryPickupInterface Function GetItemMemories
struct InventoryPickupInterface_eventGetItemMemories_Parms
{
	TArray<FInventoryDefaultItemMemory> ReturnValue;
};
TArray<FInventoryDefaultItemMemory> IInventoryPickupInterface::GetItemMemories() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItemMemories instead.");
	InventoryPickupInterface_eventGetItemMemories_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryPickupInterface_GetItemMemories = FName(TEXT("GetItemMemories"));
TArray<FInventoryDefaultItemMemory> IInventoryPickupInterface::Execute_GetItemMemories(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventGetItemMemories_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_GetItemMemories);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetItemMemories_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Provides all memories for this item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Provides all memories for this item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventGetItemMemories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "GetItemMemories", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::PropPointers), sizeof(InventoryPickupInterface_eventGetItemMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventGetItemMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execGetItemMemories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryDefaultItemMemory>*)Z_Param__Result=P_THIS->GetItemMemories_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function GetItemMemories

// Begin Interface UInventoryPickupInterface Function GetSource
struct InventoryPickupInterface_eventGetSource_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryPickupInterface_eventGetSource_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* IInventoryPickupInterface::GetSource() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSource instead.");
	InventoryPickupInterface_eventGetSource_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryPickupInterface_GetSource = FName(TEXT("GetSource"));
AActor* IInventoryPickupInterface::Execute_GetSource(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventGetSource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_GetSource);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSource_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Gets the source that originated this pickup.\n\x09 *\n\x09 * Might be null, since common implementations might store this as a weak reference to\n\x09 * the original source, that might not be available anymore at this point.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Gets the source that originated this pickup.\n\nMight be null, since common implementations might store this as a weak reference to\nthe original source, that might not be available anymore at this point." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "GetSource", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::PropPointers), sizeof(InventoryPickupInterface_eventGetSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventGetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_GetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_GetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execGetSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetSource_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function GetSource

// Begin Interface UInventoryPickupInterface Function SetInitialLocation
struct InventoryPickupInterface_eventSetInitialLocation_Parms
{
	FVector InitialLocation;
	FVector ActualLocation;
};
void IInventoryPickupInterface::SetInitialLocation(FVector InitialLocation, FVector& ActualLocation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInitialLocation instead.");
}
static FName NAME_UInventoryPickupInterface_SetInitialLocation = FName(TEXT("SetInitialLocation"));
void IInventoryPickupInterface::Execute_SetInitialLocation(UObject* O, FVector InitialLocation, FVector& ActualLocation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventSetInitialLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_SetInitialLocation);
	if (Func)
	{
		Parms.InitialLocation=InitialLocation;
		Parms.ActualLocation=ActualLocation;
		O->ProcessEvent(Func, &Parms);
		ActualLocation=Parms.ActualLocation;
	}
	else if (auto I = (IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		I->SetInitialLocation_Implementation(InitialLocation,ActualLocation);
	}
}
struct Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Sets an initial location that can be used as-is or as a reference.\n\x09 *\n\x09 * @param InitialLocation\n\x09 *\x09\x09The initial location set to the actor. This can be modified by the method.\n\x09 *\n\x09 * @param ActualLocation\n\x09 *\x09\x09The actual location used, which can be the same as the initial, or modified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Sets an initial location that can be used as-is or as a reference.\n\n@param InitialLocation\n             The initial location set to the actor. This can be modified by the method.\n\n@param ActualLocation\n             The actual location used, which can be the same as the initial, or modified." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActualLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventSetInitialLocation_Parms, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::NewProp_ActualLocation = { "ActualLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventSetInitialLocation_Parms, ActualLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::NewProp_ActualLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "SetInitialLocation", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::PropPointers), sizeof(InventoryPickupInterface_eventSetInitialLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventSetInitialLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execSetInitialLocation)
{
	P_GET_STRUCT(FVector,Z_Param_InitialLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ActualLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialLocation_Implementation(Z_Param_InitialLocation,Z_Param_Out_ActualLocation);
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function SetInitialLocation

// Begin Interface UInventoryPickupInterface Function SetItemData
struct InventoryPickupInterface_eventSetItemData_Parms
{
	const UNinjaInventoryItemDataAsset* NewItemData;
};
void IInventoryPickupInterface::SetItemData(const UNinjaInventoryItemDataAsset* NewItemData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItemData instead.");
}
static FName NAME_UInventoryPickupInterface_SetItemData = FName(TEXT("SetItemData"));
void IInventoryPickupInterface::Execute_SetItemData(UObject* O, const UNinjaInventoryItemDataAsset* NewItemData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventSetItemData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_SetItemData);
	if (Func)
	{
		Parms.NewItemData=NewItemData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		I->SetItemData_Implementation(NewItemData);
	}
}
struct Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Sets the item granted by the pickup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Sets the item granted by the pickup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventSetItemData_Parms, NewItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewItemData_MetaData), NewProp_NewItemData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::NewProp_NewItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "SetItemData", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::PropPointers), sizeof(InventoryPickupInterface_eventSetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventSetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_SetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_SetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execSetItemData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_NewItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemData_Implementation(Z_Param_NewItemData);
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function SetItemData

// Begin Interface UInventoryPickupInterface Function SetItemMemories
struct InventoryPickupInterface_eventSetItemMemories_Parms
{
	TArray<FInventoryDefaultItemMemory> NewItemMemories;
};
void IInventoryPickupInterface::SetItemMemories(TArray<FInventoryDefaultItemMemory> const& NewItemMemories)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItemMemories instead.");
}
static FName NAME_UInventoryPickupInterface_SetItemMemories = FName(TEXT("SetItemMemories"));
void IInventoryPickupInterface::Execute_SetItemMemories(UObject* O, TArray<FInventoryDefaultItemMemory> const& NewItemMemories)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventSetItemMemories_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_SetItemMemories);
	if (Func)
	{
		Parms.NewItemMemories=NewItemMemories;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		I->SetItemMemories_Implementation(NewItemMemories);
	}
}
struct Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Sets memories that should be used when the item is granted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Sets memories that should be used when the item is granted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewItemMemories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewItemMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewItemMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::NewProp_NewItemMemories_Inner = { "NewItemMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::NewProp_NewItemMemories = { "NewItemMemories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventSetItemMemories_Parms, NewItemMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewItemMemories_MetaData), NewProp_NewItemMemories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::NewProp_NewItemMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::NewProp_NewItemMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "SetItemMemories", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::PropPointers), sizeof(InventoryPickupInterface_eventSetItemMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventSetItemMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execSetItemMemories)
{
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_NewItemMemories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemMemories_Implementation(Z_Param_Out_NewItemMemories);
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function SetItemMemories

// Begin Interface UInventoryPickupInterface Function SetSource
struct InventoryPickupInterface_eventSetSource_Parms
{
	AActor* Source;
};
void IInventoryPickupInterface::SetSource(AActor* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSource instead.");
}
static FName NAME_UInventoryPickupInterface_SetSource = FName(TEXT("SetSource"));
void IInventoryPickupInterface::Execute_SetSource(UObject* O, AActor* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryPickupInterface::StaticClass()));
	InventoryPickupInterface_eventSetSource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryPickupInterface_SetSource);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryPickupInterface*)(O->GetNativeInterfaceAddress(UInventoryPickupInterface::StaticClass())))
	{
		I->SetSource_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Pickup" },
		{ "Comment", "/**\n\x09 * Sets the source actor that generated this pickup.\n\x09 *\n\x09 * Usually this is the pawn that owns the inventory originating this item, but it could\n\x09 * be something else, like the AI Director that forced a pickup to spawn for example.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
		{ "ToolTip", "Sets the source actor that generated this pickup.\n\nUsually this is the pawn that owns the inventory originating this item, but it could\nbe something else, like the AI Director that forced a pickup to spawn for example." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryPickupInterface_eventSetSource_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryPickupInterface, nullptr, "SetSource", nullptr, nullptr, Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::PropPointers), sizeof(InventoryPickupInterface_eventSetSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryPickupInterface_eventSetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryPickupInterface_SetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryPickupInterface_SetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryPickupInterface::execSetSource)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSource_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UInventoryPickupInterface Function SetSource

// Begin Interface UInventoryPickupInterface
void UInventoryPickupInterface::StaticRegisterNativesUInventoryPickupInterface()
{
	UClass* Class = UInventoryPickupInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemData", &IInventoryPickupInterface::execGetItemData },
		{ "GetItemMemories", &IInventoryPickupInterface::execGetItemMemories },
		{ "GetSource", &IInventoryPickupInterface::execGetSource },
		{ "SetInitialLocation", &IInventoryPickupInterface::execSetInitialLocation },
		{ "SetItemData", &IInventoryPickupInterface::execSetItemData },
		{ "SetItemMemories", &IInventoryPickupInterface::execSetItemMemories },
		{ "SetSource", &IInventoryPickupInterface::execSetSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryPickupInterface);
UClass* Z_Construct_UClass_UInventoryPickupInterface_NoRegister()
{
	return UInventoryPickupInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryPickupInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryPickupInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryPickupInterface_GetItemData, "GetItemData" }, // 494260837
		{ &Z_Construct_UFunction_UInventoryPickupInterface_GetItemMemories, "GetItemMemories" }, // 2169865972
		{ &Z_Construct_UFunction_UInventoryPickupInterface_GetSource, "GetSource" }, // 1126893940
		{ &Z_Construct_UFunction_UInventoryPickupInterface_SetInitialLocation, "SetInitialLocation" }, // 624684696
		{ &Z_Construct_UFunction_UInventoryPickupInterface_SetItemData, "SetItemData" }, // 1343920598
		{ &Z_Construct_UFunction_UInventoryPickupInterface_SetItemMemories, "SetItemMemories" }, // 891981472
		{ &Z_Construct_UFunction_UInventoryPickupInterface_SetSource, "SetSource" }, // 657156850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryPickupInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryPickupInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryPickupInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryPickupInterface_Statics::ClassParams = {
	&UInventoryPickupInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryPickupInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryPickupInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryPickupInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryPickupInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryPickupInterface.OuterSingleton, Z_Construct_UClass_UInventoryPickupInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryPickupInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UInventoryPickupInterface>()
{
	return UInventoryPickupInterface::StaticClass();
}
UInventoryPickupInterface::UInventoryPickupInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryPickupInterface);
UInventoryPickupInterface::~UInventoryPickupInterface() {}
// End Interface UInventoryPickupInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryPickupInterface, UInventoryPickupInterface::StaticClass, TEXT("UInventoryPickupInterface"), &Z_Registration_Info_UClass_UInventoryPickupInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryPickupInterface), 785141290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_292327467(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

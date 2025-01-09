// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/InventoryFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UInventoryFunctionLibrary();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UInventoryFunctionLibrary_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Class UInventoryFunctionLibrary Function GetInventoryComponentFromTarget
struct Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics
{
	struct InventoryFunctionLibrary_eventGetInventoryComponentFromTarget_Parms
	{
		AActor* Target;
		UNarrativeInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09* Find the inventory component from the supplied target object. \n\x09* \n\x09* If given a pawn/controller, will check pawns player state and controller for the inventory component also. \n\x09*\n\x09* @return The inventory component.\n\x09*/" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
		{ "ToolTip", "Find the inventory component from the supplied target object.\n\nIf given a pawn/controller, will check pawns player state and controller for the inventory component also.\n\n@return The inventory component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventGetInventoryComponentFromTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventGetInventoryComponentFromTarget_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFunctionLibrary, nullptr, "GetInventoryComponentFromTarget", nullptr, nullptr, Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::InventoryFunctionLibrary_eventGetInventoryComponentFromTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::InventoryFunctionLibrary_eventGetInventoryComponentFromTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFunctionLibrary::execGetInventoryComponentFromTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInventoryComponent**)Z_Param__Result=UInventoryFunctionLibrary::GetInventoryComponentFromTarget(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UInventoryFunctionLibrary Function GetInventoryComponentFromTarget

// Begin Class UInventoryFunctionLibrary Function SortItemArrayAlphabetical
struct Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics
{
	struct InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms
	{
		TArray<UNarrativeItem*> InItems;
		bool bReverse;
		TArray<UNarrativeItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09* Sort the array of inventory items from a-z\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
		{ "ToolTip", "Sort the array of inventory items from a-z" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItems_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InItems;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_InItems_Inner = { "InItems", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_InItems = { "InItems", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms, InItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItems_MetaData), NewProp_InItems_MetaData) };
void Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms), &Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_InItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_InItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFunctionLibrary, nullptr, "SortItemArrayAlphabetical", nullptr, nullptr, Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::InventoryFunctionLibrary_eventSortItemArrayAlphabetical_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFunctionLibrary::execSortItemArrayAlphabetical)
{
	P_GET_TARRAY(UNarrativeItem*,Z_Param_InItems);
	P_GET_UBOOL(Z_Param_bReverse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNarrativeItem*>*)Z_Param__Result=UInventoryFunctionLibrary::SortItemArrayAlphabetical(Z_Param_InItems,Z_Param_bReverse);
	P_NATIVE_END;
}
// End Class UInventoryFunctionLibrary Function SortItemArrayAlphabetical

// Begin Class UInventoryFunctionLibrary Function SortItemArrayWeight
struct Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics
{
	struct InventoryFunctionLibrary_eventSortItemArrayWeight_Parms
	{
		TArray<UNarrativeItem*> InItems;
		bool bReverse;
		TArray<UNarrativeItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09* Sort the array of inventory items using stack weight\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
		{ "ToolTip", "Sort the array of inventory items using stack weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItems_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InItems;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_InItems_Inner = { "InItems", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_InItems = { "InItems", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventSortItemArrayWeight_Parms, InItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItems_MetaData), NewProp_InItems_MetaData) };
void Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((InventoryFunctionLibrary_eventSortItemArrayWeight_Parms*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryFunctionLibrary_eventSortItemArrayWeight_Parms), &Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryFunctionLibrary_eventSortItemArrayWeight_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_InItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_InItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryFunctionLibrary, nullptr, "SortItemArrayWeight", nullptr, nullptr, Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::InventoryFunctionLibrary_eventSortItemArrayWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::InventoryFunctionLibrary_eventSortItemArrayWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryFunctionLibrary::execSortItemArrayWeight)
{
	P_GET_TARRAY(UNarrativeItem*,Z_Param_InItems);
	P_GET_UBOOL(Z_Param_bReverse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNarrativeItem*>*)Z_Param__Result=UInventoryFunctionLibrary::SortItemArrayWeight(Z_Param_InItems,Z_Param_bReverse);
	P_NATIVE_END;
}
// End Class UInventoryFunctionLibrary Function SortItemArrayWeight

// Begin Class UInventoryFunctionLibrary
void UInventoryFunctionLibrary::StaticRegisterNativesUInventoryFunctionLibrary()
{
	UClass* Class = UInventoryFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryComponentFromTarget", &UInventoryFunctionLibrary::execGetInventoryComponentFromTarget },
		{ "SortItemArrayAlphabetical", &UInventoryFunctionLibrary::execSortItemArrayAlphabetical },
		{ "SortItemArrayWeight", &UInventoryFunctionLibrary::execSortItemArrayWeight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFunctionLibrary);
UClass* Z_Construct_UClass_UInventoryFunctionLibrary_NoRegister()
{
	return UInventoryFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UInventoryFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/InventoryFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryFunctionLibrary_GetInventoryComponentFromTarget, "GetInventoryComponentFromTarget" }, // 1200174124
		{ &Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayAlphabetical, "SortItemArrayAlphabetical" }, // 4045225168
		{ &Z_Construct_UFunction_UInventoryFunctionLibrary_SortItemArrayWeight, "SortItemArrayWeight" }, // 4195357885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFunctionLibrary_Statics::ClassParams = {
	&UInventoryFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UInventoryFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_UInventoryFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFunctionLibrary.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UInventoryFunctionLibrary>()
{
	return UInventoryFunctionLibrary::StaticClass();
}
UInventoryFunctionLibrary::UInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFunctionLibrary);
UInventoryFunctionLibrary::~UInventoryFunctionLibrary() {}
// End Class UInventoryFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFunctionLibrary, UInventoryFunctionLibrary::StaticClass, TEXT("UInventoryFunctionLibrary"), &Z_Registration_Info_UClass_UInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFunctionLibrary), 1451090068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryFunctionLibrary_h_3467430808(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

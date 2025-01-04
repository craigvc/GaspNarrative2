// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryLootSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryLootSelector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSelector();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryLootSelector Function GetInventorySubsystem
struct Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics
{
	struct NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms
	{
		const UWorld* World;
		bool bChecked;
		UNinjaInventorySubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot Selector" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Subsystem for this class.\n\x09 *\n\x09 * @param World\x09\x09\x09\x09World reference to use. This is always checked.\n\x09 * @param bChecked\x09\x09\x09If true, checks if the subsystem was found with an assertion.\n\x09 */" },
		{ "CPP_Default_bChecked", "false" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSelector.h" },
		{ "ToolTip", "Provides the Inventory Subsystem for this class.\n\n@param World                         World reference to use. This is always checked.\n@param bChecked                      If true, checks if the subsystem was found with an assertion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChecked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_bChecked_SetBit(void* Obj)
{
	((NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms*)Obj)->bChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_bChecked = { "bChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms), &Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_bChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventorySubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_bChecked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootSelector, nullptr, "GetInventorySubsystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::NinjaInventoryLootSelector_eventGetInventorySubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootSelector::execGetInventorySubsystem)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventorySubsystem**)Z_Param__Result=UNinjaInventoryLootSelector::GetInventorySubsystem(Z_Param_World,Z_Param_bChecked);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootSelector Function GetInventorySubsystem

// Begin Class UNinjaInventoryLootSelector Function GetStackSize
struct Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics
{
	struct NinjaInventoryLootSelector_eventGetStackSize_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot Selector" },
		{ "Comment", "/**\n\x09 * Provides the current stack for an item.\n\x09 *\n\x09 * If the item does not have a Stack Fragment, then a value of one is considered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSelector.h" },
		{ "ToolTip", "Provides the current stack for an item.\n\nIf the item does not have a Stack Fragment, then a value of one is considered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventGetStackSize_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventGetStackSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootSelector, nullptr, "GetStackSize", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::NinjaInventoryLootSelector_eventGetStackSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::NinjaInventoryLootSelector_eventGetStackSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootSelector::execGetStackSize)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStackSize(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootSelector Function GetStackSize

// Begin Class UNinjaInventoryLootSelector Function RollItem
struct NinjaInventoryLootSelector_eventRollItem_Parms
{
	const UNinjaInventoryManagerComponent* Requester;
	float DropChance;
	TArray<UNinjaInventoryLoot*> SelectedLoot;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryLootSelector_eventRollItem_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInventoryLootSelector_RollItem = FName(TEXT("RollItem"));
bool UNinjaInventoryLootSelector::RollItem(const UNinjaInventoryManagerComponent* Requester, float DropChance, TArray<UNinjaInventoryLoot*> const& SelectedLoot) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryLootSelector_RollItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryLootSelector_eventRollItem_Parms Parms;
		Parms.Requester=Requester;
		Parms.DropChance=DropChance;
		Parms.SelectedLoot=SelectedLoot;
		const_cast<UNinjaInventoryLootSelector*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryLootSelector*>(this)->RollItem_Implementation(Requester, DropChance, SelectedLoot);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Selector" },
		{ "Comment", "/**\n\x09 * Checks if an item has dropped, based on the drop chance.\n\x09 *\n\x09 * Usually the drop chance can be retrieved by the Loot Fragment or the related Lootable Item interface.\n\x09 * Other means can be used instead, such as evaluating the need for a player to receive a health potion.\n\x09 *\n\x09 * You can also access the ongoing list of selected loot, in case that should influence the current\n\x09 * roll (forcing it to be true or false), in case another item was already selected (or not).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSelector.h" },
		{ "ToolTip", "Checks if an item has dropped, based on the drop chance.\n\nUsually the drop chance can be retrieved by the Loot Fragment or the related Lootable Item interface.\nOther means can be used instead, such as evaluating the need for a player to receive a health potion.\n\nYou can also access the ongoing list of selected loot, in case that should influence the current\nroll (forcing it to be true or false), in case another item was already selected (or not)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropChance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollItem_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_DropChance = { "DropChance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollItem_Parms, DropChance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollItem_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryLootSelector_eventRollItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryLootSelector_eventRollItem_Parms), &Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_DropChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_SelectedLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootSelector, nullptr, "RollItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::PropPointers), sizeof(NinjaInventoryLootSelector_eventRollItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryLootSelector_eventRollItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootSelector::execRollItem)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DropChance);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_SelectedLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RollItem_Implementation(Z_Param_Requester,Z_Param_DropChance,Z_Param_Out_SelectedLoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootSelector Function RollItem

// Begin Class UNinjaInventoryLootSelector Function RollQuantity
struct NinjaInventoryLootSelector_eventRollQuantity_Parms
{
	const UNinjaInventoryManagerComponent* Requester;
	FVector2D QuantityRange;
	TArray<UNinjaInventoryLoot*> SelectedLoot;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryLootSelector_eventRollQuantity_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNinjaInventoryLootSelector_RollQuantity = FName(TEXT("RollQuantity"));
int32 UNinjaInventoryLootSelector::RollQuantity(const UNinjaInventoryManagerComponent* Requester, FVector2D QuantityRange, TArray<UNinjaInventoryLoot*> const& SelectedLoot) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryLootSelector_RollQuantity);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryLootSelector_eventRollQuantity_Parms Parms;
		Parms.Requester=Requester;
		Parms.QuantityRange=QuantityRange;
		Parms.SelectedLoot=SelectedLoot;
		const_cast<UNinjaInventoryLootSelector*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryLootSelector*>(this)->RollQuantity_Implementation(Requester, QuantityRange, SelectedLoot);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Selector" },
		{ "Comment", "/**\n\x09 * Checks how many items will be obtained.\n\x09 *\n\x09 * By default, it should consider the current stack against the drop range defined by the Loot Fragment.\n\x09 * But once again, other checks might be used, such as a world modifier to determine more or less items.\n\x09 *\n\x09 * You can also access the ongoing list of selected loot, in case that should influence the current\n\x09 * quantity selection process, for example, you can add fewer items if another item was already granted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSelector.h" },
		{ "ToolTip", "Checks how many items will be obtained.\n\nBy default, it should consider the current stack against the drop range defined by the Loot Fragment.\nBut once again, other checks might be used, such as a world modifier to determine more or less items.\n\nYou can also access the ongoing list of selected loot, in case that should influence the current\nquantity selection process, for example, you can add fewer items if another item was already granted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantityRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollQuantity_Parms, Requester), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_QuantityRange = { "QuantityRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollQuantity_Parms, QuantityRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollQuantity_Parms, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLootSelector_eventRollQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_QuantityRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_SelectedLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootSelector, nullptr, "RollQuantity", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::PropPointers), sizeof(NinjaInventoryLootSelector_eventRollQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryLootSelector_eventRollQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootSelector::execRollQuantity)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Requester);
	P_GET_STRUCT(FVector2D,Z_Param_QuantityRange);
	P_GET_TARRAY_REF(UNinjaInventoryLoot*,Z_Param_Out_SelectedLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RollQuantity_Implementation(Z_Param_Requester,Z_Param_QuantityRange,Z_Param_Out_SelectedLoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootSelector Function RollQuantity

// Begin Class UNinjaInventoryLootSelector
void UNinjaInventoryLootSelector::StaticRegisterNativesUNinjaInventoryLootSelector()
{
	UClass* Class = UNinjaInventoryLootSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventorySubsystem", &UNinjaInventoryLootSelector::execGetInventorySubsystem },
		{ "GetStackSize", &UNinjaInventoryLootSelector::execGetStackSize },
		{ "RollItem", &UNinjaInventoryLootSelector::execRollItem },
		{ "RollQuantity", &UNinjaInventoryLootSelector::execRollQuantity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryLootSelector);
UClass* Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister()
{
	return UNinjaInventoryLootSelector::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryLootSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Loot Selector that rolls using single probability.\n */" },
		{ "DisplayName", "Single Probability" },
		{ "IncludePath", "GameFramework/NinjaInventoryLootSelector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLootSelector.h" },
		{ "ToolTip", "Loot Selector that rolls using single probability." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryLootSelector_GetInventorySubsystem, "GetInventorySubsystem" }, // 4212769200
		{ &Z_Construct_UFunction_UNinjaInventoryLootSelector_GetStackSize, "GetStackSize" }, // 101129286
		{ &Z_Construct_UFunction_UNinjaInventoryLootSelector_RollItem, "RollItem" }, // 1642865039
		{ &Z_Construct_UFunction_UNinjaInventoryLootSelector_RollQuantity, "RollQuantity" }, // 1638214821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryLootSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryLootSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryLootSelector_Statics::ClassParams = {
	&UNinjaInventoryLootSelector::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryLootSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryLootSelector()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryLootSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryLootSelector.OuterSingleton, Z_Construct_UClass_UNinjaInventoryLootSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryLootSelector.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryLootSelector>()
{
	return UNinjaInventoryLootSelector::StaticClass();
}
UNinjaInventoryLootSelector::UNinjaInventoryLootSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryLootSelector);
UNinjaInventoryLootSelector::~UNinjaInventoryLootSelector() {}
// End Class UNinjaInventoryLootSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryLootSelector, UNinjaInventoryLootSelector::StaticClass, TEXT("UNinjaInventoryLootSelector"), &Z_Registration_Info_UClass_UNinjaInventoryLootSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryLootSelector), 4266728659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_3802441513(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

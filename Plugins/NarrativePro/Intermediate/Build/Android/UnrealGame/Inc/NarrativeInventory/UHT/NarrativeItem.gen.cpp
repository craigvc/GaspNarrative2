// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/NarrativeItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem_NoRegister();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeItemStat();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Delegate FOnItemModified
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnItemModified__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemModified_DelegateWrapper(const FMulticastScriptDelegate& OnItemModified)
{
	OnItemModified.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnItemModified

// Begin ScriptStruct FNarrativeItemStat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeItemStat;
class UScriptStruct* FNarrativeItemStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeItemStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeItemStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeItemStat, (UObject*)Z_Construct_UPackage__Script_NarrativeInventory(), TEXT("NarrativeItemStat"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeItemStat.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<FNarrativeItemStat>()
{
	return FNarrativeItemStat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeItemStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A stat that can be shown in the item preview window\n" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "A stat that can be shown in the item preview window" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatDisplayName_MetaData[] = {
		{ "Category", "Item Stat" },
		{ "Comment", "//The stats display name.\n" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The stats display name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringVariable_MetaData[] = {
		{ "Category", "Item Stat" },
		{ "Comment", "//The backing string variable for the stat - implemented using GetStringVariable function that can be overriden in Blueprints! \n" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The backing string variable for the stat - implemented using GetStringVariable function that can be overriden in Blueprints!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTooltip_MetaData[] = {
		{ "Category", "Item Stat" },
		{ "Comment", "//Tooltip the stat will show when hovered \n" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Tooltip the stat will show when hovered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_StatDisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringVariable;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StatTooltip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeItemStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewProp_StatDisplayName = { "StatDisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeItemStat, StatDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatDisplayName_MetaData), NewProp_StatDisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewProp_StringVariable = { "StringVariable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeItemStat, StringVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringVariable_MetaData), NewProp_StringVariable_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewProp_StatTooltip = { "StatTooltip", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeItemStat, StatTooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTooltip_MetaData), NewProp_StatTooltip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewProp_StatDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewProp_StringVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewProp_StatTooltip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
	nullptr,
	&NewStructOps,
	"NarrativeItemStat",
	Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::PropPointers),
	sizeof(FNarrativeItemStat),
	alignof(FNarrativeItemStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeItemStat()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeItemStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeItemStat.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeItemStat.InnerSingleton;
}
// End ScriptStruct FNarrativeItemStat

// Begin Class UNarrativeItem Function Activated
static const FName NAME_UNarrativeItem_Activated = FName(TEXT("Activated"));
void UNarrativeItem::Activated()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_Activated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Activated_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_Activated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* If this item is activatable, this will be called when the item is activated\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "If this item is activatable, this will be called when the item is activated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_Activated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "Activated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_Activated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_Activated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeItem_Activated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_Activated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activated_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function Activated

// Begin Class UNarrativeItem Function CanBeRemoved
struct NarrativeItem_eventCanBeRemoved_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeItem_eventCanBeRemoved_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeItem_CanBeRemoved = FName(TEXT("CanBeRemoved"));
bool UNarrativeItem::CanBeRemoved() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_CanBeRemoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeItem_eventCanBeRemoved_Parms Parms;
		const_cast<UNarrativeItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeItem*>(this)->CanBeRemoved_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Allows you to define whether or not the item can be dropped, nice for if you want to implement special quest items that cannot be dropped for example \n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Allows you to define whether or not the item can be dropped, nice for if you want to implement special quest items that cannot be dropped for example" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeItem_eventCanBeRemoved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventCanBeRemoved_Parms), &Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "CanBeRemoved", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::PropPointers), sizeof(NarrativeItem_eventCanBeRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeItem_eventCanBeRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_CanBeRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_CanBeRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execCanBeRemoved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeRemoved_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function CanBeRemoved

// Begin Class UNarrativeItem Function CanUse
struct NarrativeItem_eventCanUse_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeItem_eventCanUse_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeItem_CanUse = FName(TEXT("CanUse"));
bool UNarrativeItem::CanUse() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_CanUse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeItem_eventCanUse_Parms Parms;
		const_cast<UNarrativeItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeItem*>(this)->CanUse_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_CanUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Allows you to define whether the item can be used or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Allows you to define whether the item can be used or not." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeItem_eventCanUse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventCanUse_Parms), &Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "CanUse", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::PropPointers), sizeof(NarrativeItem_eventCanUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeItem_eventCanUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_CanUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_CanUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execCanUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUse_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function CanUse

// Begin Class UNarrativeItem Function Deactivated
static const FName NAME_UNarrativeItem_Deactivated = FName(TEXT("Deactivated"));
void UNarrativeItem::Deactivated()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_Deactivated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Deactivated_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_Deactivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* If this item is activatable, this will be called when the item is deactivated\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "If this item is activatable, this will be called when the item is deactivated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_Deactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "Deactivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_Deactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_Deactivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeItem_Deactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_Deactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execDeactivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivated_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function Deactivated

// Begin Class UNarrativeItem Function GetLastUseTime
struct Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics
{
	struct NarrativeItem_eventGetLastUseTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetLastUseTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetLastUseTime", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::NarrativeItem_eventGetLastUseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::NarrativeItem_eventGetLastUseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetLastUseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetLastUseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetLastUseTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLastUseTime();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetLastUseTime

// Begin Class UNarrativeItem Function GetMaxStackSize
struct Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics
{
	struct NarrativeItem_eventGetMaxStackSize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetMaxStackSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetMaxStackSize", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::NarrativeItem_eventGetMaxStackSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::NarrativeItem_eventGetMaxStackSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetMaxStackSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxStackSize();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetMaxStackSize

// Begin Class UNarrativeItem Function GetOwningController
struct Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics
{
	struct NarrativeItem_eventGetOwningController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::NarrativeItem_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::NarrativeItem_eventGetOwningController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningController();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetOwningController

// Begin Class UNarrativeItem Function GetOwningPawn
struct Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics
{
	struct NarrativeItem_eventGetOwningPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::NarrativeItem_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::NarrativeItem_eventGetOwningPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetOwningPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetOwningPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetOwningPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetOwningPawn

// Begin Class UNarrativeItem Function GetParsedDescription
struct Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics
{
	struct NarrativeItem_eventGetParsedDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Return the description, with any string variables parsed out\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Return the description, with any string variables parsed out" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetParsedDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetParsedDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::NarrativeItem_eventGetParsedDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::NarrativeItem_eventGetParsedDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetParsedDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetParsedDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetParsedDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetParsedDescription();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetParsedDescription

// Begin Class UNarrativeItem Function GetQuantity
struct Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics
{
	struct NarrativeItem_eventGetQuantity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetQuantity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::NarrativeItem_eventGetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::NarrativeItem_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetQuantity();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetQuantity

// Begin Class UNarrativeItem Function GetRawDescription
struct NarrativeItem_eventGetRawDescription_Parms
{
	FText ReturnValue;
};
static const FName NAME_UNarrativeItem_GetRawDescription = FName(TEXT("GetRawDescription"));
FText UNarrativeItem::GetRawDescription()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_GetRawDescription);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeItem_eventGetRawDescription_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetRawDescription_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**Return the description - allows BPs to override this in case you want automatically dynamically generated descriptions based on the items properties. */" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Return the description - allows BPs to override this in case you want automatically dynamically generated descriptions based on the items properties." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetRawDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetRawDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::PropPointers), sizeof(NarrativeItem_eventGetRawDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeItem_eventGetRawDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetRawDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetRawDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetRawDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetRawDescription_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetRawDescription

// Begin Class UNarrativeItem Function GetStackSpace
struct Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics
{
	struct NarrativeItem_eventGetStackSpace_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "//Return the amount of space the item stack has left \n" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Return the amount of space the item stack has left" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetStackSpace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetStackSpace", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::NarrativeItem_eventGetStackSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::NarrativeItem_eventGetStackSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetStackSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetStackSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetStackSpace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStackSpace();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetStackSpace

// Begin Class UNarrativeItem Function GetStackWeight
struct Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics
{
	struct NarrativeItem_eventGetStackWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetStackWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetStackWeight", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::NarrativeItem_eventGetStackWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::NarrativeItem_eventGetStackWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetStackWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetStackWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetStackWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStackWeight();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetStackWeight

// Begin Class UNarrativeItem Function GetStringVariable
struct NarrativeItem_eventGetStringVariable_Parms
{
	FString VariableName;
	FString ReturnValue;
};
static const FName NAME_UNarrativeItem_GetStringVariable = FName(TEXT("GetStringVariable"));
FString UNarrativeItem::GetStringVariable(const FString& VariableName)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_GetStringVariable);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeItem_eventGetStringVariable_Parms Parms;
		Parms.VariableName=VariableName;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetStringVariable_Implementation(VariableName);
	}
}
struct Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Allows you to use variables in your items description, ie Hello {Item Name}.\n\x09*\n\x09* Simply override this function, then check the value of variable name and return whatever value you like!\n\x09*\n\x09* ie if(VariableName == \"PlayerName\") {return OwningPawn->GetUsername();}; - then Hello {PlayerName}! will automatically become Hello xXNoobPwner420Xx! etc \n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Allows you to use variables in your items description, ie Hello {Item Name}.\n\nSimply override this function, then check the value of variable name and return whatever value you like!\n\nie if(VariableName == \"PlayerName\") {return OwningPawn->GetUsername();}; - then Hello {PlayerName}! will automatically become Hello xXNoobPwner420Xx! etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetStringVariable_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventGetStringVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "GetStringVariable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::PropPointers), sizeof(NarrativeItem_eventGetStringVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeItem_eventGetStringVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_GetStringVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_GetStringVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execGetStringVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringVariable_Implementation(Z_Param_VariableName);
	P_NATIVE_END;
}
// End Class UNarrativeItem Function GetStringVariable

// Begin Class UNarrativeItem Function IsStackFull
struct Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics
{
	struct NarrativeItem_eventIsStackFull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeItem_eventIsStackFull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventIsStackFull_Parms), &Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "IsStackFull", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::NarrativeItem_eventIsStackFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::NarrativeItem_eventIsStackFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_IsStackFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_IsStackFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execIsStackFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStackFull();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function IsStackFull

// Begin Class UNarrativeItem Function MarkDirtyForReplication
struct Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**Mark the object as needing replication. We must call this internally after modifying any replicated properties*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Mark the object as needing replication. We must call this internally after modifying any replicated properties" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "MarkDirtyForReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execMarkDirtyForReplication)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkDirtyForReplication();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function MarkDirtyForReplication

// Begin Class UNarrativeItem Function OnRep_bActive
struct Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics
{
	struct NarrativeItem_eventOnRep_bActive_Parms
	{
		bool bOldActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOldActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bOldActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOldActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::NewProp_bOldActive_SetBit(void* Obj)
{
	((NarrativeItem_eventOnRep_bActive_Parms*)Obj)->bOldActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::NewProp_bOldActive = { "bOldActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventOnRep_bActive_Parms), &Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::NewProp_bOldActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOldActive_MetaData), NewProp_bOldActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::NewProp_bOldActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "OnRep_bActive", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::NarrativeItem_eventOnRep_bActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::NarrativeItem_eventOnRep_bActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_OnRep_bActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_OnRep_bActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execOnRep_bActive)
{
	P_GET_UBOOL(Z_Param_bOldActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bActive(Z_Param_bOldActive);
	P_NATIVE_END;
}
// End Class UNarrativeItem Function OnRep_bActive

// Begin Class UNarrativeItem Function OnRep_Quantity
struct Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics
{
	struct NarrativeItem_eventOnRep_Quantity_Parms
	{
		int32 OldQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldQuantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::NewProp_OldQuantity = { "OldQuantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventOnRep_Quantity_Parms, OldQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldQuantity_MetaData), NewProp_OldQuantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::NewProp_OldQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "OnRep_Quantity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::NarrativeItem_eventOnRep_Quantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::NarrativeItem_eventOnRep_Quantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execOnRep_Quantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Quantity(Z_Param_OldQuantity);
	P_NATIVE_END;
}
// End Class UNarrativeItem Function OnRep_Quantity

// Begin Class UNarrativeItem Function OnUse
static const FName NAME_UNarrativeItem_OnUse = FName(TEXT("OnUse"));
void UNarrativeItem::OnUse()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_OnUse);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeItem_OnUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "OnUse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_OnUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_OnUse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeItem_OnUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_OnUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeItem Function OnUse

// Begin Class UNarrativeItem Function SetActive
struct Z_Construct_UFunction_UNarrativeItem_SetActive_Statics
{
	struct NarrativeItem_eventSetActive_Parms
	{
		bool bNewActive;
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item - Activation" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewActive_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewActive;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bNewActive_SetBit(void* Obj)
{
	((NarrativeItem_eventSetActive_Parms*)Obj)->bNewActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bNewActive = { "bNewActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventSetActive_Parms), &Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bNewActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewActive_MetaData), NewProp_bNewActive_MetaData) };
void Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((NarrativeItem_eventSetActive_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventSetActive_Parms), &Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForce_MetaData), NewProp_bForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bNewActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "SetActive", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NarrativeItem_eventSetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::NarrativeItem_eventSetActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_SetActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_SetActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execSetActive)
{
	P_GET_UBOOL(Z_Param_bNewActive);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActive(Z_Param_bNewActive,Z_Param_bForce);
	P_NATIVE_END;
}
// End Class UNarrativeItem Function SetActive

// Begin Class UNarrativeItem Function SetLastUseTime
struct Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics
{
	struct NarrativeItem_eventSetLastUseTime_Parms
	{
		float NewLastUseTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLastUseTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLastUseTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::NewProp_NewLastUseTime = { "NewLastUseTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeItem_eventSetLastUseTime_Parms, NewLastUseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLastUseTime_MetaData), NewProp_NewLastUseTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::NewProp_NewLastUseTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "SetLastUseTime", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::NarrativeItem_eventSetLastUseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::NarrativeItem_eventSetLastUseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_SetLastUseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_SetLastUseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execSetLastUseTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLastUseTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLastUseTime(Z_Param_NewLastUseTime);
	P_NATIVE_END;
}
// End Class UNarrativeItem Function SetLastUseTime

// Begin Class UNarrativeItem Function ShouldShowInInventory
struct NarrativeItem_eventShouldShowInInventory_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeItem_eventShouldShowInInventory_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeItem_ShouldShowInInventory = FName(TEXT("ShouldShowInInventory"));
bool UNarrativeItem::ShouldShowInInventory() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_ShouldShowInInventory);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeItem_eventShouldShowInInventory_Parms Parms;
		const_cast<UNarrativeItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeItem*>(this)->ShouldShowInInventory_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Allows you to define whether the item should be shown in the inventory, you may want to hide items from time to time\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Allows you to define whether the item should be shown in the inventory, you may want to hide items from time to time" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeItem_eventShouldShowInInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventShouldShowInInventory_Parms), &Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "ShouldShowInInventory", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::PropPointers), sizeof(NarrativeItem_eventShouldShowInInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeItem_eventShouldShowInInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execShouldShowInInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldShowInInventory_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function ShouldShowInInventory

// Begin Class UNarrativeItem Function ShouldUseOnAdd
struct NarrativeItem_eventShouldUseOnAdd_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeItem_eventShouldUseOnAdd_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeItem_ShouldUseOnAdd = FName(TEXT("ShouldUseOnAdd"));
bool UNarrativeItem::ShouldUseOnAdd() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeItem_ShouldUseOnAdd);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeItem_eventShouldUseOnAdd_Parms Parms;
		const_cast<UNarrativeItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeItem*>(this)->ShouldUseOnAdd_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Define whether the item should automatically use itself when added to our inventory.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Define whether the item should automatically use itself when added to our inventory." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeItem_eventShouldUseOnAdd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeItem_eventShouldUseOnAdd_Parms), &Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeItem, nullptr, "ShouldUseOnAdd", nullptr, nullptr, Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::PropPointers), sizeof(NarrativeItem_eventShouldUseOnAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeItem_eventShouldUseOnAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeItem::execShouldUseOnAdd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldUseOnAdd_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeItem Function ShouldUseOnAdd

// Begin Class UNarrativeItem
void UNarrativeItem::StaticRegisterNativesUNarrativeItem()
{
	UClass* Class = UNarrativeItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activated", &UNarrativeItem::execActivated },
		{ "CanBeRemoved", &UNarrativeItem::execCanBeRemoved },
		{ "CanUse", &UNarrativeItem::execCanUse },
		{ "Deactivated", &UNarrativeItem::execDeactivated },
		{ "GetLastUseTime", &UNarrativeItem::execGetLastUseTime },
		{ "GetMaxStackSize", &UNarrativeItem::execGetMaxStackSize },
		{ "GetOwningController", &UNarrativeItem::execGetOwningController },
		{ "GetOwningPawn", &UNarrativeItem::execGetOwningPawn },
		{ "GetParsedDescription", &UNarrativeItem::execGetParsedDescription },
		{ "GetQuantity", &UNarrativeItem::execGetQuantity },
		{ "GetRawDescription", &UNarrativeItem::execGetRawDescription },
		{ "GetStackSpace", &UNarrativeItem::execGetStackSpace },
		{ "GetStackWeight", &UNarrativeItem::execGetStackWeight },
		{ "GetStringVariable", &UNarrativeItem::execGetStringVariable },
		{ "IsStackFull", &UNarrativeItem::execIsStackFull },
		{ "MarkDirtyForReplication", &UNarrativeItem::execMarkDirtyForReplication },
		{ "OnRep_bActive", &UNarrativeItem::execOnRep_bActive },
		{ "OnRep_Quantity", &UNarrativeItem::execOnRep_Quantity },
		{ "SetActive", &UNarrativeItem::execSetActive },
		{ "SetLastUseTime", &UNarrativeItem::execSetLastUseTime },
		{ "ShouldShowInInventory", &UNarrativeItem::execShouldShowInInventory },
		{ "ShouldUseOnAdd", &UNarrativeItem::execShouldUseOnAdd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeItem);
UClass* Z_Construct_UClass_UNarrativeItem_NoRegister()
{
	return UNarrativeItem::StaticClass();
}
struct Z_Construct_UClass_UNarrativeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Item is the base class for an item that can be added to the inventory\n */" },
		{ "IncludePath", "NarrativeItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Item is the base class for an item that can be added to the inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The mesh to display for this items pickup*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The mesh to display for this items pickup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The thumbnail for this item*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The thumbnail for this item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSound_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The use sound for the item*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The use sound for the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The display name for this item in the inventory*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The display name for this item in the inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**An optional description for the item*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "An optional description for the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**The weight of the item*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The weight of the item" },
		{ "Units", "Kilograms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**Any gameplay tags we wish to give this item*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Any gameplay tags we wish to give this item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[] = {
		{ "Category", "Item - Trade" },
		{ "Comment", "/** This is the value of the item, used by vendors. */" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "This is the value of the item, used by vendors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeOnUse_MetaData[] = {
		{ "Category", "Item - Usage" },
		{ "Comment", "/**If true, 1 of this item will be consumed every time the item is used. */" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "If true, 1 of this item will be consumed every time the item is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseActionText_MetaData[] = {
		{ "Category", "Item - Usage" },
		{ "Comment", "/**The text for using the item. (Equip, Eat, etc)*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The text for using the item. (Equip, Eat, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseRechargeDuration_MetaData[] = {
		{ "Category", "Item - Usage" },
		{ "ClampMin", "0" },
		{ "Comment", "/**The amount of time you have to wait between uses of the item, 0 means no recharge delay at all*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The amount of time you have to wait between uses of the item, 0 means no recharge delay at all" },
		{ "Units", "Seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanActivate_MetaData[] = {
		{ "Category", "Item - Activation" },
		{ "Comment", "/**Some items might need to be activatable. Check this box if you want the item to be able to activate. \n\x09""Activating will mean different things for different item types, for example clothing being activated would\n\x09mean it equips to the player - you define this using the Activate and Deactivate() functions. \n\x09\n\x09""Activated items will also show a check on the UI*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Some items might need to be activatable. Check this box if you want the item to be able to activate.\n       Activating will mean different things for different item types, for example clothing being activated would\n       mean it equips to the player - you define this using the Activate and Deactivate() functions.\n\n       Activated items will also show a check on the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggleActiveOnUse_MetaData[] = {
		{ "Category", "Item - Activation" },
		{ "Comment", "/**If checked, using this item will cause it to activate/deactivate*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "If checked, using this item will cause it to activate/deactivate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Item - Activation" },
		{ "Comment", "/**Return true if this item is active */" },
		{ "EditCondition", "bCanActivate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Return true if this item is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFavourite_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**Whether or not this item has been favourited*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Whether or not this item has been favourited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStackable_MetaData[] = {
		{ "Category", "Item - Stacking" },
		{ "Comment", "/**Whether or not this item can be stacked*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Whether or not this item can be stacked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Item - Stacking" },
		{ "ClampMin", "2" },
		{ "Comment", "/**The maximum size that a stack of items can be*/" },
		{ "EditCondition", "bStackable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The maximum size that a stack of items can be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "Item - UI" },
		{ "Comment", "/**The stats to show in the Item Preview UI - make sure to implement GetStringVariable function and return a value matching each stat you add.\n\x09\n\x09Items have 6 stats supported out of the box, Display Name, Weight, Stack Weight, Quantity, Recharge Duration, and Max Stack Size - if you want to add more simply\n\x09override the GetStringVariable function and return a valid value for your desired variable\n\x09*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The stats to show in the Item Preview UI - make sure to implement GetStringVariable function and return a value matching each stat you add.\n\n       Items have 6 stats supported out of the box, Display Name, Weight, Stack Weight, Quantity, Recharge Duration, and Max Stack Size - if you want to add more simply\n       override the GetStringVariable function and return a valid value for your desired variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The inventory that owns this item*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The inventory that owns this item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepKey_MetaData[] = {
		{ "Comment", "/**Used to efficiently replicate inventory items*/" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "Used to efficiently replicate inventory items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The amount of the item*/" },
		{ "EditCondition", "bStackable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
		{ "ToolTip", "The amount of the item" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUseTime_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/NarrativeItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseSound;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseValue;
	static void NewProp_bConsumeOnUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeOnUse;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UseActionText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseRechargeDuration;
	static void NewProp_bCanActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanActivate;
	static void NewProp_bToggleActiveOnUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleActiveOnUse;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_bFavourite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFavourite;
	static void NewProp_bStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStackable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RepKey;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemModified;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUseTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeItem_Activated, "Activated" }, // 1166579378
		{ &Z_Construct_UFunction_UNarrativeItem_CanBeRemoved, "CanBeRemoved" }, // 98271267
		{ &Z_Construct_UFunction_UNarrativeItem_CanUse, "CanUse" }, // 3983262073
		{ &Z_Construct_UFunction_UNarrativeItem_Deactivated, "Deactivated" }, // 944740404
		{ &Z_Construct_UFunction_UNarrativeItem_GetLastUseTime, "GetLastUseTime" }, // 1820025000
		{ &Z_Construct_UFunction_UNarrativeItem_GetMaxStackSize, "GetMaxStackSize" }, // 3123914061
		{ &Z_Construct_UFunction_UNarrativeItem_GetOwningController, "GetOwningController" }, // 3336804061
		{ &Z_Construct_UFunction_UNarrativeItem_GetOwningPawn, "GetOwningPawn" }, // 2519917773
		{ &Z_Construct_UFunction_UNarrativeItem_GetParsedDescription, "GetParsedDescription" }, // 285957464
		{ &Z_Construct_UFunction_UNarrativeItem_GetQuantity, "GetQuantity" }, // 1230997374
		{ &Z_Construct_UFunction_UNarrativeItem_GetRawDescription, "GetRawDescription" }, // 455840656
		{ &Z_Construct_UFunction_UNarrativeItem_GetStackSpace, "GetStackSpace" }, // 2245608918
		{ &Z_Construct_UFunction_UNarrativeItem_GetStackWeight, "GetStackWeight" }, // 606078975
		{ &Z_Construct_UFunction_UNarrativeItem_GetStringVariable, "GetStringVariable" }, // 3562601843
		{ &Z_Construct_UFunction_UNarrativeItem_IsStackFull, "IsStackFull" }, // 1749443527
		{ &Z_Construct_UFunction_UNarrativeItem_MarkDirtyForReplication, "MarkDirtyForReplication" }, // 3038543479
		{ &Z_Construct_UFunction_UNarrativeItem_OnRep_bActive, "OnRep_bActive" }, // 489913197
		{ &Z_Construct_UFunction_UNarrativeItem_OnRep_Quantity, "OnRep_Quantity" }, // 3952461149
		{ &Z_Construct_UFunction_UNarrativeItem_OnUse, "OnUse" }, // 29390388
		{ &Z_Construct_UFunction_UNarrativeItem_SetActive, "SetActive" }, // 254289900
		{ &Z_Construct_UFunction_UNarrativeItem_SetLastUseTime, "SetLastUseTime" }, // 3231951260
		{ &Z_Construct_UFunction_UNarrativeItem_ShouldShowInInventory, "ShouldShowInInventory" }, // 3272636649
		{ &Z_Construct_UFunction_UNarrativeItem_ShouldUseOnAdd, "ShouldUseOnAdd" }, // 418378278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, PickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_UseSound = { "UseSound", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, UseSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSound_MetaData), NewProp_UseSound_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, ItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTags_MetaData), NewProp_ItemTags_MetaData) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, BaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseValue_MetaData), NewProp_BaseValue_MetaData) };
void Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bConsumeOnUse_SetBit(void* Obj)
{
	((UNarrativeItem*)Obj)->bConsumeOnUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bConsumeOnUse = { "bConsumeOnUse", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeItem), &Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bConsumeOnUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeOnUse_MetaData), NewProp_bConsumeOnUse_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_UseActionText = { "UseActionText", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, UseActionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseActionText_MetaData), NewProp_UseActionText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_UseRechargeDuration = { "UseRechargeDuration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, UseRechargeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseRechargeDuration_MetaData), NewProp_UseRechargeDuration_MetaData) };
void Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bCanActivate_SetBit(void* Obj)
{
	((UNarrativeItem*)Obj)->bCanActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bCanActivate = { "bCanActivate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeItem), &Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bCanActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanActivate_MetaData), NewProp_bCanActivate_MetaData) };
void Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bToggleActiveOnUse_SetBit(void* Obj)
{
	((UNarrativeItem*)Obj)->bToggleActiveOnUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bToggleActiveOnUse = { "bToggleActiveOnUse", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeItem), &Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bToggleActiveOnUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggleActiveOnUse_MetaData), NewProp_bToggleActiveOnUse_MetaData) };
void Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((UNarrativeItem*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bActive = { "bActive", "OnRep_bActive", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeItem), &Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
void Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bFavourite_SetBit(void* Obj)
{
	((UNarrativeItem*)Obj)->bFavourite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bFavourite = { "bFavourite", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeItem), &Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bFavourite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFavourite_MetaData), NewProp_bFavourite_MetaData) };
void Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bStackable_SetBit(void* Obj)
{
	((UNarrativeItem*)Obj)->bStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bStackable = { "bStackable", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeItem), &Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStackable_MetaData), NewProp_bStackable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeItemStat, METADATA_PARAMS(0, nullptr) }; // 3878473346
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 3878473346
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, OwningInventory), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningInventory_MetaData), NewProp_OwningInventory_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_RepKey = { "RepKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, RepKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepKey_MetaData), NewProp_RepKey_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_OnItemModified = { "OnItemModified", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, OnItemModified), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemModified_MetaData), NewProp_OnItemModified_MetaData) }; // 2110759853
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Quantity = { "Quantity", "OnRep_Quantity", (EPropertyFlags)0x0020080100000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeItem_Statics::NewProp_LastUseTime = { "LastUseTime", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeItem, LastUseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUseTime_MetaData), NewProp_LastUseTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_PickupMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_UseSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_ItemTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_BaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bConsumeOnUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_UseActionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_UseRechargeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bCanActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bToggleActiveOnUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bFavourite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_bStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_OwningInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_RepKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_OnItemModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeItem_Statics::NewProp_LastUseTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeItem_Statics::ClassParams = {
	&UNarrativeItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeItem()
{
	if (!Z_Registration_Info_UClass_UNarrativeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeItem.OuterSingleton, Z_Construct_UClass_UNarrativeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeItem.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UNarrativeItem>()
{
	return UNarrativeItem::StaticClass();
}
void UNarrativeItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bActive(TEXT("bActive"));
	static const FName Name_Quantity(TEXT("Quantity"));
	static const FName Name_LastUseTime(TEXT("LastUseTime"));
	const bool bIsValid = true
		&& Name_bActive == ClassReps[(int32)ENetFields_Private::bActive].Property->GetFName()
		&& Name_Quantity == ClassReps[(int32)ENetFields_Private::Quantity].Property->GetFName()
		&& Name_LastUseTime == ClassReps[(int32)ENetFields_Private::LastUseTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeItem"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeItem);
UNarrativeItem::~UNarrativeItem() {}
// End Class UNarrativeItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNarrativeItemStat::StaticStruct, Z_Construct_UScriptStruct_FNarrativeItemStat_Statics::NewStructOps, TEXT("NarrativeItemStat"), &Z_Registration_Info_UScriptStruct_NarrativeItemStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeItemStat), 3878473346U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeItem, UNarrativeItem::StaticClass, TEXT("UNarrativeItem"), &Z_Registration_Info_UClass_UNarrativeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeItem), 3380934775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_1046245327(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

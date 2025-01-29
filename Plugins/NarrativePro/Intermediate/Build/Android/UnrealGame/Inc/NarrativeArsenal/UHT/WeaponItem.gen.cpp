// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/WeaponItem.h"
#include "NarrativeArsenal/Public/GAS/NarrativeCombatAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAmmoItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraMode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UWeaponItem Function CanAttack
struct WeaponItem_eventCanAttack_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponItem_eventCanAttack_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UWeaponItem_CanAttack = FName(TEXT("CanAttack"));
bool UWeaponItem::CanAttack() const
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponItem_CanAttack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponItem_eventCanAttack_Parms Parms;
		const_cast<UWeaponItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UWeaponItem*>(this)->CanAttack_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponItem_CanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponItem_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventCanAttack_Parms), &Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "CanAttack", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::PropPointers), sizeof(WeaponItem_eventCanAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponItem_eventCanAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execCanAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAttack_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponItem Function CanAttack

// Begin Class UWeaponItem Function ConsumeAmmo
struct Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics
{
	struct WeaponItem_eventConsumeAmmo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Tell our weapon to use some ammo\n" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Tell our weapon to use some ammo" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponItem_eventConsumeAmmo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventConsumeAmmo_Parms), &Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "ConsumeAmmo", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::WeaponItem_eventConsumeAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::WeaponItem_eventConsumeAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_ConsumeAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_ConsumeAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execConsumeAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeAmmo();
	P_NATIVE_END;
}
// End Class UWeaponItem Function ConsumeAmmo

// Begin Class UWeaponItem Function GetAttackRange
struct Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics
{
	struct WeaponItem_eventGetAttackRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Used by bots to determine whether they are close enough to perform an attack with this weapon \n" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Used by bots to determine whether they are close enough to perform an attack with this weapon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponItem_eventGetAttackRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "GetAttackRange", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::WeaponItem_eventGetAttackRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::WeaponItem_eventGetAttackRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_GetAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_GetAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execGetAttackRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackRange();
	P_NATIVE_END;
}
// End Class UWeaponItem Function GetAttackRange

// Begin Class UWeaponItem Function GetComboAnims
struct Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics
{
	struct WeaponItem_eventGetComboAnims_Parms
	{
		bool bHeavyAttack;
		TArray<UNarrativeAnimSet*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Return the combo animations for a given attack type - by default this won't return any combo anims, weapons that need combos should override this. \n" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Return the combo animations for a given attack type - by default this won't return any combo anims, weapons that need combos should override this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeavyAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bHeavyAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeavyAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_bHeavyAttack_SetBit(void* Obj)
{
	((WeaponItem_eventGetComboAnims_Parms*)Obj)->bHeavyAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_bHeavyAttack = { "bHeavyAttack", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventGetComboAnims_Parms), &Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_bHeavyAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeavyAttack_MetaData), NewProp_bHeavyAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponItem_eventGetComboAnims_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_bHeavyAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "GetComboAnims", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::WeaponItem_eventGetComboAnims_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::WeaponItem_eventGetComboAnims_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_GetComboAnims()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_GetComboAnims_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execGetComboAnims)
{
	P_GET_UBOOL(Z_Param_bHeavyAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNarrativeAnimSet*>*)Z_Param__Result=P_THIS->GetComboAnims(Z_Param_bHeavyAttack);
	P_NATIVE_END;
}
// End Class UWeaponItem Function GetComboAnims

// Begin Class UWeaponItem Function GetTraceData
struct Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics
{
	struct WeaponItem_eventGetTraceData_Parms
	{
		FCombatTraceData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponItem_eventGetTraceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(0, nullptr) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "GetTraceData", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::WeaponItem_eventGetTraceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::WeaponItem_eventGetTraceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_GetTraceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_GetTraceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execGetTraceData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCombatTraceData*)Z_Param__Result=P_THIS->GetTraceData();
	P_NATIVE_END;
}
// End Class UWeaponItem Function GetTraceData

// Begin Class UWeaponItem Function HandleUnWield
static const FName NAME_UWeaponItem_HandleUnWield = FName(TEXT("HandleUnWield"));
void UWeaponItem::HandleUnWield()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponItem_HandleUnWield);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleUnWield_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponItem_HandleUnWield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/** Called when our owner stops holding this weapon */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Called when our owner stops holding this weapon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_HandleUnWield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "HandleUnWield", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_HandleUnWield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_HandleUnWield_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponItem_HandleUnWield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_HandleUnWield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execHandleUnWield)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUnWield_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponItem Function HandleUnWield

// Begin Class UWeaponItem Function HandleWield
static const FName NAME_UWeaponItem_HandleWield = FName(TEXT("HandleWield"));
void UWeaponItem::HandleWield()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponItem_HandleWield);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleWield_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponItem_HandleWield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/** Called when our owner actually starts holding this weapon */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Called when our owner actually starts holding this weapon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_HandleWield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "HandleWield", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_HandleWield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_HandleWield_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponItem_HandleWield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_HandleWield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execHandleWield)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWield_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponItem Function HandleWield

// Begin Class UWeaponItem Function IsHolstered
struct Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics
{
	struct WeaponItem_eventIsHolstered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponItem_eventIsHolstered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventIsHolstered_Parms), &Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "IsHolstered", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::WeaponItem_eventIsHolstered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::WeaponItem_eventIsHolstered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_IsHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_IsHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execIsHolstered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHolstered();
	P_NATIVE_END;
}
// End Class UWeaponItem Function IsHolstered

// Begin Class UWeaponItem Function Reload
struct Z_Construct_UFunction_UWeaponItem_Reload_Statics
{
	struct WeaponItem_eventReload_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Update the ammo in our clip. \n" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Update the ammo in our clip." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponItem_Reload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponItem_eventReload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_Reload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventReload_Parms), &Z_Construct_UFunction_UWeaponItem_Reload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_Reload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_Reload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_Reload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "Reload", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_Reload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_Reload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_Reload_Statics::WeaponItem_eventReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_Reload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_Reload_Statics::WeaponItem_eventReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Reload();
	P_NATIVE_END;
}
// End Class UWeaponItem Function Reload

// Begin Class UWeaponItem Function WantsReload
struct Z_Construct_UFunction_UWeaponItem_WantsReload_Statics
{
	struct WeaponItem_eventWantsReload_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponItem_eventWantsReload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventWantsReload_Parms), &Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "WantsReload", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::WeaponItem_eventWantsReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::WeaponItem_eventWantsReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_WantsReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_WantsReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execWantsReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WantsReload();
	P_NATIVE_END;
}
// End Class UWeaponItem Function WantsReload

// Begin Class UWeaponItem
void UWeaponItem::StaticRegisterNativesUWeaponItem()
{
	UClass* Class = UWeaponItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAttack", &UWeaponItem::execCanAttack },
		{ "ConsumeAmmo", &UWeaponItem::execConsumeAmmo },
		{ "GetAttackRange", &UWeaponItem::execGetAttackRange },
		{ "GetComboAnims", &UWeaponItem::execGetComboAnims },
		{ "GetTraceData", &UWeaponItem::execGetTraceData },
		{ "HandleUnWield", &UWeaponItem::execHandleUnWield },
		{ "HandleWield", &UWeaponItem::execHandleWield },
		{ "IsHolstered", &UWeaponItem::execIsHolstered },
		{ "Reload", &UWeaponItem::execReload },
		{ "WantsReload", &UWeaponItem::execWantsReload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponItem);
UClass* Z_Construct_UClass_UWeaponItem_NoRegister()
{
	return UWeaponItem::StaticClass();
}
struct Z_Construct_UClass_UWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for an equippable weapon. Weapons don't generally have any attack logic in them, instead they grant abilities which have the logic. \n */" },
		{ "IncludePath", "Items/WeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Base class for an equippable weapon. Weapons don't generally have any attack logic in them, instead they grant abilities which have the logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayer_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Anim BP we'll apply to the owner when the weapon is unholstered. TODO should probably be soft reffed. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Anim BP we'll apply to the owner when the weapon is unholstered. TODO should probably be soft reffed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVisualClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**Weapon visual actor to spawn*/" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon visual actor to spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCameraMode_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**Camera mode to use when using this weapon*/" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Camera mode to use when using this weapon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVisualAttachBone_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**Weapon visual bone to attach to*/" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon visual bone to attach to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVisualHolsteredAttachBone_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**Weapon visual bone to attach to for holstered state */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon visual bone to attach to for holstered state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVisualAttachOffset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Weapon visual offset from attach */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon visual offset from attach" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVisualHolsteredAttachOffset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Weapon visual offset from attach for holster*/" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon visual offset from attach for holster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPawnFollowsControlRotation_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Allows us to define whether the pawn should follow the camera rotation with this weapon equipped. Bots will not apply this as they need their AIFocus to work. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Allows us to define whether the pawn should follow the camera rotation with this weapon equipped. Bots will not apply this as they need their AIFocus to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPawnOrientsRotationToMovement_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Allows us to define whether the pawn orient their rotation to velocity with this weapon equipped. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Allows us to define whether the pawn orient their rotation to velocity with this weapon equipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Weapon|Config|Attack" },
		{ "Comment", "/** base damage this weapon should do. It is up the combat ability whether it wants/needs this value. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "base damage this weapon should do. It is up the combat ability whether it wants/needs this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon|Config|Attack" },
		{ "Comment", "/** How much should base damage be multiplied for a heavy attack. It is up the combat ability whether it wants/needs this value, some weapons may not have heavy attacks. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "How much should base damage be multiplied for a heavy attack. It is up the combat ability whether it wants/needs this value, some weapons may not have heavy attacks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAmmo_MetaData[] = {
		{ "Category", "Weapon|Config|Ammo" },
		{ "Comment", "/** Ammo item class for this weapon. Combat Ability will deny activation if we don't have the required ammo. \n\x09""empty class means weapon can attack without ammo. This is in WeaponItem base class as any weapon should be able to support ammo, not just firearms. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Ammo item class for this weapon. Combat Ability will deny activation if we don't have the required ammo.\n      empty class means weapon can attack without ammo. This is in WeaponItem base class as any weapon should be able to support ammo, not just firearms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[] = {
		{ "Category", "Weapon|Config|Ammo" },
		{ "Comment", "/** The amount of ammo loaded into the clip of the weapon. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "The amount of ammo loaded into the clip of the weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoInClip_MetaData[] = {
		{ "Category", "Weapon|Config|Ammo" },
		{ "Comment", "/** The amount of ammo loaded into the clip of the weapon. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "The amount of ammo loaded into the clip of the weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BashTraceData_MetaData[] = {
		{ "Category", "Weapon|Config|Trace" },
		{ "Comment", "/** Weapon trace distance when doing a weapon bash */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon trace distance when doing a weapon bash" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponVisualClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponCameraMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponVisualAttachBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponVisualHolsteredAttachBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponVisualAttachOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponVisualHolsteredAttachOffset;
	static void NewProp_bPawnFollowsControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPawnFollowsControlRotation;
	static void NewProp_bPawnOrientsRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPawnOrientsRotationToMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeavyAttackDamageMultiplier;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_RequiredAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoInClip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BashTraceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponItem_CanAttack, "CanAttack" }, // 3253107654
		{ &Z_Construct_UFunction_UWeaponItem_ConsumeAmmo, "ConsumeAmmo" }, // 3291394074
		{ &Z_Construct_UFunction_UWeaponItem_GetAttackRange, "GetAttackRange" }, // 1744003869
		{ &Z_Construct_UFunction_UWeaponItem_GetComboAnims, "GetComboAnims" }, // 888956762
		{ &Z_Construct_UFunction_UWeaponItem_GetTraceData, "GetTraceData" }, // 2071915562
		{ &Z_Construct_UFunction_UWeaponItem_HandleUnWield, "HandleUnWield" }, // 3592603742
		{ &Z_Construct_UFunction_UWeaponItem_HandleWield, "HandleWield" }, // 340280337
		{ &Z_Construct_UFunction_UWeaponItem_IsHolstered, "IsHolstered" }, // 3424630705
		{ &Z_Construct_UFunction_UWeaponItem_Reload, "Reload" }, // 2235473241
		{ &Z_Construct_UFunction_UWeaponItem_WantsReload, "WantsReload" }, // 1269953025
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponAnimLayer = { "WeaponAnimLayer", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponAnimLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayer_MetaData), NewProp_WeaponAnimLayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualClass = { "WeaponVisualClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualClass_MetaData), NewProp_WeaponVisualClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponCameraMode = { "WeaponCameraMode", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCameraMode_MetaData), NewProp_WeaponCameraMode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachBone = { "WeaponVisualAttachBone", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualAttachBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualAttachBone_MetaData), NewProp_WeaponVisualAttachBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachBone = { "WeaponVisualHolsteredAttachBone", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualHolsteredAttachBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualHolsteredAttachBone_MetaData), NewProp_WeaponVisualHolsteredAttachBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachOffset = { "WeaponVisualAttachOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualAttachOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualAttachOffset_MetaData), NewProp_WeaponVisualAttachOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachOffset = { "WeaponVisualHolsteredAttachOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualHolsteredAttachOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualHolsteredAttachOffset_MetaData), NewProp_WeaponVisualHolsteredAttachOffset_MetaData) };
void Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnFollowsControlRotation_SetBit(void* Obj)
{
	((UWeaponItem*)Obj)->bPawnFollowsControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnFollowsControlRotation = { "bPawnFollowsControlRotation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponItem), &Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnFollowsControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPawnFollowsControlRotation_MetaData), NewProp_bPawnFollowsControlRotation_MetaData) };
void Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnOrientsRotationToMovement_SetBit(void* Obj)
{
	((UWeaponItem*)Obj)->bPawnOrientsRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnOrientsRotationToMovement = { "bPawnOrientsRotationToMovement", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponItem), &Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnOrientsRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPawnOrientsRotationToMovement_MetaData), NewProp_bPawnOrientsRotationToMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_HeavyAttackDamageMultiplier = { "HeavyAttackDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, HeavyAttackDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackDamageMultiplier_MetaData), NewProp_HeavyAttackDamageMultiplier_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_RequiredAmmo = { "RequiredAmmo", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, RequiredAmmo), Z_Construct_UClass_UAmmoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredAmmo_MetaData), NewProp_RequiredAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, ClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipSize_MetaData), NewProp_ClipSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_AmmoInClip = { "AmmoInClip", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, AmmoInClip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoInClip_MetaData), NewProp_AmmoInClip_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_BashTraceData = { "BashTraceData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, BashTraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BashTraceData_MetaData), NewProp_BashTraceData_MetaData) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponAnimLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnFollowsControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_bPawnOrientsRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_HeavyAttackDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_RequiredAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_ClipSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_AmmoInClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_BashTraceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEquippableItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponItem_Statics::ClassParams = {
	&UWeaponItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponItem()
{
	if (!Z_Registration_Info_UClass_UWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponItem.OuterSingleton, Z_Construct_UClass_UWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UWeaponItem>()
{
	return UWeaponItem::StaticClass();
}
void UWeaponItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AmmoInClip(TEXT("AmmoInClip"));
	const bool bIsValid = true
		&& Name_AmmoInClip == ClassReps[(int32)ENetFields_Private::AmmoInClip].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponItem"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponItem);
UWeaponItem::~UWeaponItem() {}
// End Class UWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponItem, UWeaponItem::StaticClass, TEXT("UWeaponItem"), &Z_Registration_Info_UClass_UWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponItem), 1126125285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_3351709615(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

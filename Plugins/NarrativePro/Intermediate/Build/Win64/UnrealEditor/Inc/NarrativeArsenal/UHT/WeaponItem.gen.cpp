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
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UWeaponItem Function CanFire
struct WeaponItem_eventCanFire_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponItem_eventCanFire_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UWeaponItem_CanFire = FName(TEXT("CanFire"));
bool UWeaponItem::CanFire() const
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponItem_CanFire);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponItem_eventCanFire_Parms Parms;
		const_cast<UWeaponItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UWeaponItem*>(this)->CanFire_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponItem_CanFire_Statics
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
void Z_Construct_UFunction_UWeaponItem_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponItem_eventCanFire_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponItem_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponItem_eventCanFire_Parms), &Z_Construct_UFunction_UWeaponItem_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponItem_CanFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponItem_CanFire_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_CanFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponItem_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponItem, nullptr, "CanFire", nullptr, nullptr, Z_Construct_UFunction_UWeaponItem_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_CanFire_Statics::PropPointers), sizeof(WeaponItem_eventCanFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponItem_CanFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponItem_CanFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponItem_eventCanFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponItem_CanFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponItem_CanFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponItem::execCanFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFire_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponItem Function CanFire

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
		{ "CanFire", &UWeaponItem::execCanFire },
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
		{ "Comment", "/**\n * Base class for an equippable weapon. \n */" },
		{ "IncludePath", "Items/WeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Base class for an equippable weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayer_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Anim BP we'll apply to the owner when the weapon is unholstered. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Anim BP we'll apply to the owner when the weapon is unholstered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponVisualClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**Weapon visual actor to spawn*/" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon visual actor to spawn" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Weapon|Config|Attack" },
		{ "Comment", "/** base damage this weapon should do */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "base damage this weapon should do" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAmmo_MetaData[] = {
		{ "Category", "Weapon|Config|Ammo" },
		{ "Comment", "/** Ammo item class for this weapon. Abilities can deny activation if we don't have the required ammo. empty class means weapon can shoot without ammo.  */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Ammo item class for this weapon. Abilities can deny activation if we don't have the required ammo. empty class means weapon can shoot without ammo." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Weapon|Config|Trace" },
		{ "Comment", "/** Weapon trace distance when doing a hitscan */" },
		{ "ModuleRelativePath", "Public/Items/WeaponItem.h" },
		{ "ToolTip", "Weapon trace distance when doing a hitscan" },
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponVisualAttachBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponVisualHolsteredAttachBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponVisualAttachOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponVisualHolsteredAttachOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_RequiredAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoInClip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BashTraceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponItem_CanFire, "CanFire" }, // 25670384
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachBone = { "WeaponVisualAttachBone", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualAttachBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualAttachBone_MetaData), NewProp_WeaponVisualAttachBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachBone = { "WeaponVisualHolsteredAttachBone", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualHolsteredAttachBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualHolsteredAttachBone_MetaData), NewProp_WeaponVisualHolsteredAttachBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachOffset = { "WeaponVisualAttachOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualAttachOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualAttachOffset_MetaData), NewProp_WeaponVisualAttachOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachOffset = { "WeaponVisualHolsteredAttachOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, WeaponVisualHolsteredAttachOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponVisualHolsteredAttachOffset_MetaData), NewProp_WeaponVisualHolsteredAttachOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_RequiredAmmo = { "RequiredAmmo", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, RequiredAmmo), Z_Construct_UClass_UAmmoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredAmmo_MetaData), NewProp_RequiredAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, ClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipSize_MetaData), NewProp_ClipSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_AmmoInClip = { "AmmoInClip", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, AmmoInClip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoInClip_MetaData), NewProp_AmmoInClip_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, TraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 378338725
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_BashTraceData = { "BashTraceData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponItem, BashTraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BashTraceData_MetaData), NewProp_BashTraceData_MetaData) }; // 378338725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponAnimLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualAttachOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_WeaponVisualHolsteredAttachOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_RequiredAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_ClipSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_AmmoInClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_TraceData,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponItem);
UWeaponItem::~UWeaponItem() {}
// End Class UWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponItem, UWeaponItem::StaticClass, TEXT("UWeaponItem"), &Z_Registration_Info_UClass_UWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponItem), 191753315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_2434044794(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

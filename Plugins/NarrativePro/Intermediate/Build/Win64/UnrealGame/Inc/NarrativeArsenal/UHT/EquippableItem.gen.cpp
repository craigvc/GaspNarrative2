// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/EquippableItem.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippableItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem_Clothing();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem_Clothing_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum EEquippableSlot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquippableSlot;
static UEnum* EEquippableSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquippableSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquippableSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EEquippableSlot"));
	}
	return Z_Registration_Info_UEnum_EEquippableSlot.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EEquippableSlot>()
{
	return EEquippableSlot_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ES_Backpack.DisplayName", "Backpack" },
		{ "ES_Backpack.Name", "EEquippableSlot::ES_Backpack" },
		{ "ES_Custom1.DisplayName", "Custom1" },
		{ "ES_Custom1.Name", "EEquippableSlot::ES_Custom1" },
		{ "ES_Custom2.DisplayName", "Custom2" },
		{ "ES_Custom2.Name", "EEquippableSlot::ES_Custom2" },
		{ "ES_Custom3.DisplayName", "Custom3" },
		{ "ES_Custom3.Name", "EEquippableSlot::ES_Custom3" },
		{ "ES_Custom4.DisplayName", "Custom4" },
		{ "ES_Custom4.Name", "EEquippableSlot::ES_Custom4" },
		{ "ES_Custom5.DisplayName", "Custom5" },
		{ "ES_Custom5.Name", "EEquippableSlot::ES_Custom5" },
		{ "ES_Feet.DisplayName", "Feet" },
		{ "ES_Feet.Name", "EEquippableSlot::ES_Feet" },
		{ "ES_Hands.DisplayName", "Hands" },
		{ "ES_Hands.Name", "EEquippableSlot::ES_Hands" },
		{ "ES_Helmet.DisplayName", "Helmet" },
		{ "ES_Helmet.Name", "EEquippableSlot::ES_Helmet" },
		{ "ES_Holster.DisplayName", "Holster" },
		{ "ES_Holster.Name", "EEquippableSlot::ES_Holster" },
		{ "ES_Legs.DisplayName", "Legs" },
		{ "ES_Legs.Name", "EEquippableSlot::ES_Legs" },
		{ "ES_Necklace.DisplayName", "Necklace" },
		{ "ES_Necklace.Name", "EEquippableSlot::ES_Necklace" },
		{ "ES_ThrowableWeapon.DisplayName", "Throwable Weapon" },
		{ "ES_ThrowableWeapon.Name", "EEquippableSlot::ES_ThrowableWeapon" },
		{ "ES_Torso.DisplayName", "Torso" },
		{ "ES_Torso.Name", "EEquippableSlot::ES_Torso" },
		{ "ES_Weapon.DisplayName", "Weapon" },
		{ "ES_Weapon.Name", "EEquippableSlot::ES_Weapon" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquippableSlot::ES_Torso", (int64)EEquippableSlot::ES_Torso },
		{ "EEquippableSlot::ES_Legs", (int64)EEquippableSlot::ES_Legs },
		{ "EEquippableSlot::ES_Feet", (int64)EEquippableSlot::ES_Feet },
		{ "EEquippableSlot::ES_Helmet", (int64)EEquippableSlot::ES_Helmet },
		{ "EEquippableSlot::ES_Hands", (int64)EEquippableSlot::ES_Hands },
		{ "EEquippableSlot::ES_Backpack", (int64)EEquippableSlot::ES_Backpack },
		{ "EEquippableSlot::ES_Necklace", (int64)EEquippableSlot::ES_Necklace },
		{ "EEquippableSlot::ES_Holster", (int64)EEquippableSlot::ES_Holster },
		{ "EEquippableSlot::ES_Weapon", (int64)EEquippableSlot::ES_Weapon },
		{ "EEquippableSlot::ES_ThrowableWeapon", (int64)EEquippableSlot::ES_ThrowableWeapon },
		{ "EEquippableSlot::ES_Custom1", (int64)EEquippableSlot::ES_Custom1 },
		{ "EEquippableSlot::ES_Custom2", (int64)EEquippableSlot::ES_Custom2 },
		{ "EEquippableSlot::ES_Custom3", (int64)EEquippableSlot::ES_Custom3 },
		{ "EEquippableSlot::ES_Custom4", (int64)EEquippableSlot::ES_Custom4 },
		{ "EEquippableSlot::ES_Custom5", (int64)EEquippableSlot::ES_Custom5 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EEquippableSlot",
	"EEquippableSlot",
	Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot()
{
	if (!Z_Registration_Info_UEnum_EEquippableSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquippableSlot.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquippableSlot.InnerSingleton;
}
// End Enum EEquippableSlot

// Begin Class UEquippableItem Function HandleEquip
static const FName NAME_UEquippableItem_HandleEquip = FName(TEXT("HandleEquip"));
void UEquippableItem::HandleEquip()
{
	UFunction* Func = FindFunctionChecked(NAME_UEquippableItem_HandleEquip);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleEquip_Implementation();
	}
}
struct Z_Construct_UFunction_UEquippableItem_HandleEquip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**Allows you to override what equipping the item does. By default this sets the players mesh to the Equippable Mesh, but perhaps\n\x09you want a weapon actor to spawn in, or have an equippable aura effect that follows the player. by overriding HandleEquip you can \n\x09""do whatever custom logic you want. */" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "Allows you to override what equipping the item does. By default this sets the players mesh to the Equippable Mesh, but perhaps\n       you want a weapon actor to spawn in, or have an equippable aura effect that follows the player. by overriding HandleEquip you can\n       do whatever custom logic you want." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableItem_HandleEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippableItem, nullptr, "HandleEquip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItem_HandleEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquippableItem_HandleEquip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEquippableItem_HandleEquip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquippableItem_HandleEquip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquippableItem::execHandleEquip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquip_Implementation();
	P_NATIVE_END;
}
// End Class UEquippableItem Function HandleEquip

// Begin Class UEquippableItem Function HandleUnequip
static const FName NAME_UEquippableItem_HandleUnequip = FName(TEXT("HandleUnequip"));
void UEquippableItem::HandleUnequip()
{
	UFunction* Func = FindFunctionChecked(NAME_UEquippableItem_HandleUnequip);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleUnequip_Implementation();
	}
}
struct Z_Construct_UFunction_UEquippableItem_HandleUnequip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**Allows you to override what happens when the item unequips. */" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "Allows you to override what happens when the item unequips." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableItem_HandleUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippableItem, nullptr, "HandleUnequip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItem_HandleUnequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquippableItem_HandleUnequip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEquippableItem_HandleUnequip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquippableItem_HandleUnequip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquippableItem::execHandleUnequip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUnequip_Implementation();
	P_NATIVE_END;
}
// End Class UEquippableItem Function HandleUnequip

// Begin Class UEquippableItem
void UEquippableItem::StaticRegisterNativesUEquippableItem()
{
	UClass* Class = UEquippableItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleEquip", &UEquippableItem::execHandleEquip },
		{ "HandleUnequip", &UEquippableItem::execHandleUnequip },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquippableItem);
UClass* Z_Construct_UClass_UEquippableItem_NoRegister()
{
	return UEquippableItem::StaticClass();
}
struct Z_Construct_UClass_UEquippableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for an equippable item the player can put on. Networking is built right in.\n */" },
		{ "IncludePath", "Items/EquippableItem.h" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The base class for an equippable item the player can put on. Networking is built right in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**The slot this item equips to*/" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The slot this item equips to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentModGE_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentGEHandle_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "//The handle to the equipment gameplay effect that applies the equipments attributes to our player. \n" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The handle to the equipment gameplay effect that applies the equipments attributes to our player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRating_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**The amount we'll increase the wearers attack rating by when this item is equipped */" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The amount we'll increase the wearers attack rating by when this item is equipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorRating_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**The amount we'll increase the wearers armor rating by when this item is equipped */" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The amount we'll increase the wearers armor rating by when this item is equipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Weapon|Abilities" },
		{ "Comment", "//Equipping this item will grant these abilities to the user; we'll remove them when the item is unequipped\n" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "Equipping this item will grant these abilities to the user; we'll remove them when the item is unequipped" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentModGE;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentGEHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRating;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorRating;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquippableItem_HandleEquip, "HandleEquip" }, // 2600565859
		{ &Z_Construct_UFunction_UEquippableItem_HandleUnequip, "HandleUnequip" }, // 2742685160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquippableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem, EquippableSlot), Z_Construct_UEnum_NarrativeArsenal_EEquippableSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippableSlot_MetaData), NewProp_EquippableSlot_MetaData) }; // 620540914
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquipmentModGE = { "EquipmentModGE", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem, EquipmentModGE), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentModGE_MetaData), NewProp_EquipmentModGE_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquipmentGEHandle = { "EquipmentGEHandle", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem, EquipmentGEHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentGEHandle_MetaData), NewProp_EquipmentGEHandle_MetaData) }; // 290910411
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_AttackRating = { "AttackRating", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem, AttackRating), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRating_MetaData), NewProp_AttackRating_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_ArmorRating = { "ArmorRating", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem, ArmorRating), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorRating_MetaData), NewProp_ArmorRating_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquippableItem_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquippableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquippableSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquippableSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquipmentModGE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_EquipmentGEHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_AttackRating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_ArmorRating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Statics::NewProp_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquippableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquippableItem_Statics::ClassParams = {
	&UEquippableItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquippableItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquippableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquippableItem()
{
	if (!Z_Registration_Info_UClass_UEquippableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquippableItem.OuterSingleton, Z_Construct_UClass_UEquippableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquippableItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UEquippableItem>()
{
	return UEquippableItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippableItem);
UEquippableItem::~UEquippableItem() {}
// End Class UEquippableItem

// Begin Class UEquippableItem_Clothing
void UEquippableItem_Clothing::StaticRegisterNativesUEquippableItem_Clothing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquippableItem_Clothing);
UClass* Z_Construct_UClass_UEquippableItem_Clothing_NoRegister()
{
	return UEquippableItem_Clothing::StaticClass();
}
struct Z_Construct_UClass_UEquippableItem_Clothing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a clothing item. Will use the skeletal mesh set in your EquipmentComponent and set it to the clothing mesh you select.\n */" },
		{ "IncludePath", "Items/EquippableItem.h" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "Defines a clothing item. Will use the skeletal mesh set in your EquipmentComponent and set it to the clothing mesh you select." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingMesh_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**The mesh to put on the player when they equip the item*/" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The mesh to put on the player when they equip the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingMaterials_MetaData[] = {
		{ "Category", "Equippable" },
		{ "Comment", "/**The materials to apply to the clothing mesh*/" },
		{ "ModuleRelativePath", "Public/Items/EquippableItem.h" },
		{ "ToolTip", "The materials to apply to the clothing mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothingMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothingMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothingMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquippableItem_Clothing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquippableItem_Clothing_Statics::NewProp_ClothingMesh = { "ClothingMesh", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem_Clothing, ClothingMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingMesh_MetaData), NewProp_ClothingMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquippableItem_Clothing_Statics::NewProp_ClothingMaterials_Inner = { "ClothingMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquippableItem_Clothing_Statics::NewProp_ClothingMaterials = { "ClothingMaterials", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquippableItem_Clothing, ClothingMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingMaterials_MetaData), NewProp_ClothingMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquippableItem_Clothing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Clothing_Statics::NewProp_ClothingMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Clothing_Statics::NewProp_ClothingMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItem_Clothing_Statics::NewProp_ClothingMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Clothing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquippableItem_Clothing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEquippableItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Clothing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquippableItem_Clothing_Statics::ClassParams = {
	&UEquippableItem_Clothing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEquippableItem_Clothing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Clothing_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItem_Clothing_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquippableItem_Clothing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquippableItem_Clothing()
{
	if (!Z_Registration_Info_UClass_UEquippableItem_Clothing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquippableItem_Clothing.OuterSingleton, Z_Construct_UClass_UEquippableItem_Clothing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquippableItem_Clothing.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UEquippableItem_Clothing>()
{
	return UEquippableItem_Clothing::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippableItem_Clothing);
UEquippableItem_Clothing::~UEquippableItem_Clothing() {}
// End Class UEquippableItem_Clothing

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEquippableSlot_StaticEnum, TEXT("EEquippableSlot"), &Z_Registration_Info_UEnum_EEquippableSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 620540914U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquippableItem, UEquippableItem::StaticClass, TEXT("UEquippableItem"), &Z_Registration_Info_UClass_UEquippableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquippableItem), 1946897224U) },
		{ Z_Construct_UClass_UEquippableItem_Clothing, UEquippableItem_Clothing::StaticClass, TEXT("UEquippableItem_Clothing"), &Z_Registration_Info_UClass_UEquippableItem_Clothing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquippableItem_Clothing), 2113937373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_111982723(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

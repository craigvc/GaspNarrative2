// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentAbilityTypes.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEquipmentAbilityTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilityHandles();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAttributeSet();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentGameplayAbility();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentGameplayEffect();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin ScriptStruct FEquipmentAttributeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAttributeSet;
class UScriptStruct* FEquipmentAttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAttributeSet, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentAttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAttributeSet.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentAttributeSet>()
{
	return FEquipmentAttributeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An Attribute Set granted by the Equipment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "An Attribute Set granted by the Equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetClass_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/** Attribute Set granted by this fragment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Attribute Set granted by this fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialData_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/** Initial data applied to the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Initial data applied to the Attribute Set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::NewProp_AttributeSetClass = { "AttributeSetClass", nullptr, (EPropertyFlags)0x0014000002010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAttributeSet, AttributeSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetClass_MetaData), NewProp_AttributeSetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::NewProp_InitialData = { "InitialData", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAttributeSet, InitialData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialData_MetaData), NewProp_InitialData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::NewProp_AttributeSetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::NewProp_InitialData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentAttributeSet",
	Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::PropPointers),
	sizeof(FEquipmentAttributeSet),
	alignof(FEquipmentAttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAttributeSet.InnerSingleton;
}
// End ScriptStruct FEquipmentAttributeSet

// Begin ScriptStruct FEquipmentGameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect;
class UScriptStruct* FEquipmentGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentGameplayEffect, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentGameplayEffect>()
{
	return FEquipmentGameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Gameplay Effect granted by the Equipment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "A Gameplay Effect granted by the Equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Gameplay Effect granted by this fragment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Gameplay Effect granted by this fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseItemLevelAsEffectLevel_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/**\n\x09 * If set to true, uses the backing Item's level as the Effect Level.\n\x09 *\n\x09 * If the item does not have a Fragment that can produce an Item Level (implementations of the Upgradeable\n\x09 * Item interface, such as the Level Item Fragment), then the value set for Effect Level is used instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "If set to true, uses the backing Item's level as the Effect Level.\n\nIf the item does not have a Fragment that can produce an Item Level (implementations of the Upgradeable\nItem interface, such as the Level Item Fragment), then the value set for Effect Level is used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/**\n\x09 * Level for the granted effect.\n\x09 *\n\x09 * Can be overriden by the Item Level, if this entry is configured to do so, via the bUseItemLevelAsEffectLevel,\n\x09 * in which case, this property becomes the default value in case the Item Level cannot be determined.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Level for the granted effect.\n\nCan be overriden by the Item Level, if this entry is configured to do so, via the bUseItemLevelAsEffectLevel,\nin which case, this property becomes the default value in case the Item Level cannot be determined." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
	static void NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseItemLevelAsEffectLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentGameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000002010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentGameplayEffect, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectClass_MetaData), NewProp_GameplayEffectClass_MetaData) };
void Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj)
{
	((FEquipmentGameplayEffect*)Obj)->bUseItemLevelAsEffectLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel = { "bUseItemLevelAsEffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEquipmentGameplayEffect), &Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseItemLevelAsEffectLevel_MetaData), NewProp_bUseItemLevelAsEffectLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentGameplayEffect, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_GameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentGameplayEffect",
	Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::PropPointers),
	sizeof(FEquipmentGameplayEffect),
	alignof(FEquipmentGameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentGameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect.InnerSingleton;
}
// End ScriptStruct FEquipmentGameplayEffect

// Begin ScriptStruct FEquipmentGameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility;
class UScriptStruct* FEquipmentGameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentGameplayAbility, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentGameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentGameplayAbility>()
{
	return FEquipmentGameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Gameplay Ability granted by the Equipment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "A Gameplay Ability granted by the Equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClass_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** Gameplay Ability granted by this fragment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Gameplay Ability granted by this fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** Level for the granted ability. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Level for the granted ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbilityClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentGameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::NewProp_GameplayAbilityClass = { "GameplayAbilityClass", nullptr, (EPropertyFlags)0x0014000002010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentGameplayAbility, GameplayAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilityClass_MetaData), NewProp_GameplayAbilityClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentGameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::NewProp_GameplayAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentGameplayAbility",
	Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::PropPointers),
	sizeof(FEquipmentGameplayAbility),
	alignof(FEquipmentGameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentGameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility.InnerSingleton;
}
// End ScriptStruct FEquipmentGameplayAbility

// Begin ScriptStruct FEquipmentAbilityHandles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles;
class UScriptStruct* FEquipmentAbilityHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAbilityHandles, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentAbilityHandles"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentAbilityHandles>()
{
	return FEquipmentAbilityHandles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * All handles granted by an equipment instance.\n */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "All handles granted by an equipment instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
		{ "Comment", "/** Handles from all abilities granted. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Handles from all abilities granted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[] = {
		{ "Comment", "/** Handles from all effects granted. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Handles from all effects granted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[] = {
		{ "Comment", "/** Pointers to all attribute sets granted. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FEquipmentAbilityTypes.h" },
		{ "ToolTip", "Pointers to all attribute sets granted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAbilityHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAbilityHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAbilityHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectHandles_MetaData), NewProp_GameplayEffectHandles_MetaData) }; // 290910411
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAbilityHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributeSets_MetaData), NewProp_GrantedAttributeSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_AbilitySpecHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GameplayEffectHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GameplayEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GrantedAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewProp_GrantedAttributeSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	nullptr,
	&NewStructOps,
	"EquipmentAbilityHandles",
	Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::PropPointers),
	sizeof(FEquipmentAbilityHandles),
	alignof(FEquipmentAbilityHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilityHandles()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles.InnerSingleton;
}
// End ScriptStruct FEquipmentAbilityHandles

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentAbilityTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEquipmentAttributeSet::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAttributeSet_Statics::NewStructOps, TEXT("EquipmentAttributeSet"), &Z_Registration_Info_UScriptStruct_EquipmentAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAttributeSet), 1145869349U) },
		{ FEquipmentGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FEquipmentGameplayEffect_Statics::NewStructOps, TEXT("EquipmentGameplayEffect"), &Z_Registration_Info_UScriptStruct_EquipmentGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentGameplayEffect), 2418400249U) },
		{ FEquipmentGameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FEquipmentGameplayAbility_Statics::NewStructOps, TEXT("EquipmentGameplayAbility"), &Z_Registration_Info_UScriptStruct_EquipmentGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentGameplayAbility), 3607933072U) },
		{ FEquipmentAbilityHandles::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAbilityHandles_Statics::NewStructOps, TEXT("EquipmentAbilityHandles"), &Z_Registration_Info_UScriptStruct_EquipmentAbilityHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAbilityHandles), 1361679655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentAbilityTypes_h_1710394447(TEXT("/Script/NinjaInventoryEquipment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipmentAbilityTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatWeaponManagerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatWeaponManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatWeaponManagerComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FCombatWeaponEventSignature
struct Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics
{
	struct NinjaCombatWeaponManagerComponent_eventCombatWeaponEventSignature_Parms
	{
		AActor* Weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventCombatWeaponEventSignature_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "CombatWeaponEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::NinjaCombatWeaponManagerComponent_eventCombatWeaponEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::NinjaCombatWeaponManagerComponent_eventCombatWeaponEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaCombatWeaponManagerComponent::FCombatWeaponEventSignature_DelegateWrapper(const FMulticastScriptDelegate& CombatWeaponEventSignature, AActor* Weapon)
{
	struct NinjaCombatWeaponManagerComponent_eventCombatWeaponEventSignature_Parms
	{
		AActor* Weapon;
	};
	NinjaCombatWeaponManagerComponent_eventCombatWeaponEventSignature_Parms Parms;
	Parms.Weapon=Weapon;
	CombatWeaponEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCombatWeaponEventSignature

// Begin Class UNinjaCombatWeaponManagerComponent Function AddWeapon
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics
{
	struct NinjaCombatWeaponManagerComponent_eventAddWeapon_Parms
	{
		AActor* Weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Weapon Manager" },
		{ "Comment", "/**\n\x09 * Registers a new weapon actor to this manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Registers a new weapon actor to this manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatWeaponInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventAddWeapon_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "AddWeapon", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::NinjaCombatWeaponManagerComponent_eventAddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::NinjaCombatWeaponManagerComponent_eventAddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execAddWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWeapon(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function AddWeapon

// Begin Class UNinjaCombatWeaponManagerComponent Function AddWeaponClass
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics
{
	struct NinjaCombatWeaponManagerComponent_eventAddWeaponClass_Parms
	{
		TSubclassOf<AActor> WeaponClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Weapon Manager" },
		{ "Comment", "/**\n\x09 * Registers a new weapon actor to this manager, creating a new instance from the provided class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Registers a new weapon actor to this manager, creating a new instance from the provided class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatWeaponInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventAddWeaponClass_Parms, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::NewProp_WeaponClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "AddWeaponClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::NinjaCombatWeaponManagerComponent_eventAddWeaponClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::NinjaCombatWeaponManagerComponent_eventAddWeaponClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execAddWeaponClass)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWeaponClass(Z_Param_WeaponClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function AddWeaponClass

// Begin Class UNinjaCombatWeaponManagerComponent Function AttachWeaponActor
struct NinjaCombatWeaponManagerComponent_eventAttachWeaponActor_Parms
{
	AActor* Weapon;
};
static const FName NAME_UNinjaCombatWeaponManagerComponent_AttachWeaponActor = FName(TEXT("AttachWeaponActor"));
void UNinjaCombatWeaponManagerComponent::AttachWeaponActor(AActor* Weapon)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatWeaponManagerComponent_AttachWeaponActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatWeaponManagerComponent_eventAttachWeaponActor_Parms Parms;
		Parms.Weapon=Weapon;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AttachWeaponActor_Implementation(Weapon);
	}
}
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Component" },
		{ "Comment", "/**\n\x09 * Attaches the Weapon to a pre-configured socket from the WeaponSocketMapping property. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Attaches the Weapon to a pre-configured socket from the WeaponSocketMapping property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventAttachWeaponActor_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "AttachWeaponActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::PropPointers), sizeof(NinjaCombatWeaponManagerComponent_eventAttachWeaponActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponManagerComponent_eventAttachWeaponActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execAttachWeaponActor)
{
	P_GET_OBJECT(AActor,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachWeaponActor_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function AttachWeaponActor

// Begin Class UNinjaCombatWeaponManagerComponent Function DestroyAllWeapons
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Weapon Manager" },
		{ "Comment", "/**\n\x09 * Destroys all weapons created by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Destroys all weapons created by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "DestroyAllWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execDestroyAllWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyAllWeapons();
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function DestroyAllWeapons

// Begin Class UNinjaCombatWeaponManagerComponent Function FindAttachedWeapons
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Component" },
		{ "Comment", "/**\n\x09 * Finds all actor components already attached to the character.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Finds all actor components already attached to the character." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "FindAttachedWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execFindAttachedWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindAttachedWeapons();
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function FindAttachedWeapons

// Begin Class UNinjaCombatWeaponManagerComponent Function InitializeWeapons
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Component" },
		{ "Comment", "/**\n\x09 * Initializes the default weapons assigned to this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Initializes the default weapons assigned to this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "InitializeWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execInitializeWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWeapons();
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function InitializeWeapons

// Begin Class UNinjaCombatWeaponManagerComponent Function OnRep_Weapons
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics
{
	struct NinjaCombatWeaponManagerComponent_eventOnRep_Weapons_Parms
	{
		TArray<AActor*> OldWeapons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to a change in the Default Weapons.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Reacts to a change in the Default Weapons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldWeapons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OldWeapons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::NewProp_OldWeapons_Inner = { "OldWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::NewProp_OldWeapons = { "OldWeapons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventOnRep_Weapons_Parms, OldWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldWeapons_MetaData), NewProp_OldWeapons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::NewProp_OldWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::NewProp_OldWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "OnRep_Weapons", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::NinjaCombatWeaponManagerComponent_eventOnRep_Weapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::NinjaCombatWeaponManagerComponent_eventOnRep_Weapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execOnRep_Weapons)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OldWeapons);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Weapons(Z_Param_Out_OldWeapons);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function OnRep_Weapons

// Begin Class UNinjaCombatWeaponManagerComponent Function RemoveWeapon
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics
{
	struct NinjaCombatWeaponManagerComponent_eventRemoveWeapon_Parms
	{
		AActor* Weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Weapon Manager" },
		{ "Comment", "/**\n\x09 * Removes a weapon from this Weapon Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Removes a weapon from this Weapon Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatWeaponInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventRemoveWeapon_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "RemoveWeapon", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::NinjaCombatWeaponManagerComponent_eventRemoveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::NinjaCombatWeaponManagerComponent_eventRemoveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execRemoveWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWeapon(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function RemoveWeapon

// Begin Class UNinjaCombatWeaponManagerComponent Function RemoveWeaponByQuery
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics
{
	struct NinjaCombatWeaponManagerComponent_eventRemoveWeaponByQuery_Parms
	{
		FGameplayTagQuery WeaponQuery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Weapon Manager" },
		{ "Comment", "/**\n\x09 * Removes a weapon from this Weapon Manager, using a Gameplay Tag Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Removes a weapon from this Weapon Manager, using a Gameplay Tag Query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::NewProp_WeaponQuery = { "WeaponQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventRemoveWeaponByQuery_Parms, WeaponQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(0, nullptr) }; // 572225232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::NewProp_WeaponQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "RemoveWeaponByQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::NinjaCombatWeaponManagerComponent_eventRemoveWeaponByQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::NinjaCombatWeaponManagerComponent_eventRemoveWeaponByQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execRemoveWeaponByQuery)
{
	P_GET_STRUCT(FGameplayTagQuery,Z_Param_WeaponQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWeaponByQuery(Z_Param_WeaponQuery);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function RemoveWeaponByQuery

// Begin Class UNinjaCombatWeaponManagerComponent Function Server_AddWeapon
struct NinjaCombatWeaponManagerComponent_eventServer_AddWeapon_Parms
{
	AActor* Weapon;
};
static const FName NAME_UNinjaCombatWeaponManagerComponent_Server_AddWeapon = FName(TEXT("Server_AddWeapon"));
void UNinjaCombatWeaponManagerComponent::Server_AddWeapon(AActor* Weapon)
{
	NinjaCombatWeaponManagerComponent_eventServer_AddWeapon_Parms Parms;
	Parms.Weapon=Weapon;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatWeaponManagerComponent_Server_AddWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends an RPC to add a weapon on the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Sends an RPC to add a weapon on the server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventServer_AddWeapon_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "Server_AddWeapon", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::PropPointers), sizeof(NinjaCombatWeaponManagerComponent_eventServer_AddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponManagerComponent_eventServer_AddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execServer_AddWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AddWeapon_Validate(Z_Param_Weapon))
	{
		RPC_ValidateFailed(TEXT("Server_AddWeapon_Validate"));
		return;
	}
	P_THIS->Server_AddWeapon_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function Server_AddWeapon

// Begin Class UNinjaCombatWeaponManagerComponent Function Server_AddWeaponClass
struct NinjaCombatWeaponManagerComponent_eventServer_AddWeaponClass_Parms
{
	TSubclassOf<AActor> WeaponClass;
};
static const FName NAME_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass = FName(TEXT("Server_AddWeaponClass"));
void UNinjaCombatWeaponManagerComponent::Server_AddWeaponClass(TSubclassOf<AActor> WeaponClass)
{
	NinjaCombatWeaponManagerComponent_eventServer_AddWeaponClass_Parms Parms;
	Parms.WeaponClass=WeaponClass;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends an RPC to add a weapon class on the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Sends an RPC to add a weapon class on the server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventServer_AddWeaponClass_Parms, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::NewProp_WeaponClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "Server_AddWeaponClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::PropPointers), sizeof(NinjaCombatWeaponManagerComponent_eventServer_AddWeaponClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponManagerComponent_eventServer_AddWeaponClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execServer_AddWeaponClass)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AddWeaponClass_Validate(Z_Param_WeaponClass))
	{
		RPC_ValidateFailed(TEXT("Server_AddWeaponClass_Validate"));
		return;
	}
	P_THIS->Server_AddWeaponClass_Implementation(Z_Param_WeaponClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function Server_AddWeaponClass

// Begin Class UNinjaCombatWeaponManagerComponent Function Server_RemoveWeapon
struct NinjaCombatWeaponManagerComponent_eventServer_RemoveWeapon_Parms
{
	AActor* Weapon;
};
static const FName NAME_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon = FName(TEXT("Server_RemoveWeapon"));
void UNinjaCombatWeaponManagerComponent::Server_RemoveWeapon(AActor* Weapon)
{
	NinjaCombatWeaponManagerComponent_eventServer_RemoveWeapon_Parms Parms;
	Parms.Weapon=Weapon;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends an RPC to remove a weapon on the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Sends an RPC to remove a weapon on the server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventServer_RemoveWeapon_Parms, Weapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "Server_RemoveWeapon", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::PropPointers), sizeof(NinjaCombatWeaponManagerComponent_eventServer_RemoveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponManagerComponent_eventServer_RemoveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execServer_RemoveWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_RemoveWeapon_Validate(Z_Param_Weapon))
	{
		RPC_ValidateFailed(TEXT("Server_RemoveWeapon_Validate"));
		return;
	}
	P_THIS->Server_RemoveWeapon_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function Server_RemoveWeapon

// Begin Class UNinjaCombatWeaponManagerComponent Function SpawnWeaponActor
struct NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms
{
	TSubclassOf<AActor> WeaponClass;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor = FName(TEXT("SpawnWeaponActor"));
AActor* UNinjaCombatWeaponManagerComponent::SpawnWeaponActor(TSubclassOf<AActor> WeaponClass)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms Parms;
		Parms.WeaponClass=WeaponClass;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return SpawnWeaponActor_Implementation(WeaponClass);
	}
}
struct Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Component" },
		{ "Comment", "/**\n\x09 * Spawns the Weapon Actor from its class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Spawns the Weapon Actor from its class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombat.CombatWeaponInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, nullptr, "SpawnWeaponActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::PropPointers), sizeof(NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponManagerComponent_eventSpawnWeaponActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWeaponManagerComponent::execSpawnWeaponActor)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnWeaponActor_Implementation(Z_Param_WeaponClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatWeaponManagerComponent Function SpawnWeaponActor

// Begin Class UNinjaCombatWeaponManagerComponent
void UNinjaCombatWeaponManagerComponent::StaticRegisterNativesUNinjaCombatWeaponManagerComponent()
{
	UClass* Class = UNinjaCombatWeaponManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWeapon", &UNinjaCombatWeaponManagerComponent::execAddWeapon },
		{ "AddWeaponClass", &UNinjaCombatWeaponManagerComponent::execAddWeaponClass },
		{ "AttachWeaponActor", &UNinjaCombatWeaponManagerComponent::execAttachWeaponActor },
		{ "DestroyAllWeapons", &UNinjaCombatWeaponManagerComponent::execDestroyAllWeapons },
		{ "FindAttachedWeapons", &UNinjaCombatWeaponManagerComponent::execFindAttachedWeapons },
		{ "InitializeWeapons", &UNinjaCombatWeaponManagerComponent::execInitializeWeapons },
		{ "OnRep_Weapons", &UNinjaCombatWeaponManagerComponent::execOnRep_Weapons },
		{ "RemoveWeapon", &UNinjaCombatWeaponManagerComponent::execRemoveWeapon },
		{ "RemoveWeaponByQuery", &UNinjaCombatWeaponManagerComponent::execRemoveWeaponByQuery },
		{ "Server_AddWeapon", &UNinjaCombatWeaponManagerComponent::execServer_AddWeapon },
		{ "Server_AddWeaponClass", &UNinjaCombatWeaponManagerComponent::execServer_AddWeaponClass },
		{ "Server_RemoveWeapon", &UNinjaCombatWeaponManagerComponent::execServer_RemoveWeapon },
		{ "SpawnWeaponActor", &UNinjaCombatWeaponManagerComponent::execSpawnWeaponActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatWeaponManagerComponent);
UClass* Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_NoRegister()
{
	return UNinjaCombatWeaponManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Simple weapon manager for the combat system.\n */" },
		{ "IncludePath", "Components/NinjaCombatWeaponManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Simple weapon manager for the combat system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponAdded_MetaData[] = {
		{ "Comment", "/** Broadcasts a weapon that has been added. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Broadcasts a weapon that has been added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponRemoved_MetaData[] = {
		{ "Comment", "/** Broadcasts a weapon that has been removed. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "Broadcasts a weapon that has been removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[] = {
		{ "Comment", "/**\n\x09 * A list of weapons currently maintained by this component.\n\x09 *\n\x09 * You can decide if you want to maintain this array using any additional logic that suit your needs\n\x09 * (i.e. adding more methods to this component), or reacting via delegates to changes in a backing\n\x09 * Inventory Manager.\n\x09 *\n\x09 * Regardless, keep in mind that this is still a pretty simple implementation and for more elaborate\n\x09 * scenarios, you may want to create your own implementation of the Weapon Manager, using something\n\x09 * more optimized like a Fast Array Replication.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "ToolTip", "A list of weapons currently maintained by this component.\n\nYou can decide if you want to maintain this array using any additional logic that suit your needs\n(i.e. adding more methods to this component), or reacting via delegates to changes in a backing\nInventory Manager.\n\nRegardless, keep in mind that this is still a pretty simple implementation and for more elaborate\nscenarios, you may want to create your own implementation of the Weapon Manager, using something\nmore optimized like a Fast Array Replication." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClasses_MetaData[] = {
		{ "Category", "Weapon Component" },
		{ "Comment", "/** All weapons granted to this repository. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatWeaponInterface" },
		{ "ToolTip", "All weapons granted to this repository." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSocketMapping_MetaData[] = {
		{ "Category", "Weapon Component" },
		{ "Comment", "/**\n\x09 * Maps weapon tags to their sockets.\n\x09 *\n\x09 * Used when weapons are initialized from the Default Weapon Class array or added via the Add function. It will\n\x09 * match the weapon class with this map, and attach the weapon actor to the provided socket.\n\x09 *\n\x09 * You can modify the actor attachment behavior by overriding the <code>AttachWeaponActor</code> function. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponManagerComponent.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatWeaponInterface" },
		{ "ToolTip", "Maps weapon tags to their sockets.\n\nUsed when weapons are initialized from the Default Weapon Class array or added via the Add function. It will\nmatch the weapon class with this map, and attach the weapon actor to the provided socket.\n\nYou can modify the actor attachment behavior by overriding the <code>AttachWeaponActor</code> function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weapons;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponClasses;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponSocketMapping_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponSocketMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponSocketMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeapon, "AddWeapon" }, // 4102080788
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AddWeaponClass, "AddWeaponClass" }, // 3914161615
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_AttachWeaponActor, "AttachWeaponActor" }, // 1335638555
		{ &Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature, "CombatWeaponEventSignature__DelegateSignature" }, // 3962659110
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_DestroyAllWeapons, "DestroyAllWeapons" }, // 3593199858
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_FindAttachedWeapons, "FindAttachedWeapons" }, // 1619437538
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_InitializeWeapons, "InitializeWeapons" }, // 2144476958
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_OnRep_Weapons, "OnRep_Weapons" }, // 1109378826
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeapon, "RemoveWeapon" }, // 3222739642
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_RemoveWeaponByQuery, "RemoveWeaponByQuery" }, // 2541279711
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeapon, "Server_AddWeapon" }, // 2091430847
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_AddWeaponClass, "Server_AddWeaponClass" }, // 2010482463
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_Server_RemoveWeapon, "Server_RemoveWeapon" }, // 1555037668
		{ &Z_Construct_UFunction_UNinjaCombatWeaponManagerComponent_SpawnWeaponActor, "SpawnWeaponActor" }, // 1044276208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatWeaponManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_OnWeaponAdded = { "OnWeaponAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatWeaponManagerComponent, OnWeaponAdded), Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponAdded_MetaData), NewProp_OnWeaponAdded_MetaData) }; // 3962659110
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_OnWeaponRemoved = { "OnWeaponRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatWeaponManagerComponent, OnWeaponRemoved), Z_Construct_UDelegateFunction_UNinjaCombatWeaponManagerComponent_CombatWeaponEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponRemoved_MetaData), NewProp_OnWeaponRemoved_MetaData) }; // 3962659110
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_Weapons = { "Weapons", "OnRep_Weapons", (EPropertyFlags)0x0124080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatWeaponManagerComponent, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapons_MetaData), NewProp_Weapons_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_DefaultWeaponClasses_Inner = { "DefaultWeaponClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_DefaultWeaponClasses = { "DefaultWeaponClasses", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatWeaponManagerComponent, DefaultWeaponClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponClasses_MetaData), NewProp_DefaultWeaponClasses_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_WeaponSocketMapping_ValueProp = { "WeaponSocketMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_WeaponSocketMapping_Key_KeyProp = { "WeaponSocketMapping_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_WeaponSocketMapping = { "WeaponSocketMapping", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatWeaponManagerComponent, WeaponSocketMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSocketMapping_MetaData), NewProp_WeaponSocketMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_OnWeaponAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_OnWeaponRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_Weapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_Weapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_DefaultWeaponClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_DefaultWeaponClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_WeaponSocketMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_WeaponSocketMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::NewProp_WeaponSocketMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::ClassParams = {
	&UNinjaCombatWeaponManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatWeaponManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatWeaponManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatWeaponManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatWeaponManagerComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatWeaponManagerComponent>()
{
	return UNinjaCombatWeaponManagerComponent::StaticClass();
}
void UNinjaCombatWeaponManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Weapons(TEXT("Weapons"));
	const bool bIsValid = true
		&& Name_Weapons == ClassReps[(int32)ENetFields_Private::Weapons].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaCombatWeaponManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatWeaponManagerComponent);
UNinjaCombatWeaponManagerComponent::~UNinjaCombatWeaponManagerComponent() {}
// End Class UNinjaCombatWeaponManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatWeaponManagerComponent, UNinjaCombatWeaponManagerComponent::StaticClass, TEXT("UNinjaCombatWeaponManagerComponent"), &Z_Registration_Info_UClass_UNinjaCombatWeaponManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatWeaponManagerComponent), 3367216827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_2417071272(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

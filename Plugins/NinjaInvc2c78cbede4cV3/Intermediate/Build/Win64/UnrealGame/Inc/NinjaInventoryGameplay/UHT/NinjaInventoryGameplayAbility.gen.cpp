// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/NinjaInventoryGameplayAbility.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayAbility();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UNinjaInventoryGameplayAbility Function AddEquipmentDetailsToCueParameters
struct Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics
{
	struct NinjaInventoryGameplayAbility_eventAddEquipmentDetailsToCueParameters_Parms
	{
		FGameplayCueParameters CueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Adds Equipment details to the Cue Parameters.\n\x09 *\n\x09 * The Equipment Instance is set as the parameter's Source Object and the Avatar\n\x09 * is set as the parameter's Instigator, so both can be accessed when processing\n\x09 * Gameplay Cues triggered by this ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryGameplayAbility.h" },
		{ "ToolTip", "Adds Equipment details to the Cue Parameters.\n\nThe Equipment Instance is set as the parameter's Source Object and the Avatar\nis set as the parameter's Instigator, so both can be accessed when processing\nGameplay Cues triggered by this ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::NewProp_CueParameters = { "CueParameters", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayAbility_eventAddEquipmentDetailsToCueParameters_Parms, CueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(0, nullptr) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::NewProp_CueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayAbility, nullptr, "AddEquipmentDetailsToCueParameters", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::NinjaInventoryGameplayAbility_eventAddEquipmentDetailsToCueParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::NinjaInventoryGameplayAbility_eventAddEquipmentDetailsToCueParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayAbility::execAddEquipmentDetailsToCueParameters)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_CueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEquipmentDetailsToCueParameters(Z_Param_Out_CueParameters);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayAbility Function AddEquipmentDetailsToCueParameters

// Begin Class UNinjaInventoryGameplayAbility Function GetEquipmentInstance
struct Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics
{
	struct NinjaInventoryGameplayAbility_eventGetEquipmentInstance_Parms
	{
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Equipment associated with this Ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryGameplayAbility.h" },
		{ "ToolTip", "Provides the Equipment associated with this Ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayAbility_eventGetEquipmentInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayAbility, nullptr, "GetEquipmentInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::NinjaInventoryGameplayAbility_eventGetEquipmentInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::NinjaInventoryGameplayAbility_eventGetEquipmentInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayAbility::execGetEquipmentInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=P_THIS->GetEquipmentInstance();
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayAbility Function GetEquipmentInstance

// Begin Class UNinjaInventoryGameplayAbility Function GetEquipmentManager
struct Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics
{
	struct NinjaInventoryGameplayAbility_eventGetEquipmentManager_Parms
	{
		UNinjaEquipmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayAbility_eventGetEquipmentManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayAbility, nullptr, "GetEquipmentManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::NinjaInventoryGameplayAbility_eventGetEquipmentManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::NinjaInventoryGameplayAbility_eventGetEquipmentManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayAbility::execGetEquipmentManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=P_THIS->GetEquipmentManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayAbility Function GetEquipmentManager

// Begin Class UNinjaInventoryGameplayAbility Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics
{
	struct NinjaInventoryGameplayAbility_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayAbility_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayAbility, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::NinjaInventoryGameplayAbility_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::NinjaInventoryGameplayAbility_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayAbility::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayAbility Function GetInventoryManager

// Begin Class UNinjaInventoryGameplayAbility Function GetItemInstance
struct Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics
{
	struct NinjaInventoryGameplayAbility_eventGetItemInstance_Parms
	{
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Item that backs this Ability's Equipment Owner. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryGameplayAbility.h" },
		{ "ToolTip", "Provides the Item that backs this Ability's Equipment Owner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayAbility_eventGetItemInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayAbility, nullptr, "GetItemInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::NinjaInventoryGameplayAbility_eventGetItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::NinjaInventoryGameplayAbility_eventGetItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayAbility::execGetItemInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItemInstance();
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayAbility Function GetItemInstance

// Begin Class UNinjaInventoryGameplayAbility
void UNinjaInventoryGameplayAbility::StaticRegisterNativesUNinjaInventoryGameplayAbility()
{
	UClass* Class = UNinjaInventoryGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddEquipmentDetailsToCueParameters", &UNinjaInventoryGameplayAbility::execAddEquipmentDetailsToCueParameters },
		{ "GetEquipmentInstance", &UNinjaInventoryGameplayAbility::execGetEquipmentInstance },
		{ "GetEquipmentManager", &UNinjaInventoryGameplayAbility::execGetEquipmentManager },
		{ "GetInventoryManager", &UNinjaInventoryGameplayAbility::execGetInventoryManager },
		{ "GetItemInstance", &UNinjaInventoryGameplayAbility::execGetItemInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryGameplayAbility);
UClass* Z_Construct_UClass_UNinjaInventoryGameplayAbility_NoRegister()
{
	return UNinjaInventoryGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/NinjaInventoryGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayAbility_AddEquipmentDetailsToCueParameters, "AddEquipmentDetailsToCueParameters" }, // 1131567977
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentInstance, "GetEquipmentInstance" }, // 899207869
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetEquipmentManager, "GetEquipmentManager" }, // 225624586
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetInventoryManager, "GetInventoryManager" }, // 3240978568
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayAbility_GetItemInstance, "GetItemInstance" }, // 18230463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics::ClassParams = {
	&UNinjaInventoryGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryGameplayAbility.OuterSingleton, Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryGameplayAbility.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UNinjaInventoryGameplayAbility>()
{
	return UNinjaInventoryGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryGameplayAbility);
UNinjaInventoryGameplayAbility::~UNinjaInventoryGameplayAbility() {}
// End Class UNinjaInventoryGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryGameplayAbility, UNinjaInventoryGameplayAbility::StaticClass, TEXT("UNinjaInventoryGameplayAbility"), &Z_Registration_Info_UClass_UNinjaInventoryGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryGameplayAbility), 1069183375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_355655980(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

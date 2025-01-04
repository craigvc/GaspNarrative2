// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatDamageModifierInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatDamageModifierInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageModifierInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageModifierInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatDamageModifierInterface Function ModifyDamage
struct CombatDamageModifierInterface_eventModifyDamage_Parms
{
	float Damage;
	const AActor* Instigator;
	const AActor* Target;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDamageModifierInterface_eventModifyDamage_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatDamageModifierInterface::ModifyDamage(float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyDamage instead.");
	CombatDamageModifierInterface_eventModifyDamage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDamageModifierInterface_ModifyDamage = FName(TEXT("ModifyDamage"));
float ICombatDamageModifierInterface::Execute_ModifyDamage(const UObject* O, float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageModifierInterface::StaticClass()));
	CombatDamageModifierInterface_eventModifyDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageModifierInterface_ModifyDamage);
	if (Func)
	{
		Parms.Damage=Damage;
		Parms.Instigator=Instigator;
		Parms.Target=Target;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDamageModifierInterface*)(O->GetNativeInterfaceAddress(UCombatDamageModifierInterface::StaticClass())))
	{
		Parms.ReturnValue = I->ModifyDamage_Implementation(Damage,Instigator,Target,SourceTags,TargetTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Damage Modifier Interface" },
		{ "Comment", "/**\n\x09 * Modifies the amount of damage being caused to a target.\n\x09 *\n\x09 * @param Damage\x09\x09""Base Damage being applied.\n\x09 * @param Instigator\x09""Actor ultimately applying the damage.\n\x09 * @param Target\x09\x09""Actor receiving the damage.\n\x09 * @param SourceTags\x09""Aggregated tags from the causer, when damage was applied.\n\x09 * @param TargetTags\x09""Aggregated tags from the target, when damage was applied.\n\x09 * @return\x09\x09\x09\x09The modified amount of damage applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatDamageModifierInterface.h" },
		{ "ToolTip", "Modifies the amount of damage being caused to a target.\n\n@param Damage                Base Damage being applied.\n@param Instigator    Actor ultimately applying the damage.\n@param Target                Actor receiving the damage.\n@param SourceTags    Aggregated tags from the causer, when damage was applied.\n@param TargetTags    Aggregated tags from the target, when damage was applied.\n@return                              The modified amount of damage applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventModifyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventModifyDamage_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventModifyDamage_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventModifyDamage_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventModifyDamage_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventModifyDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageModifierInterface, nullptr, "ModifyDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::PropPointers), sizeof(CombatDamageModifierInterface_eventModifyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageModifierInterface_eventModifyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageModifierInterface::execModifyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_SourceTags);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ModifyDamage_Implementation(Z_Param_Damage,Z_Param_Instigator,Z_Param_Target,Z_Param_SourceTags,Z_Param_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatDamageModifierInterface Function ModifyDamage

// Begin Interface UCombatDamageModifierInterface Function ShouldCancelDamage
struct CombatDamageModifierInterface_eventShouldCancelDamage_Parms
{
	float Damage;
	const AActor* Instigator;
	const AActor* Target;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDamageModifierInterface_eventShouldCancelDamage_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDamageModifierInterface::ShouldCancelDamage(float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldCancelDamage instead.");
	CombatDamageModifierInterface_eventShouldCancelDamage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDamageModifierInterface_ShouldCancelDamage = FName(TEXT("ShouldCancelDamage"));
bool ICombatDamageModifierInterface::Execute_ShouldCancelDamage(const UObject* O, float Damage, const AActor* Instigator, const AActor* Target, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageModifierInterface::StaticClass()));
	CombatDamageModifierInterface_eventShouldCancelDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageModifierInterface_ShouldCancelDamage);
	if (Func)
	{
		Parms.Damage=Damage;
		Parms.Instigator=Instigator;
		Parms.Target=Target;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDamageModifierInterface*)(O->GetNativeInterfaceAddress(UCombatDamageModifierInterface::StaticClass())))
	{
		Parms.ReturnValue = I->ShouldCancelDamage_Implementation(Damage,Instigator,Target,SourceTags,TargetTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Damage Modifier Interface" },
		{ "Comment", "/**\n\x09 * Allows the damage to be fully cancelled, meaning it won't trigger any hit reactions or damage management.\n\x09 *\n\x09 * @param Damage\x09\x09""Base Damage being applied.\n\x09 * @param Instigator\x09""Actor ultimately applying the damage.\n\x09 * @param Target\x09\x09""Actor receiving the damage.\n\x09 * @param SourceTags\x09""Aggregated tags from the causer, when damage was applied.\n\x09 * @param TargetTags\x09""Aggregated tags from the target, when damage was applied.\n\x09 * @return\x09\x09\x09\x09True if the damage should be cancelled, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatDamageModifierInterface.h" },
		{ "ToolTip", "Allows the damage to be fully cancelled, meaning it won't trigger any hit reactions or damage management.\n\n@param Damage                Base Damage being applied.\n@param Instigator    Actor ultimately applying the damage.\n@param Target                Actor receiving the damage.\n@param SourceTags    Aggregated tags from the causer, when damage was applied.\n@param TargetTags    Aggregated tags from the target, when damage was applied.\n@return                              True if the damage should be cancelled, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventShouldCancelDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventShouldCancelDamage_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventShouldCancelDamage_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventShouldCancelDamage_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageModifierInterface_eventShouldCancelDamage_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
void Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDamageModifierInterface_eventShouldCancelDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDamageModifierInterface_eventShouldCancelDamage_Parms), &Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageModifierInterface, nullptr, "ShouldCancelDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::PropPointers), sizeof(CombatDamageModifierInterface_eventShouldCancelDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageModifierInterface_eventShouldCancelDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageModifierInterface::execShouldCancelDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_SourceTags);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldCancelDamage_Implementation(Z_Param_Damage,Z_Param_Instigator,Z_Param_Target,Z_Param_SourceTags,Z_Param_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatDamageModifierInterface Function ShouldCancelDamage

// Begin Interface UCombatDamageModifierInterface
void UCombatDamageModifierInterface::StaticRegisterNativesUCombatDamageModifierInterface()
{
	UClass* Class = UCombatDamageModifierInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModifyDamage", &ICombatDamageModifierInterface::execModifyDamage },
		{ "ShouldCancelDamage", &ICombatDamageModifierInterface::execShouldCancelDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatDamageModifierInterface);
UClass* Z_Construct_UClass_UCombatDamageModifierInterface_NoRegister()
{
	return UCombatDamageModifierInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatDamageModifierInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatDamageModifierInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDamageModifierInterface_ModifyDamage, "ModifyDamage" }, // 2959773313
		{ &Z_Construct_UFunction_UCombatDamageModifierInterface_ShouldCancelDamage, "ShouldCancelDamage" }, // 3752472941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatDamageModifierInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatDamageModifierInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDamageModifierInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatDamageModifierInterface_Statics::ClassParams = {
	&UCombatDamageModifierInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDamageModifierInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatDamageModifierInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatDamageModifierInterface()
{
	if (!Z_Registration_Info_UClass_UCombatDamageModifierInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDamageModifierInterface.OuterSingleton, Z_Construct_UClass_UCombatDamageModifierInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDamageModifierInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatDamageModifierInterface>()
{
	return UCombatDamageModifierInterface::StaticClass();
}
UCombatDamageModifierInterface::UCombatDamageModifierInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatDamageModifierInterface);
UCombatDamageModifierInterface::~UCombatDamageModifierInterface() {}
// End Interface UCombatDamageModifierInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatDamageModifierInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDamageModifierInterface, UCombatDamageModifierInterface::StaticClass, TEXT("UCombatDamageModifierInterface"), &Z_Registration_Info_UClass_UCombatDamageModifierInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDamageModifierInterface), 2649860269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatDamageModifierInterface_h_940285871(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatDamageModifierInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatDamageModifierInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

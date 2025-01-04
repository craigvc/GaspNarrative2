// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatProjectileInterface.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatProjectileInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatProjectileInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatProjectileInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatProjectileInterface Function GetActorsHit
struct CombatProjectileInterface_eventGetActorsHit_Parms
{
	TArray<AActor*> ReturnValue;
};
TArray<AActor*> ICombatProjectileInterface::GetActorsHit() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorsHit instead.");
	CombatProjectileInterface_eventGetActorsHit_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetActorsHit = FName(TEXT("GetActorsHit"));
TArray<AActor*> ICombatProjectileInterface::Execute_GetActorsHit(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetActorsHit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetActorsHit);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetActorsHit_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Retrieves all targets hit by a projectile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Retrieves all targets hit by a projectile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetActorsHit_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetActorsHit", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetActorsHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetActorsHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetActorsHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsHit_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetActorsHit

// Begin Interface UCombatProjectileInterface Function GetDamage
struct CombatProjectileInterface_eventGetDamage_Parms
{
	float OutDamage;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileInterface_eventGetDamage_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatProjectileInterface::GetDamage(float& OutDamage) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDamage instead.");
	CombatProjectileInterface_eventGetDamage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetDamage = FName(TEXT("GetDamage"));
bool ICombatProjectileInterface::Execute_GetDamage(const UObject* O, float& OutDamage)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetDamage);
	if (Func)
	{
		Parms.OutDamage=OutDamage;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutDamage=Parms.OutDamage;
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDamage_Implementation(OutDamage);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Allows a damage value to be optionally provided by a Projectile Implementation.\n\x09 * If no damage value is to be provided, then this function will return false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Allows a damage value to be optionally provided by a Projectile Implementation.\nIf no damage value is to be provided, then this function will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDamage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::NewProp_OutDamage = { "OutDamage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetDamage_Parms, OutDamage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatProjectileInterface_eventGetDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatProjectileInterface_eventGetDamage_Parms), &Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::NewProp_OutDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetDamage)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDamage_Implementation(Z_Param_Out_OutDamage);
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetDamage

// Begin Interface UCombatProjectileInterface Function GetImpactEffectClass
struct CombatProjectileInterface_eventGetImpactEffectClass_Parms
{
	TSubclassOf<UGameplayEffect> ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileInterface_eventGetImpactEffectClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
TSubclassOf<UGameplayEffect> ICombatProjectileInterface::GetImpactEffectClass() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetImpactEffectClass instead.");
	CombatProjectileInterface_eventGetImpactEffectClass_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetImpactEffectClass = FName(TEXT("GetImpactEffectClass"));
TSubclassOf<UGameplayEffect> ICombatProjectileInterface::Execute_GetImpactEffectClass(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetImpactEffectClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetImpactEffectClass);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetImpactEffectClass_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Effect applied when the projectile hits.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Provides the Gameplay Effect applied when the projectile hits." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetImpactEffectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetImpactEffectClass", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetImpactEffectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetImpactEffectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetImpactEffectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetImpactEffectClass_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetImpactEffectClass

// Begin Interface UCombatProjectileInterface Function GetImpactEffectLevel
struct CombatProjectileInterface_eventGetImpactEffectLevel_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileInterface_eventGetImpactEffectLevel_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatProjectileInterface::GetImpactEffectLevel() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetImpactEffectLevel instead.");
	CombatProjectileInterface_eventGetImpactEffectLevel_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetImpactEffectLevel = FName(TEXT("GetImpactEffectLevel"));
float ICombatProjectileInterface::Execute_GetImpactEffectLevel(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetImpactEffectLevel_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetImpactEffectLevel);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetImpactEffectLevel_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Effect level used when applying this interface's Effect Class.\n\x09 * Returning zero or lower will nullify the outcome of this method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Provides the Gameplay Effect level used when applying this interface's Effect Class.\nReturning zero or lower will nullify the outcome of this method." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetImpactEffectLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetImpactEffectLevel", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetImpactEffectLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetImpactEffectLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetImpactEffectLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetImpactEffectLevel_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetImpactEffectLevel

// Begin Interface UCombatProjectileInterface Function GetPoiseConsumption
struct CombatProjectileInterface_eventGetPoiseConsumption_Parms
{
	float OutPoiseConsumption;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileInterface_eventGetPoiseConsumption_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatProjectileInterface::GetPoiseConsumption(float& OutPoiseConsumption) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPoiseConsumption instead.");
	CombatProjectileInterface_eventGetPoiseConsumption_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetPoiseConsumption = FName(TEXT("GetPoiseConsumption"));
bool ICombatProjectileInterface::Execute_GetPoiseConsumption(const UObject* O, float& OutPoiseConsumption)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetPoiseConsumption_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetPoiseConsumption);
	if (Func)
	{
		Parms.OutPoiseConsumption=OutPoiseConsumption;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutPoiseConsumption=Parms.OutPoiseConsumption;
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetPoiseConsumption_Implementation(OutPoiseConsumption);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Allows a poise consumption value to be optionally provided by a Projectile Implementation.\n\x09 * If no poise consumption value is to be provided, then this function will return false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Allows a poise consumption value to be optionally provided by a Projectile Implementation.\nIf no poise consumption value is to be provided, then this function will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPoiseConsumption;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::NewProp_OutPoiseConsumption = { "OutPoiseConsumption", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetPoiseConsumption_Parms, OutPoiseConsumption), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatProjectileInterface_eventGetPoiseConsumption_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatProjectileInterface_eventGetPoiseConsumption_Parms), &Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::NewProp_OutPoiseConsumption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetPoiseConsumption", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetPoiseConsumption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetPoiseConsumption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetPoiseConsumption)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPoiseConsumption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPoiseConsumption_Implementation(Z_Param_Out_OutPoiseConsumption);
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetPoiseConsumption

// Begin Interface UCombatProjectileInterface Function GetProjectileImpactStrength
struct CombatProjectileInterface_eventGetProjectileImpactStrength_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileInterface_eventGetProjectileImpactStrength_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatProjectileInterface::GetProjectileImpactStrength() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProjectileImpactStrength instead.");
	CombatProjectileInterface_eventGetProjectileImpactStrength_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetProjectileImpactStrength = FName(TEXT("GetProjectileImpactStrength"));
float ICombatProjectileInterface::Execute_GetProjectileImpactStrength(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetProjectileImpactStrength_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetProjectileImpactStrength);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetProjectileImpactStrength_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Provides the strength of the impact, for physical animations. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Provides the strength of the impact, for physical animations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetProjectileImpactStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetProjectileImpactStrength", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetProjectileImpactStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetProjectileImpactStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetProjectileImpactStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetProjectileImpactStrength_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetProjectileImpactStrength

// Begin Interface UCombatProjectileInterface Function GetSpeed
struct CombatProjectileInterface_eventGetSpeed_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatProjectileInterface_eventGetSpeed_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatProjectileInterface::GetSpeed() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpeed instead.");
	CombatProjectileInterface_eventGetSpeed_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatProjectileInterface_GetSpeed = FName(TEXT("GetSpeed"));
float ICombatProjectileInterface::Execute_GetSpeed(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventGetSpeed_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_GetSpeed);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSpeed_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Provides the speed for the projectile at any given moment.\n\x09 * \n\x09 * This can be either the default speed set in the Projectile Movement (default speed) or any\n\x09 * calculated value that may use the default one, or completely override it.\n\x09 *\n\x09 * By default, this also accounts for bounce speeds, if any bounce happened. In that case, the\n\x09 * bounce speed is used, instead of the default projectile speed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Provides the speed for the projectile at any given moment.\n\nThis can be either the default speed set in the Projectile Movement (default speed) or any\ncalculated value that may use the default one, or completely override it.\n\nBy default, this also accounts for bounce speeds, if any bounce happened. In that case, the\nbounce speed is used, instead of the default projectile speed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "GetSpeed", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::PropPointers), sizeof(CombatProjectileInterface_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventGetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execGetSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpeed_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function GetSpeed

// Begin Interface UCombatProjectileInterface Function HandleDestructionCosmetics
void ICombatProjectileInterface::HandleDestructionCosmetics() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleDestructionCosmetics instead.");
}
static FName NAME_UCombatProjectileInterface_HandleDestructionCosmetics = FName(TEXT("HandleDestructionCosmetics"));
void ICombatProjectileInterface::Execute_HandleDestructionCosmetics(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_HandleDestructionCosmetics);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, NULL);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		I->HandleDestructionCosmetics_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Handles the destruction of a projectile, after the final impact.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Handles the destruction of a projectile, after the final impact." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "HandleDestructionCosmetics", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execHandleDestructionCosmetics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDestructionCosmetics_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function HandleDestructionCosmetics

// Begin Interface UCombatProjectileInterface Function HandleImpactCosmetics
struct CombatProjectileInterface_eventHandleImpactCosmetics_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
};
void ICombatProjectileInterface::HandleImpactCosmetics(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleImpactCosmetics instead.");
}
static FName NAME_UCombatProjectileInterface_HandleImpactCosmetics = FName(TEXT("HandleImpactCosmetics"));
void ICombatProjectileInterface::Execute_HandleImpactCosmetics(const UObject* O, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventHandleImpactCosmetics_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_HandleImpactCosmetics);
	if (Func)
	{
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		I->HandleImpactCosmetics_Implementation(HitResult,SourceTags,TargetTags);
	}
}
struct Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Handles an Impact from the projectile.\n\x09 *\n\x09 * @param HitResult\x09\x09Information about the Hit that generated this impact.\n\x09 * @param SourceTags\x09""Aggregated tags from the source that applied the impact.\n\x09 * @param TargetTags\x09""Aggregated tags from the target that received the impact.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Handles an Impact from the projectile.\n\n@param HitResult             Information about the Hit that generated this impact.\n@param SourceTags    Aggregated tags from the source that applied the impact.\n@param TargetTags    Aggregated tags from the target that received the impact." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventHandleImpactCosmetics_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventHandleImpactCosmetics_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventHandleImpactCosmetics_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "HandleImpactCosmetics", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::PropPointers), sizeof(CombatProjectileInterface_eventHandleImpactCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventHandleImpactCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execHandleImpactCosmetics)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpactCosmetics_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function HandleImpactCosmetics

// Begin Interface UCombatProjectileInterface Function Launch
void ICombatProjectileInterface::Launch()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Launch instead.");
}
static FName NAME_UCombatProjectileInterface_Launch = FName(TEXT("Launch"));
void ICombatProjectileInterface::Execute_Launch(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_Launch);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		I->Launch_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatProjectileInterface_Launch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Launches the projectile, using its internal setup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Launches the projectile, using its internal setup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "Launch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_Launch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_Launch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_Launch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_Launch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execLaunch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Launch_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function Launch

// Begin Interface UCombatProjectileInterface Function PrepareLaunch
void ICombatProjectileInterface::PrepareLaunch()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareLaunch instead.");
}
static FName NAME_UCombatProjectileInterface_PrepareLaunch = FName(TEXT("PrepareLaunch"));
void ICombatProjectileInterface::Execute_PrepareLaunch(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_PrepareLaunch);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		I->PrepareLaunch_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Opportunity to prepare any initial data before the projectile is launched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Opportunity to prepare any initial data before the projectile is launched." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "PrepareLaunch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execPrepareLaunch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareLaunch_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function PrepareLaunch

// Begin Interface UCombatProjectileInterface Function SetImpactEffectHandle
struct CombatProjectileInterface_eventSetImpactEffectHandle_Parms
{
	FGameplayEffectSpecHandle Handle;
};
void ICombatProjectileInterface::SetImpactEffectHandle(FGameplayEffectSpecHandle& Handle)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetImpactEffectHandle instead.");
}
static FName NAME_UCombatProjectileInterface_SetImpactEffectHandle = FName(TEXT("SetImpactEffectHandle"));
void ICombatProjectileInterface::Execute_SetImpactEffectHandle(UObject* O, FGameplayEffectSpecHandle& Handle)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatProjectileInterface::StaticClass()));
	CombatProjectileInterface_eventSetImpactEffectHandle_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatProjectileInterface_SetImpactEffectHandle);
	if (Func)
	{
		Parms.Handle=Handle;
		O->ProcessEvent(Func, &Parms);
		Handle=Parms.Handle;
	}
	else if (auto I = (ICombatProjectileInterface*)(O->GetNativeInterfaceAddress(UCombatProjectileInterface::StaticClass())))
	{
		I->SetImpactEffectHandle_Implementation(Handle);
	}
}
struct Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile Interface" },
		{ "Comment", "/**\n\x09 * Sets a handle used by this projectile when it hits something.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
		{ "ToolTip", "Sets a handle used by this projectile when it hits something." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatProjectileInterface_eventSetImpactEffectHandle_Parms, Handle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatProjectileInterface, nullptr, "SetImpactEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::PropPointers), sizeof(CombatProjectileInterface_eventSetImpactEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatProjectileInterface_eventSetImpactEffectHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatProjectileInterface::execSetImpactEffectHandle)
{
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImpactEffectHandle_Implementation(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Interface UCombatProjectileInterface Function SetImpactEffectHandle

// Begin Interface UCombatProjectileInterface
void UCombatProjectileInterface::StaticRegisterNativesUCombatProjectileInterface()
{
	UClass* Class = UCombatProjectileInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorsHit", &ICombatProjectileInterface::execGetActorsHit },
		{ "GetDamage", &ICombatProjectileInterface::execGetDamage },
		{ "GetImpactEffectClass", &ICombatProjectileInterface::execGetImpactEffectClass },
		{ "GetImpactEffectLevel", &ICombatProjectileInterface::execGetImpactEffectLevel },
		{ "GetPoiseConsumption", &ICombatProjectileInterface::execGetPoiseConsumption },
		{ "GetProjectileImpactStrength", &ICombatProjectileInterface::execGetProjectileImpactStrength },
		{ "GetSpeed", &ICombatProjectileInterface::execGetSpeed },
		{ "HandleDestructionCosmetics", &ICombatProjectileInterface::execHandleDestructionCosmetics },
		{ "HandleImpactCosmetics", &ICombatProjectileInterface::execHandleImpactCosmetics },
		{ "Launch", &ICombatProjectileInterface::execLaunch },
		{ "PrepareLaunch", &ICombatProjectileInterface::execPrepareLaunch },
		{ "SetImpactEffectHandle", &ICombatProjectileInterface::execSetImpactEffectHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatProjectileInterface);
UClass* Z_Construct_UClass_UCombatProjectileInterface_NoRegister()
{
	return UCombatProjectileInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatProjectileInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatProjectileInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetActorsHit, "GetActorsHit" }, // 3920788115
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetDamage, "GetDamage" }, // 1171368390
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectClass, "GetImpactEffectClass" }, // 1975944185
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetImpactEffectLevel, "GetImpactEffectLevel" }, // 3632329995
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetPoiseConsumption, "GetPoiseConsumption" }, // 3721324374
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetProjectileImpactStrength, "GetProjectileImpactStrength" }, // 2069465930
		{ &Z_Construct_UFunction_UCombatProjectileInterface_GetSpeed, "GetSpeed" }, // 84613303
		{ &Z_Construct_UFunction_UCombatProjectileInterface_HandleDestructionCosmetics, "HandleDestructionCosmetics" }, // 1617331226
		{ &Z_Construct_UFunction_UCombatProjectileInterface_HandleImpactCosmetics, "HandleImpactCosmetics" }, // 2013352278
		{ &Z_Construct_UFunction_UCombatProjectileInterface_Launch, "Launch" }, // 2686884972
		{ &Z_Construct_UFunction_UCombatProjectileInterface_PrepareLaunch, "PrepareLaunch" }, // 2444961688
		{ &Z_Construct_UFunction_UCombatProjectileInterface_SetImpactEffectHandle, "SetImpactEffectHandle" }, // 1305658830
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatProjectileInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatProjectileInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatProjectileInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatProjectileInterface_Statics::ClassParams = {
	&UCombatProjectileInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatProjectileInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatProjectileInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatProjectileInterface()
{
	if (!Z_Registration_Info_UClass_UCombatProjectileInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatProjectileInterface.OuterSingleton, Z_Construct_UClass_UCombatProjectileInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatProjectileInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatProjectileInterface>()
{
	return UCombatProjectileInterface::StaticClass();
}
UCombatProjectileInterface::UCombatProjectileInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatProjectileInterface);
UCombatProjectileInterface::~UCombatProjectileInterface() {}
// End Interface UCombatProjectileInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatProjectileInterface, UCombatProjectileInterface::StaticClass, TEXT("UCombatProjectileInterface"), &Z_Registration_Info_UClass_UCombatProjectileInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatProjectileInterface), 2752543980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_3956085427(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatMeleeInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatMeleeInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMeleeInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMeleeInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatMeleeInterface Function GetAttackTrails
struct CombatMeleeInterface_eventGetAttackTrails_Parms
{
	TArray<UNiagaraComponent*> ReturnValue;
};
TArray<UNiagaraComponent*> ICombatMeleeInterface::GetAttackTrails() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackTrails instead.");
	CombatMeleeInterface_eventGetAttackTrails_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetAttackTrails = FName(TEXT("GetAttackTrails"));
TArray<UNiagaraComponent*> ICombatMeleeInterface::Execute_GetAttackTrails(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetAttackTrails_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetAttackTrails);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAttackTrails_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides a Niagara System used as the Attack Trail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides a Niagara System used as the Attack Trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetAttackTrails_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetAttackTrails", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetAttackTrails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetAttackTrails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetAttackTrails)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNiagaraComponent*>*)Z_Param__Result=P_THIS->GetAttackTrails_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetAttackTrails

// Begin Interface UCombatMeleeInterface Function GetDamage
struct CombatMeleeInterface_eventGetDamage_Parms
{
	float OutDamage;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetDamage_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatMeleeInterface::GetDamage(float& OutDamage) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDamage instead.");
	CombatMeleeInterface_eventGetDamage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetDamage = FName(TEXT("GetDamage"));
bool ICombatMeleeInterface::Execute_GetDamage(const UObject* O, float& OutDamage)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetDamage);
	if (Func)
	{
		Parms.OutDamage=OutDamage;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutDamage=Parms.OutDamage;
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDamage_Implementation(OutDamage);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Allows a damage value to be optionally provided by a Weapon Implementation.\n\x09 * If no damage value is to be provided, then this function will return false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Allows a damage value to be optionally provided by a Weapon Implementation.\nIf no damage value is to be provided, then this function will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDamage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::NewProp_OutDamage = { "OutDamage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetDamage_Parms, OutDamage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatMeleeInterface_eventGetDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatMeleeInterface_eventGetDamage_Parms), &Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::NewProp_OutDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetDamage)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDamage_Implementation(Z_Param_Out_OutDamage);
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetDamage

// Begin Interface UCombatMeleeInterface Function GetHitEffectClass
struct CombatMeleeInterface_eventGetHitEffectClass_Parms
{
	TSubclassOf<UGameplayEffect> ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetHitEffectClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
TSubclassOf<UGameplayEffect> ICombatMeleeInterface::GetHitEffectClass() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitEffectClass instead.");
	CombatMeleeInterface_eventGetHitEffectClass_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetHitEffectClass = FName(TEXT("GetHitEffectClass"));
TSubclassOf<UGameplayEffect> ICombatMeleeInterface::Execute_GetHitEffectClass(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetHitEffectClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetHitEffectClass);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetHitEffectClass_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Effect applied when the source hits a target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides the Gameplay Effect applied when the source hits a target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetHitEffectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetHitEffectClass", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetHitEffectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetHitEffectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetHitEffectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetHitEffectClass_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetHitEffectClass

// Begin Interface UCombatMeleeInterface Function GetHitEffectLevel
struct CombatMeleeInterface_eventGetHitEffectLevel_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetHitEffectLevel_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatMeleeInterface::GetHitEffectLevel() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitEffectLevel instead.");
	CombatMeleeInterface_eventGetHitEffectLevel_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetHitEffectLevel = FName(TEXT("GetHitEffectLevel"));
float ICombatMeleeInterface::Execute_GetHitEffectLevel(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetHitEffectLevel_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetHitEffectLevel);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetHitEffectLevel_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Effect level used when applying this interface's Effect Class.\n\x09 * Returning zero or lower will nullify the outcome of this method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides the Gameplay Effect level used when applying this interface's Effect Class.\nReturning zero or lower will nullify the outcome of this method." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetHitEffectLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetHitEffectLevel", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetHitEffectLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetHitEffectLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetHitEffectLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHitEffectLevel_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetHitEffectLevel

// Begin Interface UCombatMeleeInterface Function GetImpactTrails
struct CombatMeleeInterface_eventGetImpactTrails_Parms
{
	TArray<UNiagaraComponent*> ReturnValue;
};
TArray<UNiagaraComponent*> ICombatMeleeInterface::GetImpactTrails() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetImpactTrails instead.");
	CombatMeleeInterface_eventGetImpactTrails_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetImpactTrails = FName(TEXT("GetImpactTrails"));
TArray<UNiagaraComponent*> ICombatMeleeInterface::Execute_GetImpactTrails(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetImpactTrails_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetImpactTrails);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetImpactTrails_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides a Niagara System used as the Impact Trail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides a Niagara System used as the Impact Trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetImpactTrails_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetImpactTrails", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetImpactTrails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetImpactTrails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetImpactTrails)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNiagaraComponent*>*)Z_Param__Result=P_THIS->GetImpactTrails_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetImpactTrails

// Begin Interface UCombatMeleeInterface Function GetMeleeImpactStrength
struct CombatMeleeInterface_eventGetMeleeImpactStrength_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetMeleeImpactStrength_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatMeleeInterface::GetMeleeImpactStrength() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMeleeImpactStrength instead.");
	CombatMeleeInterface_eventGetMeleeImpactStrength_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetMeleeImpactStrength = FName(TEXT("GetMeleeImpactStrength"));
float ICombatMeleeInterface::Execute_GetMeleeImpactStrength(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetMeleeImpactStrength_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetMeleeImpactStrength);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetMeleeImpactStrength_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides the strength of the impact, for physical animations. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides the strength of the impact, for physical animations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetMeleeImpactStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetMeleeImpactStrength", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetMeleeImpactStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetMeleeImpactStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetMeleeImpactStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMeleeImpactStrength_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetMeleeImpactStrength

// Begin Interface UCombatMeleeInterface Function GetMeleeMesh
struct CombatMeleeInterface_eventGetMeleeMesh_Parms
{
	UMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetMeleeMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
UMeshComponent* ICombatMeleeInterface::GetMeleeMesh() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMeleeMesh instead.");
	CombatMeleeInterface_eventGetMeleeMesh_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetMeleeMesh = FName(TEXT("GetMeleeMesh"));
UMeshComponent* ICombatMeleeInterface::Execute_GetMeleeMesh(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetMeleeMesh_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetMeleeMesh);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetMeleeMesh_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides the main mesh component that represents the melee attacker.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides the main mesh component that represents the melee attacker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetMeleeMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetMeleeMesh", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetMeleeMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetMeleeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetMeleeMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->GetMeleeMesh_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetMeleeMesh

// Begin Interface UCombatMeleeInterface Function GetMeleeMeshByTag
struct CombatMeleeInterface_eventGetMeleeMeshByTag_Parms
{
	FGameplayTag ComponentTag;
	UMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetMeleeMeshByTag_Parms()
		: ReturnValue(NULL)
	{
	}
};
UMeshComponent* ICombatMeleeInterface::GetMeleeMeshByTag(FGameplayTag ComponentTag) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMeleeMeshByTag instead.");
	CombatMeleeInterface_eventGetMeleeMeshByTag_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetMeleeMeshByTag = FName(TEXT("GetMeleeMeshByTag"));
UMeshComponent* ICombatMeleeInterface::Execute_GetMeleeMeshByTag(const UObject* O, FGameplayTag ComponentTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetMeleeMeshByTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetMeleeMeshByTag);
	if (Func)
	{
		Parms.ComponentTag=ComponentTag;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetMeleeMeshByTag_Implementation(ComponentTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Provides the mesh component related to a Gameplay Tag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Provides the mesh component related to a Gameplay Tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetMeleeMeshByTag_Parms, ComponentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetMeleeMeshByTag_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::NewProp_ComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetMeleeMeshByTag", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetMeleeMeshByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetMeleeMeshByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetMeleeMeshByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_ComponentTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->GetMeleeMeshByTag_Implementation(Z_Param_ComponentTag);
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetMeleeMeshByTag

// Begin Interface UCombatMeleeInterface Function GetPoiseConsumption
struct CombatMeleeInterface_eventGetPoiseConsumption_Parms
{
	float OutPoiseConsumption;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatMeleeInterface_eventGetPoiseConsumption_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatMeleeInterface::GetPoiseConsumption(float& OutPoiseConsumption) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPoiseConsumption instead.");
	CombatMeleeInterface_eventGetPoiseConsumption_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatMeleeInterface_GetPoiseConsumption = FName(TEXT("GetPoiseConsumption"));
bool ICombatMeleeInterface::Execute_GetPoiseConsumption(const UObject* O, float& OutPoiseConsumption)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventGetPoiseConsumption_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_GetPoiseConsumption);
	if (Func)
	{
		Parms.OutPoiseConsumption=OutPoiseConsumption;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutPoiseConsumption=Parms.OutPoiseConsumption;
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetPoiseConsumption_Implementation(OutPoiseConsumption);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Allows a poise consumption value to be optionally provided by a Weapon Implementation.\n\x09 * If no poise consumption value is to be provided, then this function will return false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Allows a poise consumption value to be optionally provided by a Weapon Implementation.\nIf no poise consumption value is to be provided, then this function will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPoiseConsumption;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::NewProp_OutPoiseConsumption = { "OutPoiseConsumption", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventGetPoiseConsumption_Parms, OutPoiseConsumption), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatMeleeInterface_eventGetPoiseConsumption_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatMeleeInterface_eventGetPoiseConsumption_Parms), &Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::NewProp_OutPoiseConsumption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "GetPoiseConsumption", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::PropPointers), sizeof(CombatMeleeInterface_eventGetPoiseConsumption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventGetPoiseConsumption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execGetPoiseConsumption)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPoiseConsumption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPoiseConsumption_Implementation(Z_Param_Out_OutPoiseConsumption);
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function GetPoiseConsumption

// Begin Interface UCombatMeleeInterface Function HandleMeleeDamageCosmetics
struct CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
};
void ICombatMeleeInterface::HandleMeleeDamageCosmetics(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleMeleeDamageCosmetics instead.");
}
static FName NAME_UCombatMeleeInterface_HandleMeleeDamageCosmetics = FName(TEXT("HandleMeleeDamageCosmetics"));
void ICombatMeleeInterface::Execute_HandleMeleeDamageCosmetics(const UObject* O, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_HandleMeleeDamageCosmetics);
	if (Func)
	{
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		I->HandleMeleeDamageCosmetics_Implementation(HitResult,SourceTags,TargetTags);
	}
}
struct Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Allows the weapon to react to melee damage that has been applied to a target.\n\x09 *\n\x09 * @param HitResult\x09\x09Information about the Hit that generated this damage.\n\x09 * @param SourceTags\x09""Aggregated tags from the source that applied the damage.\n\x09 * @param TargetTags\x09""Aggregated tags from the target that received the damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Allows the weapon to react to melee damage that has been applied to a target.\n\n@param HitResult             Information about the Hit that generated this damage.\n@param SourceTags    Aggregated tags from the source that applied the damage.\n@param TargetTags    Aggregated tags from the target that received the damage." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "HandleMeleeDamageCosmetics", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::PropPointers), sizeof(CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventHandleMeleeDamageCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execHandleMeleeDamageCosmetics)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMeleeDamageCosmetics_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function HandleMeleeDamageCosmetics

// Begin Interface UCombatMeleeInterface Function StartMeleeTrailsCosmetics
struct CombatMeleeInterface_eventStartMeleeTrailsCosmetics_Parms
{
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
};
void ICombatMeleeInterface::StartMeleeTrailsCosmetics(FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartMeleeTrailsCosmetics instead.");
}
static FName NAME_UCombatMeleeInterface_StartMeleeTrailsCosmetics = FName(TEXT("StartMeleeTrailsCosmetics"));
void ICombatMeleeInterface::Execute_StartMeleeTrailsCosmetics(UObject* O, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventStartMeleeTrailsCosmetics_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_StartMeleeTrailsCosmetics);
	if (Func)
	{
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		I->StartMeleeTrailsCosmetics_Implementation(SourceTags,TargetTags);
	}
}
struct Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Starts rendering melee trails, considering the current tags.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Starts rendering melee trails, considering the current tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventStartMeleeTrailsCosmetics_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventStartMeleeTrailsCosmetics_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "StartMeleeTrailsCosmetics", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::PropPointers), sizeof(CombatMeleeInterface_eventStartMeleeTrailsCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventStartMeleeTrailsCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execStartMeleeTrailsCosmetics)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMeleeTrailsCosmetics_Implementation(Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function StartMeleeTrailsCosmetics

// Begin Interface UCombatMeleeInterface Function StopMeleeTrailsCosmetics
struct CombatMeleeInterface_eventStopMeleeTrailsCosmetics_Parms
{
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
};
void ICombatMeleeInterface::StopMeleeTrailsCosmetics(FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopMeleeTrailsCosmetics instead.");
}
static FName NAME_UCombatMeleeInterface_StopMeleeTrailsCosmetics = FName(TEXT("StopMeleeTrailsCosmetics"));
void ICombatMeleeInterface::Execute_StopMeleeTrailsCosmetics(UObject* O, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMeleeInterface::StaticClass()));
	CombatMeleeInterface_eventStopMeleeTrailsCosmetics_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMeleeInterface_StopMeleeTrailsCosmetics);
	if (Func)
	{
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMeleeInterface*)(O->GetNativeInterfaceAddress(UCombatMeleeInterface::StaticClass())))
	{
		I->StopMeleeTrailsCosmetics_Implementation(SourceTags,TargetTags);
	}
}
struct Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Stops rendering melee trails, considering the current tags.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
		{ "ToolTip", "Stops rendering melee trails, considering the current tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventStopMeleeTrailsCosmetics_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMeleeInterface_eventStopMeleeTrailsCosmetics_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMeleeInterface, nullptr, "StopMeleeTrailsCosmetics", nullptr, nullptr, Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::PropPointers), sizeof(CombatMeleeInterface_eventStopMeleeTrailsCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMeleeInterface_eventStopMeleeTrailsCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMeleeInterface::execStopMeleeTrailsCosmetics)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMeleeTrailsCosmetics_Implementation(Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatMeleeInterface Function StopMeleeTrailsCosmetics

// Begin Interface UCombatMeleeInterface
void UCombatMeleeInterface::StaticRegisterNativesUCombatMeleeInterface()
{
	UClass* Class = UCombatMeleeInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttackTrails", &ICombatMeleeInterface::execGetAttackTrails },
		{ "GetDamage", &ICombatMeleeInterface::execGetDamage },
		{ "GetHitEffectClass", &ICombatMeleeInterface::execGetHitEffectClass },
		{ "GetHitEffectLevel", &ICombatMeleeInterface::execGetHitEffectLevel },
		{ "GetImpactTrails", &ICombatMeleeInterface::execGetImpactTrails },
		{ "GetMeleeImpactStrength", &ICombatMeleeInterface::execGetMeleeImpactStrength },
		{ "GetMeleeMesh", &ICombatMeleeInterface::execGetMeleeMesh },
		{ "GetMeleeMeshByTag", &ICombatMeleeInterface::execGetMeleeMeshByTag },
		{ "GetPoiseConsumption", &ICombatMeleeInterface::execGetPoiseConsumption },
		{ "HandleMeleeDamageCosmetics", &ICombatMeleeInterface::execHandleMeleeDamageCosmetics },
		{ "StartMeleeTrailsCosmetics", &ICombatMeleeInterface::execStartMeleeTrailsCosmetics },
		{ "StopMeleeTrailsCosmetics", &ICombatMeleeInterface::execStopMeleeTrailsCosmetics },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatMeleeInterface);
UClass* Z_Construct_UClass_UCombatMeleeInterface_NoRegister()
{
	return UCombatMeleeInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatMeleeInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatMeleeInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetAttackTrails, "GetAttackTrails" }, // 16467883
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetDamage, "GetDamage" }, // 3335071135
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectClass, "GetHitEffectClass" }, // 4146404782
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetHitEffectLevel, "GetHitEffectLevel" }, // 3634570207
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetImpactTrails, "GetImpactTrails" }, // 2923563612
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeImpactStrength, "GetMeleeImpactStrength" }, // 2435557874
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMesh, "GetMeleeMesh" }, // 2285937456
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetMeleeMeshByTag, "GetMeleeMeshByTag" }, // 1069114990
		{ &Z_Construct_UFunction_UCombatMeleeInterface_GetPoiseConsumption, "GetPoiseConsumption" }, // 270417681
		{ &Z_Construct_UFunction_UCombatMeleeInterface_HandleMeleeDamageCosmetics, "HandleMeleeDamageCosmetics" }, // 2264289763
		{ &Z_Construct_UFunction_UCombatMeleeInterface_StartMeleeTrailsCosmetics, "StartMeleeTrailsCosmetics" }, // 3388820538
		{ &Z_Construct_UFunction_UCombatMeleeInterface_StopMeleeTrailsCosmetics, "StopMeleeTrailsCosmetics" }, // 2518928061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatMeleeInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatMeleeInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatMeleeInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatMeleeInterface_Statics::ClassParams = {
	&UCombatMeleeInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatMeleeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatMeleeInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatMeleeInterface()
{
	if (!Z_Registration_Info_UClass_UCombatMeleeInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatMeleeInterface.OuterSingleton, Z_Construct_UClass_UCombatMeleeInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatMeleeInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatMeleeInterface>()
{
	return UCombatMeleeInterface::StaticClass();
}
UCombatMeleeInterface::UCombatMeleeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatMeleeInterface);
UCombatMeleeInterface::~UCombatMeleeInterface() {}
// End Interface UCombatMeleeInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatMeleeInterface, UCombatMeleeInterface::StaticClass, TEXT("UCombatMeleeInterface"), &Z_Registration_Info_UClass_UCombatMeleeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatMeleeInterface), 1579867907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_1816968974(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

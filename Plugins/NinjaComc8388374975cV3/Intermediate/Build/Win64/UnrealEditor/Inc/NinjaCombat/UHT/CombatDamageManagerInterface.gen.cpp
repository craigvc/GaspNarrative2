// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatDamageManagerInterface.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "NinjaCombat/Public/Types/FDamageCalculation.h"
#include "NinjaCombat/Public/Types/FDamageEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatDamageManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageDataAsset_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationInput();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationOutput();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatDamageManagerInterface Function BindToDamageReceivedDelegate
struct CombatDamageManagerInterface_eventBindToDamageReceivedDelegate_Parms
{
	FDamageReceivedDelegate Delegate;
};
void ICombatDamageManagerInterface::BindToDamageReceivedDelegate(FDamageReceivedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToDamageReceivedDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_BindToDamageReceivedDelegate = FName(TEXT("BindToDamageReceivedDelegate"));
void ICombatDamageManagerInterface::Execute_BindToDamageReceivedDelegate(UObject* O, FDamageReceivedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventBindToDamageReceivedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_BindToDamageReceivedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->BindToDamageReceivedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about damage received.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about damage received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventBindToDamageReceivedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 3962262776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "BindToDamageReceivedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventBindToDamageReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventBindToDamageReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execBindToDamageReceivedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToDamageReceivedDelegate_Implementation(FDamageReceivedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function BindToDamageReceivedDelegate

// Begin Interface UCombatDamageManagerInterface Function BindToOwnerDiedDelegate
struct CombatDamageManagerInterface_eventBindToOwnerDiedDelegate_Parms
{
	FOwnerDiedDelegate Delegate;
};
void ICombatDamageManagerInterface::BindToOwnerDiedDelegate(FOwnerDiedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToOwnerDiedDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_BindToOwnerDiedDelegate = FName(TEXT("BindToOwnerDiedDelegate"));
void ICombatDamageManagerInterface::Execute_BindToOwnerDiedDelegate(UObject* O, FOwnerDiedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventBindToOwnerDiedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_BindToOwnerDiedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->BindToOwnerDiedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the owner's death.\n\x09 * This is broadcast at the moment when the owner received fatal damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the owner's death.\nThis is broadcast at the moment when the owner received fatal damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventBindToOwnerDiedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1770098408
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "BindToOwnerDiedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventBindToOwnerDiedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventBindToOwnerDiedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execBindToOwnerDiedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToOwnerDiedDelegate_Implementation(FOwnerDiedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function BindToOwnerDiedDelegate

// Begin Interface UCombatDamageManagerInterface Function BindToOwnerFinishedDyingDelegate
struct CombatDamageManagerInterface_eventBindToOwnerFinishedDyingDelegate_Parms
{
	FOwnerDiedDelegate Delegate;
};
void ICombatDamageManagerInterface::BindToOwnerFinishedDyingDelegate(FOwnerDiedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToOwnerFinishedDyingDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate = FName(TEXT("BindToOwnerFinishedDyingDelegate"));
void ICombatDamageManagerInterface::Execute_BindToOwnerFinishedDyingDelegate(UObject* O, FOwnerDiedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventBindToOwnerFinishedDyingDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->BindToOwnerFinishedDyingDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the owner's death.\n\x09 * This is broadcast when the owner has finished the death flow.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the owner's death.\nThis is broadcast when the owner has finished the death flow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventBindToOwnerFinishedDyingDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1770098408
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "BindToOwnerFinishedDyingDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventBindToOwnerFinishedDyingDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventBindToOwnerFinishedDyingDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execBindToOwnerFinishedDyingDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToOwnerFinishedDyingDelegate_Implementation(FOwnerDiedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function BindToOwnerFinishedDyingDelegate

// Begin Interface UCombatDamageManagerInterface Function BindToStaggerStateChangedDelegate
struct CombatDamageManagerInterface_eventBindToStaggerStateChangedDelegate_Parms
{
	FStaggeredStateChangedDelegate Delegate;
};
void ICombatDamageManagerInterface::BindToStaggerStateChangedDelegate(FStaggeredStateChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToStaggerStateChangedDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate = FName(TEXT("BindToStaggerStateChangedDelegate"));
void ICombatDamageManagerInterface::Execute_BindToStaggerStateChangedDelegate(UObject* O, FStaggeredStateChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventBindToStaggerStateChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->BindToStaggerStateChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify when the stagger state changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify when the stagger state changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventBindToStaggerStateChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1961754990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "BindToStaggerStateChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventBindToStaggerStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventBindToStaggerStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execBindToStaggerStateChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToStaggerStateChangedDelegate_Implementation(FStaggeredStateChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function BindToStaggerStateChangedDelegate

// Begin Interface UCombatDamageManagerInterface Function CalculateDamage
struct CombatDamageManagerInterface_eventCalculateDamage_Parms
{
	FDamageCalculationInput Input;
	FDamageCalculationOutput Output;
};
void ICombatDamageManagerInterface::CalculateDamage(FDamageCalculationInput const& Input, FDamageCalculationOutput& Output) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CalculateDamage instead.");
}
static FName NAME_UCombatDamageManagerInterface_CalculateDamage = FName(TEXT("CalculateDamage"));
void ICombatDamageManagerInterface::Execute_CalculateDamage(const UObject* O, FDamageCalculationInput const& Input, FDamageCalculationOutput& Output)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventCalculateDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_CalculateDamage);
	if (Func)
	{
		Parms.Input=Input;
		Parms.Output=Output;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		Output=Parms.Output;
	}
	else if (auto I = (const ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->CalculateDamage_Implementation(Input,Output);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Calculates incoming damage.\n\x09 * \n\x09 * @param Input\x09\x09\x09""Details about the incoming damage.\n\x09 * @param Output\x09\x09Results of the damage calculation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Calculates incoming damage.\n\n@param Input                 Details about the incoming damage.\n@param Output                Results of the damage calculation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventCalculateDamage_Parms, Input), Z_Construct_UScriptStruct_FDamageCalculationInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2300810286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventCalculateDamage_Parms, Output), Z_Construct_UScriptStruct_FDamageCalculationOutput, METADATA_PARAMS(0, nullptr) }; // 3411789563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "CalculateDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventCalculateDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventCalculateDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execCalculateDamage)
{
	P_GET_STRUCT_REF(FDamageCalculationInput,Z_Param_Out_Input);
	P_GET_STRUCT_REF(FDamageCalculationOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateDamage_Implementation(Z_Param_Out_Input,Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function CalculateDamage

// Begin Interface UCombatDamageManagerInterface Function EnableRagdollPhysics
void ICombatDamageManagerInterface::EnableRagdollPhysics()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnableRagdollPhysics instead.");
}
static FName NAME_UCombatDamageManagerInterface_EnableRagdollPhysics = FName(TEXT("EnableRagdollPhysics"));
void ICombatDamageManagerInterface::Execute_EnableRagdollPhysics(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_EnableRagdollPhysics);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->EnableRagdollPhysics_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Enables the Ragdoll physics on the character's mesh, usually during the death process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Enables the Ragdoll physics on the character's mesh, usually during the death process." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "EnableRagdollPhysics", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execEnableRagdollPhysics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRagdollPhysics_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function EnableRagdollPhysics

// Begin Interface UCombatDamageManagerInterface Function FinishDying
void ICombatDamageManagerInterface::FinishDying()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FinishDying instead.");
}
static FName NAME_UCombatDamageManagerInterface_FinishDying = FName(TEXT("FinishDying"));
void ICombatDamageManagerInterface::Execute_FinishDying(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_FinishDying);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->FinishDying_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Finishes the Death Event, handling things like un-possess and destroying actors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Finishes the Death Event, handling things like un-possess and destroying actors." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "FinishDying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execFinishDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDying_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function FinishDying

// Begin Interface UCombatDamageManagerInterface Function GetDamageData
struct CombatDamageManagerInterface_eventGetDamageData_Parms
{
	const UNinjaCombatDamageDataAsset* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDamageManagerInterface_eventGetDamageData_Parms()
		: ReturnValue(NULL)
	{
	}
};
const UNinjaCombatDamageDataAsset* ICombatDamageManagerInterface::GetDamageData() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDamageData instead.");
	CombatDamageManagerInterface_eventGetDamageData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDamageManagerInterface_GetDamageData = FName(TEXT("GetDamageData"));
const UNinjaCombatDamageDataAsset* ICombatDamageManagerInterface::Execute_GetDamageData(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventGetDamageData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_GetDamageData);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDamageData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Provides the Damage Data Asset used by the Damage Manager. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Provides the Damage Data Asset used by the Damage Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventGetDamageData_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatDamageDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "GetDamageData", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventGetDamageData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventGetDamageData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execGetDamageData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaCombatDamageDataAsset**)Z_Param__Result=P_THIS->GetDamageData_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function GetDamageData

// Begin Interface UCombatDamageManagerInterface Function HandleDamageReceived
struct CombatDamageManagerInterface_eventHandleDamageReceived_Parms
{
	FDamageEntry DamageEntry;
};
void ICombatDamageManagerInterface::HandleDamageReceived(FDamageEntry const& DamageEntry)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleDamageReceived instead.");
}
static FName NAME_UCombatDamageManagerInterface_HandleDamageReceived = FName(TEXT("HandleDamageReceived"));
void ICombatDamageManagerInterface::Execute_HandleDamageReceived(UObject* O, FDamageEntry const& DamageEntry)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventHandleDamageReceived_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_HandleDamageReceived);
	if (Func)
	{
		Parms.DamageEntry=DamageEntry;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->HandleDamageReceived_Implementation(DamageEntry);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Handles damage that was received by this component's owner.\n\x09 *\n\x09 * Usually called by the Damage List, once a damage entry replicates.\n\x09 * \n\x09 * @param DamageEntry\n\x09 *\x09\x09""Details about the damage. Provides access to the time when it was received and\n\x09 *\x09\x09to the Gameplay Effect Spec that was originally used to generate the entry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Handles damage that was received by this component's owner.\n\nUsually called by the Damage List, once a damage entry replicates.\n\n@param DamageEntry\n             Details about the damage. Provides access to the time when it was received and\n             to the Gameplay Effect Spec that was originally used to generate the entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::NewProp_DamageEntry = { "DamageEntry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventHandleDamageReceived_Parms, DamageEntry), Z_Construct_UScriptStruct_FDamageEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEntry_MetaData), NewProp_DamageEntry_MetaData) }; // 3044778572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::NewProp_DamageEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "HandleDamageReceived", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventHandleDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventHandleDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execHandleDamageReceived)
{
	P_GET_STRUCT_REF(FDamageEntry,Z_Param_Out_DamageEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDamageReceived_Implementation(Z_Param_Out_DamageEntry);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function HandleDamageReceived

// Begin Interface UCombatDamageManagerInterface Function IsDead
struct CombatDamageManagerInterface_eventIsDead_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDamageManagerInterface_eventIsDead_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDamageManagerInterface::IsDead() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
	CombatDamageManagerInterface_eventIsDead_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDamageManagerInterface_IsDead = FName(TEXT("IsDead"));
bool ICombatDamageManagerInterface::Execute_IsDead(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventIsDead_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_IsDead);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsDead_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the owner is dead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Checks if the owner is dead." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDamageManagerInterface_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDamageManagerInterface_eventIsDead_Parms), &Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function IsDead

// Begin Interface UCombatDamageManagerInterface Function IsStaggered
struct CombatDamageManagerInterface_eventIsStaggered_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDamageManagerInterface_eventIsStaggered_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDamageManagerInterface::IsStaggered() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsStaggered instead.");
	CombatDamageManagerInterface_eventIsStaggered_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDamageManagerInterface_IsStaggered = FName(TEXT("IsStaggered"));
bool ICombatDamageManagerInterface::Execute_IsStaggered(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventIsStaggered_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_IsStaggered);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsStaggered_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the owner is staggered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Checks if the owner is staggered." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDamageManagerInterface_eventIsStaggered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDamageManagerInterface_eventIsStaggered_Parms), &Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "IsStaggered", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventIsStaggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventIsStaggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execIsStaggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStaggered_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function IsStaggered

// Begin Interface UCombatDamageManagerInterface Function RegisterDamageReceived
struct CombatDamageManagerInterface_eventRegisterDamageReceived_Parms
{
	FGameplayEffectSpec EffectSpec;
};
void ICombatDamageManagerInterface::RegisterDamageReceived(FGameplayEffectSpec const& EffectSpec)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterDamageReceived instead.");
}
static FName NAME_UCombatDamageManagerInterface_RegisterDamageReceived = FName(TEXT("RegisterDamageReceived"));
void ICombatDamageManagerInterface::Execute_RegisterDamageReceived(UObject* O, FGameplayEffectSpec const& EffectSpec)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventRegisterDamageReceived_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_RegisterDamageReceived);
	if (Func)
	{
		Parms.EffectSpec=EffectSpec;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->RegisterDamageReceived_Implementation(EffectSpec);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Receives damage that was received by this component's owner and must be handled.\n\x09 *\n\x09 * Usually called by the Attribute Set managing the incoming damage.\n\x09 * \n\x09 * @param EffectSpec\n\x09 *\x09\x09Spec containing all the information regarding the effect that applied the damage.\n\x09 *\x09\x09It can be further expanded using the appropriate Effect Context proxy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Receives damage that was received by this component's owner and must be handled.\n\nUsually called by the Attribute Set managing the incoming damage.\n\n@param EffectSpec\n             Spec containing all the information regarding the effect that applied the damage.\n             It can be further expanded using the appropriate Effect Context proxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventRegisterDamageReceived_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectSpec_MetaData), NewProp_EffectSpec_MetaData) }; // 1577102320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::NewProp_EffectSpec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "RegisterDamageReceived", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventRegisterDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventRegisterDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execRegisterDamageReceived)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterDamageReceived_Implementation(Z_Param_Out_EffectSpec);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function RegisterDamageReceived

// Begin Interface UCombatDamageManagerInterface Function StartDying
void ICombatDamageManagerInterface::StartDying()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartDying instead.");
}
static FName NAME_UCombatDamageManagerInterface_StartDying = FName(TEXT("StartDying"));
void ICombatDamageManagerInterface::Execute_StartDying(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_StartDying);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->StartDying_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/** \n\x09 * Starts the Death Event. This is where you would stop movement, interrupt abilities, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Starts the Death Event. This is where you would stop movement, interrupt abilities, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "StartDying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execStartDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDying_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function StartDying

// Begin Interface UCombatDamageManagerInterface Function UnbindFromDamageReceivedDelegate
struct CombatDamageManagerInterface_eventUnbindFromDamageReceivedDelegate_Parms
{
	const UObject* Source;
};
void ICombatDamageManagerInterface::UnbindFromDamageReceivedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromDamageReceivedDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate = FName(TEXT("UnbindFromDamageReceivedDelegate"));
void ICombatDamageManagerInterface::Execute_UnbindFromDamageReceivedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventUnbindFromDamageReceivedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->UnbindFromDamageReceivedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the damage received delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the damage received delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventUnbindFromDamageReceivedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "UnbindFromDamageReceivedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventUnbindFromDamageReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventUnbindFromDamageReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execUnbindFromDamageReceivedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromDamageReceivedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function UnbindFromDamageReceivedDelegate

// Begin Interface UCombatDamageManagerInterface Function UnbindFromOwnerDiedDelegate
struct CombatDamageManagerInterface_eventUnbindFromOwnerDiedDelegate_Parms
{
	const UObject* Source;
};
void ICombatDamageManagerInterface::UnbindFromOwnerDiedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromOwnerDiedDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate = FName(TEXT("UnbindFromOwnerDiedDelegate"));
void ICombatDamageManagerInterface::Execute_UnbindFromOwnerDiedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventUnbindFromOwnerDiedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->UnbindFromOwnerDiedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the death delegate.\n\x09 * This delegate triggers when a fatal hit is received.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the death delegate.\nThis delegate triggers when a fatal hit is received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventUnbindFromOwnerDiedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "UnbindFromOwnerDiedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventUnbindFromOwnerDiedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventUnbindFromOwnerDiedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execUnbindFromOwnerDiedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromOwnerDiedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function UnbindFromOwnerDiedDelegate

// Begin Interface UCombatDamageManagerInterface Function UnbindFromOwnerFinishedDyingDelegate
struct CombatDamageManagerInterface_eventUnbindFromOwnerFinishedDyingDelegate_Parms
{
	const UObject* Source;
};
void ICombatDamageManagerInterface::UnbindFromOwnerFinishedDyingDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromOwnerFinishedDyingDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate = FName(TEXT("UnbindFromOwnerFinishedDyingDelegate"));
void ICombatDamageManagerInterface::Execute_UnbindFromOwnerFinishedDyingDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventUnbindFromOwnerFinishedDyingDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->UnbindFromOwnerFinishedDyingDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the death delegate.\n\x09 * This delegate triggers when the death workflow ends.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the death delegate.\nThis delegate triggers when the death workflow ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventUnbindFromOwnerFinishedDyingDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "UnbindFromOwnerFinishedDyingDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventUnbindFromOwnerFinishedDyingDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventUnbindFromOwnerFinishedDyingDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execUnbindFromOwnerFinishedDyingDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromOwnerFinishedDyingDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function UnbindFromOwnerFinishedDyingDelegate

// Begin Interface UCombatDamageManagerInterface Function UnbindFromStaggerStateChangedDelegate
struct CombatDamageManagerInterface_eventUnbindFromStaggerStateChangedDelegate_Parms
{
	const UObject* Source;
};
void ICombatDamageManagerInterface::UnbindFromStaggerStateChangedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromStaggerStateChangedDelegate instead.");
}
static FName NAME_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate = FName(TEXT("UnbindFromStaggerStateChangedDelegate"));
void ICombatDamageManagerInterface::Execute_UnbindFromStaggerStateChangedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDamageManagerInterface::StaticClass()));
	CombatDamageManagerInterface_eventUnbindFromStaggerStateChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDamageManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDamageManagerInterface::StaticClass())))
	{
		I->UnbindFromStaggerStateChangedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the stagger state changed delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the stagger state changed delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageManagerInterface_eventUnbindFromStaggerStateChangedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDamageManagerInterface, nullptr, "UnbindFromStaggerStateChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::PropPointers), sizeof(CombatDamageManagerInterface_eventUnbindFromStaggerStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDamageManagerInterface_eventUnbindFromStaggerStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDamageManagerInterface::execUnbindFromStaggerStateChangedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromStaggerStateChangedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatDamageManagerInterface Function UnbindFromStaggerStateChangedDelegate

// Begin Interface UCombatDamageManagerInterface
void UCombatDamageManagerInterface::StaticRegisterNativesUCombatDamageManagerInterface()
{
	UClass* Class = UCombatDamageManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToDamageReceivedDelegate", &ICombatDamageManagerInterface::execBindToDamageReceivedDelegate },
		{ "BindToOwnerDiedDelegate", &ICombatDamageManagerInterface::execBindToOwnerDiedDelegate },
		{ "BindToOwnerFinishedDyingDelegate", &ICombatDamageManagerInterface::execBindToOwnerFinishedDyingDelegate },
		{ "BindToStaggerStateChangedDelegate", &ICombatDamageManagerInterface::execBindToStaggerStateChangedDelegate },
		{ "CalculateDamage", &ICombatDamageManagerInterface::execCalculateDamage },
		{ "EnableRagdollPhysics", &ICombatDamageManagerInterface::execEnableRagdollPhysics },
		{ "FinishDying", &ICombatDamageManagerInterface::execFinishDying },
		{ "GetDamageData", &ICombatDamageManagerInterface::execGetDamageData },
		{ "HandleDamageReceived", &ICombatDamageManagerInterface::execHandleDamageReceived },
		{ "IsDead", &ICombatDamageManagerInterface::execIsDead },
		{ "IsStaggered", &ICombatDamageManagerInterface::execIsStaggered },
		{ "RegisterDamageReceived", &ICombatDamageManagerInterface::execRegisterDamageReceived },
		{ "StartDying", &ICombatDamageManagerInterface::execStartDying },
		{ "UnbindFromDamageReceivedDelegate", &ICombatDamageManagerInterface::execUnbindFromDamageReceivedDelegate },
		{ "UnbindFromOwnerDiedDelegate", &ICombatDamageManagerInterface::execUnbindFromOwnerDiedDelegate },
		{ "UnbindFromOwnerFinishedDyingDelegate", &ICombatDamageManagerInterface::execUnbindFromOwnerFinishedDyingDelegate },
		{ "UnbindFromStaggerStateChangedDelegate", &ICombatDamageManagerInterface::execUnbindFromStaggerStateChangedDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatDamageManagerInterface);
UClass* Z_Construct_UClass_UCombatDamageManagerInterface_NoRegister()
{
	return UCombatDamageManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatDamageManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDamageManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_BindToDamageReceivedDelegate, "BindToDamageReceivedDelegate" }, // 740224255
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerDiedDelegate, "BindToOwnerDiedDelegate" }, // 1122912486
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_BindToOwnerFinishedDyingDelegate, "BindToOwnerFinishedDyingDelegate" }, // 2221992953
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_BindToStaggerStateChangedDelegate, "BindToStaggerStateChangedDelegate" }, // 1262811479
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_CalculateDamage, "CalculateDamage" }, // 1917088162
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_EnableRagdollPhysics, "EnableRagdollPhysics" }, // 2544006512
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_FinishDying, "FinishDying" }, // 1708786581
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_GetDamageData, "GetDamageData" }, // 3917042210
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_HandleDamageReceived, "HandleDamageReceived" }, // 113403452
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_IsDead, "IsDead" }, // 312551833
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_IsStaggered, "IsStaggered" }, // 3224067389
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_RegisterDamageReceived, "RegisterDamageReceived" }, // 1868580008
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_StartDying, "StartDying" }, // 4190803202
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromDamageReceivedDelegate, "UnbindFromDamageReceivedDelegate" }, // 1729949523
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerDiedDelegate, "UnbindFromOwnerDiedDelegate" }, // 32578329
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromOwnerFinishedDyingDelegate, "UnbindFromOwnerFinishedDyingDelegate" }, // 3209420143
		{ &Z_Construct_UFunction_UCombatDamageManagerInterface_UnbindFromStaggerStateChangedDelegate, "UnbindFromStaggerStateChangedDelegate" }, // 1221339824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatDamageManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatDamageManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDamageManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatDamageManagerInterface_Statics::ClassParams = {
	&UCombatDamageManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDamageManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatDamageManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatDamageManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatDamageManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDamageManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatDamageManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDamageManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatDamageManagerInterface>()
{
	return UCombatDamageManagerInterface::StaticClass();
}
UCombatDamageManagerInterface::UCombatDamageManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatDamageManagerInterface);
UCombatDamageManagerInterface::~UCombatDamageManagerInterface() {}
// End Interface UCombatDamageManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDamageManagerInterface, UCombatDamageManagerInterface::StaticClass, TEXT("UCombatDamageManagerInterface"), &Z_Registration_Info_UClass_UCombatDamageManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDamageManagerInterface), 1404672490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_603365669(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

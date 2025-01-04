// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatDefenseManagerInterface.h"
#include "NinjaCombat/Public/Types/FDamageCalculation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatDefenseManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDefenseManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDefenseManagerInterface_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationInput();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationOutput();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatDefenseManagerInterface Function BindToBlockingStateChangedDelegate
struct CombatDefenseManagerInterface_eventBindToBlockingStateChangedDelegate_Parms
{
	FBlockingStateChangedDelegate Delegate;
};
void ICombatDefenseManagerInterface::BindToBlockingStateChangedDelegate(FBlockingStateChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToBlockingStateChangedDelegate instead.");
}
static FName NAME_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate = FName(TEXT("BindToBlockingStateChangedDelegate"));
void ICombatDefenseManagerInterface::Execute_BindToBlockingStateChangedDelegate(UObject* O, FBlockingStateChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventBindToBlockingStateChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		I->BindToBlockingStateChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about changes in the blocking state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about changes in the blocking state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventBindToBlockingStateChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2952921719
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "BindToBlockingStateChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventBindToBlockingStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventBindToBlockingStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execBindToBlockingStateChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToBlockingStateChangedDelegate_Implementation(FBlockingStateChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function BindToBlockingStateChangedDelegate

// Begin Interface UCombatDefenseManagerInterface Function BindToInvulnerabilityStateChangedDelegate
struct CombatDefenseManagerInterface_eventBindToInvulnerabilityStateChangedDelegate_Parms
{
	FInvulnerabilityStateChangedDelegate Delegate;
};
void ICombatDefenseManagerInterface::BindToInvulnerabilityStateChangedDelegate(FInvulnerabilityStateChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToInvulnerabilityStateChangedDelegate instead.");
}
static FName NAME_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate = FName(TEXT("BindToInvulnerabilityStateChangedDelegate"));
void ICombatDefenseManagerInterface::Execute_BindToInvulnerabilityStateChangedDelegate(UObject* O, FInvulnerabilityStateChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventBindToInvulnerabilityStateChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		I->BindToInvulnerabilityStateChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about changes in the invulnerability state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about changes in the invulnerability state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventBindToInvulnerabilityStateChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 18033485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "BindToInvulnerabilityStateChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventBindToInvulnerabilityStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventBindToInvulnerabilityStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execBindToInvulnerabilityStateChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToInvulnerabilityStateChangedDelegate_Implementation(FInvulnerabilityStateChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function BindToInvulnerabilityStateChangedDelegate

// Begin Interface UCombatDefenseManagerInterface Function CanBlock
struct CombatDefenseManagerInterface_eventCanBlock_Parms
{
	FDamageCalculationInput Input;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDefenseManagerInterface_eventCanBlock_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDefenseManagerInterface::CanBlock(FDamageCalculationInput const& Input) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBlock instead.");
	CombatDefenseManagerInterface_eventCanBlock_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDefenseManagerInterface_CanBlock = FName(TEXT("CanBlock"));
bool ICombatDefenseManagerInterface::Execute_CanBlock(const UObject* O, FDamageCalculationInput const& Input)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventCanBlock_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_CanBlock);
	if (Func)
	{
		Parms.Input=Input;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanBlock_Implementation(Input);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the owner can block a damage instigator.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Checks if the owner can block a damage instigator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventCanBlock_Parms, Input), Z_Construct_UScriptStruct_FDamageCalculationInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2300810286
void Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDefenseManagerInterface_eventCanBlock_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDefenseManagerInterface_eventCanBlock_Parms), &Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "CanBlock", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventCanBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventCanBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execCanBlock)
{
	P_GET_STRUCT_REF(FDamageCalculationInput,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBlock_Implementation(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function CanBlock

// Begin Interface UCombatDefenseManagerInterface Function CheckLastStand
struct CombatDefenseManagerInterface_eventCheckLastStand_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDefenseManagerInterface_eventCheckLastStand_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDefenseManagerInterface::CheckLastStand() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckLastStand instead.");
	CombatDefenseManagerInterface_eventCheckLastStand_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDefenseManagerInterface_CheckLastStand = FName(TEXT("CheckLastStand"));
bool ICombatDefenseManagerInterface::Execute_CheckLastStand(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventCheckLastStand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_CheckLastStand);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CheckLastStand_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks the chance to defend against a fatal damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Checks the chance to defend against a fatal damage." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDefenseManagerInterface_eventCheckLastStand_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDefenseManagerInterface_eventCheckLastStand_Parms), &Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "CheckLastStand", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventCheckLastStand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventCheckLastStand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execCheckLastStand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckLastStand_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function CheckLastStand

// Begin Interface UCombatDefenseManagerInterface Function CommitLastStand
void ICombatDefenseManagerInterface::CommitLastStand()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CommitLastStand instead.");
}
static FName NAME_UCombatDefenseManagerInterface_CommitLastStand = FName(TEXT("CommitLastStand"));
void ICombatDefenseManagerInterface::Execute_CommitLastStand(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_CommitLastStand);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		I->CommitLastStand_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Effectively commits a Last Stand that has been accepted.\n\x09 *\n\x09 * This is where a Gameplay Effect, Tags, or etc, should be applied to remove a charge,\n\x09 * maybe notify external systems about it, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Effectively commits a Last Stand that has been accepted.\n\nThis is where a Gameplay Effect, Tags, or etc, should be applied to remove a charge,\nmaybe notify external systems about it, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "CommitLastStand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execCommitLastStand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommitLastStand_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function CommitLastStand

// Begin Interface UCombatDefenseManagerInterface Function DefendDamage
struct CombatDefenseManagerInterface_eventDefendDamage_Parms
{
	FDamageCalculationInput Input;
	FDamageCalculationOutput Output;
};
void ICombatDefenseManagerInterface::DefendDamage(FDamageCalculationInput const& Input, FDamageCalculationOutput& Output) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DefendDamage instead.");
}
static FName NAME_UCombatDefenseManagerInterface_DefendDamage = FName(TEXT("DefendDamage"));
void ICombatDefenseManagerInterface::Execute_DefendDamage(const UObject* O, FDamageCalculationInput const& Input, FDamageCalculationOutput& Output)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventDefendDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_DefendDamage);
	if (Func)
	{
		Parms.Input=Input;
		Parms.Output=Output;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		Output=Parms.Output;
	}
	else if (auto I = (const ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		I->DefendDamage_Implementation(Input,Output);
	}
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Defends incoming damage.\n\x09 * \n\x09 * @param Input\x09\x09\x09""Details about the incoming damage.\n\x09 * @param Output\x09\x09Results of the damage calculation, including the defense.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Defends incoming damage.\n\n@param Input                 Details about the incoming damage.\n@param Output                Results of the damage calculation, including the defense." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventDefendDamage_Parms, Input), Z_Construct_UScriptStruct_FDamageCalculationInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2300810286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventDefendDamage_Parms, Output), Z_Construct_UScriptStruct_FDamageCalculationOutput, METADATA_PARAMS(0, nullptr) }; // 3411789563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "DefendDamage", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventDefendDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventDefendDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execDefendDamage)
{
	P_GET_STRUCT_REF(FDamageCalculationInput,Z_Param_Out_Input);
	P_GET_STRUCT_REF(FDamageCalculationOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefendDamage_Implementation(Z_Param_Out_Input,Z_Param_Out_Output);
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function DefendDamage

// Begin Interface UCombatDefenseManagerInterface Function IsBlocking
struct CombatDefenseManagerInterface_eventIsBlocking_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDefenseManagerInterface_eventIsBlocking_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDefenseManagerInterface::IsBlocking() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsBlocking instead.");
	CombatDefenseManagerInterface_eventIsBlocking_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDefenseManagerInterface_IsBlocking = FName(TEXT("IsBlocking"));
bool ICombatDefenseManagerInterface::Execute_IsBlocking(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventIsBlocking_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_IsBlocking);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsBlocking_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the owner is blocking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Checks if the owner is blocking." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDefenseManagerInterface_eventIsBlocking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDefenseManagerInterface_eventIsBlocking_Parms), &Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "IsBlocking", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventIsBlocking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventIsBlocking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execIsBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBlocking_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function IsBlocking

// Begin Interface UCombatDefenseManagerInterface Function IsInvulnerable
struct CombatDefenseManagerInterface_eventIsInvulnerable_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatDefenseManagerInterface_eventIsInvulnerable_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatDefenseManagerInterface::IsInvulnerable() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInvulnerable instead.");
	CombatDefenseManagerInterface_eventIsInvulnerable_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatDefenseManagerInterface_IsInvulnerable = FName(TEXT("IsInvulnerable"));
bool ICombatDefenseManagerInterface::Execute_IsInvulnerable(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventIsInvulnerable_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_IsInvulnerable);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInvulnerable_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the owner is invulnerable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Checks if the owner is invulnerable." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatDefenseManagerInterface_eventIsInvulnerable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDefenseManagerInterface_eventIsInvulnerable_Parms), &Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "IsInvulnerable", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventIsInvulnerable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventIsInvulnerable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execIsInvulnerable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInvulnerable_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function IsInvulnerable

// Begin Interface UCombatDefenseManagerInterface Function UnbindFromBlockingStateChangedDelegate
struct CombatDefenseManagerInterface_eventUnbindFromBlockingStateChangedDelegate_Parms
{
	const UObject* Source;
};
void ICombatDefenseManagerInterface::UnbindFromBlockingStateChangedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromBlockingStateChangedDelegate instead.");
}
static FName NAME_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate = FName(TEXT("UnbindFromBlockingStateChangedDelegate"));
void ICombatDefenseManagerInterface::Execute_UnbindFromBlockingStateChangedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventUnbindFromBlockingStateChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		I->UnbindFromBlockingStateChangedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the blocking delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the blocking delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventUnbindFromBlockingStateChangedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "UnbindFromBlockingStateChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventUnbindFromBlockingStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventUnbindFromBlockingStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execUnbindFromBlockingStateChangedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromBlockingStateChangedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function UnbindFromBlockingStateChangedDelegate

// Begin Interface UCombatDefenseManagerInterface Function UnbindFromInvulnerabilityStateChangedDelegate
struct CombatDefenseManagerInterface_eventUnbindFromInvulnerabilityStateChangedDelegate_Parms
{
	const UObject* Source;
};
void ICombatDefenseManagerInterface::UnbindFromInvulnerabilityStateChangedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromInvulnerabilityStateChangedDelegate instead.");
}
static FName NAME_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate = FName(TEXT("UnbindFromInvulnerabilityStateChangedDelegate"));
void ICombatDefenseManagerInterface::Execute_UnbindFromInvulnerabilityStateChangedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatDefenseManagerInterface::StaticClass()));
	CombatDefenseManagerInterface_eventUnbindFromInvulnerabilityStateChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatDefenseManagerInterface*)(O->GetNativeInterfaceAddress(UCombatDefenseManagerInterface::StaticClass())))
	{
		I->UnbindFromInvulnerabilityStateChangedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Defense Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the invulnerability delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the invulnerability delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDefenseManagerInterface_eventUnbindFromInvulnerabilityStateChangedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatDefenseManagerInterface, nullptr, "UnbindFromInvulnerabilityStateChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::PropPointers), sizeof(CombatDefenseManagerInterface_eventUnbindFromInvulnerabilityStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatDefenseManagerInterface_eventUnbindFromInvulnerabilityStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatDefenseManagerInterface::execUnbindFromInvulnerabilityStateChangedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromInvulnerabilityStateChangedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatDefenseManagerInterface Function UnbindFromInvulnerabilityStateChangedDelegate

// Begin Interface UCombatDefenseManagerInterface
void UCombatDefenseManagerInterface::StaticRegisterNativesUCombatDefenseManagerInterface()
{
	UClass* Class = UCombatDefenseManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToBlockingStateChangedDelegate", &ICombatDefenseManagerInterface::execBindToBlockingStateChangedDelegate },
		{ "BindToInvulnerabilityStateChangedDelegate", &ICombatDefenseManagerInterface::execBindToInvulnerabilityStateChangedDelegate },
		{ "CanBlock", &ICombatDefenseManagerInterface::execCanBlock },
		{ "CheckLastStand", &ICombatDefenseManagerInterface::execCheckLastStand },
		{ "CommitLastStand", &ICombatDefenseManagerInterface::execCommitLastStand },
		{ "DefendDamage", &ICombatDefenseManagerInterface::execDefendDamage },
		{ "IsBlocking", &ICombatDefenseManagerInterface::execIsBlocking },
		{ "IsInvulnerable", &ICombatDefenseManagerInterface::execIsInvulnerable },
		{ "UnbindFromBlockingStateChangedDelegate", &ICombatDefenseManagerInterface::execUnbindFromBlockingStateChangedDelegate },
		{ "UnbindFromInvulnerabilityStateChangedDelegate", &ICombatDefenseManagerInterface::execUnbindFromInvulnerabilityStateChangedDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatDefenseManagerInterface);
UClass* Z_Construct_UClass_UCombatDefenseManagerInterface_NoRegister()
{
	return UCombatDefenseManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatDefenseManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatDefenseManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToBlockingStateChangedDelegate, "BindToBlockingStateChangedDelegate" }, // 4173909686
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_BindToInvulnerabilityStateChangedDelegate, "BindToInvulnerabilityStateChangedDelegate" }, // 3028481978
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_CanBlock, "CanBlock" }, // 3138004836
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_CheckLastStand, "CheckLastStand" }, // 1949469156
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_CommitLastStand, "CommitLastStand" }, // 2014276640
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_DefendDamage, "DefendDamage" }, // 4224180097
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_IsBlocking, "IsBlocking" }, // 1339147378
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_IsInvulnerable, "IsInvulnerable" }, // 2093391880
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromBlockingStateChangedDelegate, "UnbindFromBlockingStateChangedDelegate" }, // 1648420679
		{ &Z_Construct_UFunction_UCombatDefenseManagerInterface_UnbindFromInvulnerabilityStateChangedDelegate, "UnbindFromInvulnerabilityStateChangedDelegate" }, // 2336014990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatDefenseManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatDefenseManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDefenseManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatDefenseManagerInterface_Statics::ClassParams = {
	&UCombatDefenseManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDefenseManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatDefenseManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatDefenseManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatDefenseManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDefenseManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatDefenseManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDefenseManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatDefenseManagerInterface>()
{
	return UCombatDefenseManagerInterface::StaticClass();
}
UCombatDefenseManagerInterface::UCombatDefenseManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatDefenseManagerInterface);
UCombatDefenseManagerInterface::~UCombatDefenseManagerInterface() {}
// End Interface UCombatDefenseManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDefenseManagerInterface, UCombatDefenseManagerInterface::StaticClass, TEXT("UCombatDefenseManagerInterface"), &Z_Registration_Info_UClass_UCombatDefenseManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDefenseManagerInterface), 3701697172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_3319611443(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

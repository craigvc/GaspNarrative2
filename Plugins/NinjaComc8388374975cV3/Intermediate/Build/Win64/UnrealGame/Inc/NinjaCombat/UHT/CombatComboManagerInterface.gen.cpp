// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatComboManagerInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComboManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatComboManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatComboManagerInterface_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatComboManagerInterface Function AdvanceCombo
struct CombatComboManagerInterface_eventAdvanceCombo_Parms
{
	FGameplayTag ComboEventTag;
};
void ICombatComboManagerInterface::AdvanceCombo(FGameplayTag ComboEventTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AdvanceCombo instead.");
}
static FName NAME_UCombatComboManagerInterface_AdvanceCombo = FName(TEXT("AdvanceCombo"));
void ICombatComboManagerInterface::Execute_AdvanceCombo(UObject* O, FGameplayTag ComboEventTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventAdvanceCombo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_AdvanceCombo);
	if (Func)
	{
		Parms.ComboEventTag=ComboEventTag;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->AdvanceCombo_Implementation(ComboEventTag);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Advances the combo, via a combo event tag\n\x09 *\n\x09 * @param ComboEventTag\n\x09 *\x09\x09""Combo Event Tag, used to trigger the next ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Advances the combo, via a combo event tag\n\n@param ComboEventTag\n             Combo Event Tag, used to trigger the next ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboEventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::NewProp_ComboEventTag = { "ComboEventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventAdvanceCombo_Parms, ComboEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::NewProp_ComboEventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "AdvanceCombo", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventAdvanceCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventAdvanceCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execAdvanceCombo)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_ComboEventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceCombo_Implementation(Z_Param_ComboEventTag);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function AdvanceCombo

// Begin Interface UCombatComboManagerInterface Function BindToComboCountChangedDelegate
struct CombatComboManagerInterface_eventBindToComboCountChangedDelegate_Parms
{
	FComboCountChangedDelegate Delegate;
};
void ICombatComboManagerInterface::BindToComboCountChangedDelegate(FComboCountChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToComboCountChangedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_BindToComboCountChangedDelegate = FName(TEXT("BindToComboCountChangedDelegate"));
void ICombatComboManagerInterface::Execute_BindToComboCountChangedDelegate(UObject* O, FComboCountChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventBindToComboCountChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_BindToComboCountChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->BindToComboCountChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the combo count changes.\n\x09 * \n\x09 * @param Delegate\n\x09 *\x09\x09""Function to be notified about changes in the combo count.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the combo count changes.\n\n@param Delegate\n             Function to be notified about changes in the combo count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventBindToComboCountChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2604394073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "BindToComboCountChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventBindToComboCountChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventBindToComboCountChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execBindToComboCountChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToComboCountChangedDelegate_Implementation(FComboCountChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function BindToComboCountChangedDelegate

// Begin Interface UCombatComboManagerInterface Function BindToComboFinishedDelegate
struct CombatComboManagerInterface_eventBindToComboFinishedDelegate_Parms
{
	FComboFinishedDelegate Delegate;
};
void ICombatComboManagerInterface::BindToComboFinishedDelegate(FComboFinishedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToComboFinishedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_BindToComboFinishedDelegate = FName(TEXT("BindToComboFinishedDelegate"));
void ICombatComboManagerInterface::Execute_BindToComboFinishedDelegate(UObject* O, FComboFinishedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventBindToComboFinishedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_BindToComboFinishedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->BindToComboFinishedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the end of a combo.\n\x09 * \n\x09 * @param Delegate\n\x09 *\x09\x09""Function to be notified about the end of a combo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the end of a combo.\n\n@param Delegate\n             Function to be notified about the end of a combo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventBindToComboFinishedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1803568286
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "BindToComboFinishedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventBindToComboFinishedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventBindToComboFinishedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execBindToComboFinishedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToComboFinishedDelegate_Implementation(FComboFinishedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function BindToComboFinishedDelegate

// Begin Interface UCombatComboManagerInterface Function BindToComboWindowChangedDelegate
struct CombatComboManagerInterface_eventBindToComboWindowChangedDelegate_Parms
{
	FComboWindowChangedDelegate Delegate;
};
void ICombatComboManagerInterface::BindToComboWindowChangedDelegate(FComboWindowChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToComboWindowChangedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_BindToComboWindowChangedDelegate = FName(TEXT("BindToComboWindowChangedDelegate"));
void ICombatComboManagerInterface::Execute_BindToComboWindowChangedDelegate(UObject* O, FComboWindowChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventBindToComboWindowChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_BindToComboWindowChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->BindToComboWindowChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the combo window state.\n\x09 * \n\x09 * @param Delegate\n\x09 *\x09\x09""Function to be notified about changes in the combo window state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the combo window state.\n\n@param Delegate\n             Function to be notified about changes in the combo window state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventBindToComboWindowChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 3558046101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "BindToComboWindowChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventBindToComboWindowChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventBindToComboWindowChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execBindToComboWindowChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToComboWindowChangedDelegate_Implementation(FComboWindowChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function BindToComboWindowChangedDelegate

// Begin Interface UCombatComboManagerInterface Function BindToTargetCountChangedDelegate
struct CombatComboManagerInterface_eventBindToTargetCountChangedDelegate_Parms
{
	FComboTargetCountChangedDelegate Delegate;
};
void ICombatComboManagerInterface::BindToTargetCountChangedDelegate(FComboTargetCountChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToTargetCountChangedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_BindToTargetCountChangedDelegate = FName(TEXT("BindToTargetCountChangedDelegate"));
void ICombatComboManagerInterface::Execute_BindToTargetCountChangedDelegate(UObject* O, FComboTargetCountChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventBindToTargetCountChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_BindToTargetCountChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->BindToTargetCountChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the count of targets hit.\n\x09 * \n\x09 * @param Delegate\n\x09 *\x09\x09""Function to be notified about changes in the target count.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the count of targets hit.\n\n@param Delegate\n             Function to be notified about changes in the target count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventBindToTargetCountChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 2785450300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "BindToTargetCountChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventBindToTargetCountChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventBindToTargetCountChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execBindToTargetCountChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToTargetCountChangedDelegate_Implementation(FComboTargetCountChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function BindToTargetCountChangedDelegate

// Begin Interface UCombatComboManagerInterface Function CloseComboWindow
void ICombatComboManagerInterface::CloseComboWindow()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseComboWindow instead.");
}
static FName NAME_UCombatComboManagerInterface_CloseComboWindow = FName(TEXT("CloseComboWindow"));
void ICombatComboManagerInterface::Execute_CloseComboWindow(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_CloseComboWindow);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->CloseComboWindow_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Closes the combo window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Closes the combo window." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "CloseComboWindow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execCloseComboWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseComboWindow_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function CloseComboWindow

// Begin Interface UCombatComboManagerInterface Function GetComboCount
struct CombatComboManagerInterface_eventGetComboCount_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	CombatComboManagerInterface_eventGetComboCount_Parms()
		: ReturnValue(0)
	{
	}
};
int32 ICombatComboManagerInterface::GetComboCount() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetComboCount instead.");
	CombatComboManagerInterface_eventGetComboCount_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatComboManagerInterface_GetComboCount = FName(TEXT("GetComboCount"));
int32 ICombatComboManagerInterface::Execute_GetComboCount(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventGetComboCount_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_GetComboCount);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetComboCount_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Provides the current Combo Count.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The current count for the combo. Zero or greater.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Provides the current Combo Count.\n\n@return\n             The current count for the combo. Zero or greater." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventGetComboCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "GetComboCount", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventGetComboCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventGetComboCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execGetComboCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetComboCount_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function GetComboCount

// Begin Interface UCombatComboManagerInterface Function GetTargetCount
struct CombatComboManagerInterface_eventGetTargetCount_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	CombatComboManagerInterface_eventGetTargetCount_Parms()
		: ReturnValue(0)
	{
	}
};
int32 ICombatComboManagerInterface::GetTargetCount() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetCount instead.");
	CombatComboManagerInterface_eventGetTargetCount_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatComboManagerInterface_GetTargetCount = FName(TEXT("GetTargetCount"));
int32 ICombatComboManagerInterface::Execute_GetTargetCount(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventGetTargetCount_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_GetTargetCount);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetCount_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Provides the amount of targets hit by the current attack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Provides the amount of targets hit by the current attack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventGetTargetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "GetTargetCount", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventGetTargetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventGetTargetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execGetTargetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTargetCount_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function GetTargetCount

// Begin Interface UCombatComboManagerInterface Function InComboWindow
struct CombatComboManagerInterface_eventInComboWindow_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatComboManagerInterface_eventInComboWindow_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatComboManagerInterface::InComboWindow() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InComboWindow instead.");
	CombatComboManagerInterface_eventInComboWindow_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatComboManagerInterface_InComboWindow = FName(TEXT("InComboWindow"));
bool ICombatComboManagerInterface::Execute_InComboWindow(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventInComboWindow_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_InComboWindow);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->InComboWindow_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the character has the combo input window open.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09True if the Combo Window is active. False otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Checks if the character has the combo input window open.\n\n@return\n             True if the Combo Window is active. False otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatComboManagerInterface_eventInComboWindow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComboManagerInterface_eventInComboWindow_Parms), &Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "InComboWindow", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventInComboWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventInComboWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execInComboWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InComboWindow_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function InComboWindow

// Begin Interface UCombatComboManagerInterface Function OpenComboWindow
void ICombatComboManagerInterface::OpenComboWindow()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OpenComboWindow instead.");
}
static FName NAME_UCombatComboManagerInterface_OpenComboWindow = FName(TEXT("OpenComboWindow"));
void ICombatComboManagerInterface::Execute_OpenComboWindow(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_OpenComboWindow);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->OpenComboWindow_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Opens the combo window, allowing chained execution of attacks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Opens the combo window, allowing chained execution of attacks." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "OpenComboWindow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execOpenComboWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenComboWindow_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function OpenComboWindow

// Begin Interface UCombatComboManagerInterface Function RegisterTargetFromCurrentAttack
struct CombatComboManagerInterface_eventRegisterTargetFromCurrentAttack_Parms
{
	const AActor* Target;
};
void ICombatComboManagerInterface::RegisterTargetFromCurrentAttack(const AActor* Target)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterTargetFromCurrentAttack instead.");
}
static FName NAME_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack = FName(TEXT("RegisterTargetFromCurrentAttack"));
void ICombatComboManagerInterface::Execute_RegisterTargetFromCurrentAttack(UObject* O, const AActor* Target)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventRegisterTargetFromCurrentAttack_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack);
	if (Func)
	{
		Parms.Target=Target;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->RegisterTargetFromCurrentAttack_Implementation(Target);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Registers a target hit during the current attack.\n\x09 *\n\x09 * @param Target\n\x09 *\x09\x09""Actor that was hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Registers a target hit during the current attack.\n\n@param Target\n             Actor that was hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventRegisterTargetFromCurrentAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "RegisterTargetFromCurrentAttack", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventRegisterTargetFromCurrentAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventRegisterTargetFromCurrentAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execRegisterTargetFromCurrentAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterTargetFromCurrentAttack_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function RegisterTargetFromCurrentAttack

// Begin Interface UCombatComboManagerInterface Function ResetCombo
void ICombatComboManagerInterface::ResetCombo()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetCombo instead.");
}
static FName NAME_UCombatComboManagerInterface_ResetCombo = FName(TEXT("ResetCombo"));
void ICombatComboManagerInterface::Execute_ResetCombo(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_ResetCombo);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->ResetCombo_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Resets the combo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Resets the combo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "ResetCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execResetCombo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCombo_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function ResetCombo

// Begin Interface UCombatComboManagerInterface Function ResetTargetCount
void ICombatComboManagerInterface::ResetTargetCount()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetTargetCount instead.");
}
static FName NAME_UCombatComboManagerInterface_ResetTargetCount = FName(TEXT("ResetTargetCount"));
void ICombatComboManagerInterface::Execute_ResetTargetCount(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_ResetTargetCount);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->ResetTargetCount_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Resets the target count.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Resets the target count." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "ResetTargetCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execResetTargetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTargetCount_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function ResetTargetCount

// Begin Interface UCombatComboManagerInterface Function SetComboCount
struct CombatComboManagerInterface_eventSetComboCount_Parms
{
	int32 NewComboCount;
};
void ICombatComboManagerInterface::SetComboCount(int32 NewComboCount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetComboCount instead.");
}
static FName NAME_UCombatComboManagerInterface_SetComboCount = FName(TEXT("SetComboCount"));
void ICombatComboManagerInterface::Execute_SetComboCount(UObject* O, int32 NewComboCount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventSetComboCount_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_SetComboCount);
	if (Func)
	{
		Parms.NewComboCount=NewComboCount;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->SetComboCount_Implementation(NewComboCount);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Allows deliberately setting the combo count to a number.\n\x09 *\n\x09 * @param NewComboCount\n\x09 *\x09\x09New count set to the combo. Must be zero or greater.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Allows deliberately setting the combo count to a number.\n\n@param NewComboCount\n             New count set to the combo. Must be zero or greater." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewComboCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::NewProp_NewComboCount = { "NewComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventSetComboCount_Parms, NewComboCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::NewProp_NewComboCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "SetComboCount", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventSetComboCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventSetComboCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execSetComboCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewComboCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetComboCount_Implementation(Z_Param_NewComboCount);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function SetComboCount

// Begin Interface UCombatComboManagerInterface Function StartCombo
struct CombatComboManagerInterface_eventStartCombo_Parms
{
	UStateTree* NewComboTree;
};
void ICombatComboManagerInterface::StartCombo(UStateTree* NewComboTree)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartCombo instead.");
}
static FName NAME_UCombatComboManagerInterface_StartCombo = FName(TEXT("StartCombo"));
void ICombatComboManagerInterface::Execute_StartCombo(UObject* O, UStateTree* NewComboTree)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventStartCombo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_StartCombo);
	if (Func)
	{
		Parms.NewComboTree=NewComboTree;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->StartCombo_Implementation(NewComboTree);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Starts the combo with a given data asset.\n\x09 *\n\x09 * @param NewComboTree\n\x09 *\x09\x09New Combo State Tree to use for the combo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Starts the combo with a given data asset.\n\n@param NewComboTree\n             New Combo State Tree to use for the combo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComboTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::NewProp_NewComboTree = { "NewComboTree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventStartCombo_Parms, NewComboTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::NewProp_NewComboTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "StartCombo", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventStartCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventStartCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execStartCombo)
{
	P_GET_OBJECT(UStateTree,Z_Param_NewComboTree);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCombo_Implementation(Z_Param_NewComboTree);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function StartCombo

// Begin Interface UCombatComboManagerInterface Function UnbindFromComboCountChangedDelegate
struct CombatComboManagerInterface_eventUnbindFromComboCountChangedDelegate_Parms
{
	const UObject* Source;
};
void ICombatComboManagerInterface::UnbindFromComboCountChangedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromComboCountChangedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate = FName(TEXT("UnbindFromComboCountChangedDelegate"));
void ICombatComboManagerInterface::Execute_UnbindFromComboCountChangedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventUnbindFromComboCountChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->UnbindFromComboCountChangedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the combo count delegate.\n\x09 * \n\x09 * @param Source\n\x09 *\x09\x09Source object that will be removed from the invocation list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the combo count delegate.\n\n@param Source\n             Source object that will be removed from the invocation list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventUnbindFromComboCountChangedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "UnbindFromComboCountChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventUnbindFromComboCountChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventUnbindFromComboCountChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execUnbindFromComboCountChangedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromComboCountChangedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function UnbindFromComboCountChangedDelegate

// Begin Interface UCombatComboManagerInterface Function UnbindFromComboFinishedDelegate
struct CombatComboManagerInterface_eventUnbindFromComboFinishedDelegate_Parms
{
	const UObject* Source;
};
void ICombatComboManagerInterface::UnbindFromComboFinishedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromComboFinishedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate = FName(TEXT("UnbindFromComboFinishedDelegate"));
void ICombatComboManagerInterface::Execute_UnbindFromComboFinishedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventUnbindFromComboFinishedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->UnbindFromComboFinishedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the combo finished delegate.\n\x09 * \n\x09 * @param Source\n\x09 *\x09\x09Source object that will be removed from the invocation list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the combo finished delegate.\n\n@param Source\n             Source object that will be removed from the invocation list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventUnbindFromComboFinishedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "UnbindFromComboFinishedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventUnbindFromComboFinishedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventUnbindFromComboFinishedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execUnbindFromComboFinishedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromComboFinishedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function UnbindFromComboFinishedDelegate

// Begin Interface UCombatComboManagerInterface Function UnbindFromComboTargetCountDelegate
struct CombatComboManagerInterface_eventUnbindFromComboTargetCountDelegate_Parms
{
	const UObject* Source;
};
void ICombatComboManagerInterface::UnbindFromComboTargetCountDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromComboTargetCountDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate = FName(TEXT("UnbindFromComboTargetCountDelegate"));
void ICombatComboManagerInterface::Execute_UnbindFromComboTargetCountDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventUnbindFromComboTargetCountDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->UnbindFromComboTargetCountDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the combo target count delegate.\n\x09 * \n\x09 * @param Source\n\x09 *\x09\x09Source object that will be removed from the invocation list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the combo target count delegate.\n\n@param Source\n             Source object that will be removed from the invocation list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventUnbindFromComboTargetCountDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "UnbindFromComboTargetCountDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventUnbindFromComboTargetCountDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventUnbindFromComboTargetCountDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execUnbindFromComboTargetCountDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromComboTargetCountDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function UnbindFromComboTargetCountDelegate

// Begin Interface UCombatComboManagerInterface Function UnbindFromComboWindowChangedDelegate
struct CombatComboManagerInterface_eventUnbindFromComboWindowChangedDelegate_Parms
{
	const UObject* Source;
};
void ICombatComboManagerInterface::UnbindFromComboWindowChangedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromComboWindowChangedDelegate instead.");
}
static FName NAME_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate = FName(TEXT("UnbindFromComboWindowChangedDelegate"));
void ICombatComboManagerInterface::Execute_UnbindFromComboWindowChangedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatComboManagerInterface::StaticClass()));
	CombatComboManagerInterface_eventUnbindFromComboWindowChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatComboManagerInterface*)(O->GetNativeInterfaceAddress(UCombatComboManagerInterface::StaticClass())))
	{
		I->UnbindFromComboWindowChangedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the combo window state delegate.\n\x09 * \n\x09 * @param Source\n\x09 *\x09\x09Source object that will be removed from the invocation list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the combo window state delegate.\n\n@param Source\n             Source object that will be removed from the invocation list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComboManagerInterface_eventUnbindFromComboWindowChangedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComboManagerInterface, nullptr, "UnbindFromComboWindowChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::PropPointers), sizeof(CombatComboManagerInterface_eventUnbindFromComboWindowChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatComboManagerInterface_eventUnbindFromComboWindowChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatComboManagerInterface::execUnbindFromComboWindowChangedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromComboWindowChangedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatComboManagerInterface Function UnbindFromComboWindowChangedDelegate

// Begin Interface UCombatComboManagerInterface
void UCombatComboManagerInterface::StaticRegisterNativesUCombatComboManagerInterface()
{
	UClass* Class = UCombatComboManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvanceCombo", &ICombatComboManagerInterface::execAdvanceCombo },
		{ "BindToComboCountChangedDelegate", &ICombatComboManagerInterface::execBindToComboCountChangedDelegate },
		{ "BindToComboFinishedDelegate", &ICombatComboManagerInterface::execBindToComboFinishedDelegate },
		{ "BindToComboWindowChangedDelegate", &ICombatComboManagerInterface::execBindToComboWindowChangedDelegate },
		{ "BindToTargetCountChangedDelegate", &ICombatComboManagerInterface::execBindToTargetCountChangedDelegate },
		{ "CloseComboWindow", &ICombatComboManagerInterface::execCloseComboWindow },
		{ "GetComboCount", &ICombatComboManagerInterface::execGetComboCount },
		{ "GetTargetCount", &ICombatComboManagerInterface::execGetTargetCount },
		{ "InComboWindow", &ICombatComboManagerInterface::execInComboWindow },
		{ "OpenComboWindow", &ICombatComboManagerInterface::execOpenComboWindow },
		{ "RegisterTargetFromCurrentAttack", &ICombatComboManagerInterface::execRegisterTargetFromCurrentAttack },
		{ "ResetCombo", &ICombatComboManagerInterface::execResetCombo },
		{ "ResetTargetCount", &ICombatComboManagerInterface::execResetTargetCount },
		{ "SetComboCount", &ICombatComboManagerInterface::execSetComboCount },
		{ "StartCombo", &ICombatComboManagerInterface::execStartCombo },
		{ "UnbindFromComboCountChangedDelegate", &ICombatComboManagerInterface::execUnbindFromComboCountChangedDelegate },
		{ "UnbindFromComboFinishedDelegate", &ICombatComboManagerInterface::execUnbindFromComboFinishedDelegate },
		{ "UnbindFromComboTargetCountDelegate", &ICombatComboManagerInterface::execUnbindFromComboTargetCountDelegate },
		{ "UnbindFromComboWindowChangedDelegate", &ICombatComboManagerInterface::execUnbindFromComboWindowChangedDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComboManagerInterface);
UClass* Z_Construct_UClass_UCombatComboManagerInterface_NoRegister()
{
	return UCombatComboManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatComboManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatComboManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_AdvanceCombo, "AdvanceCombo" }, // 1521466903
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboCountChangedDelegate, "BindToComboCountChangedDelegate" }, // 3692644851
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboFinishedDelegate, "BindToComboFinishedDelegate" }, // 2071436036
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_BindToComboWindowChangedDelegate, "BindToComboWindowChangedDelegate" }, // 1383436973
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_BindToTargetCountChangedDelegate, "BindToTargetCountChangedDelegate" }, // 3222584427
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_CloseComboWindow, "CloseComboWindow" }, // 122204913
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_GetComboCount, "GetComboCount" }, // 2059639266
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_GetTargetCount, "GetTargetCount" }, // 4142631527
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_InComboWindow, "InComboWindow" }, // 1236067653
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_OpenComboWindow, "OpenComboWindow" }, // 936540955
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_RegisterTargetFromCurrentAttack, "RegisterTargetFromCurrentAttack" }, // 299396359
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_ResetCombo, "ResetCombo" }, // 453138262
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_ResetTargetCount, "ResetTargetCount" }, // 4223630222
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_SetComboCount, "SetComboCount" }, // 3185083507
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_StartCombo, "StartCombo" }, // 3725573845
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboCountChangedDelegate, "UnbindFromComboCountChangedDelegate" }, // 2123744182
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboFinishedDelegate, "UnbindFromComboFinishedDelegate" }, // 344380451
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboTargetCountDelegate, "UnbindFromComboTargetCountDelegate" }, // 1621793935
		{ &Z_Construct_UFunction_UCombatComboManagerInterface_UnbindFromComboWindowChangedDelegate, "UnbindFromComboWindowChangedDelegate" }, // 3320635435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatComboManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatComboManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComboManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComboManagerInterface_Statics::ClassParams = {
	&UCombatComboManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComboManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComboManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComboManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatComboManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComboManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatComboManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComboManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatComboManagerInterface>()
{
	return UCombatComboManagerInterface::StaticClass();
}
UCombatComboManagerInterface::UCombatComboManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComboManagerInterface);
UCombatComboManagerInterface::~UCombatComboManagerInterface() {}
// End Interface UCombatComboManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComboManagerInterface, UCombatComboManagerInterface::StaticClass, TEXT("UCombatComboManagerInterface"), &Z_Registration_Info_UClass_UCombatComboManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComboManagerInterface), 230165360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_1517921239(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatTargetManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatTargetManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetManagerInterface_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatTargetManagerInterface Function BindToCombatTargetChangedDelegate
struct CombatTargetManagerInterface_eventBindToCombatTargetChangedDelegate_Parms
{
	FCombatTargetChangedDelegate Delegate;
};
void ICombatTargetManagerInterface::BindToCombatTargetChangedDelegate(FCombatTargetChangedDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToCombatTargetChangedDelegate instead.");
}
static FName NAME_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate = FName(TEXT("BindToCombatTargetChangedDelegate"));
void ICombatTargetManagerInterface::Execute_BindToCombatTargetChangedDelegate(UObject* O, FCombatTargetChangedDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventBindToCombatTargetChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		I->BindToCombatTargetChangedDelegate_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about changes in the combat target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about changes in the combat target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventBindToCombatTargetChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 19038005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "BindToCombatTargetChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventBindToCombatTargetChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventBindToCombatTargetChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execBindToCombatTargetChangedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCombatTargetChangedDelegate_Implementation(FCombatTargetChangedDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function BindToCombatTargetChangedDelegate

// Begin Interface UCombatTargetManagerInterface Function ClearTargetingSource
struct CombatTargetManagerInterface_eventClearTargetingSource_Parms
{
	AActor* TargetingSource;
};
void ICombatTargetManagerInterface::ClearTargetingSource(AActor* TargetingSource)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearTargetingSource instead.");
}
static FName NAME_UCombatTargetManagerInterface_ClearTargetingSource = FName(TEXT("ClearTargetingSource"));
void ICombatTargetManagerInterface::Execute_ClearTargetingSource(UObject* O, AActor* TargetingSource)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventClearTargetingSource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_ClearTargetingSource);
	if (Func)
	{
		Parms.TargetingSource=TargetingSource;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		I->ClearTargetingSource_Implementation(TargetingSource);
	}
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Notifies this component that the owner is not being targeted by a source anymore. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Notifies this component that the owner is not being targeted by a source anymore." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::NewProp_TargetingSource = { "TargetingSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventClearTargetingSource_Parms, TargetingSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::NewProp_TargetingSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "ClearTargetingSource", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventClearTargetingSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventClearTargetingSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execClearTargetingSource)
{
	P_GET_OBJECT(AActor,Z_Param_TargetingSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTargetingSource_Implementation(Z_Param_TargetingSource);
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function ClearTargetingSource

// Begin Interface UCombatTargetManagerInterface Function GetCombatTarget
struct CombatTargetManagerInterface_eventGetCombatTarget_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatTargetManagerInterface_eventGetCombatTarget_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* ICombatTargetManagerInterface::GetCombatTarget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatTarget instead.");
	CombatTargetManagerInterface_eventGetCombatTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatTargetManagerInterface_GetCombatTarget = FName(TEXT("GetCombatTarget"));
AActor* ICombatTargetManagerInterface::Execute_GetCombatTarget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventGetCombatTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_GetCombatTarget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Provides a Combat Target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Provides a Combat Target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventGetCombatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "GetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventGetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventGetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execGetCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCombatTarget_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function GetCombatTarget

// Begin Interface UCombatTargetManagerInterface Function GetTargetLockActor
struct CombatTargetManagerInterface_eventGetTargetLockActor_Parms
{
	ANinjaCombatMarkerActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatTargetManagerInterface_eventGetTargetLockActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
ANinjaCombatMarkerActor* ICombatTargetManagerInterface::GetTargetLockActor() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetLockActor instead.");
	CombatTargetManagerInterface_eventGetTargetLockActor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatTargetManagerInterface_GetTargetLockActor = FName(TEXT("GetTargetLockActor"));
ANinjaCombatMarkerActor* ICombatTargetManagerInterface::Execute_GetTargetLockActor(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventGetTargetLockActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_GetTargetLockActor);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetLockActor_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Provides the Target Lock actor used by this component, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Provides the Target Lock actor used by this component, if any." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventGetTargetLockActor_Parms, ReturnValue), Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "GetTargetLockActor", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventGetTargetLockActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventGetTargetLockActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execGetTargetLockActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANinjaCombatMarkerActor**)Z_Param__Result=P_THIS->GetTargetLockActor_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function GetTargetLockActor

// Begin Interface UCombatTargetManagerInterface Function HasCombatTarget
struct CombatTargetManagerInterface_eventHasCombatTarget_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatTargetManagerInterface_eventHasCombatTarget_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatTargetManagerInterface::HasCombatTarget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasCombatTarget instead.");
	CombatTargetManagerInterface_eventHasCombatTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatTargetManagerInterface_HasCombatTarget = FName(TEXT("HasCombatTarget"));
bool ICombatTargetManagerInterface::Execute_HasCombatTarget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventHasCombatTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_HasCombatTarget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->HasCombatTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Checks if the manager has a Combat Target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Checks if the manager has a Combat Target." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatTargetManagerInterface_eventHasCombatTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatTargetManagerInterface_eventHasCombatTarget_Parms), &Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "HasCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventHasCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventHasCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execHasCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCombatTarget_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function HasCombatTarget

// Begin Interface UCombatTargetManagerInterface Function ReceiveTargetingSource
struct CombatTargetManagerInterface_eventReceiveTargetingSource_Parms
{
	AActor* TargetingSource;
};
void ICombatTargetManagerInterface::ReceiveTargetingSource(AActor* TargetingSource)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveTargetingSource instead.");
}
static FName NAME_UCombatTargetManagerInterface_ReceiveTargetingSource = FName(TEXT("ReceiveTargetingSource"));
void ICombatTargetManagerInterface::Execute_ReceiveTargetingSource(UObject* O, AActor* TargetingSource)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventReceiveTargetingSource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_ReceiveTargetingSource);
	if (Func)
	{
		Parms.TargetingSource=TargetingSource;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		I->ReceiveTargetingSource_Implementation(TargetingSource);
	}
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Notifies this component that the owner is being targeted by a given source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Notifies this component that the owner is being targeted by a given source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::NewProp_TargetingSource = { "TargetingSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventReceiveTargetingSource_Parms, TargetingSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::NewProp_TargetingSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "ReceiveTargetingSource", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventReceiveTargetingSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventReceiveTargetingSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execReceiveTargetingSource)
{
	P_GET_OBJECT(AActor,Z_Param_TargetingSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveTargetingSource_Implementation(Z_Param_TargetingSource);
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function ReceiveTargetingSource

// Begin Interface UCombatTargetManagerInterface Function SetCombatTarget
struct CombatTargetManagerInterface_eventSetCombatTarget_Parms
{
	AActor* NewCombatTarget;
};
void ICombatTargetManagerInterface::SetCombatTarget(AActor* NewCombatTarget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCombatTarget instead.");
}
static FName NAME_UCombatTargetManagerInterface_SetCombatTarget = FName(TEXT("SetCombatTarget"));
void ICombatTargetManagerInterface::Execute_SetCombatTarget(UObject* O, AActor* NewCombatTarget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventSetCombatTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_SetCombatTarget);
	if (Func)
	{
		Parms.NewCombatTarget=NewCombatTarget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		I->SetCombatTarget_Implementation(NewCombatTarget);
	}
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Stores a Combat Target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Stores a Combat Target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::NewProp_NewCombatTarget = { "NewCombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventSetCombatTarget_Parms, NewCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::NewProp_NewCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "SetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventSetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventSetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execSetCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatTarget_Implementation(Z_Param_NewCombatTarget);
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function SetCombatTarget

// Begin Interface UCombatTargetManagerInterface Function UnbindFromTargetChangedDelegate
struct CombatTargetManagerInterface_eventUnbindFromTargetChangedDelegate_Parms
{
	const UObject* Source;
};
void ICombatTargetManagerInterface::UnbindFromTargetChangedDelegate(const UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindFromTargetChangedDelegate instead.");
}
static FName NAME_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate = FName(TEXT("UnbindFromTargetChangedDelegate"));
void ICombatTargetManagerInterface::Execute_UnbindFromTargetChangedDelegate(UObject* O, const UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetManagerInterface::StaticClass()));
	CombatTargetManagerInterface_eventUnbindFromTargetChangedDelegate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate);
	if (Func)
	{
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetManagerInterface*)(O->GetNativeInterfaceAddress(UCombatTargetManagerInterface::StaticClass())))
	{
		I->UnbindFromTargetChangedDelegate_Implementation(Source);
	}
}
struct Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Manager Interface" },
		{ "Comment", "/**\n\x09 * Unbinds an object from the Target Changed delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
		{ "ToolTip", "Unbinds an object from the Target Changed delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetManagerInterface_eventUnbindFromTargetChangedDelegate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetManagerInterface, nullptr, "UnbindFromTargetChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::PropPointers), sizeof(CombatTargetManagerInterface_eventUnbindFromTargetChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetManagerInterface_eventUnbindFromTargetChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetManagerInterface::execUnbindFromTargetChangedDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromTargetChangedDelegate_Implementation(Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UCombatTargetManagerInterface Function UnbindFromTargetChangedDelegate

// Begin Interface UCombatTargetManagerInterface
void UCombatTargetManagerInterface::StaticRegisterNativesUCombatTargetManagerInterface()
{
	UClass* Class = UCombatTargetManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToCombatTargetChangedDelegate", &ICombatTargetManagerInterface::execBindToCombatTargetChangedDelegate },
		{ "ClearTargetingSource", &ICombatTargetManagerInterface::execClearTargetingSource },
		{ "GetCombatTarget", &ICombatTargetManagerInterface::execGetCombatTarget },
		{ "GetTargetLockActor", &ICombatTargetManagerInterface::execGetTargetLockActor },
		{ "HasCombatTarget", &ICombatTargetManagerInterface::execHasCombatTarget },
		{ "ReceiveTargetingSource", &ICombatTargetManagerInterface::execReceiveTargetingSource },
		{ "SetCombatTarget", &ICombatTargetManagerInterface::execSetCombatTarget },
		{ "UnbindFromTargetChangedDelegate", &ICombatTargetManagerInterface::execUnbindFromTargetChangedDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatTargetManagerInterface);
UClass* Z_Construct_UClass_UCombatTargetManagerInterface_NoRegister()
{
	return UCombatTargetManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatTargetManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatTargetManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_BindToCombatTargetChangedDelegate, "BindToCombatTargetChangedDelegate" }, // 3011785856
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_ClearTargetingSource, "ClearTargetingSource" }, // 310476605
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_GetCombatTarget, "GetCombatTarget" }, // 218640995
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_GetTargetLockActor, "GetTargetLockActor" }, // 4285179103
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_HasCombatTarget, "HasCombatTarget" }, // 1003657701
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_ReceiveTargetingSource, "ReceiveTargetingSource" }, // 2756343601
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_SetCombatTarget, "SetCombatTarget" }, // 1918692538
		{ &Z_Construct_UFunction_UCombatTargetManagerInterface_UnbindFromTargetChangedDelegate, "UnbindFromTargetChangedDelegate" }, // 3008133031
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatTargetManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatTargetManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatTargetManagerInterface_Statics::ClassParams = {
	&UCombatTargetManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatTargetManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatTargetManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatTargetManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatTargetManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatTargetManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatTargetManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatTargetManagerInterface>()
{
	return UCombatTargetManagerInterface::StaticClass();
}
UCombatTargetManagerInterface::UCombatTargetManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatTargetManagerInterface);
UCombatTargetManagerInterface::~UCombatTargetManagerInterface() {}
// End Interface UCombatTargetManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatTargetManagerInterface, UCombatTargetManagerInterface::StaticClass, TEXT("UCombatTargetManagerInterface"), &Z_Registration_Info_UClass_UCombatTargetManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatTargetManagerInterface), 1774675437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_1641813536(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

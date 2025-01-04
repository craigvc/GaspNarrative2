// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatMovementManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatMovementManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMovementManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMovementManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatMovementManagerInterface Function HandleBlockingStateChanged
struct CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms
{
	UActorComponent* DefenseManager;
	bool bNewIsBlocking;
};
void ICombatMovementManagerInterface::HandleBlockingStateChanged(UActorComponent* DefenseManager, bool bNewIsBlocking)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleBlockingStateChanged instead.");
}
static FName NAME_UCombatMovementManagerInterface_HandleBlockingStateChanged = FName(TEXT("HandleBlockingStateChanged"));
void ICombatMovementManagerInterface::Execute_HandleBlockingStateChanged(UObject* O, UActorComponent* DefenseManager, bool bNewIsBlocking)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMovementManagerInterface::StaticClass()));
	CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMovementManagerInterface_HandleBlockingStateChanged);
	if (Func)
	{
		Parms.DefenseManager=DefenseManager;
		Parms.bNewIsBlocking=bNewIsBlocking;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMovementManagerInterface*)(O->GetNativeInterfaceAddress(UCombatMovementManagerInterface::StaticClass())))
	{
		I->HandleBlockingStateChanged_Implementation(DefenseManager,bNewIsBlocking);
	}
}
struct Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Manager Interface" },
		{ "Comment", "/**\n\x09 * Handles a change in the current Blocking state.\n\x09 *\n\x09 * By default, a character will \"walk\" while blocking, instead of moving in a \"jogging\" speed.\n\x09 * This behavior and the actual walking speed can be configured in the component's settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMovementManagerInterface.h" },
		{ "ToolTip", "Handles a change in the current Blocking state.\n\nBy default, a character will \"walk\" while blocking, instead of moving in a \"jogging\" speed.\nThis behavior and the actual walking speed can be configured in the component's settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefenseManager;
	static void NewProp_bNewIsBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsBlocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::NewProp_DefenseManager = { "DefenseManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms, DefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseManager_MetaData), NewProp_DefenseManager_MetaData) };
void Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::NewProp_bNewIsBlocking_SetBit(void* Obj)
{
	((CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms*)Obj)->bNewIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::NewProp_bNewIsBlocking = { "bNewIsBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms), &Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::NewProp_bNewIsBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::NewProp_DefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::NewProp_bNewIsBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMovementManagerInterface, nullptr, "HandleBlockingStateChanged", nullptr, nullptr, Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::PropPointers), sizeof(CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMovementManagerInterface_eventHandleBlockingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMovementManagerInterface::execHandleBlockingStateChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_DefenseManager);
	P_GET_UBOOL(Z_Param_bNewIsBlocking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBlockingStateChanged_Implementation(Z_Param_DefenseManager,Z_Param_bNewIsBlocking);
	P_NATIVE_END;
}
// End Interface UCombatMovementManagerInterface Function HandleBlockingStateChanged

// Begin Interface UCombatMovementManagerInterface Function HandleCombatTargetChanged
struct CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms
{
	UActorComponent* TargetManager;
	const AActor* CombatTarget;
	const AActor* OldCombatTarget;
};
void ICombatMovementManagerInterface::HandleCombatTargetChanged(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleCombatTargetChanged instead.");
}
static FName NAME_UCombatMovementManagerInterface_HandleCombatTargetChanged = FName(TEXT("HandleCombatTargetChanged"));
void ICombatMovementManagerInterface::Execute_HandleCombatTargetChanged(UObject* O, UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMovementManagerInterface::StaticClass()));
	CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMovementManagerInterface_HandleCombatTargetChanged);
	if (Func)
	{
		Parms.TargetManager=TargetManager;
		Parms.CombatTarget=CombatTarget;
		Parms.OldCombatTarget=OldCombatTarget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMovementManagerInterface*)(O->GetNativeInterfaceAddress(UCombatMovementManagerInterface::StaticClass())))
	{
		I->HandleCombatTargetChanged_Implementation(TargetManager,CombatTarget,OldCombatTarget);
	}
}
struct Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Manager Interface" },
		{ "Comment", "/**\n\x09 * Handles a combat target that has been changed, potentially enabling \"strafing\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMovementManagerInterface.h" },
		{ "ToolTip", "Handles a combat target that has been changed, potentially enabling \"strafing\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms, TargetManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetManager_MetaData), NewProp_TargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTarget_MetaData), NewProp_CombatTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::NewProp_OldCombatTarget = { "OldCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms, OldCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCombatTarget_MetaData), NewProp_OldCombatTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::NewProp_TargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::NewProp_OldCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMovementManagerInterface, nullptr, "HandleCombatTargetChanged", nullptr, nullptr, Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::PropPointers), sizeof(CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMovementManagerInterface_eventHandleCombatTargetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMovementManagerInterface::execHandleCombatTargetChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_TargetManager);
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_GET_OBJECT(AActor,Z_Param_OldCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCombatTargetChanged_Implementation(Z_Param_TargetManager,Z_Param_CombatTarget,Z_Param_OldCombatTarget);
	P_NATIVE_END;
}
// End Interface UCombatMovementManagerInterface Function HandleCombatTargetChanged

// Begin Interface UCombatMovementManagerInterface Function SetBlocking
struct CombatMovementManagerInterface_eventSetBlocking_Parms
{
	bool bNewIsBlocking;
};
void ICombatMovementManagerInterface::SetBlocking(bool bNewIsBlocking)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetBlocking instead.");
}
static FName NAME_UCombatMovementManagerInterface_SetBlocking = FName(TEXT("SetBlocking"));
void ICombatMovementManagerInterface::Execute_SetBlocking(UObject* O, bool bNewIsBlocking)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMovementManagerInterface::StaticClass()));
	CombatMovementManagerInterface_eventSetBlocking_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMovementManagerInterface_SetBlocking);
	if (Func)
	{
		Parms.bNewIsBlocking=bNewIsBlocking;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMovementManagerInterface*)(O->GetNativeInterfaceAddress(UCombatMovementManagerInterface::StaticClass())))
	{
		I->SetBlocking_Implementation(bNewIsBlocking);
	}
}
struct Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Manager Interface" },
		{ "Comment", "/**\n\x09 * Allows directly setting the blocking state, regardless of Gameplay Events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMovementManagerInterface.h" },
		{ "ToolTip", "Allows directly setting the blocking state, regardless of Gameplay Events." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsBlocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::NewProp_bNewIsBlocking_SetBit(void* Obj)
{
	((CombatMovementManagerInterface_eventSetBlocking_Parms*)Obj)->bNewIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::NewProp_bNewIsBlocking = { "bNewIsBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatMovementManagerInterface_eventSetBlocking_Parms), &Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::NewProp_bNewIsBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::NewProp_bNewIsBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMovementManagerInterface, nullptr, "SetBlocking", nullptr, nullptr, Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::PropPointers), sizeof(CombatMovementManagerInterface_eventSetBlocking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMovementManagerInterface_eventSetBlocking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMovementManagerInterface::execSetBlocking)
{
	P_GET_UBOOL(Z_Param_bNewIsBlocking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlocking_Implementation(Z_Param_bNewIsBlocking);
	P_NATIVE_END;
}
// End Interface UCombatMovementManagerInterface Function SetBlocking

// Begin Interface UCombatMovementManagerInterface Function SetStrafing
struct CombatMovementManagerInterface_eventSetStrafing_Parms
{
	bool bNewIsStrafing;
};
void ICombatMovementManagerInterface::SetStrafing(bool bNewIsStrafing)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetStrafing instead.");
}
static FName NAME_UCombatMovementManagerInterface_SetStrafing = FName(TEXT("SetStrafing"));
void ICombatMovementManagerInterface::Execute_SetStrafing(UObject* O, bool bNewIsStrafing)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMovementManagerInterface::StaticClass()));
	CombatMovementManagerInterface_eventSetStrafing_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMovementManagerInterface_SetStrafing);
	if (Func)
	{
		Parms.bNewIsStrafing=bNewIsStrafing;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMovementManagerInterface*)(O->GetNativeInterfaceAddress(UCombatMovementManagerInterface::StaticClass())))
	{
		I->SetStrafing_Implementation(bNewIsStrafing);
	}
}
struct Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Manager Interface" },
		{ "Comment", "/**\n\x09 * Allows directly setting the strafing state, regardless of Gameplay Events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMovementManagerInterface.h" },
		{ "ToolTip", "Allows directly setting the strafing state, regardless of Gameplay Events." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsStrafing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsStrafing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::NewProp_bNewIsStrafing_SetBit(void* Obj)
{
	((CombatMovementManagerInterface_eventSetStrafing_Parms*)Obj)->bNewIsStrafing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::NewProp_bNewIsStrafing = { "bNewIsStrafing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatMovementManagerInterface_eventSetStrafing_Parms), &Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::NewProp_bNewIsStrafing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::NewProp_bNewIsStrafing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMovementManagerInterface, nullptr, "SetStrafing", nullptr, nullptr, Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::PropPointers), sizeof(CombatMovementManagerInterface_eventSetStrafing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMovementManagerInterface_eventSetStrafing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMovementManagerInterface::execSetStrafing)
{
	P_GET_UBOOL(Z_Param_bNewIsStrafing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStrafing_Implementation(Z_Param_bNewIsStrafing);
	P_NATIVE_END;
}
// End Interface UCombatMovementManagerInterface Function SetStrafing

// Begin Interface UCombatMovementManagerInterface
void UCombatMovementManagerInterface::StaticRegisterNativesUCombatMovementManagerInterface()
{
	UClass* Class = UCombatMovementManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleBlockingStateChanged", &ICombatMovementManagerInterface::execHandleBlockingStateChanged },
		{ "HandleCombatTargetChanged", &ICombatMovementManagerInterface::execHandleCombatTargetChanged },
		{ "SetBlocking", &ICombatMovementManagerInterface::execSetBlocking },
		{ "SetStrafing", &ICombatMovementManagerInterface::execSetStrafing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatMovementManagerInterface);
UClass* Z_Construct_UClass_UCombatMovementManagerInterface_NoRegister()
{
	return UCombatMovementManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatMovementManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMovementManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatMovementManagerInterface_HandleBlockingStateChanged, "HandleBlockingStateChanged" }, // 2036276030
		{ &Z_Construct_UFunction_UCombatMovementManagerInterface_HandleCombatTargetChanged, "HandleCombatTargetChanged" }, // 738464594
		{ &Z_Construct_UFunction_UCombatMovementManagerInterface_SetBlocking, "SetBlocking" }, // 902016277
		{ &Z_Construct_UFunction_UCombatMovementManagerInterface_SetStrafing, "SetStrafing" }, // 3454194941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatMovementManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatMovementManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatMovementManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatMovementManagerInterface_Statics::ClassParams = {
	&UCombatMovementManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatMovementManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatMovementManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatMovementManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatMovementManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatMovementManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatMovementManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatMovementManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatMovementManagerInterface>()
{
	return UCombatMovementManagerInterface::StaticClass();
}
UCombatMovementManagerInterface::UCombatMovementManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatMovementManagerInterface);
UCombatMovementManagerInterface::~UCombatMovementManagerInterface() {}
// End Interface UCombatMovementManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatMovementManagerInterface, UCombatMovementManagerInterface::StaticClass, TEXT("UCombatMovementManagerInterface"), &Z_Registration_Info_UClass_UCombatMovementManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatMovementManagerInterface), 1705533943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_60683821(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

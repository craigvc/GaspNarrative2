// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/Interfaces/CombatPoolableActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatPoolableActorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UCombatPoolableActorInterface();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UCombatPoolableActorInterface_NoRegister();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin Interface UCombatPoolableActorInterface Function Activate
void ICombatPoolableActorInterface::Activate()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Activate instead.");
}
static FName NAME_UCombatPoolableActorInterface_Activate = FName(TEXT("Activate"));
void ICombatPoolableActorInterface::Execute_Activate(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_Activate);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		I->Activate_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Activates the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Activates the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_Activate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function Activate

// Begin Interface UCombatPoolableActorInterface Function Deactivate
void ICombatPoolableActorInterface::Deactivate()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deactivate instead.");
}
static FName NAME_UCombatPoolableActorInterface_Deactivate = FName(TEXT("Deactivate"));
void ICombatPoolableActorInterface::Execute_Deactivate(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_Deactivate);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		I->Deactivate_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Deactivates the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Deactivates the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function Deactivate

// Begin Interface UCombatPoolableActorInterface Function InitializedByPool
struct CombatPoolableActorInterface_eventInitializedByPool_Parms
{
	UNinjaCombatActorPoolComponent* InPool;
};
void ICombatPoolableActorInterface::InitializedByPool(UNinjaCombatActorPoolComponent* InPool)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializedByPool instead.");
}
static FName NAME_UCombatPoolableActorInterface_InitializedByPool = FName(TEXT("InitializedByPool"));
void ICombatPoolableActorInterface::Execute_InitializedByPool(UObject* O, UNinjaCombatActorPoolComponent* InPool)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	CombatPoolableActorInterface_eventInitializedByPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_InitializedByPool);
	if (Func)
	{
		Parms.InPool=InPool;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		I->InitializedByPool_Implementation(InPool);
	}
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Notifies that this actor was initialized by an Actor Pool.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Notifies that this actor was initialized by an Actor Pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPool_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::NewProp_InPool = { "InPool", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatPoolableActorInterface_eventInitializedByPool_Parms, InPool), Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPool_MetaData), NewProp_InPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::NewProp_InPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "InitializedByPool", nullptr, nullptr, Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::PropPointers), sizeof(CombatPoolableActorInterface_eventInitializedByPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPoolableActorInterface_eventInitializedByPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execInitializedByPool)
{
	P_GET_OBJECT(UNinjaCombatActorPoolComponent,Z_Param_InPool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializedByPool_Implementation(Z_Param_InPool);
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function InitializedByPool

// Begin Interface UCombatPoolableActorInterface Function IsActive
struct CombatPoolableActorInterface_eventIsActive_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPoolableActorInterface_eventIsActive_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatPoolableActorInterface::IsActive() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsActive instead.");
	CombatPoolableActorInterface_eventIsActive_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPoolableActorInterface_IsActive = FName(TEXT("IsActive"));
bool ICombatPoolableActorInterface::Execute_IsActive(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	CombatPoolableActorInterface_eventIsActive_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_IsActive);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsActive_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Checks if the actor is currently active.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Checks if the actor is currently active." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatPoolableActorInterface_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatPoolableActorInterface_eventIsActive_Parms), &Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::PropPointers), sizeof(CombatPoolableActorInterface_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPoolableActorInterface_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function IsActive

// Begin Interface UCombatPoolableActorInterface Function IsInactive
struct CombatPoolableActorInterface_eventIsInactive_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPoolableActorInterface_eventIsInactive_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatPoolableActorInterface::IsInactive() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInactive instead.");
	CombatPoolableActorInterface_eventIsInactive_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPoolableActorInterface_IsInactive = FName(TEXT("IsInactive"));
bool ICombatPoolableActorInterface::Execute_IsInactive(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	CombatPoolableActorInterface_eventIsInactive_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_IsInactive);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInactive_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Checks if this actor is currently inactive.\n\x09 * \n\x09 * This can also mean that the actor is just not managed by a pool, which means it will never\n\x09 * be \"reserved\" or \"active\", even though it can still be fully functional.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Checks if this actor is currently inactive.\n\nThis can also mean that the actor is just not managed by a pool, which means it will never\nbe \"reserved\" or \"active\", even though it can still be fully functional." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatPoolableActorInterface_eventIsInactive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatPoolableActorInterface_eventIsInactive_Parms), &Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "IsInactive", nullptr, nullptr, Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::PropPointers), sizeof(CombatPoolableActorInterface_eventIsInactive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPoolableActorInterface_eventIsInactive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execIsInactive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInactive_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function IsInactive

// Begin Interface UCombatPoolableActorInterface Function IsManagedByPool
struct CombatPoolableActorInterface_eventIsManagedByPool_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPoolableActorInterface_eventIsManagedByPool_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatPoolableActorInterface::IsManagedByPool() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsManagedByPool instead.");
	CombatPoolableActorInterface_eventIsManagedByPool_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPoolableActorInterface_IsManagedByPool = FName(TEXT("IsManagedByPool"));
bool ICombatPoolableActorInterface::Execute_IsManagedByPool(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	CombatPoolableActorInterface_eventIsManagedByPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_IsManagedByPool);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsManagedByPool_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Informs if this Cast Actor is managed by an Actor Pool.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Informs if this Cast Actor is managed by an Actor Pool." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatPoolableActorInterface_eventIsManagedByPool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatPoolableActorInterface_eventIsManagedByPool_Parms), &Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "IsManagedByPool", nullptr, nullptr, Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::PropPointers), sizeof(CombatPoolableActorInterface_eventIsManagedByPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPoolableActorInterface_eventIsManagedByPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execIsManagedByPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsManagedByPool_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function IsManagedByPool

// Begin Interface UCombatPoolableActorInterface Function IsReserved
struct CombatPoolableActorInterface_eventIsReserved_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPoolableActorInterface_eventIsReserved_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatPoolableActorInterface::IsReserved() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsReserved instead.");
	CombatPoolableActorInterface_eventIsReserved_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPoolableActorInterface_IsReserved = FName(TEXT("IsReserved"));
bool ICombatPoolableActorInterface::Execute_IsReserved(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	CombatPoolableActorInterface_eventIsReserved_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_IsReserved);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsReserved_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Checks if this actor is currently reserved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Checks if this actor is currently reserved." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatPoolableActorInterface_eventIsReserved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatPoolableActorInterface_eventIsReserved_Parms), &Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "IsReserved", nullptr, nullptr, Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::PropPointers), sizeof(CombatPoolableActorInterface_eventIsReserved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPoolableActorInterface_eventIsReserved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execIsReserved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReserved_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function IsReserved

// Begin Interface UCombatPoolableActorInterface Function NotifyPoolDestroyed
void ICombatPoolableActorInterface::NotifyPoolDestroyed()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyPoolDestroyed instead.");
}
static FName NAME_UCombatPoolableActorInterface_NotifyPoolDestroyed = FName(TEXT("NotifyPoolDestroyed"));
void ICombatPoolableActorInterface::Execute_NotifyPoolDestroyed(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_NotifyPoolDestroyed);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		I->NotifyPoolDestroyed_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Notifies that the owning pool has been destroyed.\n\x09 * This should be taken into consideration when the actor deactivates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Notifies that the owning pool has been destroyed.\nThis should be taken into consideration when the actor deactivates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "NotifyPoolDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execNotifyPoolDestroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyPoolDestroyed_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function NotifyPoolDestroyed

// Begin Interface UCombatPoolableActorInterface Function Reserve
void ICombatPoolableActorInterface::Reserve()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Reserve instead.");
}
static FName NAME_UCombatPoolableActorInterface_Reserve = FName(TEXT("Reserve"));
void ICombatPoolableActorInterface::Execute_Reserve(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolableActorInterface_Reserve);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatPoolableActorInterface*)(O->GetNativeInterfaceAddress(UCombatPoolableActorInterface::StaticClass())))
	{
		I->Reserve_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Poolable Actor Interface" },
		{ "Comment", "/**\n\x09 * Reserves the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
		{ "ToolTip", "Reserves the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolableActorInterface, nullptr, "Reserve", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolableActorInterface::execReserve)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reserve_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolableActorInterface Function Reserve

// Begin Interface UCombatPoolableActorInterface
void UCombatPoolableActorInterface::StaticRegisterNativesUCombatPoolableActorInterface()
{
	UClass* Class = UCombatPoolableActorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &ICombatPoolableActorInterface::execActivate },
		{ "Deactivate", &ICombatPoolableActorInterface::execDeactivate },
		{ "InitializedByPool", &ICombatPoolableActorInterface::execInitializedByPool },
		{ "IsActive", &ICombatPoolableActorInterface::execIsActive },
		{ "IsInactive", &ICombatPoolableActorInterface::execIsInactive },
		{ "IsManagedByPool", &ICombatPoolableActorInterface::execIsManagedByPool },
		{ "IsReserved", &ICombatPoolableActorInterface::execIsReserved },
		{ "NotifyPoolDestroyed", &ICombatPoolableActorInterface::execNotifyPoolDestroyed },
		{ "Reserve", &ICombatPoolableActorInterface::execReserve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatPoolableActorInterface);
UClass* Z_Construct_UClass_UCombatPoolableActorInterface_NoRegister()
{
	return UCombatPoolableActorInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatPoolableActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolableActorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_Activate, "Activate" }, // 2388320012
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_Deactivate, "Deactivate" }, // 1235128961
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_InitializedByPool, "InitializedByPool" }, // 3702770272
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_IsActive, "IsActive" }, // 3822607033
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_IsInactive, "IsInactive" }, // 3560578788
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_IsManagedByPool, "IsManagedByPool" }, // 3351358766
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_IsReserved, "IsReserved" }, // 1277533835
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_NotifyPoolDestroyed, "NotifyPoolDestroyed" }, // 3561879087
		{ &Z_Construct_UFunction_UCombatPoolableActorInterface_Reserve, "Reserve" }, // 2744401504
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatPoolableActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatPoolableActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatPoolableActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatPoolableActorInterface_Statics::ClassParams = {
	&UCombatPoolableActorInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatPoolableActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatPoolableActorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatPoolableActorInterface()
{
	if (!Z_Registration_Info_UClass_UCombatPoolableActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatPoolableActorInterface.OuterSingleton, Z_Construct_UClass_UCombatPoolableActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatPoolableActorInterface.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<UCombatPoolableActorInterface>()
{
	return UCombatPoolableActorInterface::StaticClass();
}
UCombatPoolableActorInterface::UCombatPoolableActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatPoolableActorInterface);
UCombatPoolableActorInterface::~UCombatPoolableActorInterface() {}
// End Interface UCombatPoolableActorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatPoolableActorInterface, UCombatPoolableActorInterface::StaticClass, TEXT("UCombatPoolableActorInterface"), &Z_Registration_Info_UClass_UCombatPoolableActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatPoolableActorInterface), 1828283635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_1557048283(TEXT("/Script/NinjaCombatActorPool"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

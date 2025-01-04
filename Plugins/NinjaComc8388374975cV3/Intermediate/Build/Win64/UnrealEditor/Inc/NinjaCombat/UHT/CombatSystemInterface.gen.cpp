// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatSystemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatSystemInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatSystemInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatSystemInterface Function GetCombatAnimInstance
struct CombatSystemInterface_eventGetCombatAnimInstance_Parms
{
	UAnimInstance* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetCombatAnimInstance_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAnimInstance* ICombatSystemInterface::GetCombatAnimInstance() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatAnimInstance instead.");
	CombatSystemInterface_eventGetCombatAnimInstance_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetCombatAnimInstance = FName(TEXT("GetCombatAnimInstance"));
UAnimInstance* ICombatSystemInterface::Execute_GetCombatAnimInstance(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetCombatAnimInstance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetCombatAnimInstance);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatAnimInstance_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Retrieves the Animation Instance that should be used for Combat Animations.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09The Animation Instance that should be used for Animation Montages and Linking Layers.\n\x09 *\x09\x09The way this is retrieved can be adjusted by the \"FindAnimInstance\" function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Retrieves the Animation Instance that should be used for Combat Animations.\n\n@return\n             The Animation Instance that should be used for Animation Montages and Linking Layers.\n             The way this is retrieved can be adjusted by the \"FindAnimInstance\" function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetCombatAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetCombatAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetCombatAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetCombatAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetCombatAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimInstance**)Z_Param__Result=P_THIS->GetCombatAnimInstance_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetCombatAnimInstance

// Begin Interface UCombatSystemInterface Function GetCombatForwardReference
struct CombatSystemInterface_eventGetCombatForwardReference_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetCombatForwardReference_Parms()
		: ReturnValue(NULL)
	{
	}
};
USceneComponent* ICombatSystemInterface::GetCombatForwardReference() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatForwardReference instead.");
	CombatSystemInterface_eventGetCombatForwardReference_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetCombatForwardReference = FName(TEXT("GetCombatForwardReference"));
USceneComponent* ICombatSystemInterface::Execute_GetCombatForwardReference(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetCombatForwardReference_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetCombatForwardReference);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatForwardReference_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provide a Scene Component on the character that is always pointing forward.\n\x09 * \n\x09 * Tip: If you are using the Forward Reference with Ninja Input, this can be the same\n\x09 * UArrowComponent, as the expectations of that component are the same for both systems.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09""A Scene Component that can be used by abilities or other modules to compare\n\x09 *\x09\x09""angles, determine a general input and so on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provide a Scene Component on the character that is always pointing forward.\n\nTip: If you are using the Forward Reference with Ninja Input, this can be the same\nUArrowComponent, as the expectations of that component are the same for both systems.\n\n@return\n             A Scene Component that can be used by abilities or other modules to compare\n             angles, determine a general input and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetCombatForwardReference_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetCombatForwardReference", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetCombatForwardReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetCombatForwardReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetCombatForwardReference)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetCombatForwardReference_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetCombatForwardReference

// Begin Interface UCombatSystemInterface Function GetCombatManager
struct CombatSystemInterface_eventGetCombatManager_Parms
{
	UNinjaCombatManagerComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetCombatManager_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaCombatManagerComponent* ICombatSystemInterface::GetCombatManager() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatManager instead.");
	CombatSystemInterface_eventGetCombatManager_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetCombatManager = FName(TEXT("GetCombatManager"));
UNinjaCombatManagerComponent* ICombatSystemInterface::Execute_GetCombatManager(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetCombatManager_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetCombatManager);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatManager_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the main Combat Manager for the owner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the main Combat Manager for the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetCombatManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetCombatManager", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetCombatManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetCombatManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetCombatManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatManagerComponent**)Z_Param__Result=P_THIS->GetCombatManager_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetCombatManager

// Begin Interface UCombatSystemInterface Function GetCombatMesh
struct CombatSystemInterface_eventGetCombatMesh_Parms
{
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetCombatMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
USkeletalMeshComponent* ICombatSystemInterface::GetCombatMesh() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatMesh instead.");
	CombatSystemInterface_eventGetCombatMesh_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetCombatMesh = FName(TEXT("GetCombatMesh"));
USkeletalMeshComponent* ICombatSystemInterface::Execute_GetCombatMesh(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetCombatMesh_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetCombatMesh);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatMesh_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Mesh Component determined to be the main Mesh for the owner.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The Skeletal Mesh Component configured as main combat mesh in the owner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Mesh Component determined to be the main Mesh for the owner.\n\n@return\n             The Skeletal Mesh Component configured as main combat mesh in the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetCombatMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetCombatMesh", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetCombatMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetCombatMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetCombatMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetCombatMesh_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetCombatMesh

// Begin Interface UCombatSystemInterface Function GetComboManagerComponent
struct CombatSystemInterface_eventGetComboManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetComboManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetComboManagerComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetComboManagerComponent instead.");
	CombatSystemInterface_eventGetComboManagerComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetComboManagerComponent = FName(TEXT("GetComboManagerComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetComboManagerComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetComboManagerComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetComboManagerComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetComboManagerComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Combo Manager component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The optional Combo Manager Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatComboManagerInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Combo Manager component.\n\n@return\n             The optional Combo Manager Component, which is an Actor Component and also\n             a valid implementation of the CombatComboManagerInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetComboManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetComboManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetComboManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetComboManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetComboManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetComboManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetComboManagerComponent

// Begin Interface UCombatSystemInterface Function GetDamageManagerComponent
struct CombatSystemInterface_eventGetDamageManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetDamageManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetDamageManagerComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDamageManagerComponent instead.");
	CombatSystemInterface_eventGetDamageManagerComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetDamageManagerComponent = FName(TEXT("GetDamageManagerComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetDamageManagerComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetDamageManagerComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetDamageManagerComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDamageManagerComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Damage Manager component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The mandatory Damage Manager Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatDamageManagerInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Damage Manager component.\n\n@return\n             The mandatory Damage Manager Component, which is an Actor Component and also\n             a valid implementation of the CombatDamageManagerInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetDamageManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetDamageManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetDamageManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetDamageManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetDamageManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetDamageManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetDamageManagerComponent

// Begin Interface UCombatSystemInterface Function GetDefenseManagerComponent
struct CombatSystemInterface_eventGetDefenseManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetDefenseManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetDefenseManagerComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefenseManagerComponent instead.");
	CombatSystemInterface_eventGetDefenseManagerComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetDefenseManagerComponent = FName(TEXT("GetDefenseManagerComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetDefenseManagerComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetDefenseManagerComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetDefenseManagerComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDefenseManagerComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Defense Manager component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The mandatory Defense Manager Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatDefenseManagerInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Defense Manager component.\n\n@return\n             The mandatory Defense Manager Component, which is an Actor Component and also\n             a valid implementation of the CombatDefenseManagerInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetDefenseManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetDefenseManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetDefenseManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetDefenseManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetDefenseManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetDefenseManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetDefenseManagerComponent

// Begin Interface UCombatSystemInterface Function GetDissolveManagerComponent
struct CombatSystemInterface_eventGetDissolveManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetDissolveManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetDissolveManagerComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDissolveManagerComponent instead.");
	CombatSystemInterface_eventGetDissolveManagerComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetDissolveManagerComponent = FName(TEXT("GetDissolveManagerComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetDissolveManagerComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetDissolveManagerComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetDissolveManagerComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDissolveManagerComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Dissolve Manager component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The optional Dissolve Manager Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatDissolveManagerInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Dissolve Manager component.\n\n@return\n             The optional Dissolve Manager Component, which is an Actor Component and also\n             a valid implementation of the CombatDissolveManagerInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetDissolveManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetDissolveManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetDissolveManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetDissolveManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetDissolveManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetDissolveManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetDissolveManagerComponent

// Begin Interface UCombatSystemInterface Function GetMotionWarpingComponent
struct CombatSystemInterface_eventGetMotionWarpingComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetMotionWarpingComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetMotionWarpingComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMotionWarpingComponent instead.");
	CombatSystemInterface_eventGetMotionWarpingComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetMotionWarpingComponent = FName(TEXT("GetMotionWarpingComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetMotionWarpingComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetMotionWarpingComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetMotionWarpingComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetMotionWarpingComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Motion Warping component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The optional Motion Warping Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatMotionWarpingInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Motion Warping component.\n\n@return\n             The optional Motion Warping Component, which is an Actor Component and also\n             a valid implementation of the CombatMotionWarpingInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetMotionWarpingComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetMotionWarpingComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetMotionWarpingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetMotionWarpingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetMotionWarpingComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetMotionWarpingComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetMotionWarpingComponent

// Begin Interface UCombatSystemInterface Function GetPhysicalAnimationComponent
struct CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetPhysicalAnimationComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPhysicalAnimationComponent instead.");
	CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetPhysicalAnimationComponent = FName(TEXT("GetPhysicalAnimationComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetPhysicalAnimationComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetPhysicalAnimationComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetPhysicalAnimationComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Physical Animation component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The optional Physical Animation Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatPhysicalAnimationInterface interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Physical Animation component.\n\n@return\n             The optional Physical Animation Component, which is an Actor Component and also\n             a valid implementation of the CombatPhysicalAnimationInterface interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetPhysicalAnimationComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetPhysicalAnimationComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetPhysicalAnimationComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetPhysicalAnimationComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetPhysicalAnimationComponent

// Begin Interface UCombatSystemInterface Function GetTargetManagerComponent
struct CombatSystemInterface_eventGetTargetManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetTargetManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetTargetManagerComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetManagerComponent instead.");
	CombatSystemInterface_eventGetTargetManagerComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetTargetManagerComponent = FName(TEXT("GetTargetManagerComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetTargetManagerComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetTargetManagerComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetTargetManagerComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetManagerComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Target Manager component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The mandatory Target Manager Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatTargetManagerInterface interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Target Manager component.\n\n@return\n             The mandatory Target Manager Component, which is an Actor Component and also\n             a valid implementation of the CombatTargetManagerInterface interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetTargetManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetTargetManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetTargetManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetTargetManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetTargetManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetTargetManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetTargetManagerComponent

// Begin Interface UCombatSystemInterface Function GetWeaponManagerComponent
struct CombatSystemInterface_eventGetWeaponManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatSystemInterface_eventGetWeaponManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorComponent* ICombatSystemInterface::GetWeaponManagerComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWeaponManagerComponent instead.");
	CombatSystemInterface_eventGetWeaponManagerComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatSystemInterface_GetWeaponManagerComponent = FName(TEXT("GetWeaponManagerComponent"));
UActorComponent* ICombatSystemInterface::Execute_GetWeaponManagerComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatSystemInterface::StaticClass()));
	CombatSystemInterface_eventGetWeaponManagerComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatSystemInterface_GetWeaponManagerComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatSystemInterface*)(O->GetNativeInterfaceAddress(UCombatSystemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetWeaponManagerComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat System Interface" },
		{ "Comment", "/**\n\x09 * Provides the Weapon Manager component.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The mandatory Weapon Manager Component, which is an Actor Component and also\n\x09 *\x09\x09""a valid implementation of the CombatWeaponManagerInterface interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
		{ "ToolTip", "Provides the Weapon Manager component.\n\n@return\n             The mandatory Weapon Manager Component, which is an Actor Component and also\n             a valid implementation of the CombatWeaponManagerInterface interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatSystemInterface_eventGetWeaponManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatSystemInterface, nullptr, "GetWeaponManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::PropPointers), sizeof(CombatSystemInterface_eventGetWeaponManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatSystemInterface_eventGetWeaponManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatSystemInterface::execGetWeaponManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetWeaponManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatSystemInterface Function GetWeaponManagerComponent

// Begin Interface UCombatSystemInterface
void UCombatSystemInterface::StaticRegisterNativesUCombatSystemInterface()
{
	UClass* Class = UCombatSystemInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCombatAnimInstance", &ICombatSystemInterface::execGetCombatAnimInstance },
		{ "GetCombatForwardReference", &ICombatSystemInterface::execGetCombatForwardReference },
		{ "GetCombatManager", &ICombatSystemInterface::execGetCombatManager },
		{ "GetCombatMesh", &ICombatSystemInterface::execGetCombatMesh },
		{ "GetComboManagerComponent", &ICombatSystemInterface::execGetComboManagerComponent },
		{ "GetDamageManagerComponent", &ICombatSystemInterface::execGetDamageManagerComponent },
		{ "GetDefenseManagerComponent", &ICombatSystemInterface::execGetDefenseManagerComponent },
		{ "GetDissolveManagerComponent", &ICombatSystemInterface::execGetDissolveManagerComponent },
		{ "GetMotionWarpingComponent", &ICombatSystemInterface::execGetMotionWarpingComponent },
		{ "GetPhysicalAnimationComponent", &ICombatSystemInterface::execGetPhysicalAnimationComponent },
		{ "GetTargetManagerComponent", &ICombatSystemInterface::execGetTargetManagerComponent },
		{ "GetWeaponManagerComponent", &ICombatSystemInterface::execGetWeaponManagerComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatSystemInterface);
UClass* Z_Construct_UClass_UCombatSystemInterface_NoRegister()
{
	return UCombatSystemInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatSystemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatSystemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetCombatAnimInstance, "GetCombatAnimInstance" }, // 3601179789
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetCombatForwardReference, "GetCombatForwardReference" }, // 827372368
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetCombatManager, "GetCombatManager" }, // 3100100200
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetCombatMesh, "GetCombatMesh" }, // 3741429525
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetComboManagerComponent, "GetComboManagerComponent" }, // 776982433
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetDamageManagerComponent, "GetDamageManagerComponent" }, // 923570178
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetDefenseManagerComponent, "GetDefenseManagerComponent" }, // 2851570408
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetDissolveManagerComponent, "GetDissolveManagerComponent" }, // 4186475389
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetMotionWarpingComponent, "GetMotionWarpingComponent" }, // 2225367200
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetPhysicalAnimationComponent, "GetPhysicalAnimationComponent" }, // 2443068400
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetTargetManagerComponent, "GetTargetManagerComponent" }, // 199734813
		{ &Z_Construct_UFunction_UCombatSystemInterface_GetWeaponManagerComponent, "GetWeaponManagerComponent" }, // 755443873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatSystemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatSystemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSystemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatSystemInterface_Statics::ClassParams = {
	&UCombatSystemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatSystemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatSystemInterface()
{
	if (!Z_Registration_Info_UClass_UCombatSystemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatSystemInterface.OuterSingleton, Z_Construct_UClass_UCombatSystemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatSystemInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatSystemInterface>()
{
	return UCombatSystemInterface::StaticClass();
}
UCombatSystemInterface::UCombatSystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatSystemInterface);
UCombatSystemInterface::~UCombatSystemInterface() {}
// End Interface UCombatSystemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatSystemInterface, UCombatSystemInterface::StaticClass, TEXT("UCombatSystemInterface"), &Z_Registration_Info_UClass_UCombatSystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatSystemInterface), 734844650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_2022497734(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

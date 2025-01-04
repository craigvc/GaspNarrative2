// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatPhysicalAnimationInterface.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "NinjaCombat/Public/Types/FCombatPhysicalAnimationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatPhysicalAnimationInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatPhysicalAnimationInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatPhysicalAnimationInterface_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatPhysicalAnimationInterface Function GetImpactReactionTimeLeft
struct CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatPhysicalAnimationInterface::GetImpactReactionTimeLeft() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetImpactReactionTimeLeft instead.");
	CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft = FName(TEXT("GetImpactReactionTimeLeft"));
float ICombatPhysicalAnimationInterface::Execute_GetImpactReactionTimeLeft(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPhysicalAnimationInterface::StaticClass()));
	CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPhysicalAnimationInterface*)(O->GetNativeInterfaceAddress(UCombatPhysicalAnimationInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetImpactReactionTimeLeft_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physical Animation Interface" },
		{ "Comment", "/**\n\x09 * Informs how much time left for an ongoing reaction. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatPhysicalAnimationInterface.h" },
		{ "ToolTip", "Informs how much time left for an ongoing reaction." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPhysicalAnimationInterface, nullptr, "GetImpactReactionTimeLeft", nullptr, nullptr, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::PropPointers), sizeof(CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPhysicalAnimationInterface_eventGetImpactReactionTimeLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPhysicalAnimationInterface::execGetImpactReactionTimeLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetImpactReactionTimeLeft_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPhysicalAnimationInterface Function GetImpactReactionTimeLeft

// Begin Interface UCombatPhysicalAnimationInterface Function HandleImpact
struct CombatPhysicalAnimationInterface_eventHandleImpact_Parms
{
	const AActor* EffectCauser;
	FGameplayEffectContextHandle Context;
};
void ICombatPhysicalAnimationInterface::HandleImpact(const AActor* EffectCauser, FGameplayEffectContextHandle const& Context)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleImpact instead.");
}
static FName NAME_UCombatPhysicalAnimationInterface_HandleImpact = FName(TEXT("HandleImpact"));
void ICombatPhysicalAnimationInterface::Execute_HandleImpact(UObject* O, const AActor* EffectCauser, FGameplayEffectContextHandle const& Context)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPhysicalAnimationInterface::StaticClass()));
	CombatPhysicalAnimationInterface_eventHandleImpact_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPhysicalAnimationInterface_HandleImpact);
	if (Func)
	{
		Parms.EffectCauser=EffectCauser;
		Parms.Context=Context;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatPhysicalAnimationInterface*)(O->GetNativeInterfaceAddress(UCombatPhysicalAnimationInterface::StaticClass())))
	{
		I->HandleImpact_Implementation(EffectCauser,Context);
	}
}
struct Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physical Animation Interface" },
		{ "Comment", "/**\n\x09 * Evaluates a given Effect Context and plays Physical Animations.\n\x09 *\n\x09 * @param EffectCauser\x09""Actor that generated this impact.\n\x09 * @param Context\x09\x09""Effect Context that generated this impact.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatPhysicalAnimationInterface.h" },
		{ "ToolTip", "Evaluates a given Effect Context and plays Physical Animations.\n\n@param EffectCauser  Actor that generated this impact.\n@param Context               Effect Context that generated this impact." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectCauser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatPhysicalAnimationInterface_eventHandleImpact_Parms, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectCauser_MetaData), NewProp_EffectCauser_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatPhysicalAnimationInterface_eventHandleImpact_Parms, Context), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1628379207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::NewProp_EffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPhysicalAnimationInterface, nullptr, "HandleImpact", nullptr, nullptr, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::PropPointers), sizeof(CombatPhysicalAnimationInterface_eventHandleImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPhysicalAnimationInterface_eventHandleImpact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPhysicalAnimationInterface::execHandleImpact)
{
	P_GET_OBJECT(AActor,Z_Param_EffectCauser);
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpact_Implementation(Z_Param_EffectCauser,Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Interface UCombatPhysicalAnimationInterface Function HandleImpact

// Begin Interface UCombatPhysicalAnimationInterface Function IsReactingToImpact
struct CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatPhysicalAnimationInterface::IsReactingToImpact() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsReactingToImpact instead.");
	CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPhysicalAnimationInterface_IsReactingToImpact = FName(TEXT("IsReactingToImpact"));
bool ICombatPhysicalAnimationInterface::Execute_IsReactingToImpact(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPhysicalAnimationInterface::StaticClass()));
	CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPhysicalAnimationInterface_IsReactingToImpact);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPhysicalAnimationInterface*)(O->GetNativeInterfaceAddress(UCombatPhysicalAnimationInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsReactingToImpact_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physical Animation Interface" },
		{ "Comment", "/**\n\x09 * Informs if this component is reacting to damage. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatPhysicalAnimationInterface.h" },
		{ "ToolTip", "Informs if this component is reacting to damage." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms), &Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPhysicalAnimationInterface, nullptr, "IsReactingToImpact", nullptr, nullptr, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::PropPointers), sizeof(CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPhysicalAnimationInterface_eventIsReactingToImpact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPhysicalAnimationInterface::execIsReactingToImpact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReactingToImpact_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPhysicalAnimationInterface Function IsReactingToImpact

// Begin Interface UCombatPhysicalAnimationInterface Function SetImpactSettings
struct CombatPhysicalAnimationInterface_eventSetImpactSettings_Parms
{
	FCombatPhysicalAnimationSettings NewSettings;
};
void ICombatPhysicalAnimationInterface::SetImpactSettings(FCombatPhysicalAnimationSettings const& NewSettings)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetImpactSettings instead.");
}
static FName NAME_UCombatPhysicalAnimationInterface_SetImpactSettings = FName(TEXT("SetImpactSettings"));
void ICombatPhysicalAnimationInterface::Execute_SetImpactSettings(UObject* O, FCombatPhysicalAnimationSettings const& NewSettings)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPhysicalAnimationInterface::StaticClass()));
	CombatPhysicalAnimationInterface_eventSetImpactSettings_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPhysicalAnimationInterface_SetImpactSettings);
	if (Func)
	{
		Parms.NewSettings=NewSettings;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatPhysicalAnimationInterface*)(O->GetNativeInterfaceAddress(UCombatPhysicalAnimationInterface::StaticClass())))
	{
		I->SetImpactSettings_Implementation(NewSettings);
	}
}
struct Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physical Animation Interface" },
		{ "Comment", "/**\n\x09 * Provides a setup that will override the current settings.\n\x09 * \n\x09 * @param NewSettings\n\x09 *\x09\x09New Physical Animation Settings used by the component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatPhysicalAnimationInterface.h" },
		{ "ToolTip", "Provides a setup that will override the current settings.\n\n@param NewSettings\n             New Physical Animation Settings used by the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatPhysicalAnimationInterface_eventSetImpactSettings_Parms, NewSettings), Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSettings_MetaData), NewProp_NewSettings_MetaData) }; // 4045535615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::NewProp_NewSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPhysicalAnimationInterface, nullptr, "SetImpactSettings", nullptr, nullptr, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::PropPointers), sizeof(CombatPhysicalAnimationInterface_eventSetImpactSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPhysicalAnimationInterface_eventSetImpactSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPhysicalAnimationInterface::execSetImpactSettings)
{
	P_GET_STRUCT_REF(FCombatPhysicalAnimationSettings,Z_Param_Out_NewSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImpactSettings_Implementation(Z_Param_Out_NewSettings);
	P_NATIVE_END;
}
// End Interface UCombatPhysicalAnimationInterface Function SetImpactSettings

// Begin Interface UCombatPhysicalAnimationInterface
void UCombatPhysicalAnimationInterface::StaticRegisterNativesUCombatPhysicalAnimationInterface()
{
	UClass* Class = UCombatPhysicalAnimationInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetImpactReactionTimeLeft", &ICombatPhysicalAnimationInterface::execGetImpactReactionTimeLeft },
		{ "HandleImpact", &ICombatPhysicalAnimationInterface::execHandleImpact },
		{ "IsReactingToImpact", &ICombatPhysicalAnimationInterface::execIsReactingToImpact },
		{ "SetImpactSettings", &ICombatPhysicalAnimationInterface::execSetImpactSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatPhysicalAnimationInterface);
UClass* Z_Construct_UClass_UCombatPhysicalAnimationInterface_NoRegister()
{
	return UCombatPhysicalAnimationInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatPhysicalAnimationInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatPhysicalAnimationInterface_GetImpactReactionTimeLeft, "GetImpactReactionTimeLeft" }, // 1191840036
		{ &Z_Construct_UFunction_UCombatPhysicalAnimationInterface_HandleImpact, "HandleImpact" }, // 1638162367
		{ &Z_Construct_UFunction_UCombatPhysicalAnimationInterface_IsReactingToImpact, "IsReactingToImpact" }, // 3138411083
		{ &Z_Construct_UFunction_UCombatPhysicalAnimationInterface_SetImpactSettings, "SetImpactSettings" }, // 390132473
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatPhysicalAnimationInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics::ClassParams = {
	&UCombatPhysicalAnimationInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatPhysicalAnimationInterface()
{
	if (!Z_Registration_Info_UClass_UCombatPhysicalAnimationInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatPhysicalAnimationInterface.OuterSingleton, Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatPhysicalAnimationInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatPhysicalAnimationInterface>()
{
	return UCombatPhysicalAnimationInterface::StaticClass();
}
UCombatPhysicalAnimationInterface::UCombatPhysicalAnimationInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatPhysicalAnimationInterface);
UCombatPhysicalAnimationInterface::~UCombatPhysicalAnimationInterface() {}
// End Interface UCombatPhysicalAnimationInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatPhysicalAnimationInterface, UCombatPhysicalAnimationInterface::StaticClass, TEXT("UCombatPhysicalAnimationInterface"), &Z_Registration_Info_UClass_UCombatPhysicalAnimationInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatPhysicalAnimationInterface), 4053396698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_688269695(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

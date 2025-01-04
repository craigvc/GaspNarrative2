// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Components/NinjaInputManagerComponent.h"
#include "EnhancedInput/Public/InputAction.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "NinjaInput/Public/Types/FProcessedInputSetup.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputModeAwareInterface_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputBufferComponent();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister();
NINJAINPUT_API UEnum* Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior();
NINJAINPUT_API UFunction* Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FProcessedInputSetup();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Delegate FInputModeChangedSignature
struct Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics
{
	struct NinjaInputManagerComponent_eventInputModeChangedSignature_Parms
	{
		FGameplayTag InputMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventInputModeChangedSignature_Parms, InputMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::NewProp_InputMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "InputModeChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::NinjaInputManagerComponent_eventInputModeChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::NinjaInputManagerComponent_eventInputModeChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInputManagerComponent::FInputModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& InputModeChangedSignature, FGameplayTag InputMode)
{
	struct NinjaInputManagerComponent_eventInputModeChangedSignature_Parms
	{
		FGameplayTag InputMode;
	};
	NinjaInputManagerComponent_eventInputModeChangedSignature_Parms Parms;
	Parms.InputMode=InputMode;
	InputModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInputModeChangedSignature

// Begin Class UNinjaInputManagerComponent Function AddInputSetupData
struct Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics
{
	struct NinjaInputManagerComponent_eventAddInputSetupData_Parms
	{
		const UNinjaInputSetupDataAsset* SetupData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n     * Processes a Setup Data, registering its Input Contexts and Handlers.\n     *\n     * @param SetupData\n     *      The new setup data to be added. If this setup Data was already registered, then\n     *      it will be safely ignored, without errors being thrown.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Processes a Setup Data, registering its Input Contexts and Handlers.\n\n@param SetupData\n     The new setup data to be added. If this setup Data was already registered, then\n     it will be safely ignored, without errors being thrown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetupData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetupData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::NewProp_SetupData = { "SetupData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventAddInputSetupData_Parms, SetupData), Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetupData_MetaData), NewProp_SetupData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::NewProp_SetupData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "AddInputSetupData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::NinjaInputManagerComponent_eventAddInputSetupData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::NinjaInputManagerComponent_eventAddInputSetupData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execAddInputSetupData)
{
	P_GET_OBJECT(UNinjaInputSetupDataAsset,Z_Param_SetupData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInputSetupData(Z_Param_SetupData);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function AddInputSetupData

// Begin Class UNinjaInputManagerComponent Function Client_SendGameplayEventToOwner
struct NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms
{
	FGameplayTag GameplayEventTag;
	FInputActionValue Value;
	const UInputAction* InputAction;
};
static const FName NAME_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner = FName(TEXT("Client_SendGameplayEventToOwner"));
void UNinjaInputManagerComponent::Client_SendGameplayEventToOwner(FGameplayTag const& GameplayEventTag, FInputActionValue const& Value, const UInputAction* InputAction) const
{
	NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms Parms;
	Parms.GameplayEventTag=GameplayEventTag;
	Parms.Value=Value;
	Parms.InputAction=InputAction;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner);
		const_cast<UNinjaInputManagerComponent*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Allows sending a gameplay event to client when we are a remote server (!).\n     * This is a very unlikely scenario, just added for the sake of being thorough.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Allows sending a gameplay event to client when we are a remote server (!).\nThis is a very unlikely scenario, just added for the sake of being thorough." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::NewProp_GameplayEventTag = { "GameplayEventTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms, GameplayEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEventTag_MetaData), NewProp_GameplayEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::NewProp_GameplayEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "Client_SendGameplayEventToOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x41040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventClient_SendGameplayEventToOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execClient_SendGameplayEventToOwner)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayEventTag);
	P_GET_STRUCT(FInputActionValue,Z_Param_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_SendGameplayEventToOwner_Implementation(Z_Param_GameplayEventTag,Z_Param_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function Client_SendGameplayEventToOwner

// Begin Class UNinjaInputManagerComponent Function CreateForwardReference
struct NinjaInputManagerComponent_eventCreateForwardReference_Parms
{
	APawn* Owner;
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInputManagerComponent_eventCreateForwardReference_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaInputManagerComponent_CreateForwardReference = FName(TEXT("CreateForwardReference"));
USceneComponent* UNinjaInputManagerComponent::CreateForwardReference(APawn* Owner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_CreateForwardReference);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputManagerComponent_eventCreateForwardReference_Parms Parms;
		Parms.Owner=Owner;
		const_cast<UNinjaInputManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInputManagerComponent*>(this)->CreateForwardReference_Implementation(Owner);
	}
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Manager Component" },
		{ "Comment", "/**\n\x09 * Creates a forward reference that can be used by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Creates a forward reference that can be used by this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventCreateForwardReference_Parms, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventCreateForwardReference_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "CreateForwardReference", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventCreateForwardReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventCreateForwardReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execCreateForwardReference)
{
	P_GET_OBJECT(APawn,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->CreateForwardReference_Implementation(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function CreateForwardReference

// Begin Class UNinjaInputManagerComponent Function DisableInputProcessing
struct Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Disables all inputs for the player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Disables all inputs for the player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "DisableInputProcessing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execDisableInputProcessing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableInputProcessing();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function DisableInputProcessing

// Begin Class UNinjaInputManagerComponent Function DispatchCancelledEvent
struct Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics
{
	struct NinjaInputManagerComponent_eventDispatchCancelledEvent_Parms
	{
		FInputActionInstance ActionInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Dispatches an action to a registered Input Handler for the Ongoing Event.\n     *\n     * We need to differentiate the event in the function level, as just relying on the Action\n     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.\n     * \n     * @param ActionInstance\n     *      Details about the Action that must be processed.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Dispatches an action to a registered Input Handler for the Ongoing Event.\n\nWe need to differentiate the event in the function level, as just relying on the Action\nInstance may lead to incorrect triggered, since multiple events can happen in the same frame.\n\n@param ActionInstance\n     Details about the Action that must be processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventDispatchCancelledEvent_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstance_MetaData), NewProp_ActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::NewProp_ActionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "DispatchCancelledEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::NinjaInputManagerComponent_eventDispatchCancelledEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::NinjaInputManagerComponent_eventDispatchCancelledEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execDispatchCancelledEvent)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchCancelledEvent(Z_Param_Out_ActionInstance);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function DispatchCancelledEvent

// Begin Class UNinjaInputManagerComponent Function DispatchCompletedEvent
struct Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics
{
	struct NinjaInputManagerComponent_eventDispatchCompletedEvent_Parms
	{
		FInputActionInstance ActionInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Dispatches an action to a registered Input Handler for the Ongoing Event.\n     *\n     * We need to differentiate the event in the function level, as just relying on the Action\n     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.\n     * \n     * @param ActionInstance\n     *      Details about the Action that must be processed.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Dispatches an action to a registered Input Handler for the Ongoing Event.\n\nWe need to differentiate the event in the function level, as just relying on the Action\nInstance may lead to incorrect triggered, since multiple events can happen in the same frame.\n\n@param ActionInstance\n     Details about the Action that must be processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventDispatchCompletedEvent_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstance_MetaData), NewProp_ActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::NewProp_ActionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "DispatchCompletedEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::NinjaInputManagerComponent_eventDispatchCompletedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::NinjaInputManagerComponent_eventDispatchCompletedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execDispatchCompletedEvent)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchCompletedEvent(Z_Param_Out_ActionInstance);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function DispatchCompletedEvent

// Begin Class UNinjaInputManagerComponent Function DispatchOngoingEvent
struct Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics
{
	struct NinjaInputManagerComponent_eventDispatchOngoingEvent_Parms
	{
		FInputActionInstance ActionInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Dispatches an action to a registered Input Handler for the Ongoing Event.\n     *\n     * We need to differentiate the event in the function level, as just relying on the Action\n     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.\n     * \n     * @param ActionInstance\n     *      Details about the Action that must be processed.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Dispatches an action to a registered Input Handler for the Ongoing Event.\n\nWe need to differentiate the event in the function level, as just relying on the Action\nInstance may lead to incorrect triggered, since multiple events can happen in the same frame.\n\n@param ActionInstance\n     Details about the Action that must be processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventDispatchOngoingEvent_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstance_MetaData), NewProp_ActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::NewProp_ActionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "DispatchOngoingEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::NinjaInputManagerComponent_eventDispatchOngoingEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::NinjaInputManagerComponent_eventDispatchOngoingEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execDispatchOngoingEvent)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchOngoingEvent(Z_Param_Out_ActionInstance);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function DispatchOngoingEvent

// Begin Class UNinjaInputManagerComponent Function DispatchStartedEvent
struct Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics
{
	struct NinjaInputManagerComponent_eventDispatchStartedEvent_Parms
	{
		FInputActionInstance ActionInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Dispatches an action to a registered Input Handler for the Started Event.\n     *\n     * We need to differentiate the event in the function level, as just relying on the Action\n     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.\n     * \n     * @param ActionInstance\n     *      Details about the Action that must be processed.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Dispatches an action to a registered Input Handler for the Started Event.\n\nWe need to differentiate the event in the function level, as just relying on the Action\nInstance may lead to incorrect triggered, since multiple events can happen in the same frame.\n\n@param ActionInstance\n     Details about the Action that must be processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventDispatchStartedEvent_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstance_MetaData), NewProp_ActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::NewProp_ActionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "DispatchStartedEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::NinjaInputManagerComponent_eventDispatchStartedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::NinjaInputManagerComponent_eventDispatchStartedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execDispatchStartedEvent)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchStartedEvent(Z_Param_Out_ActionInstance);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function DispatchStartedEvent

// Begin Class UNinjaInputManagerComponent Function DispatchTriggeredEvent
struct Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics
{
	struct NinjaInputManagerComponent_eventDispatchTriggeredEvent_Parms
	{
		FInputActionInstance ActionInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Dispatches an action to a registered Input Handler for the Started Event.\n     *\n     * We need to differentiate the event in the function level, as just relying on the Action\n     * Instance may lead to incorrect triggered, since multiple events can happen in the same frame.\n     * \n     * @param ActionInstance\n     *      Details about the Action that must be processed.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Dispatches an action to a registered Input Handler for the Started Event.\n\nWe need to differentiate the event in the function level, as just relying on the Action\nInstance may lead to incorrect triggered, since multiple events can happen in the same frame.\n\n@param ActionInstance\n     Details about the Action that must be processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventDispatchTriggeredEvent_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstance_MetaData), NewProp_ActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::NewProp_ActionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "DispatchTriggeredEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::NinjaInputManagerComponent_eventDispatchTriggeredEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::NinjaInputManagerComponent_eventDispatchTriggeredEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execDispatchTriggeredEvent)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchTriggeredEvent(Z_Param_Out_ActionInstance);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function DispatchTriggeredEvent

// Begin Class UNinjaInputManagerComponent Function EnableInputProcessing
struct Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Enables all inputs for the player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Enables all inputs for the player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "EnableInputProcessing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execEnableInputProcessing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableInputProcessing();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function EnableInputProcessing

// Begin Class UNinjaInputManagerComponent Function GetAbilitySystemComponent
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics
{
	struct NinjaInputManagerComponent_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Provides the Ability System Component from this component's owner.\n\x09 *\n\x09 * Please note that this component is a valid implementation of the Ability System Interface.\n\x09 *\n\x09 * @return\n\x09 *      The Ability System Component, provided by the owner, via the ASC Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the Ability System Component from this component's owner.\n\nPlease note that this component is a valid implementation of the Ability System Interface.\n\n@return\n     The Ability System Component, provided by the owner, via the ASC Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::NinjaInputManagerComponent_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::NinjaInputManagerComponent_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetAbilitySystemComponent

// Begin Class UNinjaInputManagerComponent Function GetAnalogStickBehavior
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics
{
	struct NinjaInputManagerComponent_eventGetAnalogStickBehavior_Parms
	{
		EInputAnalogStickBehavior ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Provides the current Analog Stick Behavior set for this input manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the current Analog Stick Behavior set for this input manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetAnalogStickBehavior_Parms, ReturnValue), Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior, METADATA_PARAMS(0, nullptr) }; // 2877371527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetAnalogStickBehavior", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::NinjaInputManagerComponent_eventGetAnalogStickBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::NinjaInputManagerComponent_eventGetAnalogStickBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetAnalogStickBehavior)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputAnalogStickBehavior*)Z_Param__Result=P_THIS->GetAnalogStickBehavior();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetAnalogStickBehavior

// Begin Class UNinjaInputManagerComponent Function GetController
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics
{
	struct NinjaInputManagerComponent_eventGetController_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Provides the controller that owns this component.\n\x09 *\n\x09 * This function is able to retrieve the controller, regardless of the actor that owns\n\x09 * it, which may be a Pawn, a Controller or a Player State.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The Controller that owns this component. It may be retrieved from the owning Pawn,\n\x09 *\x09\x09Player State or the owning controller itself. It will ensure that is not null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the controller that owns this component.\n\nThis function is able to retrieve the controller, regardless of the actor that owns\nit, which may be a Pawn, a Controller or a Player State.\n\n@return\n             The Controller that owns this component. It may be retrieved from the owning Pawn,\n             Player State or the owning controller itself. It will ensure that is not null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetController", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::NinjaInputManagerComponent_eventGetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::NinjaInputManagerComponent_eventGetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetController();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetController

// Begin Class UNinjaInputManagerComponent Function GetEnhancedInputSubsystem
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics
{
	struct NinjaInputManagerComponent_eventGetEnhancedInputSubsystem_Parms
	{
		const AController* Controller;
		UEnhancedInputLocalPlayerSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n     * Retrieves the Enhanced Input Subsystem for the provided controller.\n     *\n     * @return\n     *      The Enhanced Input Subsystem. retrieved from the Controller's Local Player.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Retrieves the Enhanced Input Subsystem for the provided controller.\n\n@return\n     The Enhanced Input Subsystem. retrieved from the Controller's Local Player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetEnhancedInputSubsystem_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetEnhancedInputSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetEnhancedInputSubsystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::NinjaInputManagerComponent_eventGetEnhancedInputSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::NinjaInputManagerComponent_eventGetEnhancedInputSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetEnhancedInputSubsystem)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedInputLocalPlayerSubsystem**)Z_Param__Result=UNinjaInputManagerComponent::GetEnhancedInputSubsystem(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetEnhancedInputSubsystem

// Begin Class UNinjaInputManagerComponent Function GetForwardVector
struct NinjaInputManagerComponent_eventGetForwardVector_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInputManagerComponent_eventGetForwardVector_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNinjaInputManagerComponent_GetForwardVector = FName(TEXT("GetForwardVector"));
FVector UNinjaInputManagerComponent::GetForwardVector() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_GetForwardVector);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputManagerComponent_eventGetForwardVector_Parms Parms;
		const_cast<UNinjaInputManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInputManagerComponent*>(this)->GetForwardVector_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n\x09 * Provides the owner's Forward Reference.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the owner's Forward Reference." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetForwardVector", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventGetForwardVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventGetForwardVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetForwardVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetForwardVector_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetForwardVector

// Begin Class UNinjaInputManagerComponent Function GetLastInputVector
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics
{
	struct NinjaInputManagerComponent_eventGetLastInputVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n     * Provides the last input vector handled by the owner.\n     *\n     * By default, it will retrieve the value from the owner's Pawn Movement Component\n     * but this can be overriden by implementing the \"Last Input Vector Provider Interface\"\n     * in the Pawn related to this component.\n     *\n     * @return\n     *      The last input vector that was handled by the owning pawn.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the last input vector handled by the owner.\n\nBy default, it will retrieve the value from the owner's Pawn Movement Component\nbut this can be overriden by implementing the \"Last Input Vector Provider Interface\"\nin the Pawn related to this component.\n\n@return\n     The last input vector that was handled by the owning pawn." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetLastInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetLastInputVector", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::NinjaInputManagerComponent_eventGetLastInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::NinjaInputManagerComponent_eventGetLastInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetLastInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastInputVector();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetLastInputVector

// Begin Class UNinjaInputManagerComponent Function GetPawn
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics
{
	struct NinjaInputManagerComponent_eventGetPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Provides the pawn that owns this component.\n\x09 *\n\x09 * This function is able to retrieve the pawn even if this component is attached to actors\n\x09 * that are not pawns, such as Controllers or Player States.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The Pawn that owns this component. It may be the owning actor or the pawn related\n\x09 *\x09\x09to a Controller or to a Player State. It will ultimately ensure that is not null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the pawn that owns this component.\n\nThis function is able to retrieve the pawn even if this component is attached to actors\nthat are not pawns, such as Controllers or Player States.\n\n@return\n             The Pawn that owns this component. It may be the owning actor or the pawn related\n             to a Controller or to a Player State. It will ultimately ensure that is not null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetPawn", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::NinjaInputManagerComponent_eventGetPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::NinjaInputManagerComponent_eventGetPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPawn();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetPawn

// Begin Class UNinjaInputManagerComponent Function GetRightVector
struct NinjaInputManagerComponent_eventGetRightVector_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInputManagerComponent_eventGetRightVector_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNinjaInputManagerComponent_GetRightVector = FName(TEXT("GetRightVector"));
FVector UNinjaInputManagerComponent::GetRightVector() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_GetRightVector);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputManagerComponent_eventGetRightVector_Parms Parms;
		const_cast<UNinjaInputManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInputManagerComponent*>(this)->GetRightVector_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n\x09 * Provides the owner's Right Reference.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides the owner's Right Reference." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetRightVector", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventGetRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventGetRightVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetRightVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRightVector_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetRightVector

// Begin Class UNinjaInputManagerComponent Function GetVectorForAxis
struct NinjaInputManagerComponent_eventGetVectorForAxis_Parms
{
	TEnumAsByte<EAxis::Type> Axis;
	FVector OutReference;
};
static const FName NAME_UNinjaInputManagerComponent_GetVectorForAxis = FName(TEXT("GetVectorForAxis"));
void UNinjaInputManagerComponent::GetVectorForAxis(const EAxis::Type Axis, FVector& OutReference) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_GetVectorForAxis);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputManagerComponent_eventGetVectorForAxis_Parms Parms;
		Parms.Axis=Axis;
		Parms.OutReference=OutReference;
		const_cast<UNinjaInputManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		OutReference=Parms.OutReference;
	}
	else
	{
		const_cast<UNinjaInputManagerComponent*>(this)->GetVectorForAxis_Implementation(Axis, OutReference);
	}
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Manager Component" },
		{ "Comment", "/**\n     * Provides a vector reference for a given axis.\n     * This is necessary for all handlers that requires movement direction such as \"Movement\".\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Provides a vector reference for a given axis.\nThis is necessary for all handlers that requires movement direction such as \"Movement\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetVectorForAxis_Parms, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 342925220
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::NewProp_OutReference = { "OutReference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventGetVectorForAxis_Parms, OutReference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::NewProp_OutReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "GetVectorForAxis", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventGetVectorForAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventGetVectorForAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execGetVectorForAxis)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Axis);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVectorForAxis_Implementation(EAxis::Type(Z_Param_Axis),Z_Param_Out_OutReference);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function GetVectorForAxis

// Begin Class UNinjaInputManagerComponent Function HasCompatibleInputHandler
struct Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics
{
	struct NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms
	{
		const UInputAction* InputAction;
		ETriggerEvent TriggerEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n     * Checks if this component has a handler compatible with a given Action/Trigger Event.\n     *\n     * @param InputAction\n     *      Input Action to be checked. Must be provided.\n     *\n     * @param TriggerEvent\n     *      Trigger Event compatible with the action. Must be provided.\n     *\n     * @return\n     *      A boolean value informing if the providing combination of Input Action and\n     *      Trigger Event can be dispatched to any of the internal Input Handlers.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Checks if this component has a handler compatible with a given Action/Trigger Event.\n\n@param InputAction\n     Input Action to be checked. Must be provided.\n\n@param TriggerEvent\n     Trigger Event compatible with the action. Must be provided.\n\n@return\n     A boolean value informing if the providing combination of Input Action and\n     Trigger Event can be dispatched to any of the internal Input Handlers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvent_MetaData), NewProp_TriggerEvent_MetaData) }; // 3771639830
void Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "HasCompatibleInputHandler", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::NinjaInputManagerComponent_eventHasCompatibleInputHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execHasCompatibleInputHandler)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_GET_ENUM_REF(ETriggerEvent,Z_Param_Out_TriggerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCompatibleInputHandler(Z_Param_InputAction,(ETriggerEvent&)(Z_Param_Out_TriggerEvent));
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function HasCompatibleInputHandler

// Begin Class UNinjaInputManagerComponent Function HasInputMappingContext
struct Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics
{
	struct NinjaInputManagerComponent_eventHasInputMappingContext_Parms
	{
		const UInputMappingContext* InputMappingContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Checks if a given Input Mapping Context is registered for the current owner.\n\x09 *\n\x09 * @param InputMappingContext\n\x09 *\x09\x09Input Mapping Context to be checked. Must be provided.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09""A boolean value informing if the provided Mapping Context was already\n\x09 *\x09\x09registered to the current Local Player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Checks if a given Input Mapping Context is registered for the current owner.\n\n@param InputMappingContext\n             Input Mapping Context to be checked. Must be provided.\n\n@return\n             A boolean value informing if the provided Mapping Context was already\n             registered to the current Local Player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventHasInputMappingContext_Parms, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
void Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventHasInputMappingContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventHasInputMappingContext_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "HasInputMappingContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NinjaInputManagerComponent_eventHasInputMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::NinjaInputManagerComponent_eventHasInputMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execHasInputMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_InputMappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasInputMappingContext(Z_Param_InputMappingContext);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function HasInputMappingContext

// Begin Class UNinjaInputManagerComponent Function HasSetupData
struct Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics
{
	struct NinjaInputManagerComponent_eventHasSetupData_Parms
	{
		const UNinjaInputSetupDataAsset* SetupData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n     * Checks if a given Setup Data ir registered to this component.\n     *\n     * @param SetupData\n     *      Setup Data Asset to be evaluated.\n     *\n     * @return\n     *\x09\x09""A boolean value informing if the provided Setup Data was already\n     *\x09\x09registered to this component. \n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Checks if a given Setup Data ir registered to this component.\n\n@param SetupData\n     Setup Data Asset to be evaluated.\n\n@return\n        A boolean value informing if the provided Setup Data was already\n        registered to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetupData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetupData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NewProp_SetupData = { "SetupData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventHasSetupData_Parms, SetupData), Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetupData_MetaData), NewProp_SetupData_MetaData) };
void Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventHasSetupData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventHasSetupData_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NewProp_SetupData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "HasSetupData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NinjaInputManagerComponent_eventHasSetupData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::NinjaInputManagerComponent_eventHasSetupData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execHasSetupData)
{
	P_GET_OBJECT(UNinjaInputSetupDataAsset,Z_Param_SetupData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSetupData(Z_Param_SetupData);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function HasSetupData

// Begin Class UNinjaInputManagerComponent Function IsLocallyControlled
struct Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics
{
	struct NinjaInputManagerComponent_eventIsLocallyControlled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n     * Checks if this component is running with a local controller.\n     *\n     * @return\n     *      A boolean informing if this Manager Component has a locally-controlled owner.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Checks if this component is running with a local controller.\n\n@return\n     A boolean informing if this Manager Component has a locally-controlled owner." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "IsLocallyControlled", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::NinjaInputManagerComponent_eventIsLocallyControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::NinjaInputManagerComponent_eventIsLocallyControlled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execIsLocallyControlled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function IsLocallyControlled

// Begin Class UNinjaInputManagerComponent Function IsUsingGamepad
struct Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics
{
	struct NinjaInputManagerComponent_eventIsUsingGamepad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n\x09 * Informs if this Input Manager Component is processing inputs from a gamepad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Informs if this Input Manager Component is processing inputs from a gamepad." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "IsUsingGamepad", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::NinjaInputManagerComponent_eventIsUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::NinjaInputManagerComponent_eventIsUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execIsUsingGamepad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function IsUsingGamepad

// Begin Class UNinjaInputManagerComponent Function IsUsingKeyboardAndMouse
struct Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics
{
	struct NinjaInputManagerComponent_eventIsUsingKeyboardAndMouse_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n\x09 * Informs if this Input Manager Component is processing inputs from keyboard and mouse.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Informs if this Input Manager Component is processing inputs from keyboard and mouse." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventIsUsingKeyboardAndMouse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventIsUsingKeyboardAndMouse_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "IsUsingKeyboardAndMouse", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::NinjaInputManagerComponent_eventIsUsingKeyboardAndMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::NinjaInputManagerComponent_eventIsUsingKeyboardAndMouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execIsUsingKeyboardAndMouse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingKeyboardAndMouse();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function IsUsingKeyboardAndMouse

// Begin Class UNinjaInputManagerComponent Function OnControllerChanged
struct Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics
{
	struct NinjaInputManagerComponent_eventOnControllerChanged_Parms
	{
		APawn* Pawn;
		AController* OldController;
		AController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Invoked when the pawn's controller changes, allowing this component to clear current bindings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Invoked when the pawn's controller changes, allowing this component to clear current bindings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventOnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventOnControllerChanged_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventOnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NewProp_OldController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "OnControllerChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NinjaInputManagerComponent_eventOnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::NinjaInputManagerComponent_eventOnControllerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execOnControllerChanged)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(AController,Z_Param_OldController);
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerChanged(Z_Param_Pawn,Z_Param_OldController,Z_Param_NewController);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function OnControllerChanged

// Begin Class UNinjaInputManagerComponent Function OnPawnRestarted
struct Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics
{
	struct NinjaInputManagerComponent_eventOnPawnRestarted_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Invoked when the owning Pawn restarts, allowing this component to recreate the bindings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Invoked when the owning Pawn restarts, allowing this component to recreate the bindings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventOnPawnRestarted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "OnPawnRestarted", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::NinjaInputManagerComponent_eventOnPawnRestarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::NinjaInputManagerComponent_eventOnPawnRestarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execOnPawnRestarted)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnRestarted(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function OnPawnRestarted

// Begin Class UNinjaInputManagerComponent Function OnPossessedPawnChanged
struct Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics
{
	struct NinjaInputManagerComponent_eventOnPossessedPawnChanged_Parms
	{
		APawn* OldPawn;
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Invoked when the pawn has changed from the controller perspective.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Invoked when the pawn has changed from the controller perspective." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventOnPossessedPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventOnPossessedPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "OnPossessedPawnChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::NinjaInputManagerComponent_eventOnPossessedPawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::NinjaInputManagerComponent_eventOnPossessedPawnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execOnPossessedPawnChanged)
{
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPossessedPawnChanged(Z_Param_OldPawn,Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function OnPossessedPawnChanged

// Begin Class UNinjaInputManagerComponent Function OnRep_CurrentInputModeTag
struct Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * We need to replicate and potentially react to changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "We need to replicate and potentially react to changes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "OnRep_CurrentInputModeTag", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execOnRep_CurrentInputModeTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentInputModeTag();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function OnRep_CurrentInputModeTag

// Begin Class UNinjaInputManagerComponent Function RemoveInputSetupData
struct Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics
{
	struct NinjaInputManagerComponent_eventRemoveInputSetupData_Parms
	{
		const UNinjaInputSetupDataAsset* SetupData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n     * Removes a Setup Data previously registered.\n     *\n     * @param SetupData\n     *      Setup data to be removed from this component. If not registered, then nothing\n     *      will happen and no errors will be thrown.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Removes a Setup Data previously registered.\n\n@param SetupData\n     Setup data to be removed from this component. If not registered, then nothing\n     will happen and no errors will be thrown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetupData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetupData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::NewProp_SetupData = { "SetupData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventRemoveInputSetupData_Parms, SetupData), Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetupData_MetaData), NewProp_SetupData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::NewProp_SetupData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "RemoveInputSetupData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::NinjaInputManagerComponent_eventRemoveInputSetupData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::NinjaInputManagerComponent_eventRemoveInputSetupData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execRemoveInputSetupData)
{
	P_GET_OBJECT(UNinjaInputSetupDataAsset,Z_Param_SetupData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInputSetupData(Z_Param_SetupData);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function RemoveInputSetupData

// Begin Class UNinjaInputManagerComponent Function RotateControllerToMouseCursor
struct NinjaInputManagerComponent_eventRotateControllerToMouseCursor_Parms
{
	float DeltaTime;
};
static const FName NAME_UNinjaInputManagerComponent_RotateControllerToMouseCursor = FName(TEXT("RotateControllerToMouseCursor"));
void UNinjaInputManagerComponent::RotateControllerToMouseCursor(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_RotateControllerToMouseCursor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputManagerComponent_eventRotateControllerToMouseCursor_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RotateControllerToMouseCursor_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Manager Component" },
		{ "Comment", "/**\n\x09 * Rotates the current controller to the mouse location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Rotates the current controller to the mouse location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventRotateControllerToMouseCursor_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "RotateControllerToMouseCursor", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventRotateControllerToMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventRotateControllerToMouseCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execRotateControllerToMouseCursor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateControllerToMouseCursor_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function RotateControllerToMouseCursor

// Begin Class UNinjaInputManagerComponent Function SendGameplayEventToOwner
struct Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics
{
	struct NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms
	{
		FGameplayTag GameplayEventTag;
		FInputActionValue Value;
		const UInputAction* InputAction;
		bool bSendLocally;
		bool bSendToServer;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n     * Sends a Gameplay Event to the owner's ASC.\n     *\n     * @param GameplayEventTag\n     *      Gameplay Tag used to identify the event.\n     *\n     * @param Value\n     *      Input value that has triggered this event. It will be provided in the event's\n     *      Payload as the event's value for its Magnitude attribute.\n     *\n     * @param InputAction\n     *      The Input Action that has triggered this event. It will be provided in the event's\n     *      Payload as the first Optional Object.\n     *\n     * @param bSendLocally\n     *      Determines if this event should be triggered locally, in case of a non-authoritative\n     *      local Player Controller. Defaults to true.\n     *\n     * @param bSendToServer\n     *      Determines if this event should be triggered on the server in case of a local Player\n     *      Controller not having authoritative privileges over the actor. Defaults to true.\n     *\n     * @return\n     *      The number of Ability Activations triggered by this event. The number is only accurate\n     *      for the local activations, but further activations may happen after an eventual RPC\n     *      is sent out, if necessary, to the authoritative version.\n     */" },
		{ "CPP_Default_bSendLocally", "true" },
		{ "CPP_Default_bSendToServer", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Sends a Gameplay Event to the owner's ASC.\n\n@param GameplayEventTag\n     Gameplay Tag used to identify the event.\n\n@param Value\n     Input value that has triggered this event. It will be provided in the event's\n     Payload as the event's value for its Magnitude attribute.\n\n@param InputAction\n     The Input Action that has triggered this event. It will be provided in the event's\n     Payload as the first Optional Object.\n\n@param bSendLocally\n     Determines if this event should be triggered locally, in case of a non-authoritative\n     local Player Controller. Defaults to true.\n\n@param bSendToServer\n     Determines if this event should be triggered on the server in case of a local Player\n     Controller not having authoritative privileges over the actor. Defaults to true.\n\n@return\n     The number of Ability Activations triggered by this event. The number is only accurate\n     for the local activations, but further activations may happen after an eventual RPC\n     is sent out, if necessary, to the authoritative version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static void NewProp_bSendLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendLocally;
	static void NewProp_bSendToServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendToServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_GameplayEventTag = { "GameplayEventTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms, GameplayEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEventTag_MetaData), NewProp_GameplayEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
void Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendLocally_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms*)Obj)->bSendLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendLocally = { "bSendLocally", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendLocally_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendToServer_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms*)Obj)->bSendToServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendToServer = { "bSendToServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendToServer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_GameplayEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_bSendToServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "SendGameplayEventToOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::NinjaInputManagerComponent_eventSendGameplayEventToOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execSendGameplayEventToOwner)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_GameplayEventTag);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_GET_UBOOL(Z_Param_bSendLocally);
	P_GET_UBOOL(Z_Param_bSendToServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SendGameplayEventToOwner(Z_Param_Out_GameplayEventTag,Z_Param_Out_Value,Z_Param_InputAction,Z_Param_bSendLocally,Z_Param_bSendToServer);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function SendGameplayEventToOwner

// Begin Class UNinjaInputManagerComponent Function Server_SendGameplayEventToOwner
struct NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms
{
	FGameplayTag GameplayEventTag;
	FInputActionValue Value;
	const UInputAction* InputAction;
};
static const FName NAME_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner = FName(TEXT("Server_SendGameplayEventToOwner"));
void UNinjaInputManagerComponent::Server_SendGameplayEventToOwner(FGameplayTag const& GameplayEventTag, FInputActionValue const& Value, const UInputAction* InputAction) const
{
	NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms Parms;
	Parms.GameplayEventTag=GameplayEventTag;
	Parms.Value=Value;
	Parms.InputAction=InputAction;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner);
		const_cast<UNinjaInputManagerComponent*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Allows sending a gameplay event to server when we are a local autonomous proxy.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Allows sending a gameplay event to server when we are a local autonomous proxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::NewProp_GameplayEventTag = { "GameplayEventTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms, GameplayEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEventTag_MetaData), NewProp_GameplayEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::NewProp_GameplayEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "Server_SendGameplayEventToOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventServer_SendGameplayEventToOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execServer_SendGameplayEventToOwner)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayEventTag);
	P_GET_STRUCT(FInputActionValue,Z_Param_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SendGameplayEventToOwner_Implementation(Z_Param_GameplayEventTag,Z_Param_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function Server_SendGameplayEventToOwner

// Begin Class UNinjaInputManagerComponent Function Server_SetPlayerInputMode
struct NinjaInputManagerComponent_eventServer_SetPlayerInputMode_Parms
{
	FGameplayTag InputModeTag;
};
static const FName NAME_UNinjaInputManagerComponent_Server_SetPlayerInputMode = FName(TEXT("Server_SetPlayerInputMode"));
void UNinjaInputManagerComponent::Server_SetPlayerInputMode(FGameplayTag const& InputModeTag)
{
	NinjaInputManagerComponent_eventServer_SetPlayerInputMode_Parms Parms;
	Parms.InputModeTag=InputModeTag;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputManagerComponent_Server_SetPlayerInputMode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sets the Player Input Mode on the authority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Sets the Player Input Mode on the authority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputModeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputModeTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::NewProp_InputModeTag = { "InputModeTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventServer_SetPlayerInputMode_Parms, InputModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputModeTag_MetaData), NewProp_InputModeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::NewProp_InputModeTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "Server_SetPlayerInputMode", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::PropPointers), sizeof(NinjaInputManagerComponent_eventServer_SetPlayerInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputManagerComponent_eventServer_SetPlayerInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execServer_SetPlayerInputMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InputModeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetPlayerInputMode_Implementation(Z_Param_InputModeTag);
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function Server_SetPlayerInputMode

// Begin Class UNinjaInputManagerComponent Function SetAnalogStickBehavior
struct Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics
{
	struct NinjaInputManagerComponent_eventSetAnalogStickBehavior_Parms
	{
		EInputAnalogStickBehavior NewAnalogStickBehavior;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Manager Component" },
		{ "Comment", "/**\n\x09 * Sets the Analog Stick Behavior set for this input manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Sets the Analog Stick Behavior set for this input manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAnalogStickBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAnalogStickBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::NewProp_NewAnalogStickBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::NewProp_NewAnalogStickBehavior = { "NewAnalogStickBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputManagerComponent_eventSetAnalogStickBehavior_Parms, NewAnalogStickBehavior), Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior, METADATA_PARAMS(0, nullptr) }; // 2877371527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::NewProp_NewAnalogStickBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::NewProp_NewAnalogStickBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "SetAnalogStickBehavior", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::NinjaInputManagerComponent_eventSetAnalogStickBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::NinjaInputManagerComponent_eventSetAnalogStickBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execSetAnalogStickBehavior)
{
	P_GET_ENUM(EInputAnalogStickBehavior,Z_Param_NewAnalogStickBehavior);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnalogStickBehavior(EInputAnalogStickBehavior(Z_Param_NewAnalogStickBehavior));
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function SetAnalogStickBehavior

// Begin Class UNinjaInputManagerComponent Function ShouldProcessInputs
struct Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics
{
	struct NinjaInputManagerComponent_eventShouldProcessInputs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Manager Component" },
		{ "Comment", "/**\n\x09 * Informs if Inputs are currently being processed for this player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Informs if Inputs are currently being processed for this player." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputManagerComponent_eventShouldProcessInputs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputManagerComponent_eventShouldProcessInputs_Parms), &Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputManagerComponent, nullptr, "ShouldProcessInputs", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::NinjaInputManagerComponent_eventShouldProcessInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::NinjaInputManagerComponent_eventShouldProcessInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputManagerComponent::execShouldProcessInputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldProcessInputs();
	P_NATIVE_END;
}
// End Class UNinjaInputManagerComponent Function ShouldProcessInputs

// Begin Class UNinjaInputManagerComponent
void UNinjaInputManagerComponent::StaticRegisterNativesUNinjaInputManagerComponent()
{
	UClass* Class = UNinjaInputManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInputSetupData", &UNinjaInputManagerComponent::execAddInputSetupData },
		{ "Client_SendGameplayEventToOwner", &UNinjaInputManagerComponent::execClient_SendGameplayEventToOwner },
		{ "CreateForwardReference", &UNinjaInputManagerComponent::execCreateForwardReference },
		{ "DisableInputProcessing", &UNinjaInputManagerComponent::execDisableInputProcessing },
		{ "DispatchCancelledEvent", &UNinjaInputManagerComponent::execDispatchCancelledEvent },
		{ "DispatchCompletedEvent", &UNinjaInputManagerComponent::execDispatchCompletedEvent },
		{ "DispatchOngoingEvent", &UNinjaInputManagerComponent::execDispatchOngoingEvent },
		{ "DispatchStartedEvent", &UNinjaInputManagerComponent::execDispatchStartedEvent },
		{ "DispatchTriggeredEvent", &UNinjaInputManagerComponent::execDispatchTriggeredEvent },
		{ "EnableInputProcessing", &UNinjaInputManagerComponent::execEnableInputProcessing },
		{ "GetAbilitySystemComponent", &UNinjaInputManagerComponent::execGetAbilitySystemComponent },
		{ "GetAnalogStickBehavior", &UNinjaInputManagerComponent::execGetAnalogStickBehavior },
		{ "GetController", &UNinjaInputManagerComponent::execGetController },
		{ "GetEnhancedInputSubsystem", &UNinjaInputManagerComponent::execGetEnhancedInputSubsystem },
		{ "GetForwardVector", &UNinjaInputManagerComponent::execGetForwardVector },
		{ "GetLastInputVector", &UNinjaInputManagerComponent::execGetLastInputVector },
		{ "GetPawn", &UNinjaInputManagerComponent::execGetPawn },
		{ "GetRightVector", &UNinjaInputManagerComponent::execGetRightVector },
		{ "GetVectorForAxis", &UNinjaInputManagerComponent::execGetVectorForAxis },
		{ "HasCompatibleInputHandler", &UNinjaInputManagerComponent::execHasCompatibleInputHandler },
		{ "HasInputMappingContext", &UNinjaInputManagerComponent::execHasInputMappingContext },
		{ "HasSetupData", &UNinjaInputManagerComponent::execHasSetupData },
		{ "IsLocallyControlled", &UNinjaInputManagerComponent::execIsLocallyControlled },
		{ "IsUsingGamepad", &UNinjaInputManagerComponent::execIsUsingGamepad },
		{ "IsUsingKeyboardAndMouse", &UNinjaInputManagerComponent::execIsUsingKeyboardAndMouse },
		{ "OnControllerChanged", &UNinjaInputManagerComponent::execOnControllerChanged },
		{ "OnPawnRestarted", &UNinjaInputManagerComponent::execOnPawnRestarted },
		{ "OnPossessedPawnChanged", &UNinjaInputManagerComponent::execOnPossessedPawnChanged },
		{ "OnRep_CurrentInputModeTag", &UNinjaInputManagerComponent::execOnRep_CurrentInputModeTag },
		{ "RemoveInputSetupData", &UNinjaInputManagerComponent::execRemoveInputSetupData },
		{ "RotateControllerToMouseCursor", &UNinjaInputManagerComponent::execRotateControllerToMouseCursor },
		{ "SendGameplayEventToOwner", &UNinjaInputManagerComponent::execSendGameplayEventToOwner },
		{ "Server_SendGameplayEventToOwner", &UNinjaInputManagerComponent::execServer_SendGameplayEventToOwner },
		{ "Server_SetPlayerInputMode", &UNinjaInputManagerComponent::execServer_SetPlayerInputMode },
		{ "SetAnalogStickBehavior", &UNinjaInputManagerComponent::execSetAnalogStickBehavior },
		{ "ShouldProcessInputs", &UNinjaInputManagerComponent::execShouldProcessInputs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputManagerComponent);
UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister()
{
	return UNinjaInputManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NinjaInput" },
		{ "Comment", "/**\n * Manages Input Contexts and delegates Input Actions to Input Handlers registered to this component.\n */" },
		{ "IncludePath", "Components/NinjaInputManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Manages Input Contexts and delegates Input Actions to Input Handlers registered to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputModeChanged_MetaData[] = {
		{ "Comment", "/** Notifies a change in the current input mode. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Notifies a change in the current input mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
		{ "Comment", "/** The input component bound to this manager. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "The input component bound to this manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandlerSetup_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n     * All data assets that will contribute to this Input Manager's setup.\n     *\n     * Data Assets are unique and the component ensures they are not duplicated in\n     * this array. There are exposed functions to check for specific Data Assets and\n     * also to register/unregister them.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "All data assets that will contribute to this Input Manager's setup.\n\nData Assets are unique and the component ensures they are not duplicated in\nthis array. There are exposed functions to check for specific Data Assets and\nalso to register/unregister them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoClearOnUnPosses_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If set to true, always clears all input setups when a pawn is un-possessed by a controller.\n\x09 *\n\x09 * If you are always swapping your input setups between pawns (i.e. players, horses, etc.), then\n\x09 * you might want to consider auto-clearing all of them. However, if you aggregate your inputs,\n\x09 * then you need to deliberately clear them in your controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "If set to true, always clears all input setups when a pawn is un-possessed by a controller.\n\nIf you are always swapping your input setups between pawns (i.e. players, horses, etc.), then\nyou might want to consider auto-clearing all of them. However, if you aggregate your inputs,\nthen you need to deliberately clear them in your controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCreateForwardReference_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Determines if this component will create a forward reference for pawns.\n\x09 *\n\x09 * Forward references are useful when the axis has to be obtained from a static position,\n\x09 * which is commonly the cased for top-down games.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Determines if this component will create a forward reference for pawns.\n\nForward references are useful when the axis has to be obtained from a static position,\nwhich is commonly the cased for top-down games." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRotateControllerToMouseCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If set to true rotates the current controller to the mouse position.\n\x09 *\n\x09 * Useful for twin-stick setups or similar. When enabled, you can also determine the Rotation\n\x09 * Speed for the interpolation/smooth movement.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "If set to true rotates the current controller to the mouse position.\n\nUseful for twin-stick setups or similar. When enabled, you can also determine the Rotation\nSpeed for the interpolation/smooth movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseChannel_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Collision Channel used to project the mouse cursor in the world. */" },
		{ "EditCondition", "bShouldRotateControllerToMouseCursor" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Collision Channel used to project the mouse cursor in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationInterpSpeed_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The speed used to smoothly interpolate the control rotation to face the mouse cursor. */" },
		{ "EditCondition", "bShouldRotateControllerToMouseCursor" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "The speed used to smoothly interpolate the control rotation to face the mouse cursor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogStickBehavior_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** How input is normalized for analog sticks. This is analogous to the GASP sample. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "How input is normalized for analog sticks. This is analogous to the GASP sample." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputModeTag_MetaData[] = {
		{ "Comment", "/** Current input mode assigned to this component. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Current input mode assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "Comment", "/** Controller currently assigned to our owner. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Controller currently assigned to our owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardReference_MetaData[] = {
		{ "Comment", "/** Forward reference for the current owner. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Forward reference for the current owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedSetups_MetaData[] = {
		{ "Comment", "/** All setups registered to this component, mapped by their Mapping Context.*/" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "All setups registered to this component, mapped by their Mapping Context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingHandlerSetups_MetaData[] = {
		{ "Comment", "/** Any setup that is pending and must be added when the component binds to a controller. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputManagerComponent.h" },
		{ "ToolTip", "Any setup that is pending and must be added when the component binds to a controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputModeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHandlerSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputHandlerSetup;
	static void NewProp_bAutoClearOnUnPosses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoClearOnUnPosses;
	static void NewProp_bShouldCreateForwardReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCreateForwardReference;
	static void NewProp_bShouldRotateControllerToMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRotateControllerToMouseCursor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MouseChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlRotationInterpSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnalogStickBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnalogStickBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentInputModeTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedSetups_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcessedSetups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ProcessedSetups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingHandlerSetups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingHandlerSetups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_AddInputSetupData, "AddInputSetupData" }, // 667386823
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_Client_SendGameplayEventToOwner, "Client_SendGameplayEventToOwner" }, // 2305250696
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_CreateForwardReference, "CreateForwardReference" }, // 3908070295
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_DisableInputProcessing, "DisableInputProcessing" }, // 3519429863
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCancelledEvent, "DispatchCancelledEvent" }, // 2364488907
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchCompletedEvent, "DispatchCompletedEvent" }, // 895759405
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchOngoingEvent, "DispatchOngoingEvent" }, // 1380264268
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchStartedEvent, "DispatchStartedEvent" }, // 3501865232
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_DispatchTriggeredEvent, "DispatchTriggeredEvent" }, // 432404417
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_EnableInputProcessing, "EnableInputProcessing" }, // 3886626735
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1072435836
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetAnalogStickBehavior, "GetAnalogStickBehavior" }, // 3339687575
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetController, "GetController" }, // 3340975285
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetEnhancedInputSubsystem, "GetEnhancedInputSubsystem" }, // 1057152379
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetForwardVector, "GetForwardVector" }, // 4278562374
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetLastInputVector, "GetLastInputVector" }, // 2355568131
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetPawn, "GetPawn" }, // 1961150182
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetRightVector, "GetRightVector" }, // 3368774847
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_GetVectorForAxis, "GetVectorForAxis" }, // 544937559
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_HasCompatibleInputHandler, "HasCompatibleInputHandler" }, // 2834555797
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_HasInputMappingContext, "HasInputMappingContext" }, // 2967407546
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_HasSetupData, "HasSetupData" }, // 517741978
		{ &Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature, "InputModeChangedSignature__DelegateSignature" }, // 2646377881
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_IsLocallyControlled, "IsLocallyControlled" }, // 2433442822
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingGamepad, "IsUsingGamepad" }, // 1948346329
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_IsUsingKeyboardAndMouse, "IsUsingKeyboardAndMouse" }, // 343959972
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_OnControllerChanged, "OnControllerChanged" }, // 3938376130
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_OnPawnRestarted, "OnPawnRestarted" }, // 2374992106
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_OnPossessedPawnChanged, "OnPossessedPawnChanged" }, // 1699923407
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_OnRep_CurrentInputModeTag, "OnRep_CurrentInputModeTag" }, // 60072949
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_RemoveInputSetupData, "RemoveInputSetupData" }, // 3035037726
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_RotateControllerToMouseCursor, "RotateControllerToMouseCursor" }, // 1733850586
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_SendGameplayEventToOwner, "SendGameplayEventToOwner" }, // 3827723774
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SendGameplayEventToOwner, "Server_SendGameplayEventToOwner" }, // 3046366862
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_Server_SetPlayerInputMode, "Server_SetPlayerInputMode" }, // 1765696196
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_SetAnalogStickBehavior, "SetAnalogStickBehavior" }, // 1914318319
		{ &Z_Construct_UFunction_UNinjaInputManagerComponent_ShouldProcessInputs, "ShouldProcessInputs" }, // 3598717909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_OnInputModeChanged = { "OnInputModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, OnInputModeChanged), Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputModeChanged_MetaData), NewProp_OnInputModeChanged_MetaData) }; // 2646377881
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, InputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputComponent_MetaData), NewProp_InputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_InputHandlerSetup_Inner = { "InputHandlerSetup", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_InputHandlerSetup = { "InputHandlerSetup", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, InputHandlerSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandlerSetup_MetaData), NewProp_InputHandlerSetup_MetaData) };
void Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bAutoClearOnUnPosses_SetBit(void* Obj)
{
	((UNinjaInputManagerComponent*)Obj)->bAutoClearOnUnPosses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bAutoClearOnUnPosses = { "bAutoClearOnUnPosses", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInputManagerComponent), &Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bAutoClearOnUnPosses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoClearOnUnPosses_MetaData), NewProp_bAutoClearOnUnPosses_MetaData) };
void Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldCreateForwardReference_SetBit(void* Obj)
{
	((UNinjaInputManagerComponent*)Obj)->bShouldCreateForwardReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldCreateForwardReference = { "bShouldCreateForwardReference", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInputManagerComponent), &Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldCreateForwardReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCreateForwardReference_MetaData), NewProp_bShouldCreateForwardReference_MetaData) };
void Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldRotateControllerToMouseCursor_SetBit(void* Obj)
{
	((UNinjaInputManagerComponent*)Obj)->bShouldRotateControllerToMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldRotateControllerToMouseCursor = { "bShouldRotateControllerToMouseCursor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInputManagerComponent), &Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldRotateControllerToMouseCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRotateControllerToMouseCursor_MetaData), NewProp_bShouldRotateControllerToMouseCursor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_MouseChannel = { "MouseChannel", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, MouseChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseChannel_MetaData), NewProp_MouseChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ControlRotationInterpSpeed = { "ControlRotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, ControlRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRotationInterpSpeed_MetaData), NewProp_ControlRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_AnalogStickBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_AnalogStickBehavior = { "AnalogStickBehavior", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, AnalogStickBehavior), Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogStickBehavior_MetaData), NewProp_AnalogStickBehavior_MetaData) }; // 2877371527
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_CurrentInputModeTag = { "CurrentInputModeTag", "OnRep_CurrentInputModeTag", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, CurrentInputModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInputModeTag_MetaData), NewProp_CurrentInputModeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, OwnerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ForwardReference = { "ForwardReference", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, ForwardReference), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardReference_MetaData), NewProp_ForwardReference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ProcessedSetups_ValueProp = { "ProcessedSetups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FProcessedInputSetup, METADATA_PARAMS(0, nullptr) }; // 1038581348
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ProcessedSetups_Key_KeyProp = { "ProcessedSetups_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ProcessedSetups = { "ProcessedSetups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, ProcessedSetups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessedSetups_MetaData), NewProp_ProcessedSetups_MetaData) }; // 1038581348
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_PendingHandlerSetups_Inner = { "PendingHandlerSetups", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_PendingHandlerSetups = { "PendingHandlerSetups", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputManagerComponent, PendingHandlerSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingHandlerSetups_MetaData), NewProp_PendingHandlerSetups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInputManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_OnInputModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_InputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_InputHandlerSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_InputHandlerSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bAutoClearOnUnPosses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldCreateForwardReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_bShouldRotateControllerToMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_MouseChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ControlRotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_AnalogStickBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_AnalogStickBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_CurrentInputModeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ForwardReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ProcessedSetups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ProcessedSetups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_ProcessedSetups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_PendingHandlerSetups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputManagerComponent_Statics::NewProp_PendingHandlerSetups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInputManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputBufferComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInputManagerComponent, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UInputModeAwareInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInputManagerComponent, IInputModeAwareInterface), false },  // 347998340
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputManagerComponent_Statics::ClassParams = {
	&UNinjaInputManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInputManagerComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputManagerComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaInputManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaInputManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputManagerComponent.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputManagerComponent>()
{
	return UNinjaInputManagerComponent::StaticClass();
}
void UNinjaInputManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentInputModeTag(TEXT("CurrentInputModeTag"));
	const bool bIsValid = true
		&& Name_CurrentInputModeTag == ClassReps[(int32)ENetFields_Private::CurrentInputModeTag].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaInputManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputManagerComponent);
UNinjaInputManagerComponent::~UNinjaInputManagerComponent() {}
// End Class UNinjaInputManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputManagerComponent, UNinjaInputManagerComponent::StaticClass, TEXT("UNinjaInputManagerComponent"), &Z_Registration_Info_UClass_UNinjaInputManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputManagerComponent), 1115457267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_2258531723(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

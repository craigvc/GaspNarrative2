// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativePlayerController.h"
#include "NarrativeNavigator/Public/NavigationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPointOfInterestLocation();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativePlayerController Function FastTravelToPOI
struct NarrativePlayerController_eventFastTravelToPOI_Parms
{
	FPointOfInterestLocation POI;
};
static const FName NAME_ANarrativePlayerController_FastTravelToPOI = FName(TEXT("FastTravelToPOI"));
void ANarrativePlayerController::FastTravelToPOI(FPointOfInterestLocation const& POI)
{
	NarrativePlayerController_eventFastTravelToPOI_Parms Parms;
	Parms.POI=POI;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_FastTravelToPOI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Fast Travel" },
		{ "Comment", "//POI marker calls this to perform fast travelling, which we implement in BP \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "POI marker calls this to perform fast travelling, which we implement in BP" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::NewProp_POI = { "POI", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventFastTravelToPOI_Parms, POI), Z_Construct_UScriptStruct_FPointOfInterestLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_MetaData), NewProp_POI_MetaData) }; // 3732342648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::NewProp_POI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "FastTravelToPOI", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers), sizeof(NarrativePlayerController_eventFastTravelToPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventFastTravelToPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativePlayerController Function FastTravelToPOI

// Begin Class ANarrativePlayerController Function GetControlledCharacter
struct Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics
{
	struct NarrativePlayerController_eventGetControlledCharacter_Parms
	{
		ANarrativePlayerCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Return the controlled narrative char\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Return the controlled narrative char" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetControlledCharacter_Parms, ReturnValue), Z_Construct_UClass_ANarrativePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetControlledCharacter", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NarrativePlayerController_eventGetControlledCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NarrativePlayerController_eventGetControlledCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetControlledCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativePlayerCharacter**)Z_Param__Result=P_THIS->GetControlledCharacter();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetControlledCharacter

// Begin Class ANarrativePlayerController Function GetInteractionComponent
struct Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics
{
	struct NarrativePlayerController_eventGetInteractionComponent_Parms
	{
		UPlayerInteractionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetInteractionComponent_Parms, ReturnValue), Z_Construct_UClass_UPlayerInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetInteractionComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NarrativePlayerController_eventGetInteractionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NarrativePlayerController_eventGetInteractionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetInteractionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerInteractionComponent**)Z_Param__Result=P_THIS->GetInteractionComponent();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetInteractionComponent

// Begin Class ANarrativePlayerController Function GetNarrativeInputDeviceName
struct Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics
{
	struct NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Input" },
		{ "Comment", "//Basically just return the input device name in a way the narrative input icon data table understands. Keyboard, Xbox, PS5, etc. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Basically just return the input device name in a way the narrative input icon data table understands. Keyboard, Xbox, PS5, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetNarrativeInputDeviceName", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetNarrativeInputDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNarrativeInputDeviceName();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetNarrativeInputDeviceName

// Begin Class ANarrativePlayerController Function GetTalesComponent
struct Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics
{
	struct NarrativePlayerController_eventGetTalesComponent_Parms
	{
		UTalesComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetTalesComponent_Parms, ReturnValue), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetTalesComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NarrativePlayerController_eventGetTalesComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NarrativePlayerController_eventGetTalesComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetTalesComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTalesComponent**)Z_Param__Result=P_THIS->GetTalesComponent();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetTalesComponent

// Begin Class ANarrativePlayerController Function HandleDamageActor
struct NarrativePlayerController_eventHandleDamageActor_Parms
{
	AActor* DamagedActor;
	float DamageAmount;
};
static const FName NAME_ANarrativePlayerController_HandleDamageActor = FName(TEXT("HandleDamageActor"));
void ANarrativePlayerController::HandleDamageActor(AActor* DamagedActor, const float DamageAmount)
{
	NarrativePlayerController_eventHandleDamageActor_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_HandleDamageActor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|FX" },
		{ "Comment", "//Do whatever we like when we damage an actor, by default we put damage text up. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Do whatever we like when we damage an actor, by default we put damage text up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDamageActor_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDamageActor_Parms, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "HandleDamageActor", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers), sizeof(NarrativePlayerController_eventHandleDamageActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventHandleDamageActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativePlayerController Function HandleDamageActor

// Begin Class ANarrativePlayerController Function HandleDeath
struct NarrativePlayerController_eventHandleDeath_Parms
{
	AActor* KilledActor;
	UNarrativeAbilitySystemComponent* KilledActorASC;
};
static const FName NAME_ANarrativePlayerController_HandleDeath = FName(TEXT("HandleDeath"));
void ANarrativePlayerController::HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_HandleDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativePlayerController_eventHandleDeath_Parms Parms;
		Parms.KilledActor=KilledActor;
		Parms.KilledActorASC=KilledActorASC;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDeath_Implementation(KilledActor, KilledActorASC);
	}
}
struct Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Gives our playercontroller a chance to react to death.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Gives our playercontroller a chance to react to death." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KilledActorASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActorASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDeath_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDeath_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "HandleDeath", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers), sizeof(NarrativePlayerController_eventHandleDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventHandleDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execHandleDeath)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_KilledActorASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath_Implementation(Z_Param_KilledActor,Z_Param_KilledActorASC);
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function HandleDeath

// Begin Class ANarrativePlayerController Function IsUsingGamepad
struct Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics
{
	struct NarrativePlayerController_eventIsUsingGamepad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Input" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativePlayerController_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePlayerController_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "IsUsingGamepad", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NarrativePlayerController_eventIsUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NarrativePlayerController_eventIsUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execIsUsingGamepad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function IsUsingGamepad

// Begin Class ANarrativePlayerController Function NotifyDealtDamage
struct NarrativePlayerController_eventNotifyDealtDamage_Parms
{
	AActor* DamagedActor;
	float DamageAmount;
};
static const FName NAME_ANarrativePlayerController_NotifyDealtDamage = FName(TEXT("NotifyDealtDamage"));
void ANarrativePlayerController::NotifyDealtDamage(AActor* DamagedActor, const float DamageAmount)
{
	NarrativePlayerController_eventNotifyDealtDamage_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_NotifyDealtDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventNotifyDealtDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventNotifyDealtDamage_Parms, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "NotifyDealtDamage", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers), sizeof(NarrativePlayerController_eventNotifyDealtDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventNotifyDealtDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execNotifyDealtDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyDealtDamage_Implementation(Z_Param_DamagedActor,Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function NotifyDealtDamage

// Begin Class ANarrativePlayerController
void ANarrativePlayerController::StaticRegisterNativesANarrativePlayerController()
{
	UClass* Class = ANarrativePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetControlledCharacter", &ANarrativePlayerController::execGetControlledCharacter },
		{ "GetInteractionComponent", &ANarrativePlayerController::execGetInteractionComponent },
		{ "GetNarrativeInputDeviceName", &ANarrativePlayerController::execGetNarrativeInputDeviceName },
		{ "GetTalesComponent", &ANarrativePlayerController::execGetTalesComponent },
		{ "HandleDeath", &ANarrativePlayerController::execHandleDeath },
		{ "IsUsingGamepad", &ANarrativePlayerController::execIsUsingGamepad },
		{ "NotifyDealtDamage", &ANarrativePlayerController::execNotifyDealtDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativePlayerController);
UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister()
{
	return ANarrativePlayerController::StaticClass();
}
struct Z_Construct_UClass_ANarrativePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for Player Controllers in Narrative Pro. Typically possesses an ANarrativePlayerCharacter. \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativePlayerController.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for Player Controllers in Narrative Pro. Typically possesses an ANarrativePlayerCharacter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TalesComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationComponent_MetaData[] = {
		{ "Category", "Narrative|Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TalesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI, "FastTravelToPOI" }, // 2283633645
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter, "GetControlledCharacter" }, // 3042072637
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent, "GetInteractionComponent" }, // 3196819243
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName, "GetNarrativeInputDeviceName" }, // 3070293221
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent, "GetTalesComponent" }, // 3978111508
		{ &Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor, "HandleDamageActor" }, // 1317687572
		{ &Z_Construct_UFunction_ANarrativePlayerController_HandleDeath, "HandleDeath" }, // 1371155628
		{ &Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad, "IsUsingGamepad" }, // 923549832
		{ &Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage, "NotifyDealtDamage" }, // 2571440435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, InteractionComponent), Z_Construct_UClass_UPlayerInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_TalesComponent = { "TalesComponent", nullptr, (EPropertyFlags)0x012408000009201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, TalesComponent), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TalesComponent_MetaData), NewProp_TalesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NavigationComponent = { "NavigationComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, NavigationComponent), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationComponent_MetaData), NewProp_NavigationComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_TalesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NavigationComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativePlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, INarrativeTeamAgentInterface), false },  // 1836146804
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativePlayerController_Statics::ClassParams = {
	&ANarrativePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativePlayerController()
{
	if (!Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton, Z_Construct_UClass_ANarrativePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativePlayerController>()
{
	return ANarrativePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativePlayerController);
ANarrativePlayerController::~ANarrativePlayerController() {}
// End Class ANarrativePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativePlayerController, ANarrativePlayerController::StaticClass, TEXT("ANarrativePlayerController"), &Z_Registration_Info_UClass_ANarrativePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativePlayerController), 2395181992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_3087025999(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

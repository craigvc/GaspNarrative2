// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settings/NarrativeCombatDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCombatDeveloperSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatDeveloperSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatDeveloperSettings_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeCombatDeveloperSettings Function GetAttackFrequencyForDifficulty
struct Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics
{
	struct NarrativeCombatDeveloperSettings_eventGetAttackFrequencyForDifficulty_Parms
	{
		ENarrativeGameplayDifficulty Difficulty;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack Frequency" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatDeveloperSettings_eventGetAttackFrequencyForDifficulty_Parms, Difficulty), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(0, nullptr) }; // 4013433520
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatDeveloperSettings_eventGetAttackFrequencyForDifficulty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NewProp_Difficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NewProp_Difficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatDeveloperSettings, nullptr, "GetAttackFrequencyForDifficulty", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NarrativeCombatDeveloperSettings_eventGetAttackFrequencyForDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::NarrativeCombatDeveloperSettings_eventGetAttackFrequencyForDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCombatDeveloperSettings::execGetAttackFrequencyForDifficulty)
{
	P_GET_ENUM(ENarrativeGameplayDifficulty,Z_Param_Difficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackFrequencyForDifficulty(ENarrativeGameplayDifficulty(Z_Param_Difficulty));
	P_NATIVE_END;
}
// End Class UNarrativeCombatDeveloperSettings Function GetAttackFrequencyForDifficulty

// Begin Class UNarrativeCombatDeveloperSettings
void UNarrativeCombatDeveloperSettings::StaticRegisterNativesUNarrativeCombatDeveloperSettings()
{
	UClass* Class = UNarrativeCombatDeveloperSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttackFrequencyForDifficulty", &UNarrativeCombatDeveloperSettings::execGetAttackFrequencyForDifficulty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCombatDeveloperSettings);
UClass* Z_Construct_UClass_UNarrativeCombatDeveloperSettings_NoRegister()
{
	return UNarrativeCombatDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Combat related developer settings \n */" },
		{ "DisplayName", "Narrative - Combat Settings" },
		{ "IncludePath", "Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ToolTip", "Combat related developer settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDamageNumbers_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "//**If true, damage dealt popups will appear above enemies you deal damage to. */\n" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ToolTip", "/If true, damage dealt popups will appear above enemies you deal damage to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAttackTokens_MetaData[] = {
		{ "Category", "Attack Tokens" },
		{ "Comment", "//** The amount of attack tokens to grant the player on each difficulty mode. */\n" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ToolTip", "/ The amount of attack tokens to grant the player on each difficulty mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealTokenProximity_MetaData[] = {
		{ "Category", "Attack Tokens" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "//** Token stealers must be this percent of the existing distance to steal a token. IE 0.2 = steal a token if we are 0.2x the distance from the target as an existing token. */\n" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ToolTip", "/ Token stealers must be this percent of the existing distance to steal a token. IE 0.2 = steal a token if we are 0.2x the distance from the target as an existing token." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenStealableAgeSeconds_MetaData[] = {
		{ "Category", "Attack Tokens" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Tokens more than this many seconds old can be stolen  - nice way of giving others a chance to attack for a bit. */" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ToolTip", "Tokens more than this many seconds old can be stolen  - nice way of giving others a chance to attack for a bit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCAttackFrequencies_MetaData[] = {
		{ "Category", "NPC Attack Behaviour" },
		{ "Comment", "//** AI use this to decide how often they should fire at each difficulty. This is a multiplier of RateOfFire. IE 3.0 = attack at 3x the rate of fire */\n" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeCombatDeveloperSettings.h" },
		{ "ToolTip", "/ AI use this to decide how often they should fire at each difficulty. This is a multiplier of RateOfFire. IE 3.0 = attack at 3x the rate of fire" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDamageNumbers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDamageNumbers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableAttackTokens_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AvailableAttackTokens_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AvailableAttackTokens_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AvailableAttackTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StealTokenProximity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TokenStealableAgeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NPCAttackFrequencies_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NPCAttackFrequencies_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NPCAttackFrequencies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NPCAttackFrequencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCombatDeveloperSettings_GetAttackFrequencyForDifficulty, "GetAttackFrequencyForDifficulty" }, // 3592339038
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCombatDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_bEnableDamageNumbers_SetBit(void* Obj)
{
	((UNarrativeCombatDeveloperSettings*)Obj)->bEnableDamageNumbers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_bEnableDamageNumbers = { "bEnableDamageNumbers", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeCombatDeveloperSettings), &Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_bEnableDamageNumbers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDamageNumbers_MetaData), NewProp_bEnableDamageNumbers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens_ValueProp = { "AvailableAttackTokens", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens_Key_KeyProp = { "AvailableAttackTokens_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(0, nullptr) }; // 4013433520
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens = { "AvailableAttackTokens", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCombatDeveloperSettings, AvailableAttackTokens), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableAttackTokens_MetaData), NewProp_AvailableAttackTokens_MetaData) }; // 4013433520
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_StealTokenProximity = { "StealTokenProximity", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCombatDeveloperSettings, StealTokenProximity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealTokenProximity_MetaData), NewProp_StealTokenProximity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_TokenStealableAgeSeconds = { "TokenStealableAgeSeconds", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCombatDeveloperSettings, TokenStealableAgeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenStealableAgeSeconds_MetaData), NewProp_TokenStealableAgeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies_ValueProp = { "NPCAttackFrequencies", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies_Key_KeyProp = { "NPCAttackFrequencies_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(0, nullptr) }; // 4013433520
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies = { "NPCAttackFrequencies", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCombatDeveloperSettings, NPCAttackFrequencies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCAttackFrequencies_MetaData), NewProp_NPCAttackFrequencies_MetaData) }; // 4013433520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_bEnableDamageNumbers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_AvailableAttackTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_StealTokenProximity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_TokenStealableAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::NewProp_NPCAttackFrequencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::ClassParams = {
	&UNarrativeCombatDeveloperSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCombatDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeCombatDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCombatDeveloperSettings.OuterSingleton, Z_Construct_UClass_UNarrativeCombatDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCombatDeveloperSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCombatDeveloperSettings>()
{
	return UNarrativeCombatDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCombatDeveloperSettings);
UNarrativeCombatDeveloperSettings::~UNarrativeCombatDeveloperSettings() {}
// End Class UNarrativeCombatDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeCombatDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCombatDeveloperSettings, UNarrativeCombatDeveloperSettings::StaticClass, TEXT("UNarrativeCombatDeveloperSettings"), &Z_Registration_Info_UClass_UNarrativeCombatDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCombatDeveloperSettings), 2037434998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeCombatDeveloperSettings_h_2961007282(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeCombatDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeCombatDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

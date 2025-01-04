// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/GameFramework/NinjaGASCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASCharacter();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASCharacter_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UAbilitySystemDefaultsInterface_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class ANinjaGASCharacter Function ClearAbilitySystemComponent
struct Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Character" },
		{ "Comment", "/**\n\x09 * Clears the ability system component, most likely due to the character being destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ToolTip", "Clears the ability system component, most likely due to the character being destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaGASCharacter, nullptr, "ClearAbilitySystemComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaGASCharacter::execClearAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ANinjaGASCharacter Function ClearAbilitySystemComponent

// Begin Class ANinjaGASCharacter Function InitializeFromPlayerState
struct Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Timer-friendly function to initialize features from the Player State.\n\x09 * By default, retrieves a copy of the ASC, but can be used for other components too.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ToolTip", "Timer-friendly function to initialize features from the Player State.\nBy default, retrieves a copy of the ASC, but can be used for other components too." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaGASCharacter, nullptr, "InitializeFromPlayerState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaGASCharacter::execInitializeFromPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromPlayerState();
	P_NATIVE_END;
}
// End Class ANinjaGASCharacter Function InitializeFromPlayerState

// Begin Class ANinjaGASCharacter Function SetupAbilitySystemComponent
struct Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics
{
	struct NinjaGASCharacter_eventSetupAbilitySystemComponent_Parms
	{
		AActor* AbilitySystemOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Character" },
		{ "Comment", "/**\n\x09 * Initializes the ability system component using the source as an avatar.\n\x09 *\n\x09 * @param AbilitySystemOwner\n\x09 *\x09\x09""Actor that owns the Ability System Component. It may be the same character\n\x09 *\x09\x09or an external source such as the Player State.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ToolTip", "Initializes the ability system component using the source as an avatar.\n\n@param AbilitySystemOwner\n             Actor that owns the Ability System Component. It may be the same character\n             or an external source such as the Player State." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::NewProp_AbilitySystemOwner = { "AbilitySystemOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASCharacter_eventSetupAbilitySystemComponent_Parms, AbilitySystemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::NewProp_AbilitySystemOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaGASCharacter, nullptr, "SetupAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::NinjaGASCharacter_eventSetupAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::NinjaGASCharacter_eventSetupAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaGASCharacter::execSetupAbilitySystemComponent)
{
	P_GET_OBJECT(AActor,Z_Param_AbilitySystemOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAbilitySystemComponent(Z_Param_AbilitySystemOwner);
	P_NATIVE_END;
}
// End Class ANinjaGASCharacter Function SetupAbilitySystemComponent

// Begin Class ANinjaGASCharacter
void ANinjaGASCharacter::StaticRegisterNativesANinjaGASCharacter()
{
	UClass* Class = ANinjaGASCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAbilitySystemComponent", &ANinjaGASCharacter::execClearAbilitySystemComponent },
		{ "InitializeFromPlayerState", &ANinjaGASCharacter::execInitializeFromPlayerState },
		{ "SetupAbilitySystemComponent", &ANinjaGASCharacter::execSetupAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaGASCharacter);
UClass* Z_Construct_UClass_ANinjaGASCharacter_NoRegister()
{
	return ANinjaGASCharacter::StaticClass();
}
struct Z_Construct_UClass_ANinjaGASCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Character class, with a pre-configured Ability System Component.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/NinjaGASCharacter.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base Character class, with a pre-configured Ability System Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityReplicationMode_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/**\n\x09 * Sets how the Ability System component will replicate data to clients.\n\x09 *\n\x09 * As per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:\n\x09 * \n\x09 * - Full:\x09\x09Single Player, every Gameplay Effect is replicated to every client.\n\x09 * \n\x09 * - Mixed:\x09\x09Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.\n\x09 *\x09\x09\x09\x09Gameplay Tags and Cues will replicate to everyone.\n\x09 *\x09\x09\x09\x09\n\x09 * - Minimal\x09""AI Actors in Multiplayer, Gameplay Effects are never replicated.\n\x09 *\x09\x09\x09\x09Gameplay Tags and Cues will replicate to everyone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ToolTip", "Sets how the Ability System component will replicate data to clients.\n\nAs per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:\n\n- Full:              Single Player, every Gameplay Effect is replicated to every client.\n\n- Mixed:             Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.\n                             Gameplay Tags and Cues will replicate to everyone.\n\n- Minimal    AI Actors in Multiplayer, Gameplay Effects are never replicated.\n                             Gameplay Tags and Cues will replicate to everyone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilitySetup_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/** Default configuration for the Ability System. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ToolTip", "Default configuration for the Ability System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** The Ability System Component managed by this character class. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASCharacter.h" },
		{ "ToolTip", "The Ability System Component managed by this character class." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityReplicationMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAbilitySetup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaGASCharacter_ClearAbilitySystemComponent, "ClearAbilitySystemComponent" }, // 3199119679
		{ &Z_Construct_UFunction_ANinjaGASCharacter_InitializeFromPlayerState, "InitializeFromPlayerState" }, // 2908326380
		{ &Z_Construct_UFunction_ANinjaGASCharacter_SetupAbilitySystemComponent, "SetupAbilitySystemComponent" }, // 1783081512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaGASCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_AbilityReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_AbilityReplicationMode = { "AbilityReplicationMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASCharacter, AbilityReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityReplicationMode_MetaData), NewProp_AbilityReplicationMode_MetaData) }; // 3979288675
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_DefaultAbilitySetup = { "DefaultAbilitySetup", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASCharacter, DefaultAbilitySetup), Z_Construct_UClass_UNinjaGASDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilitySetup_MetaData), NewProp_DefaultAbilitySetup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASCharacter, CharacterAbilities), Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAbilities_MetaData), NewProp_CharacterAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaGASCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_AbilityReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_AbilityReplicationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_DefaultAbilitySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASCharacter_Statics::NewProp_CharacterAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaGASCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaGASCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaGASCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UAbilitySystemDefaultsInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaGASCharacter, IAbilitySystemDefaultsInterface), false },  // 941413795
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaGASCharacter, IGameplayTagAssetInterface), false },  // 2592985258
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaGASCharacter_Statics::ClassParams = {
	&ANinjaGASCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaGASCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaGASCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaGASCharacter()
{
	if (!Z_Registration_Info_UClass_ANinjaGASCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaGASCharacter.OuterSingleton, Z_Construct_UClass_ANinjaGASCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaGASCharacter.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<ANinjaGASCharacter>()
{
	return ANinjaGASCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaGASCharacter);
ANinjaGASCharacter::~ANinjaGASCharacter() {}
// End Class ANinjaGASCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaGASCharacter, ANinjaGASCharacter::StaticClass, TEXT("ANinjaGASCharacter"), &Z_Registration_Info_UClass_ANinjaGASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaGASCharacter), 2322778519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_3280228248(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

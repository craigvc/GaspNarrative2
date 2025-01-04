// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/GameFramework/NinjaGASPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPlayerState();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class ANinjaGASPlayerState
void ANinjaGASPlayerState::StaticRegisterNativesANinjaGASPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaGASPlayerState);
UClass* Z_Construct_UClass_ANinjaGASPlayerState_NoRegister()
{
	return ANinjaGASPlayerState::StaticClass();
}
struct Z_Construct_UClass_ANinjaGASPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Player State that contains a Gameplay Ability System.\n *\n * It allows subclasses to define their own Ability System Component type using the \"AbilityComponentName\",\n * or even fully disabling the component's creation, in case it will be provided via Modular Gameplay.\n *\n * This Player state is also compatible with Modular Gameplay Features, so it will broadcast the proper\n * Modular Gameplay Events during, from the proper lifecycle methods.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/NinjaGASPlayerState.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Player State that contains a Gameplay Ability System.\n\nIt allows subclasses to define their own Ability System Component type using the \"AbilityComponentName\",\nor even fully disabling the component's creation, in case it will be provided via Modular Gameplay.\n\nThis Player state is also compatible with Modular Gameplay Features, so it will broadcast the proper\nModular Gameplay Events during, from the proper lifecycle methods." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityReplicationMode_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/**\n\x09 * Sets how the Ability System component will replicate data to clients.\n\x09 *\n\x09 * As per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:\n\x09 * \n\x09 * - Full:\x09\x09Single Player, every Gameplay Effect is replicated to every client.\n\x09 * \n\x09 * - Mixed:\x09\x09Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.\n\x09 *\x09\x09\x09\x09Gameplay Tags and Cues will replicate to everyone.\n\x09 *\x09\x09\x09\x09\n\x09 * - Minimal\x09""AI Actors in Multiplayer, Gameplay Effects are never replicated.\n\x09 *\x09\x09\x09\x09Gameplay Tags and Cues will replicate to everyone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASPlayerState.h" },
		{ "ToolTip", "Sets how the Ability System component will replicate data to clients.\n\nAs per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:\n\n- Full:              Single Player, every Gameplay Effect is replicated to every client.\n\n- Mixed:             Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.\n                             Gameplay Tags and Cues will replicate to everyone.\n\n- Minimal    AI Actors in Multiplayer, Gameplay Effects are never replicated.\n                             Gameplay Tags and Cues will replicate to everyone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
		{ "Comment", "/** Hard reference to the Ability System Component used by the player. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASPlayerState.h" },
		{ "ToolTip", "Hard reference to the Ability System Component used by the player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityReplicationMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaGASPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaGASPlayerState_Statics::NewProp_AbilityReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANinjaGASPlayerState_Statics::NewProp_AbilityReplicationMode = { "AbilityReplicationMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASPlayerState, AbilityReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityReplicationMode_MetaData), NewProp_AbilityReplicationMode_MetaData) }; // 3979288675
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaGASPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaGASPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaGASPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASPlayerState_Statics::NewProp_AbilityReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASPlayerState_Statics::NewProp_AbilityReplicationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaGASPlayerState_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaGASPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaGASPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaGASPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaGASPlayerState_Statics::ClassParams = {
	&ANinjaGASPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaGASPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaGASPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaGASPlayerState()
{
	if (!Z_Registration_Info_UClass_ANinjaGASPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaGASPlayerState.OuterSingleton, Z_Construct_UClass_ANinjaGASPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaGASPlayerState.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<ANinjaGASPlayerState>()
{
	return ANinjaGASPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaGASPlayerState);
ANinjaGASPlayerState::~ANinjaGASPlayerState() {}
// End Class ANinjaGASPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaGASPlayerState, ANinjaGASPlayerState::StaticClass, TEXT("ANinjaGASPlayerState"), &Z_Registration_Info_UClass_ANinjaGASPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaGASPlayerState), 942552562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerState_h_3650275881(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

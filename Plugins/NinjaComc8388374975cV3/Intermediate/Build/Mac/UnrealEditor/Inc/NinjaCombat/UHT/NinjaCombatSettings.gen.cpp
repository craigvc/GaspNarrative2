// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/NinjaCombatSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatSettings();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatSettings
void UNinjaCombatSettings::StaticRegisterNativesUNinjaCombatSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatSettings);
UClass* Z_Construct_UClass_UNinjaCombatSettings_NoRegister()
{
	return UNinjaCombatSettings::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Central location for system-wide settings related to the Ninja Combat plugin.\n */" },
		{ "DisplayName", "Ninja Combat" },
		{ "IncludePath", "NinjaCombatSettings.h" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Central location for system-wide settings related to the Ninja Combat plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfoProxyClass_MetaData[] = {
		{ "Category", "Core Settings" },
		{ "Comment", "/**\n\x09 * The Proxy used to exchange information with the Ability Actor Info struct.\n\x09 * This Object must be a valid implementation of the \"Combat Actor Info Proxy\" interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatActorInfoProxyInterface" },
		{ "ToolTip", "The Proxy used to exchange information with the Ability Actor Info struct.\nThis Object must be a valid implementation of the \"Combat Actor Info Proxy\" interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextProxyClass_MetaData[] = {
		{ "Category", "Core Settings" },
		{ "Comment", "/**\n\x09 * The Proxy used to exchange information with the Effect Context struct.\n\x09 * This Object must be a valid implementation of the \"Combat Effect Context Proxy\" interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatEffectContextProxyInterface" },
		{ "ToolTip", "The Proxy used to exchange information with the Effect Context struct.\nThis Object must be a valid implementation of the \"Combat Effect Context Proxy\" interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionWarpingByDefault_MetaData[] = {
		{ "Category", "Core Settings" },
		{ "Comment", "/**\n\x09 * If set to true, abilities using the Motion Warping will have that setting active by default.\n\x09 * Use this as the most common option for your project and fine tune in each ability as needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "If set to true, abilities using the Motion Warping will have that setting active by default.\nUse this as the most common option for your project and fine tune in each ability as needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireNextTargetsAutomatically_MetaData[] = {
		{ "Category", "Targeting System" },
		{ "Comment", "/**\n\x09 * If set to true, retrieves a new target automatically, after the current one has been killed.\n\x09 *\n\x09 * This will affect the Target Lock ability, allowing it to execute secondary searches to collect\n\x09 * follow-up targets. Make sure to check that ability and fine-tune your secondary search Preset\n\x09 * in case you want to perform a different search for follow-up targets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "If set to true, retrieves a new target automatically, after the current one has been killed.\n\nThis will affect the Target Lock ability, allowing it to execute secondary searches to collect\nfollow-up targets. Make sure to check that ability and fine-tune your secondary search Preset\nin case you want to perform a different search for follow-up targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLockOnTargetsFromMeleeAttacks_MetaData[] = {
		{ "Category", "Targeting System" },
		{ "Comment", "/**\n\x09 * If set to true, will lock on the target obtained from a melee attack, if no target is set.\n\x09 *\n\x09 * Melee attacks must be configured with a proper Target Provider for this to work. In which\n\x09 * case, the target obtained from a melee attack will become the current target, via the\n\x09 * Gameplay Event that should activate the Target Lock ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "If set to true, will lock on the target obtained from a melee attack, if no target is set.\n\nMelee attacks must be configured with a proper Target Provider for this to work. In which\ncase, the target obtained from a melee attack will become the current target, via the\nGameplay Event that should activate the Target Lock ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTargetLockActorClass_MetaData[] = {
		{ "Category", "Targeting System" },
		{ "Comment", "/**\n\x09 * The default Target Lock Actor class applied to targets when they are locked by a Player.\n\x09 *\n\x09 * This is only relevant to the local player, when targeting enemies. AI and other players\n\x09 * will not see this actor. You can also customize this in the Target Manager component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "The default Target Lock Actor class applied to targets when they are locked by a Player.\n\nThis is only relevant to the local player, when targeting enemies. AI and other players\nwill not see this actor. You can also customize this in the Target Manager component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanChannel_MetaData[] = {
		{ "Category", "Melee Combat" },
		{ "Comment", "/**\n\x09 * Channel used for the melee scans performed by melee weapons.\n\x09 * Consider creating a dedicated channel for this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Channel used for the melee scans performed by melee weapons.\nConsider creating a dedicated channel for this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanClass_MetaData[] = {
		{ "Category", "Melee Combat" },
		{ "Comment", "/**\n\x09 * Class that represents a Melee Scan in the system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Class that represents a Melee Scan in the system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanDebugDuration_MetaData[] = {
		{ "Category", "Melee Combat" },
		{ "Comment", "/**\n\x09 * Duration of all visual debug information for the Melee Traces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Duration of all visual debug information for the Melee Traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocketName_MetaData[] = {
		{ "Category", "Ranged Combat" },
		{ "Comment", "/**\n\x09 * Default socket name for projectiles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Default socket name for projectiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileChannel_MetaData[] = {
		{ "Category", "Ranged Combat" },
		{ "Comment", "/**\n\x09 * Channel used to detect projectile hits.\n\x09 * Consider creating a dedicated channel for this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Channel used to detect projectile hits.\nConsider creating a dedicated channel for this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRequestClass_MetaData[] = {
		{ "Category", "Ranged Combat" },
		{ "Comment", "/**\n\x09 * Class that represents a Projectile Request in the system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "Class that represents a Projectile Request in the system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageRegistrySize_MetaData[] = {
		{ "Category", "Damage Handling" },
		{ "Comment", "/**\n\x09 * How many inflicted damage entries can be stored per character.\n\x09 * Necessary for the damage replication and client/server damage validation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatSettings.h" },
		{ "ToolTip", "How many inflicted damage entries can be stored per character.\nNecessary for the damage replication and client/server damage validation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorInfoProxyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectContextProxyClass;
	static void NewProp_bEnableMotionWarpingByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionWarpingByDefault;
	static void NewProp_bShouldAcquireNextTargetsAutomatically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireNextTargetsAutomatically;
	static void NewProp_bShouldLockOnTargetsFromMeleeAttacks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLockOnTargetsFromMeleeAttacks;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTargetLockActorClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeleeScanChannel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeScanClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeScanDebugDuration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileChannel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileRequestClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DamageRegistrySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ActorInfoProxyClass = { "ActorInfoProxyClass", nullptr, (EPropertyFlags)0x0014000002004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, ActorInfoProxyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInfoProxyClass_MetaData), NewProp_ActorInfoProxyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_EffectContextProxyClass = { "EffectContextProxyClass", nullptr, (EPropertyFlags)0x0014000002004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, EffectContextProxyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextProxyClass_MetaData), NewProp_EffectContextProxyClass_MetaData) };
void Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bEnableMotionWarpingByDefault_SetBit(void* Obj)
{
	((UNinjaCombatSettings*)Obj)->bEnableMotionWarpingByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bEnableMotionWarpingByDefault = { "bEnableMotionWarpingByDefault", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatSettings), &Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bEnableMotionWarpingByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMotionWarpingByDefault_MetaData), NewProp_bEnableMotionWarpingByDefault_MetaData) };
void Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldAcquireNextTargetsAutomatically_SetBit(void* Obj)
{
	((UNinjaCombatSettings*)Obj)->bShouldAcquireNextTargetsAutomatically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldAcquireNextTargetsAutomatically = { "bShouldAcquireNextTargetsAutomatically", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatSettings), &Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldAcquireNextTargetsAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAcquireNextTargetsAutomatically_MetaData), NewProp_bShouldAcquireNextTargetsAutomatically_MetaData) };
void Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldLockOnTargetsFromMeleeAttacks_SetBit(void* Obj)
{
	((UNinjaCombatSettings*)Obj)->bShouldLockOnTargetsFromMeleeAttacks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldLockOnTargetsFromMeleeAttacks = { "bShouldLockOnTargetsFromMeleeAttacks", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatSettings), &Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldLockOnTargetsFromMeleeAttacks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLockOnTargetsFromMeleeAttacks_MetaData), NewProp_bShouldLockOnTargetsFromMeleeAttacks_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_DefaultTargetLockActorClass = { "DefaultTargetLockActorClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, DefaultTargetLockActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTargetLockActorClass_MetaData), NewProp_DefaultTargetLockActorClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_MeleeScanChannel = { "MeleeScanChannel", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, MeleeScanChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanChannel_MetaData), NewProp_MeleeScanChannel_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_MeleeScanClass = { "MeleeScanClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, MeleeScanClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanClass_MetaData), NewProp_MeleeScanClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_MeleeScanDebugDuration = { "MeleeScanDebugDuration", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, MeleeScanDebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanDebugDuration_MetaData), NewProp_MeleeScanDebugDuration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ProjectileSocketName = { "ProjectileSocketName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, ProjectileSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSocketName_MetaData), NewProp_ProjectileSocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ProjectileChannel = { "ProjectileChannel", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, ProjectileChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileChannel_MetaData), NewProp_ProjectileChannel_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ProjectileRequestClass = { "ProjectileRequestClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, ProjectileRequestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileRequestClass_MetaData), NewProp_ProjectileRequestClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_DamageRegistrySize = { "DamageRegistrySize", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatSettings, DamageRegistrySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageRegistrySize_MetaData), NewProp_DamageRegistrySize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ActorInfoProxyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_EffectContextProxyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bEnableMotionWarpingByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldAcquireNextTargetsAutomatically,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_bShouldLockOnTargetsFromMeleeAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_DefaultTargetLockActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_MeleeScanChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_MeleeScanClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_MeleeScanDebugDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ProjectileSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ProjectileChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_ProjectileRequestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatSettings_Statics::NewProp_DamageRegistrySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatSettings_Statics::ClassParams = {
	&UNinjaCombatSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaCombatSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatSettings()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatSettings.OuterSingleton, Z_Construct_UClass_UNinjaCombatSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatSettings.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatSettings>()
{
	return UNinjaCombatSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatSettings);
UNinjaCombatSettings::~UNinjaCombatSettings() {}
// End Class UNinjaCombatSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatSettings, UNinjaCombatSettings::StaticClass, TEXT("UNinjaCombatSettings"), &Z_Registration_Info_UClass_UNinjaCombatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatSettings), 4108302620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSettings_h_1321442650(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

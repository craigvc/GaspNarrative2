// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/Types/EPoolableActorState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPoolableActorState() {}

// Begin Cross Module References
NINJACOMBATACTORPOOL_API UEnum* Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin Enum EPoolableActorState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoolableActorState;
static UEnum* EPoolableActorState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPoolableActorState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPoolableActorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState, (UObject*)Z_Construct_UPackage__Script_NinjaCombatActorPool(), TEXT("EPoolableActorState"));
	}
	return Z_Registration_Info_UEnum_EPoolableActorState.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UEnum* StaticEnum<EPoolableActorState>()
{
	return EPoolableActorState_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EPoolableActorState::Active" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Possible states for a pooled actor.\n */" },
		{ "Inactive.Name", "EPoolableActorState::Inactive" },
		{ "ModuleRelativePath", "Public/Types/EPoolableActorState.h" },
		{ "Reserved.Name", "EPoolableActorState::Reserved" },
		{ "ToolTip", "Possible states for a pooled actor." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPoolableActorState::Inactive", (int64)EPoolableActorState::Inactive },
		{ "EPoolableActorState::Reserved", (int64)EPoolableActorState::Reserved },
		{ "EPoolableActorState::Active", (int64)EPoolableActorState::Active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
	nullptr,
	"EPoolableActorState",
	"EPoolableActorState",
	Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState()
{
	if (!Z_Registration_Info_UEnum_EPoolableActorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoolableActorState.InnerSingleton, Z_Construct_UEnum_NinjaCombatActorPool_EPoolableActorState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPoolableActorState.InnerSingleton;
}
// End Enum EPoolableActorState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_EPoolableActorState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPoolableActorState_StaticEnum, TEXT("EPoolableActorState"), &Z_Registration_Info_UEnum_EPoolableActorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 280490186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_EPoolableActorState_h_3011530241(TEXT("/Script/NinjaCombatActorPool"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_EPoolableActorState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_EPoolableActorState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

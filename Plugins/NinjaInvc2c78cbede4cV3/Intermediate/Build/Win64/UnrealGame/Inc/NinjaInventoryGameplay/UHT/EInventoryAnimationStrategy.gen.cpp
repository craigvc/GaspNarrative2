// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Types/EInventoryAnimationStrategy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInventoryAnimationStrategy() {}

// Begin Cross Module References
NINJAINVENTORYGAMEPLAY_API UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Enum EInventoryAnimationStrategy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventoryAnimationStrategy;
static UEnum* EInventoryAnimationStrategy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventoryAnimationStrategy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventoryAnimationStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("EInventoryAnimationStrategy"));
	}
	return Z_Registration_Info_UEnum_EInventoryAnimationStrategy.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UEnum* StaticEnum<EInventoryAnimationStrategy>()
{
	return EInventoryAnimationStrategy_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysExecute.Comment", "/** Performs the inventory operation regardless of an animation being found. */" },
		{ "AlwaysExecute.Name", "EInventoryAnimationStrategy::AlwaysExecute" },
		{ "AlwaysExecute.ToolTip", "Performs the inventory operation regardless of an animation being found." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines the role of animations for Inventory Events.\n */" },
		{ "ModuleRelativePath", "Public/Types/EInventoryAnimationStrategy.h" },
		{ "ToolTip", "Defines the role of animations for Inventory Events." },
		{ "WaitForGameplayEvent.Comment", "/** Waits for a Gameplay Event from the animation. */" },
		{ "WaitForGameplayEvent.Name", "EInventoryAnimationStrategy::WaitForGameplayEvent" },
		{ "WaitForGameplayEvent.ToolTip", "Waits for a Gameplay Event from the animation." },
		{ "WhenAnimationStarts.Comment", "/** Performs the inventory operation when the animation starts. */" },
		{ "WhenAnimationStarts.Name", "EInventoryAnimationStrategy::WhenAnimationStarts" },
		{ "WhenAnimationStarts.ToolTip", "Performs the inventory operation when the animation starts." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInventoryAnimationStrategy::AlwaysExecute", (int64)EInventoryAnimationStrategy::AlwaysExecute },
		{ "EInventoryAnimationStrategy::WhenAnimationStarts", (int64)EInventoryAnimationStrategy::WhenAnimationStarts },
		{ "EInventoryAnimationStrategy::WaitForGameplayEvent", (int64)EInventoryAnimationStrategy::WaitForGameplayEvent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	nullptr,
	"EInventoryAnimationStrategy",
	"EInventoryAnimationStrategy",
	Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy()
{
	if (!Z_Registration_Info_UEnum_EInventoryAnimationStrategy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventoryAnimationStrategy.InnerSingleton, Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventoryAnimationStrategy.InnerSingleton;
}
// End Enum EInventoryAnimationStrategy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_EInventoryAnimationStrategy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInventoryAnimationStrategy_StaticEnum, TEXT("EInventoryAnimationStrategy"), &Z_Registration_Info_UEnum_EInventoryAnimationStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 360413212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_EInventoryAnimationStrategy_h_2671628085(TEXT("/Script/NinjaInventoryGameplay"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_EInventoryAnimationStrategy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_EInventoryAnimationStrategy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Types/FNinjaCombatGameplayAbilityActorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNinjaCombatGameplayAbilityActorInfo() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FNinjaCombatGameplayAbilityActorInfo
static_assert(std::is_polymorphic<FNinjaCombatGameplayAbilityActorInfo>() == std::is_polymorphic<FGameplayAbilityActorInfo>(), "USTRUCT FNinjaCombatGameplayAbilityActorInfo cannot be polymorphic unless super FGameplayAbilityActorInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo;
class UScriptStruct* FNinjaCombatGameplayAbilityActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("NinjaCombatGameplayAbilityActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FNinjaCombatGameplayAbilityActorInfo>()
{
	return FNinjaCombatGameplayAbilityActorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enhances the default actor info, so it will also resolve combat objects.\n * \n * This is not directly used by the Combat/Ability System. Instead, a proxy object is used, so you\n * can use any other Actor Info struct as long as you provide an appropriate proxy for it.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayAbilityActorInfo.h" },
		{ "ToolTip", "Enhances the default actor info, so it will also resolve combat objects.\n\nThis is not directly used by the Combat/Ability System. Instead, a proxy object is used, so you\ncan use any other Actor Info struct as long as you provide an appropriate proxy for it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatManagerComponent_MetaData[] = {
		{ "Category", "Combat Info" },
		{ "Comment", "/**\n\x09 * Combat Manager Component assigned to the actor.\n\x09 * Can be used to retrieve all other relevant components.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayAbilityActorInfo.h" },
		{ "ToolTip", "Combat Manager Component assigned to the actor.\nCan be used to retrieve all other relevant components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CombatManagerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNinjaCombatGameplayAbilityActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::NewProp_CombatManagerComponent = { "CombatManagerComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaCombatGameplayAbilityActorInfo, CombatManagerComponent), Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatManagerComponent_MetaData), NewProp_CombatManagerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::NewProp_CombatManagerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	Z_Construct_UScriptStruct_FGameplayAbilityActorInfo,
	&NewStructOps,
	"NinjaCombatGameplayAbilityActorInfo",
	Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::PropPointers),
	sizeof(FNinjaCombatGameplayAbilityActorInfo),
	alignof(FNinjaCombatGameplayAbilityActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo.InnerSingleton;
}
// End ScriptStruct FNinjaCombatGameplayAbilityActorInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayAbilityActorInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNinjaCombatGameplayAbilityActorInfo::StaticStruct, Z_Construct_UScriptStruct_FNinjaCombatGameplayAbilityActorInfo_Statics::NewStructOps, TEXT("NinjaCombatGameplayAbilityActorInfo"), &Z_Registration_Info_UScriptStruct_NinjaCombatGameplayAbilityActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNinjaCombatGameplayAbilityActorInfo), 359588883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayAbilityActorInfo_h_3103075912(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayAbilityActorInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayAbilityActorInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

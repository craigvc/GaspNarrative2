// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/FDamageEntry.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDamageEntry() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FDamageEntry
static_assert(std::is_polymorphic<FDamageEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FDamageEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageEntry;
class UScriptStruct* FDamageEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEntry, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("DamageEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DamageEntry.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FDamageEntry>()
{
	return FDamageEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains information about damage applied or received.\n */" },
		{ "HasNativeBreak", "/Script/NinjaCombat.NinjaCombatFunctionLibrary.BreakDamageStruct" },
		{ "ModuleRelativePath", "Public/Types/FDamageEntry.h" },
		{ "ToolTip", "Contains information about damage applied or received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Comment", "/** The unique handle that identifies this damage. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageEntry.h" },
		{ "ToolTip", "The unique handle that identifies this damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[] = {
		{ "Comment", "/** Pointer to the Effect Context that generated this damage. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageEntry.h" },
		{ "ToolTip", "Pointer to the Effect Context that generated this damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedSourceTags_MetaData[] = {
		{ "Comment", "/** Captured tags from the source. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageEntry.h" },
		{ "ToolTip", "Captured tags from the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedTargetTags_MetaData[] = {
		{ "Comment", "/** Capture tags from the target. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageEntry.h" },
		{ "ToolTip", "Capture tags from the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandled_MetaData[] = {
		{ "Comment", "/** Marks the entity as handled by the current client. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageEntry.h" },
		{ "ToolTip", "Marks the entity as handled by the current client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedSourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedTargetTags;
	static void NewProp_bHandled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEntry, Handle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEntry, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContext_MetaData), NewProp_EffectContext_MetaData) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_CapturedSourceTags = { "CapturedSourceTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEntry, CapturedSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedSourceTags_MetaData), NewProp_CapturedSourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_CapturedTargetTags = { "CapturedTargetTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEntry, CapturedTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedTargetTags_MetaData), NewProp_CapturedTargetTags_MetaData) }; // 3352185621
void Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_bHandled_SetBit(void* Obj)
{
	((FDamageEntry*)Obj)->bHandled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_bHandled = { "bHandled", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageEntry), &Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_bHandled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandled_MetaData), NewProp_bHandled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_EffectContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_CapturedSourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_CapturedTargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEntry_Statics::NewProp_bHandled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"DamageEntry",
	Z_Construct_UScriptStruct_FDamageEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEntry_Statics::PropPointers),
	sizeof(FDamageEntry),
	alignof(FDamageEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageEntry.InnerSingleton, Z_Construct_UScriptStruct_FDamageEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageEntry.InnerSingleton;
}
// End ScriptStruct FDamageEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageEntry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageEntry::StaticStruct, Z_Construct_UScriptStruct_FDamageEntry_Statics::NewStructOps, TEXT("DamageEntry"), &Z_Registration_Info_UScriptStruct_DamageEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEntry), 3044778572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageEntry_h_2424609282(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageEntry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

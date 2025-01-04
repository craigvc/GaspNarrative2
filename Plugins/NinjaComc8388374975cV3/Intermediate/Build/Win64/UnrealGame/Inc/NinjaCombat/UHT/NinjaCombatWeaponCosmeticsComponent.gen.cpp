// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatWeaponCosmeticsComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatWeaponCosmeticsComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCosmeticsComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCosmeticsComponent_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatImpactCosmetics();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FCombatMeleeTrailsCosmetics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics;
class UScriptStruct* FCombatMeleeTrailsCosmetics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("CombatMeleeTrailsCosmetics"));
	}
	return Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FCombatMeleeTrailsCosmetics>()
{
	return FCombatMeleeTrailsCosmetics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input data for the trails used during a melee scan.\n */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Input data for the trails used during a melee scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSocketPrefix_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailBeginParameterName_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailEndParameterName_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponents_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrailSocketPrefix;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrailBeginParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrailEndParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatMeleeTrailsCosmetics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TrailSocketPrefix = { "TrailSocketPrefix", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, TrailSocketPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSocketPrefix_MetaData), NewProp_TrailSocketPrefix_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TrailBeginParameterName = { "TrailBeginParameterName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, TrailBeginParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailBeginParameterName_MetaData), NewProp_TrailBeginParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TrailEndParameterName = { "TrailEndParameterName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, TrailEndParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailEndParameterName_MetaData), NewProp_TrailEndParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_NiagaraComponents_Inner = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_NiagaraComponents = { "NiagaraComponents", nullptr, (EPropertyFlags)0x011400800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, NiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponents_MetaData), NewProp_NiagaraComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatMeleeTrailsCosmetics, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TrailSocketPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TrailBeginParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_TrailEndParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_NiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_NiagaraComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"CombatMeleeTrailsCosmetics",
	Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::PropPointers),
	sizeof(FCombatMeleeTrailsCosmetics),
	alignof(FCombatMeleeTrailsCosmetics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics()
{
	if (!Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics.InnerSingleton, Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics.InnerSingleton;
}
// End ScriptStruct FCombatMeleeTrailsCosmetics

// Begin ScriptStruct FCombatImpactCosmetics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatImpactCosmetics;
class UScriptStruct* FCombatImpactCosmetics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatImpactCosmetics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatImpactCosmetics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatImpactCosmetics, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("CombatImpactCosmetics"));
	}
	return Z_Registration_Info_UScriptStruct_CombatImpactCosmetics.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FCombatImpactCosmetics>()
{
	return FCombatImpactCosmetics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input data for the component when handling impacts.\n */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Input data for the component when handling impacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Cosmetics Parameter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactParticles;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CameraShake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatImpactCosmetics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, ImpactParticles), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticles_MetaData), NewProp_ImpactParticles_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShake_MetaData), NewProp_CameraShake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatImpactCosmetics, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_ImpactParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_CameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"CombatImpactCosmetics",
	Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::PropPointers),
	sizeof(FCombatImpactCosmetics),
	alignof(FCombatImpactCosmetics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatImpactCosmetics()
{
	if (!Z_Registration_Info_UScriptStruct_CombatImpactCosmetics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatImpactCosmetics.InnerSingleton, Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatImpactCosmetics.InnerSingleton;
}
// End ScriptStruct FCombatImpactCosmetics

// Begin Class UNinjaCombatCosmeticsComponent Function FindScanSourceMesh
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics
{
	struct NinjaCombatCosmeticsComponent_eventFindScanSourceMesh_Parms
	{
		const AActor* Source;
		UMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cosmetics" },
		{ "Comment", "/**\n\x09 * Finds the mesh that should be used for melee scans.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Finds the mesh that should be used for melee scans." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventFindScanSourceMesh_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventFindScanSourceMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "FindScanSourceMesh", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::NinjaCombatCosmeticsComponent_eventFindScanSourceMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::NinjaCombatCosmeticsComponent_eventFindScanSourceMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execFindScanSourceMesh)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->FindScanSourceMesh(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function FindScanSourceMesh

// Begin Class UNinjaCombatCosmeticsComponent Function GetImpactCameraShakeScale
struct NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms
{
	FCombatImpactCosmetics Parameters;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale = FName(TEXT("GetImpactCameraShakeScale"));
float UNinjaCombatCosmeticsComponent::GetImpactCameraShakeScale(FCombatImpactCosmetics const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms Parms;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatCosmeticsComponent*>(this)->GetImpactCameraShakeScale_Implementation(Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Determines the scale for the Camera Shake.\n\x09 * It can use tags to determine if the shake should be attenuated or boosted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Determines the scale for the Camera Shake.\nIt can use tags to determine if the shake should be attenuated or boosted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "GetImpactCameraShakeScale", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::PropPointers), sizeof(NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCosmeticsComponent_eventGetImpactCameraShakeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execGetImpactCameraShakeScale)
{
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetImpactCameraShakeScale_Implementation(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function GetImpactCameraShakeScale

// Begin Class UNinjaCombatCosmeticsComponent Function HandleImpactCameraShake
struct NinjaCombatCosmeticsComponent_eventHandleImpactCameraShake_Parms
{
	TSubclassOf<UCameraShakeBase> CameraShakeClass;
	FCombatImpactCosmetics Parameters;
};
static const FName NAME_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake = FName(TEXT("HandleImpactCameraShake"));
void UNinjaCombatCosmeticsComponent::HandleImpactCameraShake(TSubclassOf<UCameraShakeBase> CameraShakeClass, FCombatImpactCosmetics const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCosmeticsComponent_eventHandleImpactCameraShake_Parms Parms;
		Parms.CameraShakeClass=CameraShakeClass;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->HandleImpactCameraShake_Implementation(CameraShakeClass, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Handles the camera shake, once it has been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Handles the camera shake, once it has been loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactCameraShake_Parms, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactCameraShake_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::NewProp_CameraShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "HandleImpactCameraShake", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::PropPointers), sizeof(NinjaCombatCosmeticsComponent_eventHandleImpactCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCosmeticsComponent_eventHandleImpactCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execHandleImpactCameraShake)
{
	P_GET_OBJECT(UClass,Z_Param_CameraShakeClass);
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpactCameraShake_Implementation(Z_Param_CameraShakeClass,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function HandleImpactCameraShake

// Begin Class UNinjaCombatCosmeticsComponent Function HandleImpactDamageCosmetics
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics
{
	struct NinjaCombatCosmeticsComponent_eventHandleImpactDamageCosmetics_Parms
	{
		FCombatImpactCosmetics Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cosmetics" },
		{ "Comment", "/**\n\x09 * Handles cosmetics represented by soft pointers.\n\x09 *\n\x09 * It follows the signature for both Melee and Projectile impacts, so it can be used in\n\x09 * any situation where VFX or SFX must be played to represent a hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Handles cosmetics represented by soft pointers.\n\nIt follows the signature for both Melee and Projectile impacts, so it can be used in\nany situation where VFX or SFX must be played to represent a hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactDamageCosmetics_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "HandleImpactDamageCosmetics", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::NinjaCombatCosmeticsComponent_eventHandleImpactDamageCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::NinjaCombatCosmeticsComponent_eventHandleImpactDamageCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execHandleImpactDamageCosmetics)
{
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpactDamageCosmetics(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function HandleImpactDamageCosmetics

// Begin Class UNinjaCombatCosmeticsComponent Function HandleImpactParticles
struct NinjaCombatCosmeticsComponent_eventHandleImpactParticles_Parms
{
	UNiagaraSystem* Particles;
	FCombatImpactCosmetics Parameters;
};
static const FName NAME_UNinjaCombatCosmeticsComponent_HandleImpactParticles = FName(TEXT("HandleImpactParticles"));
void UNinjaCombatCosmeticsComponent::HandleImpactParticles(UNiagaraSystem* Particles, FCombatImpactCosmetics const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_HandleImpactParticles);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCosmeticsComponent_eventHandleImpactParticles_Parms Parms;
		Parms.Particles=Particles;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->HandleImpactParticles_Implementation(Particles, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Handles particles for the impact, once it has been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Handles particles for the impact, once it has been loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactParticles_Parms, Particles), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactParticles_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::NewProp_Particles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "HandleImpactParticles", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::PropPointers), sizeof(NinjaCombatCosmeticsComponent_eventHandleImpactParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCosmeticsComponent_eventHandleImpactParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execHandleImpactParticles)
{
	P_GET_OBJECT(UNiagaraSystem,Z_Param_Particles);
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpactParticles_Implementation(Z_Param_Particles,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function HandleImpactParticles

// Begin Class UNinjaCombatCosmeticsComponent Function HandleImpactSound
struct NinjaCombatCosmeticsComponent_eventHandleImpactSound_Parms
{
	USoundBase* Sound;
	FCombatImpactCosmetics Parameters;
};
static const FName NAME_UNinjaCombatCosmeticsComponent_HandleImpactSound = FName(TEXT("HandleImpactSound"));
void UNinjaCombatCosmeticsComponent::HandleImpactSound(USoundBase* Sound, FCombatImpactCosmetics const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_HandleImpactSound);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCosmeticsComponent_eventHandleImpactSound_Parms Parms;
		Parms.Sound=Sound;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->HandleImpactSound_Implementation(Sound, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Handles the sound for the impact, once it has been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Handles the sound for the impact, once it has been loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactSound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventHandleImpactSound_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "HandleImpactSound", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::PropPointers), sizeof(NinjaCombatCosmeticsComponent_eventHandleImpactSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCosmeticsComponent_eventHandleImpactSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execHandleImpactSound)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpactSound_Implementation(Z_Param_Sound,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function HandleImpactSound

// Begin Class UNinjaCombatCosmeticsComponent Function ModifyImpactAudioComponent
struct NinjaCombatCosmeticsComponent_eventModifyImpactAudioComponent_Parms
{
	UAudioComponent* AudioComponent;
	FCombatImpactCosmetics Parameters;
};
static const FName NAME_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent = FName(TEXT("ModifyImpactAudioComponent"));
void UNinjaCombatCosmeticsComponent::ModifyImpactAudioComponent(UAudioComponent* AudioComponent, FCombatImpactCosmetics const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCosmeticsComponent_eventModifyImpactAudioComponent_Parms Parms;
		Parms.AudioComponent=AudioComponent;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ModifyImpactAudioComponent_Implementation(AudioComponent, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Allows further modification of the Audio Component for the impact.\n\x09 * This happens on top of the default parameters being set, and before the sound plays.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Allows further modification of the Audio Component for the impact.\nThis happens on top of the default parameters being set, and before the sound plays." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventModifyImpactAudioComponent_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventModifyImpactAudioComponent_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "ModifyImpactAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::PropPointers), sizeof(NinjaCombatCosmeticsComponent_eventModifyImpactAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCosmeticsComponent_eventModifyImpactAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execModifyImpactAudioComponent)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyImpactAudioComponent_Implementation(Z_Param_AudioComponent,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function ModifyImpactAudioComponent

// Begin Class UNinjaCombatCosmeticsComponent Function ModifyImpactParticleComponent
struct NinjaCombatCosmeticsComponent_eventModifyImpactParticleComponent_Parms
{
	UNiagaraComponent* NiagaraComponent;
	FCombatImpactCosmetics Parameters;
};
static const FName NAME_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent = FName(TEXT("ModifyImpactParticleComponent"));
void UNinjaCombatCosmeticsComponent::ModifyImpactParticleComponent(UNiagaraComponent* NiagaraComponent, FCombatImpactCosmetics const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCosmeticsComponent_eventModifyImpactParticleComponent_Parms Parms;
		Parms.NiagaraComponent=NiagaraComponent;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatCosmeticsComponent*>(this)->ModifyImpactParticleComponent_Implementation(NiagaraComponent, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Allows further modification of the Niagara Component for the Melee Hit.\n\x09 * This happens on top of the default parameters being set, and before the system activates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Allows further modification of the Niagara Component for the Melee Hit.\nThis happens on top of the default parameters being set, and before the system activates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventModifyImpactParticleComponent_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventModifyImpactParticleComponent_Parms, Parameters), Z_Construct_UScriptStruct_FCombatImpactCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1710689578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "ModifyImpactParticleComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::PropPointers), sizeof(NinjaCombatCosmeticsComponent_eventModifyImpactParticleComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCosmeticsComponent_eventModifyImpactParticleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execModifyImpactParticleComponent)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_STRUCT_REF(FCombatImpactCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyImpactParticleComponent_Implementation(Z_Param_NiagaraComponent,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function ModifyImpactParticleComponent

// Begin Class UNinjaCombatCosmeticsComponent Function StartMeleeScanCosmetics
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics
{
	struct NinjaCombatCosmeticsComponent_eventStartMeleeScanCosmetics_Parms
	{
		FCombatMeleeTrailsCosmetics Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cosmetics" },
		{ "Comment", "/**\n\x09 * Activates Melee Scan cosmetics - Particles and Sounds, based on the parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Activates Melee Scan cosmetics - Particles and Sounds, based on the parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCosmeticsComponent_eventStartMeleeScanCosmetics_Parms, Parameters), Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1234543581
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "StartMeleeScanCosmetics", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::NinjaCombatCosmeticsComponent_eventStartMeleeScanCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::NinjaCombatCosmeticsComponent_eventStartMeleeScanCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execStartMeleeScanCosmetics)
{
	P_GET_STRUCT_REF(FCombatMeleeTrailsCosmetics,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMeleeScanCosmetics(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function StartMeleeScanCosmetics

// Begin Class UNinjaCombatCosmeticsComponent Function StopMeleeScanCosmetics
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics
{
	struct NinjaCombatCosmeticsComponent_eventStopMeleeScanCosmetics_Parms
	{
		bool bImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cosmetics" },
		{ "Comment", "/**\n\x09 * Deactivates ongoing Melee Scan cosmetics.\n\x09 */" },
		{ "CPP_Default_bImmediately", "false" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Deactivates ongoing Melee Scan cosmetics." },
	};
#endif // WITH_METADATA
	static void NewProp_bImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::NewProp_bImmediately_SetBit(void* Obj)
{
	((NinjaCombatCosmeticsComponent_eventStopMeleeScanCosmetics_Parms*)Obj)->bImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatCosmeticsComponent_eventStopMeleeScanCosmetics_Parms), &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::NewProp_bImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "StopMeleeScanCosmetics", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::NinjaCombatCosmeticsComponent_eventStopMeleeScanCosmetics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::NinjaCombatCosmeticsComponent_eventStopMeleeScanCosmetics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execStopMeleeScanCosmetics)
{
	P_GET_UBOOL(Z_Param_bImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMeleeScanCosmetics(Z_Param_bImmediately);
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function StopMeleeScanCosmetics

// Begin Class UNinjaCombatCosmeticsComponent Function UpdateMeleeScanTrails
static const FName NAME_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails = FName(TEXT("UpdateMeleeScanTrails"));
void UNinjaCombatCosmeticsComponent::UpdateMeleeScanTrails()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateMeleeScanTrails_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "/**\n\x09 * Updates all san trails managed by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Updates all san trails managed by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCosmeticsComponent, nullptr, "UpdateMeleeScanTrails", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCosmeticsComponent::execUpdateMeleeScanTrails)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMeleeScanTrails_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatCosmeticsComponent Function UpdateMeleeScanTrails

// Begin Class UNinjaCombatCosmeticsComponent
void UNinjaCombatCosmeticsComponent::StaticRegisterNativesUNinjaCombatCosmeticsComponent()
{
	UClass* Class = UNinjaCombatCosmeticsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindScanSourceMesh", &UNinjaCombatCosmeticsComponent::execFindScanSourceMesh },
		{ "GetImpactCameraShakeScale", &UNinjaCombatCosmeticsComponent::execGetImpactCameraShakeScale },
		{ "HandleImpactCameraShake", &UNinjaCombatCosmeticsComponent::execHandleImpactCameraShake },
		{ "HandleImpactDamageCosmetics", &UNinjaCombatCosmeticsComponent::execHandleImpactDamageCosmetics },
		{ "HandleImpactParticles", &UNinjaCombatCosmeticsComponent::execHandleImpactParticles },
		{ "HandleImpactSound", &UNinjaCombatCosmeticsComponent::execHandleImpactSound },
		{ "ModifyImpactAudioComponent", &UNinjaCombatCosmeticsComponent::execModifyImpactAudioComponent },
		{ "ModifyImpactParticleComponent", &UNinjaCombatCosmeticsComponent::execModifyImpactParticleComponent },
		{ "StartMeleeScanCosmetics", &UNinjaCombatCosmeticsComponent::execStartMeleeScanCosmetics },
		{ "StopMeleeScanCosmetics", &UNinjaCombatCosmeticsComponent::execStopMeleeScanCosmetics },
		{ "UpdateMeleeScanTrails", &UNinjaCombatCosmeticsComponent::execUpdateMeleeScanTrails },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatCosmeticsComponent);
UClass* Z_Construct_UClass_UNinjaCombatCosmeticsComponent_NoRegister()
{
	return UNinjaCombatCosmeticsComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Utility component that will handle cosmetics and can be reused by all participants.\n */" },
		{ "IncludePath", "Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Utility component that will handle cosmetics and can be reused by all participants." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailSocketPrefix_MetaData[] = {
		{ "Category", "Weapon Cosmetics" },
		{ "Comment", "/** Prefix used to collect the sockets in the mesh for trail positions. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Prefix used to collect the sockets in the mesh for trail positions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailBeginParameterName_MetaData[] = {
		{ "Category", "Weapon Cosmetics" },
		{ "Comment", "/** Parameter in the VFX for the trail start position. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Parameter in the VFX for the trail start position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailEndParameterName_MetaData[] = {
		{ "Category", "Weapon Cosmetics" },
		{ "Comment", "/** Parameter in the VFX for the trail end position. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Parameter in the VFX for the trail end position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanSourceMesh_MetaData[] = {
		{ "Category", "Weapon Cosmetics" },
		{ "Comment", "/** Mesh used to update the scan trails. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Mesh used to update the scan trails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTrailComponents_MetaData[] = {
		{ "Category", "Weapon Cosmetics" },
		{ "Comment", "/** Melee Trail Components that will be updated during the scan cosmetics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatWeaponCosmeticsComponent.h" },
		{ "ToolTip", "Melee Trail Components that will be updated during the scan cosmetics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrailSocketPrefix;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrailBeginParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrailEndParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanSourceMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeTrailComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeTrailComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_FindScanSourceMesh, "FindScanSourceMesh" }, // 3977123677
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_GetImpactCameraShakeScale, "GetImpactCameraShakeScale" }, // 2361030963
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactCameraShake, "HandleImpactCameraShake" }, // 3582011966
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactDamageCosmetics, "HandleImpactDamageCosmetics" }, // 1088230503
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactParticles, "HandleImpactParticles" }, // 3481708500
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_HandleImpactSound, "HandleImpactSound" }, // 375623756
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactAudioComponent, "ModifyImpactAudioComponent" }, // 949545360
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_ModifyImpactParticleComponent, "ModifyImpactParticleComponent" }, // 3934173530
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StartMeleeScanCosmetics, "StartMeleeScanCosmetics" }, // 629900982
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_StopMeleeScanCosmetics, "StopMeleeScanCosmetics" }, // 30599336
		{ &Z_Construct_UFunction_UNinjaCombatCosmeticsComponent_UpdateMeleeScanTrails, "UpdateMeleeScanTrails" }, // 180991058
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatCosmeticsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_TrailSocketPrefix = { "TrailSocketPrefix", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCosmeticsComponent, TrailSocketPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailSocketPrefix_MetaData), NewProp_TrailSocketPrefix_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_TrailBeginParameterName = { "TrailBeginParameterName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCosmeticsComponent, TrailBeginParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailBeginParameterName_MetaData), NewProp_TrailBeginParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_TrailEndParameterName = { "TrailEndParameterName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCosmeticsComponent, TrailEndParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailEndParameterName_MetaData), NewProp_TrailEndParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_ScanSourceMesh = { "ScanSourceMesh", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCosmeticsComponent, ScanSourceMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanSourceMesh_MetaData), NewProp_ScanSourceMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_MeleeTrailComponents_Inner = { "MeleeTrailComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_MeleeTrailComponents = { "MeleeTrailComponents", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCosmeticsComponent, MeleeTrailComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTrailComponents_MetaData), NewProp_MeleeTrailComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_TrailSocketPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_TrailBeginParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_TrailEndParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_ScanSourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_MeleeTrailComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::NewProp_MeleeTrailComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::ClassParams = {
	&UNinjaCombatCosmeticsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatCosmeticsComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatCosmeticsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatCosmeticsComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatCosmeticsComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatCosmeticsComponent>()
{
	return UNinjaCombatCosmeticsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatCosmeticsComponent);
UNinjaCombatCosmeticsComponent::~UNinjaCombatCosmeticsComponent() {}
// End Class UNinjaCombatCosmeticsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatMeleeTrailsCosmetics::StaticStruct, Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics::NewStructOps, TEXT("CombatMeleeTrailsCosmetics"), &Z_Registration_Info_UScriptStruct_CombatMeleeTrailsCosmetics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatMeleeTrailsCosmetics), 1234543581U) },
		{ FCombatImpactCosmetics::StaticStruct, Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics::NewStructOps, TEXT("CombatImpactCosmetics"), &Z_Registration_Info_UScriptStruct_CombatImpactCosmetics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatImpactCosmetics), 1710689578U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatCosmeticsComponent, UNinjaCombatCosmeticsComponent::StaticClass, TEXT("UNinjaCombatCosmeticsComponent"), &Z_Registration_Info_UClass_UNinjaCombatCosmeticsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatCosmeticsComponent), 1059613621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_433997101(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

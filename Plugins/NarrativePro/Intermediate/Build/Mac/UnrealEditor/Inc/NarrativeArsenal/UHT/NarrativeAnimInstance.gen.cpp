// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimInstance();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimInstance_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeAnimInstance
void UNarrativeAnimInstance::StaticRegisterNativesUNarrativeAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAnimInstance);
UClass* Z_Construct_UClass_UNarrativeAnimInstance_NoRegister()
{
	return UNarrativeAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Narrative anim instance class - we generally just have this to add the GameplayTagPropertyMap as lyra does. \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "UnrealFramework/NarrativeAnimInstance.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Narrative anim instance class - we generally just have this to add the GameplayTagPropertyMap as lyra does." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**Brilliant container type that ships with GAS - lets us bind variables directly to gameplaytags. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Brilliant container type that ships with GAS - lets us bind variables directly to gameplaytags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlinchMontagesBack_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Flinch montages \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Flinch montages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlinchMontagesFront_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlinchMontagesLeft_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlinchMontagesRight_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCombos_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Combo montages for this characters melee attacks \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Combo montages for this characters melee attacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackCombos_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Combo montages for our characters heavy melee attacks \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Combo montages for our characters heavy melee attacks" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlinchMontagesBack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlinchMontagesFront;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlinchMontagesLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlinchMontagesRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackCombos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyAttackCombos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesBack = { "FlinchMontagesBack", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, FlinchMontagesBack), Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlinchMontagesBack_MetaData), NewProp_FlinchMontagesBack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesFront = { "FlinchMontagesFront", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, FlinchMontagesFront), Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlinchMontagesFront_MetaData), NewProp_FlinchMontagesFront_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesLeft = { "FlinchMontagesLeft", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, FlinchMontagesLeft), Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlinchMontagesLeft_MetaData), NewProp_FlinchMontagesLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesRight = { "FlinchMontagesRight", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, FlinchMontagesRight), Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlinchMontagesRight_MetaData), NewProp_FlinchMontagesRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_AttackCombos_Inner = { "AttackCombos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_AttackCombos = { "AttackCombos", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, AttackCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCombos_MetaData), NewProp_AttackCombos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_HeavyAttackCombos_Inner = { "HeavyAttackCombos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_HeavyAttackCombos = { "HeavyAttackCombos", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, HeavyAttackCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackCombos_MetaData), NewProp_HeavyAttackCombos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesFront,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_FlinchMontagesRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_AttackCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_AttackCombos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_HeavyAttackCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_HeavyAttackCombos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::ClassParams = {
	&UNarrativeAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAnimInstance()
{
	if (!Z_Registration_Info_UClass_UNarrativeAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAnimInstance.OuterSingleton, Z_Construct_UClass_UNarrativeAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAnimInstance.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAnimInstance>()
{
	return UNarrativeAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAnimInstance);
UNarrativeAnimInstance::~UNarrativeAnimInstance() {}
// End Class UNarrativeAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAnimInstance, UNarrativeAnimInstance::StaticClass, TEXT("UNarrativeAnimInstance"), &Z_Registration_Info_UClass_UNarrativeAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAnimInstance), 979469643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_2121031833(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
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
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAnimInstance, UNarrativeAnimInstance::StaticClass, TEXT("UNarrativeAnimInstance"), &Z_Registration_Info_UClass_UNarrativeAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAnimInstance), 2376605370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_3953358922(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

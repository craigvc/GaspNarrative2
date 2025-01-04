// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeEquipment/Public/EquipmentStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVEEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentStatics();
NARRATIVEEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeEquipment();
// End Cross Module References

// Begin Class UEquipmentStatics
void UEquipmentStatics::StaticRegisterNativesUEquipmentStatics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentStatics);
UClass* Z_Construct_UClass_UEquipmentStatics_NoRegister()
{
	return UEquipmentStatics::StaticClass();
}
struct Z_Construct_UClass_UEquipmentStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentStatics.h" },
		{ "ModuleRelativePath", "Public/EquipmentStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentStatics_Statics::ClassParams = {
	&UEquipmentStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentStatics()
{
	if (!Z_Registration_Info_UClass_UEquipmentStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentStatics.OuterSingleton, Z_Construct_UClass_UEquipmentStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentStatics.OuterSingleton;
}
template<> NARRATIVEEQUIPMENT_API UClass* StaticClass<UEquipmentStatics>()
{
	return UEquipmentStatics::StaticClass();
}
UEquipmentStatics::UEquipmentStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentStatics);
UEquipmentStatics::~UEquipmentStatics() {}
// End Class UEquipmentStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeEquipment_Public_EquipmentStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentStatics, UEquipmentStatics::StaticClass, TEXT("UEquipmentStatics"), &Z_Registration_Info_UClass_UEquipmentStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentStatics), 3338609871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeEquipment_Public_EquipmentStatics_h_2744100543(TEXT("/Script/NarrativeEquipment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeEquipment_Public_EquipmentStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeEquipment_Public_EquipmentStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

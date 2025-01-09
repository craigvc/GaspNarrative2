// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSaveSystem_init() {}
	NARRATIVESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NarrativeSaveSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_NarrativeSaveSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NarrativeSaveSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x786AE2A2,
				0x296B33CB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NarrativeSaveSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NarrativeSaveSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NarrativeSaveSystem(Z_Construct_UPackage__Script_NarrativeSaveSystem, TEXT("/Script/NarrativeSaveSystem"), Z_Registration_Info_UPackage__Script_NarrativeSaveSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x786AE2A2, 0x296B33CB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

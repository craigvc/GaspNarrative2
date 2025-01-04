// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactions_init() {}
	NINJAFACTIONS_API UFunction* Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaFactions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaFactions()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaFactions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaFactions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD24EB4F2,
				0xA4890A2F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaFactions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaFactions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaFactions(Z_Construct_UPackage__Script_NinjaFactions, TEXT("/Script/NinjaFactions"), Z_Registration_Info_UPackage__Script_NinjaFactions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD24EB4F2, 0xA4890A2F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

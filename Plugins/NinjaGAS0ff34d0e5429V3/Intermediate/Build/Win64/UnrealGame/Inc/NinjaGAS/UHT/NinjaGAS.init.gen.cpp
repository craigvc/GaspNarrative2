// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGAS_init() {}
	NINJAGAS_API UFunction* Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature();
	NINJAGAS_API UFunction* Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaGAS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaGAS()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaGAS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaGAS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7FDC39AD,
				0xEC7158E3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaGAS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaGAS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaGAS(Z_Construct_UPackage__Script_NinjaGAS, TEXT("/Script/NinjaGAS"), Z_Registration_Info_UPackage__Script_NinjaGAS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7FDC39AD, 0xEC7158E3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

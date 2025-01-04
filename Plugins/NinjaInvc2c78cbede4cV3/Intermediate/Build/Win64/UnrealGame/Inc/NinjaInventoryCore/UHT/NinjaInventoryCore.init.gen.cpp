// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryCore_init() {}
	NINJAINVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaInventoryCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaInventoryCore()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaInventoryCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaInventoryCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8FD85DAB,
				0x53E4E66D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaInventoryCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaInventoryCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaInventoryCore(Z_Construct_UPackage__Script_NinjaInventoryCore, TEXT("/Script/NinjaInventoryCore"), Z_Registration_Info_UPackage__Script_NinjaInventoryCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8FD85DAB, 0x53E4E66D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

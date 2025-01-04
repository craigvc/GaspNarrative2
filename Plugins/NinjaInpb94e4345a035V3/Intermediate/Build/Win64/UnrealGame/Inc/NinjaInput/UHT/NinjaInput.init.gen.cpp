// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInput_init() {}
	NINJAINPUT_API UFunction* Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaInput;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaInput()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaInput.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInputManagerComponent_InputModeChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaInput",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x52CD15D0,
				0xB7E8E4F9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaInput.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaInput.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaInput(Z_Construct_UPackage__Script_NinjaInput, TEXT("/Script/NinjaInput"), Z_Registration_Info_UPackage__Script_NinjaInput, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x52CD15D0, 0xB7E8E4F9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

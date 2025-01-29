// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonUI_init() {}
	NARRATIVECOMMONUI_API UFunction* Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature();
	NARRATIVECOMMONUI_API UFunction* Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NarrativeCommonUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI()
	{
		if (!Z_Registration_Info_UPackage__Script_NarrativeCommonUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeCommonUI_NarrativeHandleSubtitle__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NarrativeCommonUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD3B3683A,
				0x6BFBEA2B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NarrativeCommonUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NarrativeCommonUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NarrativeCommonUI(Z_Construct_UPackage__Script_NarrativeCommonUI, TEXT("/Script/NarrativeCommonUI"), Z_Registration_Info_UPackage__Script_NarrativeCommonUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD3B3683A, 0x6BFBEA2B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

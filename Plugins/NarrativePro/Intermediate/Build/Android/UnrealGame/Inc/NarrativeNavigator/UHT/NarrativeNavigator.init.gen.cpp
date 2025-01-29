// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNavigator_init() {}
	NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature();
	NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature();
	NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature();
	NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature();
	NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature();
	NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NarrativeNavigator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NarrativeNavigator()
	{
		if (!Z_Registration_Info_UPackage__Script_NarrativeNavigator.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NarrativeNavigator",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5DAF9F0B,
				0x39C12277,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NarrativeNavigator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NarrativeNavigator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NarrativeNavigator(Z_Construct_UPackage__Script_NarrativeNavigator, TEXT("/Script/NarrativeNavigator"), Z_Registration_Info_UPackage__Script_NarrativeNavigator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5DAF9F0B, 0x39C12277));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

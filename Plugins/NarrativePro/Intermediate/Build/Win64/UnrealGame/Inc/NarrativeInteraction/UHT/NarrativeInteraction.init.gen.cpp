// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeInteraction_init() {}
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature();
	NARRATIVEINTERACTION_API UFunction* Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NarrativeInteraction;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NarrativeInteraction()
	{
		if (!Z_Registration_Info_UPackage__Script_NarrativeInteraction.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginFocus__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnBeginInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndFocus__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnEndInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnFoundInteractable__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteracted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractPressed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnInteractReleased__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInteraction_OnLostInteractable__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NarrativeInteraction",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x296FC505,
				0x393391AB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NarrativeInteraction.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NarrativeInteraction.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NarrativeInteraction(Z_Construct_UPackage__Script_NarrativeInteraction, TEXT("/Script/NarrativeInteraction"), Z_Registration_Info_UPackage__Script_NarrativeInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x296FC505, 0x393391AB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

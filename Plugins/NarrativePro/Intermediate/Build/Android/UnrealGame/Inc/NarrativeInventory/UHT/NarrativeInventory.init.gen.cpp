// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeInventory_init() {}
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature();
	NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NarrativeInventory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NarrativeInventory()
	{
		if (!Z_Registration_Info_UPackage__Script_NarrativeInventory.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnItemModified__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NarrativeInventory",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF03B3012,
				0xC42FA0A1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NarrativeInventory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NarrativeInventory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NarrativeInventory(Z_Construct_UPackage__Script_NarrativeInventory, TEXT("/Script/NarrativeInventory"), Z_Registration_Info_UPackage__Script_NarrativeInventory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF03B3012, 0xC42FA0A1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

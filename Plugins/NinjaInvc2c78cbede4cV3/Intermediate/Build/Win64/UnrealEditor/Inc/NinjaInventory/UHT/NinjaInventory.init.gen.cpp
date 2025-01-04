// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventory_init() {}
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature();
	NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaInventory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaInventory()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaInventory.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryContainerEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryInitializedEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryItemEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootDismissedEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryLootReceivedEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaInventoryManagerComponent_InventoryStorageEventSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaInventory",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1D7E7C85,
				0x50DD203C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaInventory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaInventory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaInventory(Z_Construct_UPackage__Script_NinjaInventory, TEXT("/Script/NinjaInventory"), Z_Registration_Info_UPackage__Script_NinjaInventory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1D7E7C85, 0x50DD203C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

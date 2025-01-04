// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryGameplay_init() {}
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature();
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature();
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature();
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature();
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature();
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature();
	NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaInventoryGameplay;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaInventoryGameplay.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaInventoryGameplay",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x12B1F191,
				0x32E2C7B3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaInventoryGameplay.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaInventoryGameplay.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaInventoryGameplay(Z_Construct_UPackage__Script_NinjaInventoryGameplay, TEXT("/Script/NinjaInventoryGameplay"), Z_Registration_Info_UPackage__Script_NinjaInventoryGameplay, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x12B1F191, 0x32E2C7B3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

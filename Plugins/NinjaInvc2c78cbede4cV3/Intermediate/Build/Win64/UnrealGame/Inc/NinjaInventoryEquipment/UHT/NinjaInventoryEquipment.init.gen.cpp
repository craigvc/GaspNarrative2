// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryEquipment_init() {}
	NINJAINVENTORYEQUIPMENT_API UFunction* Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature();
	NINJAINVENTORYEQUIPMENT_API UFunction* Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaInventoryEquipment;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaInventoryEquipment.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaEquipment_EquipmentEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UNinjaEquipmentManagerComponent_ManagedEquipmentEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaInventoryEquipment",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7D9652BD,
				0xB0A98D29,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaInventoryEquipment.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaInventoryEquipment.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaInventoryEquipment(Z_Construct_UPackage__Script_NinjaInventoryEquipment, TEXT("/Script/NinjaInventoryEquipment"), Z_Registration_Info_UPackage__Script_NinjaInventoryEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D9652BD, 0xB0A98D29));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Interfaces/UsableEquipmentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUsableEquipmentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UUsableEquipmentInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UUsableEquipmentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Interface UUsableEquipmentInterface Function UseEquipment
void IUsableEquipmentInterface::UseEquipment()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UseEquipment instead.");
}
static FName NAME_UUsableEquipmentInterface_UseEquipment = FName(TEXT("UseEquipment"));
void IUsableEquipmentInterface::Execute_UseEquipment(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUsableEquipmentInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UUsableEquipmentInterface_UseEquipment);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IUsableEquipmentInterface*)(O->GetNativeInterfaceAddress(UUsableEquipmentInterface::StaticClass())))
	{
		I->UseEquipment_Implementation();
	}
}
struct Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Usable Equipment" },
		{ "Comment", "/**\n\x09 * Triggers any operations related to the equipment usage.\n\x09 *\n\x09 * Even though the \"heavy lifting\" of the event is usually handled by a Gameplay Ability,\n\x09 * the equipment or its actors may need to adjust their internal state or perform cosmetic\n\x09 * elements, such as playing an animation, particles or sounds.\n\x09 *\n\x09 * The equipment instance first reacts to this event and then cascades the event down to its\n\x09 * spawned actors. If these actors must access their owning equipment instance, they can do\n\x09 * so via the \"Equipment Instance Aware Interface\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/UsableEquipmentInterface.h" },
		{ "ToolTip", "Triggers any operations related to the equipment usage.\n\nEven though the \"heavy lifting\" of the event is usually handled by a Gameplay Ability,\nthe equipment or its actors may need to adjust their internal state or perform cosmetic\nelements, such as playing an animation, particles or sounds.\n\nThe equipment instance first reacts to this event and then cascades the event down to its\nspawned actors. If these actors must access their owning equipment instance, they can do\nso via the \"Equipment Instance Aware Interface\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsableEquipmentInterface, nullptr, "UseEquipment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IUsableEquipmentInterface::execUseEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseEquipment_Implementation();
	P_NATIVE_END;
}
// End Interface UUsableEquipmentInterface Function UseEquipment

// Begin Interface UUsableEquipmentInterface
void UUsableEquipmentInterface::StaticRegisterNativesUUsableEquipmentInterface()
{
	UClass* Class = UUsableEquipmentInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UseEquipment", &IUsableEquipmentInterface::execUseEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsableEquipmentInterface);
UClass* Z_Construct_UClass_UUsableEquipmentInterface_NoRegister()
{
	return UUsableEquipmentInterface::StaticClass();
}
struct Z_Construct_UClass_UUsableEquipmentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UsableEquipmentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsableEquipmentInterface_UseEquipment, "UseEquipment" }, // 117789917
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUsableEquipmentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUsableEquipmentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsableEquipmentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsableEquipmentInterface_Statics::ClassParams = {
	&UUsableEquipmentInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsableEquipmentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsableEquipmentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsableEquipmentInterface()
{
	if (!Z_Registration_Info_UClass_UUsableEquipmentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsableEquipmentInterface.OuterSingleton, Z_Construct_UClass_UUsableEquipmentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsableEquipmentInterface.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UUsableEquipmentInterface>()
{
	return UUsableEquipmentInterface::StaticClass();
}
UUsableEquipmentInterface::UUsableEquipmentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsableEquipmentInterface);
UUsableEquipmentInterface::~UUsableEquipmentInterface() {}
// End Interface UUsableEquipmentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUsableEquipmentInterface, UUsableEquipmentInterface::StaticClass, TEXT("UUsableEquipmentInterface"), &Z_Registration_Info_UClass_UUsableEquipmentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsableEquipmentInterface), 748208545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_2122656844(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

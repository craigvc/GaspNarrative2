// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Interfaces/EquipmentManagerProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentManagerProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentManagerProviderInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentManagerProviderInterface_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Interface UEquipmentManagerProviderInterface Function GetEquipmentManager
struct EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms
{
	UNinjaEquipmentManagerComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaEquipmentManagerComponent* IEquipmentManagerProviderInterface::GetEquipmentManager() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEquipmentManager instead.");
	EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UEquipmentManagerProviderInterface_GetEquipmentManager = FName(TEXT("GetEquipmentManager"));
UNinjaEquipmentManagerComponent* IEquipmentManagerProviderInterface::Execute_GetEquipmentManager(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEquipmentManagerProviderInterface::StaticClass()));
	EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UEquipmentManagerProviderInterface_GetEquipmentManager);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IEquipmentManagerProviderInterface*)(O->GetNativeInterfaceAddress(UEquipmentManagerProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetEquipmentManager_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Manager Provider" },
		{ "Comment", "/**\n\x09 * Provides the Equipment Manager assigned to an actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentManagerProviderInterface.h" },
		{ "ToolTip", "Provides the Equipment Manager assigned to an actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentManagerProviderInterface, nullptr, "GetEquipmentManager", nullptr, nullptr, Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::PropPointers), sizeof(EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(EquipmentManagerProviderInterface_eventGetEquipmentManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentManagerProviderInterface::execGetEquipmentManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=P_THIS->GetEquipmentManager_Implementation();
	P_NATIVE_END;
}
// End Interface UEquipmentManagerProviderInterface Function GetEquipmentManager

// Begin Interface UEquipmentManagerProviderInterface
void UEquipmentManagerProviderInterface::StaticRegisterNativesUEquipmentManagerProviderInterface()
{
	UClass* Class = UEquipmentManagerProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentManager", &IEquipmentManagerProviderInterface::execGetEquipmentManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentManagerProviderInterface);
UClass* Z_Construct_UClass_UEquipmentManagerProviderInterface_NoRegister()
{
	return UEquipmentManagerProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentManagerProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentManagerProviderInterface_GetEquipmentManager, "GetEquipmentManager" }, // 2196090544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentManagerProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics::ClassParams = {
	&UEquipmentManagerProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentManagerProviderInterface()
{
	if (!Z_Registration_Info_UClass_UEquipmentManagerProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentManagerProviderInterface.OuterSingleton, Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentManagerProviderInterface.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UEquipmentManagerProviderInterface>()
{
	return UEquipmentManagerProviderInterface::StaticClass();
}
UEquipmentManagerProviderInterface::UEquipmentManagerProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentManagerProviderInterface);
UEquipmentManagerProviderInterface::~UEquipmentManagerProviderInterface() {}
// End Interface UEquipmentManagerProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentManagerProviderInterface, UEquipmentManagerProviderInterface::StaticClass, TEXT("UEquipmentManagerProviderInterface"), &Z_Registration_Info_UClass_UEquipmentManagerProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentManagerProviderInterface), 1570668595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_3100207401(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

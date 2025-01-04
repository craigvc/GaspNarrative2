// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Interfaces/LootRequesterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootRequesterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ULootRequesterInterface();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ULootRequesterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Interface ULootRequesterInterface Function GetLootReceivers
struct LootRequesterInterface_eventGetLootReceivers_Parms
{
	TArray<AActor*> OutReceivers;
};
void ILootRequesterInterface::GetLootReceivers(TArray<AActor*>& OutReceivers) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLootReceivers instead.");
}
static FName NAME_ULootRequesterInterface_GetLootReceivers = FName(TEXT("GetLootReceivers"));
void ILootRequesterInterface::Execute_GetLootReceivers(const UObject* O, TArray<AActor*>& OutReceivers)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULootRequesterInterface::StaticClass()));
	LootRequesterInterface_eventGetLootReceivers_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULootRequesterInterface_GetLootReceivers);
	if (Func)
	{
		Parms.OutReceivers=OutReceivers;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutReceivers=Parms.OutReceivers;
	}
	else if (auto I = (const ILootRequesterInterface*)(O->GetNativeInterfaceAddress(ULootRequesterInterface::StaticClass())))
	{
		I->GetLootReceivers_Implementation(OutReceivers);
	}
}
struct Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Requester" },
		{ "Comment", "/**\n\x09 * Provides all potential receivers for the item being evaluated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/LootRequesterInterface.h" },
		{ "ToolTip", "Provides all potential receivers for the item being evaluated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutReceivers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutReceivers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::NewProp_OutReceivers_Inner = { "OutReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::NewProp_OutReceivers = { "OutReceivers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootRequesterInterface_eventGetLootReceivers_Parms, OutReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::NewProp_OutReceivers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::NewProp_OutReceivers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootRequesterInterface, nullptr, "GetLootReceivers", nullptr, nullptr, Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::PropPointers), sizeof(LootRequesterInterface_eventGetLootReceivers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::Function_MetaDataParams) };
static_assert(sizeof(LootRequesterInterface_eventGetLootReceivers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILootRequesterInterface::execGetLootReceivers)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutReceivers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLootReceivers_Implementation(Z_Param_Out_OutReceivers);
	P_NATIVE_END;
}
// End Interface ULootRequesterInterface Function GetLootReceivers

// Begin Interface ULootRequesterInterface
void ULootRequesterInterface::StaticRegisterNativesULootRequesterInterface()
{
	UClass* Class = ULootRequesterInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLootReceivers", &ILootRequesterInterface::execGetLootReceivers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootRequesterInterface);
UClass* Z_Construct_UClass_ULootRequesterInterface_NoRegister()
{
	return ULootRequesterInterface::StaticClass();
}
struct Z_Construct_UClass_ULootRequesterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/LootRequesterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootRequesterInterface_GetLootReceivers, "GetLootReceivers" }, // 2894793512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILootRequesterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULootRequesterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootRequesterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootRequesterInterface_Statics::ClassParams = {
	&ULootRequesterInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootRequesterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootRequesterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootRequesterInterface()
{
	if (!Z_Registration_Info_UClass_ULootRequesterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootRequesterInterface.OuterSingleton, Z_Construct_UClass_ULootRequesterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootRequesterInterface.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<ULootRequesterInterface>()
{
	return ULootRequesterInterface::StaticClass();
}
ULootRequesterInterface::ULootRequesterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootRequesterInterface);
ULootRequesterInterface::~ULootRequesterInterface() {}
// End Interface ULootRequesterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Interfaces_LootRequesterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootRequesterInterface, ULootRequesterInterface::StaticClass, TEXT("ULootRequesterInterface"), &Z_Registration_Info_UClass_ULootRequesterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootRequesterInterface), 4142910897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Interfaces_LootRequesterInterface_h_2367363634(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Interfaces_LootRequesterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Interfaces_LootRequesterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

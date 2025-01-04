// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Interfaces/InventoryAnimationReceiverInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryAnimationReceiverInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAnimationReceiverInterface();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAnimationReceiverInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Interface UInventoryAnimationReceiverInterface Function HandleAnimationLoaded
struct InventoryAnimationReceiverInterface_eventHandleAnimationLoaded_Parms
{
	UAnimMontage* MontageToPlay;
	FName MontageSection;
};
void IInventoryAnimationReceiverInterface::HandleAnimationLoaded(UAnimMontage* MontageToPlay, FName MontageSection)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleAnimationLoaded instead.");
}
static FName NAME_UInventoryAnimationReceiverInterface_HandleAnimationLoaded = FName(TEXT("HandleAnimationLoaded"));
void IInventoryAnimationReceiverInterface::Execute_HandleAnimationLoaded(UObject* O, UAnimMontage* MontageToPlay, FName MontageSection)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryAnimationReceiverInterface::StaticClass()));
	InventoryAnimationReceiverInterface_eventHandleAnimationLoaded_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryAnimationReceiverInterface_HandleAnimationLoaded);
	if (Func)
	{
		Parms.MontageToPlay=MontageToPlay;
		Parms.MontageSection=MontageSection;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryAnimationReceiverInterface*)(O->GetNativeInterfaceAddress(UInventoryAnimationReceiverInterface::StaticClass())))
	{
		I->HandleAnimationLoaded_Implementation(MontageToPlay,MontageSection);
	}
}
struct Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Animation Receiver Interface" },
		{ "Comment", "/**\n\x09 * Receives a montage that has been found by the system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/InventoryAnimationReceiverInterface.h" },
		{ "ToolTip", "Receives a montage that has been found by the system." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MontageSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryAnimationReceiverInterface_eventHandleAnimationLoaded_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::NewProp_MontageSection = { "MontageSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryAnimationReceiverInterface_eventHandleAnimationLoaded_Parms, MontageSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::NewProp_MontageSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAnimationReceiverInterface, nullptr, "HandleAnimationLoaded", nullptr, nullptr, Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::PropPointers), sizeof(InventoryAnimationReceiverInterface_eventHandleAnimationLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryAnimationReceiverInterface_eventHandleAnimationLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryAnimationReceiverInterface::execHandleAnimationLoaded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FNameProperty,Z_Param_MontageSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAnimationLoaded_Implementation(Z_Param_MontageToPlay,Z_Param_MontageSection);
	P_NATIVE_END;
}
// End Interface UInventoryAnimationReceiverInterface Function HandleAnimationLoaded

// Begin Interface UInventoryAnimationReceiverInterface Function HandleAnimationNotFound
void IInventoryAnimationReceiverInterface::HandleAnimationNotFound()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleAnimationNotFound instead.");
}
static FName NAME_UInventoryAnimationReceiverInterface_HandleAnimationNotFound = FName(TEXT("HandleAnimationNotFound"));
void IInventoryAnimationReceiverInterface::Execute_HandleAnimationNotFound(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryAnimationReceiverInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInventoryAnimationReceiverInterface_HandleAnimationNotFound);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInventoryAnimationReceiverInterface*)(O->GetNativeInterfaceAddress(UInventoryAnimationReceiverInterface::StaticClass())))
	{
		I->HandleAnimationNotFound_Implementation();
	}
}
struct Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Animation Receiver Interface" },
		{ "Comment", "/**\n\x09 * Handles a montage that has not been found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/InventoryAnimationReceiverInterface.h" },
		{ "ToolTip", "Handles a montage that has not been found." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAnimationReceiverInterface, nullptr, "HandleAnimationNotFound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryAnimationReceiverInterface::execHandleAnimationNotFound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAnimationNotFound_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryAnimationReceiverInterface Function HandleAnimationNotFound

// Begin Interface UInventoryAnimationReceiverInterface
void UInventoryAnimationReceiverInterface::StaticRegisterNativesUInventoryAnimationReceiverInterface()
{
	UClass* Class = UInventoryAnimationReceiverInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleAnimationLoaded", &IInventoryAnimationReceiverInterface::execHandleAnimationLoaded },
		{ "HandleAnimationNotFound", &IInventoryAnimationReceiverInterface::execHandleAnimationNotFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryAnimationReceiverInterface);
UClass* Z_Construct_UClass_UInventoryAnimationReceiverInterface_NoRegister()
{
	return UInventoryAnimationReceiverInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/InventoryAnimationReceiverInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationLoaded, "HandleAnimationLoaded" }, // 67528594
		{ &Z_Construct_UFunction_UInventoryAnimationReceiverInterface_HandleAnimationNotFound, "HandleAnimationNotFound" }, // 3730525393
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryAnimationReceiverInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics::ClassParams = {
	&UInventoryAnimationReceiverInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryAnimationReceiverInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryAnimationReceiverInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryAnimationReceiverInterface.OuterSingleton, Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryAnimationReceiverInterface.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryAnimationReceiverInterface>()
{
	return UInventoryAnimationReceiverInterface::StaticClass();
}
UInventoryAnimationReceiverInterface::UInventoryAnimationReceiverInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryAnimationReceiverInterface);
UInventoryAnimationReceiverInterface::~UInventoryAnimationReceiverInterface() {}
// End Interface UInventoryAnimationReceiverInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryAnimationReceiverInterface, UInventoryAnimationReceiverInterface::StaticClass, TEXT("UInventoryAnimationReceiverInterface"), &Z_Registration_Info_UClass_UInventoryAnimationReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryAnimationReceiverInterface), 2547750536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_2794250628(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

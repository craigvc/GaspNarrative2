// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Interfaces/EquipmentSceneComponentProviderInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentSceneComponentProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentSceneComponentProviderInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Interface UEquipmentSceneComponentProviderInterface Function GetSceneComponent
struct EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms
{
	const UNinjaEquipment* Equipment;
	FGameplayTagContainer SelectorTags;
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
USceneComponent* IEquipmentSceneComponentProviderInterface::GetSceneComponent(const UNinjaEquipment* Equipment, FGameplayTagContainer const& SelectorTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSceneComponent instead.");
	EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UEquipmentSceneComponentProviderInterface_GetSceneComponent = FName(TEXT("GetSceneComponent"));
USceneComponent* IEquipmentSceneComponentProviderInterface::Execute_GetSceneComponent(const UObject* O, const UNinjaEquipment* Equipment, FGameplayTagContainer const& SelectorTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEquipmentSceneComponentProviderInterface::StaticClass()));
	EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UEquipmentSceneComponentProviderInterface_GetSceneComponent);
	if (Func)
	{
		Parms.Equipment=Equipment;
		Parms.SelectorTags=SelectorTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IEquipmentSceneComponentProviderInterface*)(O->GetNativeInterfaceAddress(UEquipmentSceneComponentProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSceneComponent_Implementation(Equipment,SelectorTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Scene Component Provider" },
		{ "Comment", "/**\n\x09 * Provides a scene component for an Equipment/Tags.\n\x09 *\n\x09 * @param Equipment\x09\x09""Equipment instance being assigned.\n\x09 * @param SelectorTags\x09""Additional Tags that may further describe the scenario.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentSceneComponentProviderInterface.h" },
		{ "ToolTip", "Provides a scene component for an Equipment/Tags.\n\n@param Equipment             Equipment instance being assigned.\n@param SelectorTags  Additional Tags that may further describe the scenario." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::NewProp_SelectorTags = { "SelectorTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms, SelectorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorTags_MetaData), NewProp_SelectorTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::NewProp_SelectorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentSceneComponentProviderInterface, nullptr, "GetSceneComponent", nullptr, nullptr, Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::PropPointers), sizeof(EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(EquipmentSceneComponentProviderInterface_eventGetSceneComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentSceneComponentProviderInterface::execGetSceneComponent)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SelectorTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetSceneComponent_Implementation(Z_Param_Equipment,Z_Param_Out_SelectorTags);
	P_NATIVE_END;
}
// End Interface UEquipmentSceneComponentProviderInterface Function GetSceneComponent

// Begin Interface UEquipmentSceneComponentProviderInterface
void UEquipmentSceneComponentProviderInterface::StaticRegisterNativesUEquipmentSceneComponentProviderInterface()
{
	UClass* Class = UEquipmentSceneComponentProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSceneComponent", &IEquipmentSceneComponentProviderInterface::execGetSceneComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentSceneComponentProviderInterface);
UClass* Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_NoRegister()
{
	return UEquipmentSceneComponentProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentSceneComponentProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentSceneComponentProviderInterface_GetSceneComponent, "GetSceneComponent" }, // 1887376834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentSceneComponentProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics::ClassParams = {
	&UEquipmentSceneComponentProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentSceneComponentProviderInterface()
{
	if (!Z_Registration_Info_UClass_UEquipmentSceneComponentProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentSceneComponentProviderInterface.OuterSingleton, Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentSceneComponentProviderInterface.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UEquipmentSceneComponentProviderInterface>()
{
	return UEquipmentSceneComponentProviderInterface::StaticClass();
}
UEquipmentSceneComponentProviderInterface::UEquipmentSceneComponentProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentSceneComponentProviderInterface);
UEquipmentSceneComponentProviderInterface::~UEquipmentSceneComponentProviderInterface() {}
// End Interface UEquipmentSceneComponentProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentSceneComponentProviderInterface, UEquipmentSceneComponentProviderInterface::StaticClass, TEXT("UEquipmentSceneComponentProviderInterface"), &Z_Registration_Info_UClass_UEquipmentSceneComponentProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentSceneComponentProviderInterface), 3897042953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_835171729(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

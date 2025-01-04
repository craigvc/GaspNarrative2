// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/ItemMagnitudeProviderInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemMagnitudeProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemMagnitudeValueInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UItemMagnitudeValueInterface Function GetAllMagnitudeValues
struct ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms
{
	const UNinjaInventoryItem* Item;
	TMap<FGameplayTag,float> ReturnValue;
};
TMap<FGameplayTag,float> IItemMagnitudeValueInterface::GetAllMagnitudeValues(const UNinjaInventoryItem* Item) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAllMagnitudeValues instead.");
	ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UItemMagnitudeValueInterface_GetAllMagnitudeValues = FName(TEXT("GetAllMagnitudeValues"));
TMap<FGameplayTag,float> IItemMagnitudeValueInterface::Execute_GetAllMagnitudeValues(const UObject* O, const UNinjaInventoryItem* Item)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UItemMagnitudeValueInterface::StaticClass()));
	ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UItemMagnitudeValueInterface_GetAllMagnitudeValues);
	if (Func)
	{
		Parms.Item=Item;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IItemMagnitudeValueInterface*)(O->GetNativeInterfaceAddress(UItemMagnitudeValueInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAllMagnitudeValues_Implementation(Item);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Magnitude Value" },
		{ "Comment", "/**\n\x09 * Aggregates all values and provides them in an unified map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/ItemMagnitudeProviderInterface.h" },
		{ "ToolTip", "Aggregates all values and provides them in an unified map." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMagnitudeValueInterface, nullptr, "GetAllMagnitudeValues", nullptr, nullptr, Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::PropPointers), sizeof(ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemMagnitudeValueInterface_eventGetAllMagnitudeValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IItemMagnitudeValueInterface::execGetAllMagnitudeValues)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FGameplayTag,float>*)Z_Param__Result=P_THIS->GetAllMagnitudeValues_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Interface UItemMagnitudeValueInterface Function GetAllMagnitudeValues

// Begin Interface UItemMagnitudeValueInterface Function GetMagnitudeForDataTag
struct ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms
{
	const UNinjaInventoryItem* Item;
	FGameplayTag DataTag;
	float DefaultValue;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms()
		: ReturnValue(0)
	{
	}
};
float IItemMagnitudeValueInterface::GetMagnitudeForDataTag(const UNinjaInventoryItem* Item, FGameplayTag const& DataTag, float DefaultValue) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMagnitudeForDataTag instead.");
	ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UItemMagnitudeValueInterface_GetMagnitudeForDataTag = FName(TEXT("GetMagnitudeForDataTag"));
float IItemMagnitudeValueInterface::Execute_GetMagnitudeForDataTag(const UObject* O, const UNinjaInventoryItem* Item, FGameplayTag const& DataTag, float DefaultValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UItemMagnitudeValueInterface::StaticClass()));
	ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UItemMagnitudeValueInterface_GetMagnitudeForDataTag);
	if (Func)
	{
		Parms.Item=Item;
		Parms.DataTag=DataTag;
		Parms.DefaultValue=DefaultValue;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IItemMagnitudeValueInterface*)(O->GetNativeInterfaceAddress(UItemMagnitudeValueInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetMagnitudeForDataTag_Implementation(Item,DataTag,DefaultValue);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Magnitude Value" },
		{ "Comment", "/**\n\x09 * Allows an object to provide more elaborate magnitude values to a data tag.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09Item that might be used to retrieve values.\n\x09 * @param DataTag\x09\x09\x09The Data Tag used in a \"SetByCaller\" gameplay effect operation.\n\x09 * @param DefaultValue\x09\x09""A default value provided, if no actual value is provided.\n\x09 * @return\x09\x09\x09\x09\x09The magnitude to be applied to the Gameplay Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/ItemMagnitudeProviderInterface.h" },
		{ "ToolTip", "Allows an object to provide more elaborate magnitude values to a data tag.\n\n@param Item                          Item that might be used to retrieve values.\n@param DataTag                       The Data Tag used in a \"SetByCaller\" gameplay effect operation.\n@param DefaultValue          A default value provided, if no actual value is provided.\n@return                                      The magnitude to be applied to the Gameplay Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTag_MetaData), NewProp_DataTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMagnitudeValueInterface, nullptr, "GetMagnitudeForDataTag", nullptr, nullptr, Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::PropPointers), sizeof(ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemMagnitudeValueInterface_eventGetMagnitudeForDataTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IItemMagnitudeValueInterface::execGetMagnitudeForDataTag)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DataTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMagnitudeForDataTag_Implementation(Z_Param_Item,Z_Param_Out_DataTag,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Interface UItemMagnitudeValueInterface Function GetMagnitudeForDataTag

// Begin Interface UItemMagnitudeValueInterface
void UItemMagnitudeValueInterface::StaticRegisterNativesUItemMagnitudeValueInterface()
{
	UClass* Class = UItemMagnitudeValueInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllMagnitudeValues", &IItemMagnitudeValueInterface::execGetAllMagnitudeValues },
		{ "GetMagnitudeForDataTag", &IItemMagnitudeValueInterface::execGetMagnitudeForDataTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemMagnitudeValueInterface);
UClass* Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister()
{
	return UItemMagnitudeValueInterface::StaticClass();
}
struct Z_Construct_UClass_UItemMagnitudeValueInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/ItemMagnitudeProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemMagnitudeValueInterface_GetAllMagnitudeValues, "GetAllMagnitudeValues" }, // 1190230918
		{ &Z_Construct_UFunction_UItemMagnitudeValueInterface_GetMagnitudeForDataTag, "GetMagnitudeForDataTag" }, // 1437929161
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemMagnitudeValueInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemMagnitudeValueInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMagnitudeValueInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemMagnitudeValueInterface_Statics::ClassParams = {
	&UItemMagnitudeValueInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMagnitudeValueInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemMagnitudeValueInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemMagnitudeValueInterface()
{
	if (!Z_Registration_Info_UClass_UItemMagnitudeValueInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemMagnitudeValueInterface.OuterSingleton, Z_Construct_UClass_UItemMagnitudeValueInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemMagnitudeValueInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UItemMagnitudeValueInterface>()
{
	return UItemMagnitudeValueInterface::StaticClass();
}
UItemMagnitudeValueInterface::UItemMagnitudeValueInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemMagnitudeValueInterface);
UItemMagnitudeValueInterface::~UItemMagnitudeValueInterface() {}
// End Interface UItemMagnitudeValueInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemMagnitudeValueInterface, UItemMagnitudeValueInterface::StaticClass, TEXT("UItemMagnitudeValueInterface"), &Z_Registration_Info_UClass_UItemMagnitudeValueInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemMagnitudeValueInterface), 682410900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_1439983776(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

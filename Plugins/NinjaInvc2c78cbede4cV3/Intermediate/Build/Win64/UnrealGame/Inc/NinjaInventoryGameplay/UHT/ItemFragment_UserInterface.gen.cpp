// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_UserInterface() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_UserInterface();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_UserInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UItemFragment_UserInterface Function GetDescription
struct Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics
{
	struct ItemFragment_UserInterface_eventGetDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the localized text for this item's description.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Provides the localized text for this item's description." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_UserInterface_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_UserInterface, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::ItemFragment_UserInterface_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::ItemFragment_UserInterface_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_UserInterface::execGetDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDescription();
	P_NATIVE_END;
}
// End Class UItemFragment_UserInterface Function GetDescription

// Begin Class UItemFragment_UserInterface Function GetDisplayName
struct Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics
{
	struct ItemFragment_UserInterface_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides localized text for this item's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Provides localized text for this item's name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_UserInterface_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_UserInterface, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::ItemFragment_UserInterface_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::ItemFragment_UserInterface_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_UserInterface::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UItemFragment_UserInterface Function GetDisplayName

// Begin Class UItemFragment_UserInterface Function GetDisplayType
struct Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics
{
	struct ItemFragment_UserInterface_eventGetDisplayType_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the localized text for this item's type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Provides the localized text for this item's type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_UserInterface_eventGetDisplayType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_UserInterface, nullptr, "GetDisplayType", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::ItemFragment_UserInterface_eventGetDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::ItemFragment_UserInterface_eventGetDisplayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_UserInterface::execGetDisplayType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayType();
	P_NATIVE_END;
}
// End Class UItemFragment_UserInterface Function GetDisplayType

// Begin Class UItemFragment_UserInterface Function GetIcon
struct Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics
{
	struct ItemFragment_UserInterface_eventGetIcon_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the texture used to represent this item in the UI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Provides the texture used to represent this item in the UI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_UserInterface_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_UserInterface, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::ItemFragment_UserInterface_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::ItemFragment_UserInterface_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_UserInterface::execGetIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon();
	P_NATIVE_END;
}
// End Class UItemFragment_UserInterface Function GetIcon

// Begin Class UItemFragment_UserInterface
void UItemFragment_UserInterface::StaticRegisterNativesUItemFragment_UserInterface()
{
	UClass* Class = UItemFragment_UserInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDescription", &UItemFragment_UserInterface::execGetDescription },
		{ "GetDisplayName", &UItemFragment_UserInterface::execGetDisplayName },
		{ "GetDisplayType", &UItemFragment_UserInterface::execGetDisplayType },
		{ "GetIcon", &UItemFragment_UserInterface::execGetIcon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_UserInterface);
UClass* Z_Construct_UClass_UItemFragment_UserInterface_NoRegister()
{
	return UItemFragment_UserInterface::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_UserInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Aspects related to how this item is represented in the User Interface.\n */" },
		{ "DisplayName", "User Interface" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Aspects related to how this item is represented in the User Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Localized text for this item's name. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Localized text for this item's name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Localized text for this item's type. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Localized text for this item's type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Localized text for this item's description. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Localized text for this item's description." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Texture used to represent this item in the UI. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_UserInterface.h" },
		{ "ToolTip", "Texture used to represent this item in the UI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_UserInterface_GetDescription, "GetDescription" }, // 1983778671
		{ &Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayName, "GetDisplayName" }, // 1004671037
		{ &Z_Construct_UFunction_UItemFragment_UserInterface_GetDisplayType, "GetDisplayType" }, // 531355728
		{ &Z_Construct_UFunction_UItemFragment_UserInterface_GetIcon, "GetIcon" }, // 2942604909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_UserInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_UserInterface, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_UserInterface, DisplayType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayType_MetaData), NewProp_DisplayType_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_UserInterface, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_UserInterface, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_UserInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_UserInterface_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_UserInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_UserInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_UserInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_UserInterface_Statics::ClassParams = {
	&UItemFragment_UserInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_UserInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_UserInterface_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_UserInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_UserInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_UserInterface()
{
	if (!Z_Registration_Info_UClass_UItemFragment_UserInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_UserInterface.OuterSingleton, Z_Construct_UClass_UItemFragment_UserInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_UserInterface.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_UserInterface>()
{
	return UItemFragment_UserInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_UserInterface);
UItemFragment_UserInterface::~UItemFragment_UserInterface() {}
// End Class UItemFragment_UserInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_UserInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_UserInterface, UItemFragment_UserInterface::StaticClass, TEXT("UItemFragment_UserInterface"), &Z_Registration_Info_UClass_UItemFragment_UserInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_UserInterface), 2962603389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_UserInterface_h_709790781(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_UserInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_UserInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

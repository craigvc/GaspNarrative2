// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemUserInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemUserInterface() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemUserInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemUserInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemUserInterface
void UViewModel_ItemUserInterface::SetDisplayName_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemUserInterface* Obj = (UViewModel_ItemUserInterface*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetDisplayName(Value);
}
void UViewModel_ItemUserInterface::SetDisplayType_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemUserInterface* Obj = (UViewModel_ItemUserInterface*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetDisplayType(Value);
}
void UViewModel_ItemUserInterface::SetDescription_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemUserInterface* Obj = (UViewModel_ItemUserInterface*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetDescription(Value);
}
void UViewModel_ItemUserInterface::SetIcon_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemUserInterface* Obj = (UViewModel_ItemUserInterface*)Object;
	UTexture2D*& Value = *(UTexture2D**)InValue;
	Obj->SetIcon(Value);
}
void UViewModel_ItemUserInterface::SetDefaultIcon_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemUserInterface* Obj = (UViewModel_ItemUserInterface*)Object;
	UTexture2D*& Value = *(UTexture2D**)InValue;
	Obj->SetDefaultIcon(Value);
}
void UViewModel_ItemUserInterface::StaticRegisterNativesUViewModel_ItemUserInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemUserInterface);
UClass* Z_Construct_UClass_UViewModel_ItemUserInterface_NoRegister()
{
	return UViewModel_ItemUserInterface::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemUserInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides user interface information about an item.\n */" },
		{ "DisplayName", "Item User Interface" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "ToolTip", "Provides user interface information about an item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Title of the item, as defined in the fragment. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "ToolTip", "Title of the item, as defined in the fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Type of the item, as defined in the fragment. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "ToolTip", "Type of the item, as defined in the fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Description of the item, as defined in the fragment. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "ToolTip", "Description of the item, as defined in the fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Icon used to represent this inventory item, as per the User Interface fragment. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "ToolTip", "Icon used to represent this inventory item, as per the User Interface fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIcon_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Default Icon used to represent this inventory item when no instance is set. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemUserInterface.h" },
		{ "ToolTip", "Default Icon used to represent this inventory item when no instance is set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemUserInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemUserInterface::SetDisplayName_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemUserInterface, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemUserInterface::SetDisplayType_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemUserInterface, DisplayType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayType_MetaData), NewProp_DisplayType_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemUserInterface::SetDescription_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemUserInterface, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemUserInterface::SetIcon_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemUserInterface, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_DefaultIcon = { "DefaultIcon", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemUserInterface::SetDefaultIcon_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemUserInterface, DefaultIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIcon_MetaData), NewProp_DefaultIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::NewProp_DefaultIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::ClassParams = {
	&UViewModel_ItemUserInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemUserInterface()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemUserInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemUserInterface.OuterSingleton, Z_Construct_UClass_UViewModel_ItemUserInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemUserInterface.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemUserInterface>()
{
	return UViewModel_ItemUserInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemUserInterface);
UViewModel_ItemUserInterface::~UViewModel_ItemUserInterface() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemUserInterface, DisplayName)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemUserInterface, DisplayType)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemUserInterface, Description)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemUserInterface, Icon)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemUserInterface, DefaultIcon)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemUserInterface)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemUserInterface, DisplayName)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemUserInterface, DisplayType)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemUserInterface, Description)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemUserInterface, Icon)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemUserInterface, DefaultIcon)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemUserInterface);
// End Class UViewModel_ItemUserInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemUserInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemUserInterface, UViewModel_ItemUserInterface::StaticClass, TEXT("UViewModel_ItemUserInterface"), &Z_Registration_Info_UClass_UViewModel_ItemUserInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemUserInterface), 291723665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemUserInterface_h_2706330896(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemUserInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemUserInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

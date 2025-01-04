// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_HUDEvent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_HUDEvent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_HUDEvent();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_HUDEvent_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_HUDEvent
void UInputHandler_HUDEvent::StaticRegisterNativesUInputHandler_HUDEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_HUDEvent);
UClass* Z_Construct_UClass_UInputHandler_HUDEvent_NoRegister()
{
	return UInputHandler_HUDEvent::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_HUDEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers an User Interface Event\n *\n * It requires the Player Controller to have a valid HUD instance that implements the\n * HUD Event Dispatcher Interface. Please check the interface docs for more information.\n */" },
		{ "DisplayName", "HUD: Send UI Event" },
		{ "IncludePath", "InputHandlers/InputHandler_HUDEvent.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_HUDEvent.h" },
		{ "ToolTip", "Triggers an User Interface Event\n\nIt requires the Player Controller to have a valid HUD instance that implements the\nHUD Event Dispatcher Interface. Please check the interface docs for more information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Category", "HUD Event" },
		{ "Comment", "/** Gameplay Tag representing the event to broadcast. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_HUDEvent.h" },
		{ "ToolTip", "Gameplay Tag representing the event to broadcast." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_HUDEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_HUDEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_HUDEvent, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_HUDEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_HUDEvent_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_HUDEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_HUDEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_HUDEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_HUDEvent_Statics::ClassParams = {
	&UInputHandler_HUDEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_HUDEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_HUDEvent_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_HUDEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_HUDEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_HUDEvent()
{
	if (!Z_Registration_Info_UClass_UInputHandler_HUDEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_HUDEvent.OuterSingleton, Z_Construct_UClass_UInputHandler_HUDEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_HUDEvent.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_HUDEvent>()
{
	return UInputHandler_HUDEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_HUDEvent);
UInputHandler_HUDEvent::~UInputHandler_HUDEvent() {}
// End Class UInputHandler_HUDEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_HUDEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_HUDEvent, UInputHandler_HUDEvent::StaticClass, TEXT("UInputHandler_HUDEvent"), &Z_Registration_Info_UClass_UInputHandler_HUDEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_HUDEvent), 1911720400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_HUDEvent_h_435032051(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_HUDEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_HUDEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

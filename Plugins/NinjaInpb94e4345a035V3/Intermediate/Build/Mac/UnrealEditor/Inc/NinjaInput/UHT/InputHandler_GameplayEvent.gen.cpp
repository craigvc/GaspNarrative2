// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_GameplayEvent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_GameplayEvent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_GameplayEvent();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_GameplayEvent_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_GameplayEvent
void UInputHandler_GameplayEvent::StaticRegisterNativesUInputHandler_GameplayEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_GameplayEvent);
UClass* Z_Construct_UClass_UInputHandler_GameplayEvent_NoRegister()
{
	return UInputHandler_GameplayEvent::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_GameplayEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers a Gameplay Event.\n *\n * The Value and Action are sent in the Gameplay Event as Magnitude and the first Additional Object,\n * so they can be accessed by Gameplay Abilities interested in those values.\n */" },
		{ "DisplayName", "GAS: Send Gameplay Event" },
		{ "IncludePath", "InputHandlers/InputHandler_GameplayEvent.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_GameplayEvent.h" },
		{ "ToolTip", "Triggers a Gameplay Event.\n\nThe Value and Action are sent in the Gameplay Event as Magnitude and the first Additional Object,\nso they can be accessed by Gameplay Abilities interested in those values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Category", "Gameplay Event" },
		{ "Comment", "/** Gameplay Tag representing the event to broadcast. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_GameplayEvent.h" },
		{ "ToolTip", "Gameplay Tag representing the event to broadcast." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_GameplayEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_GameplayEvent, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::ClassParams = {
	&UInputHandler_GameplayEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_GameplayEvent()
{
	if (!Z_Registration_Info_UClass_UInputHandler_GameplayEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_GameplayEvent.OuterSingleton, Z_Construct_UClass_UInputHandler_GameplayEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_GameplayEvent.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_GameplayEvent>()
{
	return UInputHandler_GameplayEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_GameplayEvent);
UInputHandler_GameplayEvent::~UInputHandler_GameplayEvent() {}
// End Class UInputHandler_GameplayEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_GameplayEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_GameplayEvent, UInputHandler_GameplayEvent::StaticClass, TEXT("UInputHandler_GameplayEvent"), &Z_Registration_Info_UClass_UInputHandler_GameplayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_GameplayEvent), 1733916878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_GameplayEvent_h_3110751047(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_GameplayEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_GameplayEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

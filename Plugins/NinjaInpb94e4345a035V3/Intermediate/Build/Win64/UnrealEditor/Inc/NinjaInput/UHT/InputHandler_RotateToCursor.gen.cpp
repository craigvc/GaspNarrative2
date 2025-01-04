// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_RotateToCursor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_RotateToCursor() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_RotateToCursor();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_RotateToCursor_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_RotateToCursor
void UInputHandler_RotateToCursor::StaticRegisterNativesUInputHandler_RotateToCursor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_RotateToCursor);
UClass* Z_Construct_UClass_UInputHandler_RotateToCursor_NoRegister()
{
	return UInputHandler_RotateToCursor::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_RotateToCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rotates the character to the mouse cursor, via Control Rotation.\n *\n * This can be useful when added before an ability activation, so it can set the Control Rotation and\n * rotate the character, before activating the Ability.\n *\n * However, since control rotation happens over a few frames, it might be a good idea to pair this\n * Handler with the \"Toggle Rotation During RootMotion\" Anim Notify State. \n */" },
		{ "DisplayName", "Character: Rotate to Cursor" },
		{ "IncludePath", "InputHandlers/InputHandler_RotateToCursor.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_RotateToCursor.h" },
		{ "ToolTip", "Rotates the character to the mouse cursor, via Control Rotation.\n\nThis can be useful when added before an ability activation, so it can set the Control Rotation and\nrotate the character, before activating the Ability.\n\nHowever, since control rotation happens over a few frames, it might be a good idea to pair this\nHandler with the \"Toggle Rotation During RootMotion\" Anim Notify State." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseChannel_MetaData[] = {
		{ "Category", "Rotate To Cursor" },
		{ "Comment", "/** Collision Channel used to detect the mouse cursor. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_RotateToCursor.h" },
		{ "ToolTip", "Collision Channel used to detect the mouse cursor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MouseChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_RotateToCursor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::NewProp_MouseChannel = { "MouseChannel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_RotateToCursor, MouseChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseChannel_MetaData), NewProp_MouseChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::NewProp_MouseChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::ClassParams = {
	&UInputHandler_RotateToCursor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_RotateToCursor()
{
	if (!Z_Registration_Info_UClass_UInputHandler_RotateToCursor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_RotateToCursor.OuterSingleton, Z_Construct_UClass_UInputHandler_RotateToCursor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_RotateToCursor.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_RotateToCursor>()
{
	return UInputHandler_RotateToCursor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_RotateToCursor);
UInputHandler_RotateToCursor::~UInputHandler_RotateToCursor() {}
// End Class UInputHandler_RotateToCursor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_RotateToCursor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_RotateToCursor, UInputHandler_RotateToCursor::StaticClass, TEXT("UInputHandler_RotateToCursor"), &Z_Registration_Info_UClass_UInputHandler_RotateToCursor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_RotateToCursor), 1514706778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_RotateToCursor_h_1883728763(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_RotateToCursor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_RotateToCursor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

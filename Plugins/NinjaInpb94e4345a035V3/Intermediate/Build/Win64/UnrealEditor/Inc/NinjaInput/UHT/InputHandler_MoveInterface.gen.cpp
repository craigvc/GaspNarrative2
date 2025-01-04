// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_MoveInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_MoveInterface() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Move();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_MoveInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_MoveInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_MoveInterface
void UInputHandler_MoveInterface::StaticRegisterNativesUInputHandler_MoveInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_MoveInterface);
UClass* Z_Construct_UClass_UInputHandler_MoveInterface_NoRegister()
{
	return UInputHandler_MoveInterface::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_MoveInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles character movement, through the interface call.\n *\n * This is useful if the move should not call the movement methods directly and instead, should\n * do so via the Movement Interface, which should then perform any steps (such as replication)\n * and forward the value to the actual input methods.\n *\n * The pawn or character must implement \"Movement Input Proxy Interface\".\n */" },
		{ "DisplayName", "Character: Move (Interface)" },
		{ "IncludePath", "InputHandlers/InputHandler_MoveInterface.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_MoveInterface.h" },
		{ "ToolTip", "Handles character movement, through the interface call.\n\nThis is useful if the move should not call the movement methods directly and instead, should\ndo so via the Movement Interface, which should then perform any steps (such as replication)\nand forward the value to the actual input methods.\n\nThe pawn or character must implement \"Movement Input Proxy Interface\"." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_MoveInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputHandler_MoveInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_Move,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_MoveInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_MoveInterface_Statics::ClassParams = {
	&UInputHandler_MoveInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_MoveInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_MoveInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_MoveInterface()
{
	if (!Z_Registration_Info_UClass_UInputHandler_MoveInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_MoveInterface.OuterSingleton, Z_Construct_UClass_UInputHandler_MoveInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_MoveInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_MoveInterface>()
{
	return UInputHandler_MoveInterface::StaticClass();
}
UInputHandler_MoveInterface::UInputHandler_MoveInterface() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_MoveInterface);
UInputHandler_MoveInterface::~UInputHandler_MoveInterface() {}
// End Class UInputHandler_MoveInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_MoveInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_MoveInterface, UInputHandler_MoveInterface::StaticClass, TEXT("UInputHandler_MoveInterface"), &Z_Registration_Info_UClass_UInputHandler_MoveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_MoveInterface), 2497473237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_MoveInterface_h_1176777025(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_MoveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_MoveInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

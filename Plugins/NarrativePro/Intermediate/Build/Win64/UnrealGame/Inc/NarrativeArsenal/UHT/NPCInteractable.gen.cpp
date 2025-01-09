// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/NPCInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCInteractable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractable();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCInteractable
void UNPCInteractable::StaticRegisterNativesUNPCInteractable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCInteractable);
UClass* Z_Construct_UClass_UNPCInteractable_NoRegister()
{
	return UNPCInteractable::StaticClass();
}
struct Z_Construct_UClass_UNPCInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Special interactable component made for NPCCharacters. Handles talking to NPCs if they are alive and have valid dialogue, \n * or looting from them if they have been killed. \n */" },
		{ "IncludePath", "AI/NPCInteractable.h" },
		{ "ModuleRelativePath", "Public/AI/NPCInteractable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Special interactable component made for NPCCharacters. Handles talking to NPCs if they are alive and have valid dialogue,\nor looting from them if they have been killed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** The dialogue this NPC currently has available, pulled from the NPCs data asset. Note these are hard reffed to avoid hitches\n\x09when attempting to start a dialogue. For games with large settlements with huge amounts of dialogue, you may want to make these\n\x09soft reffed instead, and add some async loading logic. */" },
		{ "ModuleRelativePath", "Public/AI/NPCInteractable.h" },
		{ "ToolTip", "The dialogue this NPC currently has available, pulled from the NPCs data asset. Note these are hard reffed to avoid hitches\n      when attempting to start a dialogue. For games with large settlements with huge amounts of dialogue, you may want to make these\n      soft reffed instead, and add some async loading logic." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNPCInteractable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCInteractable, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCInteractable_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeInteractableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCInteractable_Statics::ClassParams = {
	&UNPCInteractable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCInteractable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractable_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCInteractable()
{
	if (!Z_Registration_Info_UClass_UNPCInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCInteractable.OuterSingleton, Z_Construct_UClass_UNPCInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCInteractable.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCInteractable>()
{
	return UNPCInteractable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCInteractable);
UNPCInteractable::~UNPCInteractable() {}
// End Class UNPCInteractable

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCInteractable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCInteractable, UNPCInteractable::StaticClass, TEXT("UNPCInteractable"), &Z_Registration_Info_UClass_UNPCInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCInteractable), 65869089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCInteractable_h_228105435(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NPCInteractable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

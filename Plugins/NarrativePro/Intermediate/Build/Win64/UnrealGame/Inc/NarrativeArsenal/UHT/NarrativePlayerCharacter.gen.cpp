// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativePlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePlayerCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilityInputMapping_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativePlayerCharacter
void ANarrativePlayerCharacter::StaticRegisterNativesANarrativePlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativePlayerCharacter);
UClass* Z_Construct_UClass_ANarrativePlayerCharacter_NoRegister()
{
	return ANarrativePlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ANarrativePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Narrative|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Narrative|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityConfirmAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Confirm Action */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ToolTip", "Confirm Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Cancel Action */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ToolTip", "Cancel Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputMappings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySystem" },
		{ "Comment", "//The default abilities we grant the player! We also store their input mappings so player subclass can bind these \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ToolTip", "The default abilities we grant the player! We also store their input mappings so player subclass can bind these" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityConfirmAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCancelAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityInputMappings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, FollowCamera), Z_Construct_UClass_UNarrativeCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_AbilityConfirmAction = { "AbilityConfirmAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, AbilityConfirmAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityConfirmAction_MetaData), NewProp_AbilityConfirmAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_AbilityCancelAction = { "AbilityCancelAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, AbilityCancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCancelAction_MetaData), NewProp_AbilityCancelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_AbilityInputMappings = { "AbilityInputMappings", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, AbilityInputMappings), Z_Construct_UClass_UNarrativeAbilityInputMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputMappings_MetaData), NewProp_AbilityInputMappings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativePlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_AbilityConfirmAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_AbilityCancelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_AbilityInputMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerCharacter_Statics::NewProp_DefaultMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANarrativeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativePlayerCharacter_Statics::ClassParams = {
	&ANarrativePlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANarrativePlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ANarrativePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativePlayerCharacter.OuterSingleton, Z_Construct_UClass_ANarrativePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativePlayerCharacter.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativePlayerCharacter>()
{
	return ANarrativePlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativePlayerCharacter);
ANarrativePlayerCharacter::~ANarrativePlayerCharacter() {}
// End Class ANarrativePlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativePlayerCharacter, ANarrativePlayerCharacter::StaticClass, TEXT("ANarrativePlayerCharacter"), &Z_Registration_Info_UClass_ANarrativePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativePlayerCharacter), 1779634249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerCharacter_h_135052496(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

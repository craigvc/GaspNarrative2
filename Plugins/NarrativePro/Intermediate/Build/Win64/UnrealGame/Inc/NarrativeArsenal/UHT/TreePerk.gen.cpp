// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/SkillTrees/TreePerk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreePerk() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreePerk();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreePerk_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UTreePerk Function GetOwningComponent
struct Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics
{
	struct TreePerk_eventGetOwningComponent_Parms
	{
		USkillTreeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Perk" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TreePerk_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_USkillTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreePerk, nullptr, "GetOwningComponent", nullptr, nullptr, Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::TreePerk_eventGetOwningComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::TreePerk_eventGetOwningComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTreePerk_GetOwningComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreePerk_GetOwningComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTreePerk::execGetOwningComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkillTreeComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
	P_NATIVE_END;
}
// End Class UTreePerk Function GetOwningComponent

// Begin Class UTreePerk Function GetPerkDescription
struct TreePerk_eventGetPerkDescription_Parms
{
	FText ReturnValue;
};
static const FName NAME_UTreePerk_GetPerkDescription = FName(TEXT("GetPerkDescription"));
FText UTreePerk::GetPerkDescription()
{
	UFunction* Func = FindFunctionChecked(NAME_UTreePerk_GetPerkDescription);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		TreePerk_eventGetPerkDescription_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetPerkDescription_Implementation();
	}
}
struct Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//Grab the description of the perk \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "Grab the description of the perk" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TreePerk_eventGetPerkDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreePerk, nullptr, "GetPerkDescription", nullptr, nullptr, Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::PropPointers), sizeof(TreePerk_eventGetPerkDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(TreePerk_eventGetPerkDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTreePerk_GetPerkDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreePerk_GetPerkDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTreePerk::execGetPerkDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetPerkDescription_Implementation();
	P_NATIVE_END;
}
// End Class UTreePerk Function GetPerkDescription

// Begin Class UTreePerk Function SetPerkLevel
struct TreePerk_eventSetPerkLevel_Parms
{
	int32 NewPerkLevel;
};
static const FName NAME_UTreePerk_SetPerkLevel = FName(TEXT("SetPerkLevel"));
void UTreePerk::SetPerkLevel(const int32 NewPerkLevel)
{
	UFunction* Func = FindFunctionChecked(NAME_UTreePerk_SetPerkLevel);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		TreePerk_eventSetPerkLevel_Parms Parms;
		Parms.NewPerkLevel=NewPerkLevel;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetPerkLevel_Implementation(NewPerkLevel);
	}
}
struct Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//Override this to apply whatever functionality you need to the player. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "Override this to apply whatever functionality you need to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPerkLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPerkLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::NewProp_NewPerkLevel = { "NewPerkLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TreePerk_eventSetPerkLevel_Parms, NewPerkLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPerkLevel_MetaData), NewProp_NewPerkLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::NewProp_NewPerkLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreePerk, nullptr, "SetPerkLevel", nullptr, nullptr, Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::PropPointers), sizeof(TreePerk_eventSetPerkLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(TreePerk_eventSetPerkLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTreePerk_SetPerkLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTreePerk_SetPerkLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTreePerk::execSetPerkLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPerkLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPerkLevel_Implementation(Z_Param_NewPerkLevel);
	P_NATIVE_END;
}
// End Class UTreePerk Function SetPerkLevel

// Begin Class UTreePerk
void UTreePerk::StaticRegisterNativesUTreePerk()
{
	UClass* Class = UTreePerk::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningComponent", &UTreePerk::execGetOwningComponent },
		{ "GetPerkDescription", &UTreePerk::execGetPerkDescription },
		{ "SetPerkLevel", &UTreePerk::execSetPerkLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTreePerk);
UClass* Z_Construct_UClass_UTreePerk_NoRegister()
{
	return UTreePerk::StaticClass();
}
struct Z_Construct_UClass_UTreePerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a perk in the given skill tree. Owned by UTreeSkill and points to the next perks in the tree. \n */" },
		{ "IncludePath", "SkillTrees/TreePerk.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents a perk in the given skill tree. Owned by UTreeSkill and points to the next perks in the tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkLevel_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The level this perk is at. -1 = not purchased\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The level this perk is at. -1 = not purchased" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The max amount of levels the perk allows\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The max amount of levels the perk allows" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedPerks_Inner_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The perks that come after this one. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The perks that come after this one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedPerks_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The perks that come after this one. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The perks that come after this one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedPerkClasses_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The classes this perk should link to. IE you'll need to buy this perk before any of the linked ones. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The classes this perk should link to. IE you'll need to buy this perk before any of the linked ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkDisplayName_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The display name of this Perk. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The display name of this Perk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkDisplayIcon_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The display icon of the perk\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The display icon of the perk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkDescription_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The description of this Perk. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The description of this Perk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkVideo_MetaData[] = {
		{ "Category", "Tree Perk" },
		{ "Comment", "//The preview video for this perk, explaining what it does in the skills menu. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreePerk.h" },
		{ "ToolTip", "The preview video for this perk, explaining what it does in the skills menu." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerkLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedPerks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedPerks;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LinkedPerkClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedPerkClasses;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PerkDisplayName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PerkDisplayIcon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PerkDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerkVideo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreePerk_GetOwningComponent, "GetOwningComponent" }, // 2502853354
		{ &Z_Construct_UFunction_UTreePerk_GetPerkDescription, "GetPerkDescription" }, // 4076361042
		{ &Z_Construct_UFunction_UTreePerk_SetPerkLevel, "SetPerkLevel" }, // 2824721575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreePerk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkLevel = { "PerkLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, PerkLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkLevel_MetaData), NewProp_PerkLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerks_Inner = { "LinkedPerks", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedPerks_Inner_MetaData), NewProp_LinkedPerks_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerks = { "LinkedPerks", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, LinkedPerks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedPerks_MetaData), NewProp_LinkedPerks_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerkClasses_Inner = { "LinkedPerkClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerkClasses = { "LinkedPerkClasses", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, LinkedPerkClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedPerkClasses_MetaData), NewProp_LinkedPerkClasses_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkDisplayName = { "PerkDisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, PerkDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkDisplayName_MetaData), NewProp_PerkDisplayName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkDisplayIcon = { "PerkDisplayIcon", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, PerkDisplayIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkDisplayIcon_MetaData), NewProp_PerkDisplayIcon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkDescription = { "PerkDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, PerkDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkDescription_MetaData), NewProp_PerkDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkVideo = { "PerkVideo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreePerk, PerkVideo), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkVideo_MetaData), NewProp_PerkVideo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreePerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerkClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_LinkedPerkClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkDisplayIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreePerk_Statics::NewProp_PerkVideo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreePerk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTreePerk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreePerk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTreePerk_Statics::ClassParams = {
	&UTreePerk::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTreePerk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTreePerk_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTreePerk_Statics::Class_MetaDataParams), Z_Construct_UClass_UTreePerk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTreePerk()
{
	if (!Z_Registration_Info_UClass_UTreePerk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTreePerk.OuterSingleton, Z_Construct_UClass_UTreePerk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTreePerk.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTreePerk>()
{
	return UTreePerk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTreePerk);
UTreePerk::~UTreePerk() {}
// End Class UTreePerk

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTreePerk, UTreePerk::StaticClass, TEXT("UTreePerk"), &Z_Registration_Info_UClass_UTreePerk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTreePerk), 1937291459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_1740457253(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Quality.h"
#include "NinjaInventory/Public/Types/FInventoryItemQualityMappingTableRow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Quality() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Quality();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Quality_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UItemFragment_Quality Function FindQualityMapping
struct Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics
{
	struct ItemFragment_Quality_eventFindQualityMapping_Parms
	{
		FGameplayTag Tag;
		FInventoryItemQualityMappingTableRow OutRow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Finds an appropriate mapping row for this fragment's quality tag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "Finds an appropriate mapping row for this fragment's quality tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Quality_eventFindQualityMapping_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Quality_eventFindQualityMapping_Parms, OutRow), Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow, METADATA_PARAMS(0, nullptr) }; // 3472914665
void Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Quality_eventFindQualityMapping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Quality_eventFindQualityMapping_Parms), &Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Quality, nullptr, "FindQualityMapping", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::ItemFragment_Quality_eventFindQualityMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::ItemFragment_Quality_eventFindQualityMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Quality::execFindQualityMapping)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_GET_STRUCT_REF(FInventoryItemQualityMappingTableRow,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UItemFragment_Quality::FindQualityMapping(Z_Param_Out_Tag,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// End Class UItemFragment_Quality Function FindQualityMapping

// Begin Class UItemFragment_Quality Function GetQualityColor
struct Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics
{
	struct ItemFragment_Quality_eventGetQualityColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the color that represents the item's quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "Provides the color that represents the item's quality." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Quality_eventGetQualityColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Quality, nullptr, "GetQualityColor", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::ItemFragment_Quality_eventGetQualityColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::ItemFragment_Quality_eventGetQualityColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Quality::execGetQualityColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetQualityColor();
	P_NATIVE_END;
}
// End Class UItemFragment_Quality Function GetQualityColor

// Begin Class UItemFragment_Quality Function GetQualityTag
struct Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics
{
	struct ItemFragment_Quality_eventGetQualityTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Tag representing the item's quality.\n\x09 * Matches the Quality Table configured in the project.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "Provides the Gameplay Tag representing the item's quality.\nMatches the Quality Table configured in the project." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Quality_eventGetQualityTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Quality, nullptr, "GetQualityTag", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::ItemFragment_Quality_eventGetQualityTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::ItemFragment_Quality_eventGetQualityTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Quality::execGetQualityTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetQualityTag();
	P_NATIVE_END;
}
// End Class UItemFragment_Quality Function GetQualityTag

// Begin Class UItemFragment_Quality Function GetQualityText
struct Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics
{
	struct ItemFragment_Quality_eventGetQualityText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the localized text describing the item's quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "Provides the localized text describing the item's quality." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Quality_eventGetQualityText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Quality, nullptr, "GetQualityText", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::ItemFragment_Quality_eventGetQualityText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::ItemFragment_Quality_eventGetQualityText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Quality_GetQualityText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Quality_GetQualityText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Quality::execGetQualityText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetQualityText();
	P_NATIVE_END;
}
// End Class UItemFragment_Quality Function GetQualityText

// Begin Class UItemFragment_Quality
void UItemFragment_Quality::StaticRegisterNativesUItemFragment_Quality()
{
	UClass* Class = UItemFragment_Quality::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindQualityMapping", &UItemFragment_Quality::execFindQualityMapping },
		{ "GetQualityColor", &UItemFragment_Quality::execGetQualityColor },
		{ "GetQualityTag", &UItemFragment_Quality::execGetQualityTag },
		{ "GetQualityText", &UItemFragment_Quality::execGetQualityText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Quality);
UClass* Z_Construct_UClass_UItemFragment_Quality_NoRegister()
{
	return UItemFragment_Quality::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Quality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes the quality of an item.\n */" },
		{ "DisplayName", "Quality" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "Denotes the quality of an item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityTag_MetaData[] = {
		{ "Categories", "Inventory.Item.Quality" },
		{ "Category", "Fragment" },
		{ "Comment", "/** The Gameplay Tag representing the quality. Applied to the asset tags too. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "The Gameplay Tag representing the quality. Applied to the asset tags too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityText_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Localized text for this item's quality. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "Localized text for this item's quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityColor_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** A color that represents this quality. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Quality.h" },
		{ "ToolTip", "A color that represents this quality." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QualityText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Quality_FindQualityMapping, "FindQualityMapping" }, // 737937951
		{ &Z_Construct_UFunction_UItemFragment_Quality_GetQualityColor, "GetQualityColor" }, // 627484352
		{ &Z_Construct_UFunction_UItemFragment_Quality_GetQualityTag, "GetQualityTag" }, // 308878137
		{ &Z_Construct_UFunction_UItemFragment_Quality_GetQualityText, "GetQualityText" }, // 3103675560
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Quality>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Quality_Statics::NewProp_QualityTag = { "QualityTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Quality, QualityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityTag_MetaData), NewProp_QualityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemFragment_Quality_Statics::NewProp_QualityText = { "QualityText", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Quality, QualityText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityText_MetaData), NewProp_QualityText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Quality_Statics::NewProp_QualityColor = { "QualityColor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Quality, QualityColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityColor_MetaData), NewProp_QualityColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Quality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Quality_Statics::NewProp_QualityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Quality_Statics::NewProp_QualityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Quality_Statics::NewProp_QualityColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Quality_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Quality_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Quality_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Quality_Statics::ClassParams = {
	&UItemFragment_Quality::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Quality_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Quality_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Quality_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Quality_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Quality()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Quality.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Quality.OuterSingleton, Z_Construct_UClass_UItemFragment_Quality_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Quality.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Quality>()
{
	return UItemFragment_Quality::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Quality);
UItemFragment_Quality::~UItemFragment_Quality() {}
// End Class UItemFragment_Quality

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Quality_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Quality, UItemFragment_Quality::StaticClass, TEXT("UItemFragment_Quality"), &Z_Registration_Info_UClass_UItemFragment_Quality, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Quality), 3659233874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Quality_h_3520046006(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Quality_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Quality_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

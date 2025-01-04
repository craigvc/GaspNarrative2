// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Data/NinjaInventoryContainerDataAsset.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryContainerDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryContainerDataAsset Function GetDefaultContainerClass
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetDefaultContainerClass_Parms
	{
		TSubclassOf<UNinjaInventoryContainer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Provides the Default Instance Class defined in this data asset.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09The default Item Instance class that should be used for this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Provides the Default Instance Class defined in this data asset.\n\n@return\n             The default Item Instance class that should be used for this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetDefaultContainerClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetDefaultContainerClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::NinjaInventoryContainerDataAsset_eventGetDefaultContainerClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::NinjaInventoryContainerDataAsset_eventGetDefaultContainerClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetDefaultContainerClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UNinjaInventoryContainer>*)Z_Param__Result=P_THIS->GetDefaultContainerClass();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetDefaultContainerClass

// Begin Class UNinjaInventoryContainerDataAsset Function GetDefaultStateTag
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetDefaultStateTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Provides the default state tag assigned to this container.\n\x09 * This is only applicable for containers that are storing equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Provides the default state tag assigned to this container.\nThis is only applicable for containers that are storing equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetDefaultStateTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetDefaultStateTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::NinjaInventoryContainerDataAsset_eventGetDefaultStateTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::NinjaInventoryContainerDataAsset_eventGetDefaultStateTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetDefaultStateTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetDefaultStateTag();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetDefaultStateTag

// Begin Class UNinjaInventoryContainerDataAsset Function GetDefaultStateTagOrElse
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetDefaultStateTagOrElse_Parms
	{
		FGameplayTag ElseStateTag;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Provides the default state tag assigned to this container, or an alternative if invalid.\n\x09 * This is only applicable for containers that are storing equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Provides the default state tag assigned to this container, or an alternative if invalid.\nThis is only applicable for containers that are storing equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElseStateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElseStateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::NewProp_ElseStateTag = { "ElseStateTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetDefaultStateTagOrElse_Parms, ElseStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElseStateTag_MetaData), NewProp_ElseStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetDefaultStateTagOrElse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::NewProp_ElseStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetDefaultStateTagOrElse", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::NinjaInventoryContainerDataAsset_eventGetDefaultStateTagOrElse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::NinjaInventoryContainerDataAsset_eventGetDefaultStateTagOrElse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetDefaultStateTagOrElse)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ElseStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetDefaultStateTagOrElse(Z_Param_Out_ElseStateTag);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetDefaultStateTagOrElse

// Begin Class UNinjaInventoryContainerDataAsset Function GetDisplayName
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Provides the name displayed to represent this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Provides the name displayed to represent this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::NinjaInventoryContainerDataAsset_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::NinjaInventoryContainerDataAsset_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetDisplayName

// Begin Class UNinjaInventoryContainerDataAsset Function GetGameplayTags
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetGameplayTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Provides all gameplay Tags registered to this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Provides all gameplay Tags registered to this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetGameplayTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::NinjaInventoryContainerDataAsset_eventGetGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::NinjaInventoryContainerDataAsset_eventGetGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetGameplayTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetGameplayTags();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetGameplayTags

// Begin Class UNinjaInventoryContainerDataAsset Function GetPriority
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Provides the priority set for this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Provides the priority set for this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetPriority", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::NinjaInventoryContainerDataAsset_eventGetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::NinjaInventoryContainerDataAsset_eventGetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPriority();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetPriority

// Begin Class UNinjaInventoryContainerDataAsset Function GetSlots
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics
{
	struct NinjaInventoryContainerDataAsset_eventGetSlots_Parms
	{
		const UNinjaInventoryManagerComponent* Inventory;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Counts the effective amount of slots assigned to a given owner.\n\x09 * Takes into consideration the Gameplay Attribute set to this instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Counts the effective amount of slots assigned to a given owner.\nTakes into consideration the Gameplay Attribute set to this instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetSlots_Parms, Inventory), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventGetSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "GetSlots", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::NinjaInventoryContainerDataAsset_eventGetSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::NinjaInventoryContainerDataAsset_eventGetSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execGetSlots)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_Inventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSlots(Z_Param_Inventory);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function GetSlots

// Begin Class UNinjaInventoryContainerDataAsset Function IsDefaultContainer
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics
{
	struct NinjaInventoryContainerDataAsset_eventIsDefaultContainer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Informs if this is the default container for items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Informs if this is the default container for items." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryContainerDataAsset_eventIsDefaultContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryContainerDataAsset_eventIsDefaultContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "IsDefaultContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::NinjaInventoryContainerDataAsset_eventIsDefaultContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::NinjaInventoryContainerDataAsset_eventIsDefaultContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execIsDefaultContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDefaultContainer();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function IsDefaultContainer

// Begin Class UNinjaInventoryContainerDataAsset Function SupportsItem
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics
{
	struct NinjaInventoryContainerDataAsset_eventSupportsItem_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Evaluates if a given item is supported by this container, based on its query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Evaluates if a given item is supported by this container, based on its query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventSupportsItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryContainerDataAsset_eventSupportsItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryContainerDataAsset_eventSupportsItem_Parms), &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "SupportsItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NinjaInventoryContainerDataAsset_eventSupportsItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::NinjaInventoryContainerDataAsset_eventSupportsItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execSupportsItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function SupportsItem

// Begin Class UNinjaInventoryContainerDataAsset Function SupportsItemData
struct Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics
{
	struct NinjaInventoryContainerDataAsset_eventSupportsItemData_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container Data" },
		{ "Comment", "/**\n\x09 * Evaluates if a given item is supported by this container, based on its query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Evaluates if a given item is supported by this container, based on its query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NewProp_ItemDefinition = { "ItemDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerDataAsset_eventSupportsItemData_Parms, ItemDefinition), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefinition_MetaData), NewProp_ItemDefinition_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryContainerDataAsset_eventSupportsItemData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryContainerDataAsset_eventSupportsItemData_Parms), &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NewProp_ItemDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerDataAsset, nullptr, "SupportsItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NinjaInventoryContainerDataAsset_eventSupportsItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::NinjaInventoryContainerDataAsset_eventSupportsItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerDataAsset::execSupportsItemData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsItemData(Z_Param_ItemDefinition);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerDataAsset Function SupportsItemData

// Begin Class UNinjaInventoryContainerDataAsset
void UNinjaInventoryContainerDataAsset::StaticRegisterNativesUNinjaInventoryContainerDataAsset()
{
	UClass* Class = UNinjaInventoryContainerDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultContainerClass", &UNinjaInventoryContainerDataAsset::execGetDefaultContainerClass },
		{ "GetDefaultStateTag", &UNinjaInventoryContainerDataAsset::execGetDefaultStateTag },
		{ "GetDefaultStateTagOrElse", &UNinjaInventoryContainerDataAsset::execGetDefaultStateTagOrElse },
		{ "GetDisplayName", &UNinjaInventoryContainerDataAsset::execGetDisplayName },
		{ "GetGameplayTags", &UNinjaInventoryContainerDataAsset::execGetGameplayTags },
		{ "GetPriority", &UNinjaInventoryContainerDataAsset::execGetPriority },
		{ "GetSlots", &UNinjaInventoryContainerDataAsset::execGetSlots },
		{ "IsDefaultContainer", &UNinjaInventoryContainerDataAsset::execIsDefaultContainer },
		{ "SupportsItem", &UNinjaInventoryContainerDataAsset::execSupportsItem },
		{ "SupportsItemData", &UNinjaInventoryContainerDataAsset::execSupportsItemData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryContainerDataAsset);
UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister()
{
	return UNinjaInventoryContainerDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configures a container used to store inventory items.\n */" },
		{ "IncludePath", "Data/NinjaInventoryContainerDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Configures a container used to store inventory items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Container Data" },
		{ "Comment", "/** Name used to identify this container. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Name used to identify this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Categories", "Inventory.Container" },
		{ "Category", "Container Data" },
		{ "Comment", "/** Tags that provide additional characteristics to this container. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Tags that provide additional characteristics to this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerClass_MetaData[] = {
		{ "Category", "Container Data" },
		{ "Comment", "/** Default class used to represent instances. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Default class used to represent instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStateTag_MetaData[] = {
		{ "Categories", "Equipment.State" },
		{ "Category", "Container Data" },
		{ "Comment", "/** Default gameplay tag for an equipment state, if this container is an equipment container. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Default gameplay tag for an equipment state, if this container is an equipment container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Container Data" },
		{ "Comment", "/**\n\x09 * A set priority when this container can compete with others.\n\x09 * Lower numbers mean a higher priority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "A set priority when this container can compete with others.\nLower numbers mean a higher priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
		{ "Category", "Container Data" },
		{ "Comment", "/** Amount of slots available in this container. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Amount of slots available in this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotsAttribute_MetaData[] = {
		{ "Category", "Container Data" },
		{ "Comment", "/** A backing attribute that determines the amount of slots in this container. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "A backing attribute that determines the amount of slots in this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCompatibilityQuery_MetaData[] = {
		{ "Category", "Container Data" },
		{ "Comment", "/** Determines what items are compatible with this container. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryContainerDataAsset.h" },
		{ "ToolTip", "Determines what items are compatible with this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ContainerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStateTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotsAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemCompatibilityQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultContainerClass, "GetDefaultContainerClass" }, // 186669079
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTag, "GetDefaultStateTag" }, // 4238008084
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDefaultStateTagOrElse, "GetDefaultStateTagOrElse" }, // 1414419257
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetDisplayName, "GetDisplayName" }, // 2124732537
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetGameplayTags, "GetGameplayTags" }, // 4015514137
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetPriority, "GetPriority" }, // 1281198380
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_GetSlots, "GetSlots" }, // 1875244305
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_IsDefaultContainer, "IsDefaultContainer" }, // 262051530
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItem, "SupportsItem" }, // 1429745784
		{ &Z_Construct_UFunction_UNinjaInventoryContainerDataAsset_SupportsItemData, "SupportsItemData" }, // 378735045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryContainerDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_ContainerClass = { "ContainerClass", nullptr, (EPropertyFlags)0x0024080002010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, ContainerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerClass_MetaData), NewProp_ContainerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_DefaultStateTag = { "DefaultStateTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, DefaultStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStateTag_MetaData), NewProp_DefaultStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, Slots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_SlotsAttribute = { "SlotsAttribute", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, SlotsAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotsAttribute_MetaData), NewProp_SlotsAttribute_MetaData) }; // 2792951819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_ItemCompatibilityQuery = { "ItemCompatibilityQuery", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerDataAsset, ItemCompatibilityQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCompatibilityQuery_MetaData), NewProp_ItemCompatibilityQuery_MetaData) }; // 572225232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_ContainerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_DefaultStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_SlotsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::NewProp_ItemCompatibilityQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::ClassParams = {
	&UNinjaInventoryContainerDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryContainerDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryContainerDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryContainerDataAsset.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryContainerDataAsset>()
{
	return UNinjaInventoryContainerDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryContainerDataAsset);
UNinjaInventoryContainerDataAsset::~UNinjaInventoryContainerDataAsset() {}
// End Class UNinjaInventoryContainerDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryContainerDataAsset, UNinjaInventoryContainerDataAsset::StaticClass, TEXT("UNinjaInventoryContainerDataAsset"), &Z_Registration_Info_UClass_UNinjaInventoryContainerDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryContainerDataAsset), 1493319882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_2322722980(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

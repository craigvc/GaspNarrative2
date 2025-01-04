// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryContainer.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Delegate FInventoryContainerEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryContainer_eventInventoryContainerEventSignature_Parms
	{
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainer_eventInventoryContainerEventSignature_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainer, nullptr, "InventoryContainerEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::NinjaInventoryContainer_eventInventoryContainerEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::NinjaInventoryContainer_eventInventoryContainerEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryContainer::FInventoryContainerEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryContainerEventSignature, UNinjaInventoryContainer* Container)
{
	struct NinjaInventoryContainer_eventInventoryContainerEventSignature_Parms
	{
		UNinjaInventoryContainer* Container;
	};
	NinjaInventoryContainer_eventInventoryContainerEventSignature_Parms Parms;
	Parms.Container=Container;
	InventoryContainerEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryContainerEventSignature

// Begin Class UNinjaInventoryContainer Function GetContainerId
struct Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics
{
	struct NinjaInventoryContainer_eventGetContainerId_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container" },
		{ "Comment", "/**\n\x09 * Provides the unique UID for this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Provides the unique UID for this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainer_eventGetContainerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainer, nullptr, "GetContainerId", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::NinjaInventoryContainer_eventGetContainerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::NinjaInventoryContainer_eventGetContainerId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainer::execGetContainerId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetContainerId();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainer Function GetContainerId

// Begin Class UNinjaInventoryContainer Function GetData
struct Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics
{
	struct NinjaInventoryContainer_eventGetData_Parms
	{
		const UNinjaInventoryContainerDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container" },
		{ "Comment", "/**\n\x09 * Provides the data related to this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Provides the data related to this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainer_eventGetData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainer, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::NinjaInventoryContainer_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::NinjaInventoryContainer_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainer_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainer_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainer::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryContainerDataAsset**)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainer Function GetData

// Begin Class UNinjaInventoryContainer Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics
{
	struct NinjaInventoryContainer_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager that currently owns this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Provides the Inventory Manager that currently owns this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainer_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainer, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::NinjaInventoryContainer_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::NinjaInventoryContainer_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainer::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainer Function GetInventoryManager

// Begin Class UNinjaInventoryContainer Function GetOwnedGameplayTags
struct Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics
{
	struct NinjaInventoryContainer_eventGetOwnedGameplayTags_Parms
	{
		FGameplayTagContainer TagContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Container" },
		{ "Comment", "/**\n\x09 * Provides all Gameplay Tags assigned to this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Provides all Gameplay Tags assigned to this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainer_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainer, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::NinjaInventoryContainer_eventGetOwnedGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::NinjaInventoryContainer_eventGetOwnedGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainer::execGetOwnedGameplayTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainer Function GetOwnedGameplayTags

// Begin Class UNinjaInventoryContainer
void UNinjaInventoryContainer::StaticRegisterNativesUNinjaInventoryContainer()
{
	UClass* Class = UNinjaInventoryContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContainerId", &UNinjaInventoryContainer::execGetContainerId },
		{ "GetData", &UNinjaInventoryContainer::execGetData },
		{ "GetInventoryManager", &UNinjaInventoryContainer::execGetInventoryManager },
		{ "GetOwnedGameplayTags", &UNinjaInventoryContainer::execGetOwnedGameplayTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryContainer);
UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister()
{
	return UNinjaInventoryContainer::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a specific container in an inventory.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents a specific container in an inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContainerAdded_MetaData[] = {
		{ "Comment", "/** Broadcasts when the container is added to an Inventory. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Broadcasts when the container is added to an Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContainerRemoved_MetaData[] = {
		{ "Comment", "/** Broadcasts when the container is removed from an Inventory. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Broadcasts when the container is removed from an Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerId_MetaData[] = {
		{ "Comment", "/** Identifier for this container. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Identifier for this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerTags_MetaData[] = {
		{ "Comment", "/** Tags for this container. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Tags for this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "Comment", "/** Data that configures this container. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Data that configures this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Inventory Manager that currently owns this container.\n\x09 *\n\x09 * Set by the inventory manager when the container is added and replicated.\n\x09 * Therefore, we don't need to replicate the manager here.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryContainer.h" },
		{ "ToolTip", "Inventory Manager that currently owns this container.\n\nSet by the inventory manager when the container is added and replicated.\nTherefore, we don't need to replicate the manager here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContainerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContainerRemoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryContainer_GetContainerId, "GetContainerId" }, // 2438197567
		{ &Z_Construct_UFunction_UNinjaInventoryContainer_GetData, "GetData" }, // 2105551346
		{ &Z_Construct_UFunction_UNinjaInventoryContainer_GetInventoryManager, "GetInventoryManager" }, // 3843057357
		{ &Z_Construct_UFunction_UNinjaInventoryContainer_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 1080606434
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature, "InventoryContainerEventSignature__DelegateSignature" }, // 1588705231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_OnContainerAdded = { "OnContainerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainer, OnContainerAdded), Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContainerAdded_MetaData), NewProp_OnContainerAdded_MetaData) }; // 1588705231
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_OnContainerRemoved = { "OnContainerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainer, OnContainerRemoved), Z_Construct_UDelegateFunction_UNinjaInventoryContainer_InventoryContainerEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContainerRemoved_MetaData), NewProp_OnContainerRemoved_MetaData) }; // 1588705231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainer, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerId_MetaData), NewProp_ContainerId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_ContainerTags = { "ContainerTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainer, ContainerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerTags_MetaData), NewProp_ContainerTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0144000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainer, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainer, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_OnContainerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_OnContainerRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_ContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_ContainerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainer_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryContainer, IGameplayTagAssetInterface), false },  // 2592985258
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryContainer_Statics::ClassParams = {
	&UNinjaInventoryContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryContainer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryContainer()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryContainer.OuterSingleton, Z_Construct_UClass_UNinjaInventoryContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryContainer.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryContainer>()
{
	return UNinjaInventoryContainer::StaticClass();
}
void UNinjaInventoryContainer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ContainerTags(TEXT("ContainerTags"));
	static const FName Name_ContainerData(TEXT("ContainerData"));
	const bool bIsValid = true
		&& Name_ContainerTags == ClassReps[(int32)ENetFields_Private::ContainerTags].Property->GetFName()
		&& Name_ContainerData == ClassReps[(int32)ENetFields_Private::ContainerData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaInventoryContainer"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryContainer);
UNinjaInventoryContainer::~UNinjaInventoryContainer() {}
// End Class UNinjaInventoryContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryContainer, UNinjaInventoryContainer::StaticClass, TEXT("UNinjaInventoryContainer"), &Z_Registration_Info_UClass_UNinjaInventoryContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryContainer), 3225286827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryContainer_h_2367601917(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/NarrativeSaveWithCreatorData.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorAttributes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSaveWithCreatorData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeSaveWithCreatorData();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeSaveWithCreatorData_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSave();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeSaveWithCreatorData Function ClearMeshesAndGrooms
struct Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "//Clear our creator meshes and grooms - we do this usually when the form changes. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Clear our creator meshes and grooms - we do this usually when the form changes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveWithCreatorData, nullptr, "ClearMeshesAndGrooms", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveWithCreatorData::execClearMeshesAndGrooms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMeshesAndGrooms();
	P_NATIVE_END;
}
// End Class UNarrativeSaveWithCreatorData Function ClearMeshesAndGrooms

// Begin Class UNarrativeSaveWithCreatorData Function SetCreatorDataGroom
struct Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics
{
	struct NarrativeSaveWithCreatorData_eventSetCreatorDataGroom_Parms
	{
		FGameplayTag Slot;
		UGroomAsset* Groom;
		UGroomBindingAsset* GroomBinding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "///**Set a creator data groom*/\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Set a creator data groom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorDataGroom_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorDataGroom_Parms, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NewProp_GroomBinding = { "GroomBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorDataGroom_Parms, GroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NewProp_Groom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NewProp_GroomBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveWithCreatorData, nullptr, "SetCreatorDataGroom", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NarrativeSaveWithCreatorData_eventSetCreatorDataGroom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::NarrativeSaveWithCreatorData_eventSetCreatorDataGroom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveWithCreatorData::execSetCreatorDataGroom)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Slot);
	P_GET_OBJECT(UGroomAsset,Z_Param_Groom);
	P_GET_OBJECT(UGroomBindingAsset,Z_Param_GroomBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreatorDataGroom(Z_Param_Out_Slot,Z_Param_Groom,Z_Param_GroomBinding);
	P_NATIVE_END;
}
// End Class UNarrativeSaveWithCreatorData Function SetCreatorDataGroom

// Begin Class UNarrativeSaveWithCreatorData Function SetCreatorDataMesh
struct Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics
{
	struct NarrativeSaveWithCreatorData_eventSetCreatorDataMesh_Parms
	{
		UCharacterCreatorItem_Mesh* MeshItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "///**Set a creator data mesh*/\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Set a creator data mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::NewProp_MeshItem = { "MeshItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorDataMesh_Parms, MeshItem), Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::NewProp_MeshItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveWithCreatorData, nullptr, "SetCreatorDataMesh", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::NarrativeSaveWithCreatorData_eventSetCreatorDataMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::NarrativeSaveWithCreatorData_eventSetCreatorDataMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveWithCreatorData::execSetCreatorDataMesh)
{
	P_GET_OBJECT(UCharacterCreatorItem_Mesh,Z_Param_MeshItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreatorDataMesh(Z_Param_MeshItem);
	P_NATIVE_END;
}
// End Class UNarrativeSaveWithCreatorData Function SetCreatorDataMesh

// Begin Class UNarrativeSaveWithCreatorData Function SetCreatorScalarValue
struct Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics
{
	struct NarrativeSaveWithCreatorData_eventSetCreatorScalarValue_Parms
	{
		FGameplayTag TagID;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "/**Set a creator scalar value*/" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Set a creator scalar value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::NewProp_TagID = { "TagID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorScalarValue_Parms, TagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagID_MetaData), NewProp_TagID_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorScalarValue_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::NewProp_TagID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveWithCreatorData, nullptr, "SetCreatorScalarValue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::NarrativeSaveWithCreatorData_eventSetCreatorScalarValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::NarrativeSaveWithCreatorData_eventSetCreatorScalarValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveWithCreatorData::execSetCreatorScalarValue)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreatorScalarValue(Z_Param_Out_TagID,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UNarrativeSaveWithCreatorData Function SetCreatorScalarValue

// Begin Class UNarrativeSaveWithCreatorData Function SetCreatorVectorValue
struct Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics
{
	struct NarrativeSaveWithCreatorData_eventSetCreatorVectorValue_Parms
	{
		FGameplayTag TagID;
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "/**Set a creator Vector value*/" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Set a creator Vector value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::NewProp_TagID = { "TagID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorVectorValue_Parms, TagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagID_MetaData), NewProp_TagID_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveWithCreatorData_eventSetCreatorVectorValue_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::NewProp_TagID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveWithCreatorData, nullptr, "SetCreatorVectorValue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::NarrativeSaveWithCreatorData_eventSetCreatorVectorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::NarrativeSaveWithCreatorData_eventSetCreatorVectorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveWithCreatorData::execSetCreatorVectorValue)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagID);
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreatorVectorValue(Z_Param_Out_TagID,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UNarrativeSaveWithCreatorData Function SetCreatorVectorValue

// Begin Class UNarrativeSaveWithCreatorData
void UNarrativeSaveWithCreatorData::StaticRegisterNativesUNarrativeSaveWithCreatorData()
{
	UClass* Class = UNarrativeSaveWithCreatorData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearMeshesAndGrooms", &UNarrativeSaveWithCreatorData::execClearMeshesAndGrooms },
		{ "SetCreatorDataGroom", &UNarrativeSaveWithCreatorData::execSetCreatorDataGroom },
		{ "SetCreatorDataMesh", &UNarrativeSaveWithCreatorData::execSetCreatorDataMesh },
		{ "SetCreatorScalarValue", &UNarrativeSaveWithCreatorData::execSetCreatorScalarValue },
		{ "SetCreatorVectorValue", &UNarrativeSaveWithCreatorData::execSetCreatorVectorValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSaveWithCreatorData);
UClass* Z_Construct_UClass_UNarrativeSaveWithCreatorData_NoRegister()
{
	return UNarrativeSaveWithCreatorData::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A narrative save file, but we've added character creator data - the character creator level reads/writes to this.\n */" },
		{ "IncludePath", "CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "A narrative save file, but we've added character creator data - the character creator level reads/writes to this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCreatorAttributes_MetaData[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "/*Our character creator attributes*/" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Our character creator attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCreatorUsername_MetaData[] = {
		{ "Category", "Creator Data" },
		{ "Comment", "/**Our characters username we set in the character creator. If empty for some reason we'll use the default username. */" },
		{ "ModuleRelativePath", "Public/CharacterCreator/NarrativeSaveWithCreatorData.h" },
		{ "ToolTip", "Our characters username we set in the character creator. If empty for some reason we'll use the default username." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterCreatorAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterCreatorUsername;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeSaveWithCreatorData_ClearMeshesAndGrooms, "ClearMeshesAndGrooms" }, // 1105387676
		{ &Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataGroom, "SetCreatorDataGroom" }, // 800133079
		{ &Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorDataMesh, "SetCreatorDataMesh" }, // 2748526685
		{ &Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorScalarValue, "SetCreatorScalarValue" }, // 1465799209
		{ &Z_Construct_UFunction_UNarrativeSaveWithCreatorData_SetCreatorVectorValue, "SetCreatorVectorValue" }, // 1651225859
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeSaveWithCreatorData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::NewProp_CharacterCreatorAttributes = { "CharacterCreatorAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveWithCreatorData, CharacterCreatorAttributes), Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterCreatorAttributes_MetaData), NewProp_CharacterCreatorAttributes_MetaData) }; // 420917075
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::NewProp_CharacterCreatorUsername = { "CharacterCreatorUsername", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveWithCreatorData, CharacterCreatorUsername), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterCreatorUsername_MetaData), NewProp_CharacterCreatorUsername_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::NewProp_CharacterCreatorAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::NewProp_CharacterCreatorUsername,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeSave,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::ClassParams = {
	&UNarrativeSaveWithCreatorData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSaveWithCreatorData()
{
	if (!Z_Registration_Info_UClass_UNarrativeSaveWithCreatorData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSaveWithCreatorData.OuterSingleton, Z_Construct_UClass_UNarrativeSaveWithCreatorData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSaveWithCreatorData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeSaveWithCreatorData>()
{
	return UNarrativeSaveWithCreatorData::StaticClass();
}
UNarrativeSaveWithCreatorData::UNarrativeSaveWithCreatorData() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSaveWithCreatorData);
UNarrativeSaveWithCreatorData::~UNarrativeSaveWithCreatorData() {}
// End Class UNarrativeSaveWithCreatorData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_NarrativeSaveWithCreatorData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSaveWithCreatorData, UNarrativeSaveWithCreatorData::StaticClass, TEXT("UNarrativeSaveWithCreatorData"), &Z_Registration_Info_UClass_UNarrativeSaveWithCreatorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSaveWithCreatorData), 4012933005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_NarrativeSaveWithCreatorData_h_263036724(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_NarrativeSaveWithCreatorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_NarrativeSaveWithCreatorData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

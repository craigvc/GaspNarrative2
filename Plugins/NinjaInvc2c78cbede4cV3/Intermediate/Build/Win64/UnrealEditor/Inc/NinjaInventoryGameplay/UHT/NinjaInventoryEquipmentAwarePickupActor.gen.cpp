// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryEquipmentAwarePickupActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ANinjaInventoryPickupActor();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class ANinjaInventoryEquipmentAwarePickupActor Function GetSkeletalMeshComponent
struct NinjaInventoryEquipmentAwarePickupActor_eventGetSkeletalMeshComponent_Parms
{
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryEquipmentAwarePickupActor_eventGetSkeletalMeshComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent = FName(TEXT("GetSkeletalMeshComponent"));
USkeletalMeshComponent* ANinjaInventoryEquipmentAwarePickupActor::GetSkeletalMeshComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryEquipmentAwarePickupActor_eventGetSkeletalMeshComponent_Parms Parms;
		const_cast<ANinjaInventoryEquipmentAwarePickupActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaInventoryEquipmentAwarePickupActor*>(this)->GetSkeletalMeshComponent_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Provides the Skeletal Mesh Component used, if the actor has a Static Mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ToolTip", "Provides the Skeletal Mesh Component used, if the actor has a Static Mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentAwarePickupActor_eventGetSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor, nullptr, "GetSkeletalMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::PropPointers), sizeof(NinjaInventoryEquipmentAwarePickupActor_eventGetSkeletalMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryEquipmentAwarePickupActor_eventGetSkeletalMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryEquipmentAwarePickupActor::execGetSkeletalMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSkeletalMeshComponent_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaInventoryEquipmentAwarePickupActor Function GetSkeletalMeshComponent

// Begin Class ANinjaInventoryEquipmentAwarePickupActor Function GetStaticMeshComponent
struct NinjaInventoryEquipmentAwarePickupActor_eventGetStaticMeshComponent_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryEquipmentAwarePickupActor_eventGetStaticMeshComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent = FName(TEXT("GetStaticMeshComponent"));
UStaticMeshComponent* ANinjaInventoryEquipmentAwarePickupActor::GetStaticMeshComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryEquipmentAwarePickupActor_eventGetStaticMeshComponent_Parms Parms;
		const_cast<ANinjaInventoryEquipmentAwarePickupActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaInventoryEquipmentAwarePickupActor*>(this)->GetStaticMeshComponent_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Provides the Static Mesh Component used, if the actor has a Static Mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ToolTip", "Provides the Static Mesh Component used, if the actor has a Static Mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentAwarePickupActor_eventGetStaticMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor, nullptr, "GetStaticMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::PropPointers), sizeof(NinjaInventoryEquipmentAwarePickupActor_eventGetStaticMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryEquipmentAwarePickupActor_eventGetStaticMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryEquipmentAwarePickupActor::execGetStaticMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetStaticMeshComponent_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaInventoryEquipmentAwarePickupActor Function GetStaticMeshComponent

// Begin Class ANinjaInventoryEquipmentAwarePickupActor Function HandleItemQualityUpdated
struct NinjaInventoryEquipmentAwarePickupActor_eventHandleItemQualityUpdated_Parms
{
	FGameplayTag QualityTag;
};
static const FName NAME_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated = FName(TEXT("HandleItemQualityUpdated"));
void ANinjaInventoryEquipmentAwarePickupActor::HandleItemQualityUpdated(FGameplayTag QualityTag)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryEquipmentAwarePickupActor_eventHandleItemQualityUpdated_Parms Parms;
		Parms.QualityTag=QualityTag;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleItemQualityUpdated_Implementation(QualityTag);
	}
}
struct Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Allows classes to react to a quality tag.\n\x09 *\n\x09 * It's very common for pickups to somehow represent their quality (Particle Beams, for example)\n\x09 * so to simplify that common requirement, this event is available and can be used by child\n\x09 * classes or blueprints to react to a Gameplay Tag representing the item's quality.\n\x09 *\n\x09 * By default, this is only available if the item has a Quality Fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ToolTip", "Allows classes to react to a quality tag.\n\nIt's very common for pickups to somehow represent their quality (Particle Beams, for example)\nso to simplify that common requirement, this event is available and can be used by child\nclasses or blueprints to react to a Gameplay Tag representing the item's quality.\n\nBy default, this is only available if the item has a Quality Fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::NewProp_QualityTag = { "QualityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentAwarePickupActor_eventHandleItemQualityUpdated_Parms, QualityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::NewProp_QualityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor, nullptr, "HandleItemQualityUpdated", nullptr, nullptr, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::PropPointers), sizeof(NinjaInventoryEquipmentAwarePickupActor_eventHandleItemQualityUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryEquipmentAwarePickupActor_eventHandleItemQualityUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryEquipmentAwarePickupActor::execHandleItemQualityUpdated)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_QualityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemQualityUpdated_Implementation(Z_Param_QualityTag);
	P_NATIVE_END;
}
// End Class ANinjaInventoryEquipmentAwarePickupActor Function HandleItemQualityUpdated

// Begin Class ANinjaInventoryEquipmentAwarePickupActor Function HandleSkeletalMeshAsset
struct NinjaInventoryEquipmentAwarePickupActor_eventHandleSkeletalMeshAsset_Parms
{
	USkeletalMesh* SkeletalMeshAsset;
};
static const FName NAME_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset = FName(TEXT("HandleSkeletalMeshAsset"));
void ANinjaInventoryEquipmentAwarePickupActor::HandleSkeletalMeshAsset(USkeletalMesh* SkeletalMeshAsset)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryEquipmentAwarePickupActor_eventHandleSkeletalMeshAsset_Parms Parms;
		Parms.SkeletalMeshAsset=SkeletalMeshAsset;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleSkeletalMeshAsset_Implementation(SkeletalMeshAsset);
	}
}
struct Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Handles a Skeletal Mesh that has been loaded for this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ToolTip", "Handles a Skeletal Mesh that has been loaded for this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentAwarePickupActor_eventHandleSkeletalMeshAsset_Parms, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::NewProp_SkeletalMeshAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor, nullptr, "HandleSkeletalMeshAsset", nullptr, nullptr, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::PropPointers), sizeof(NinjaInventoryEquipmentAwarePickupActor_eventHandleSkeletalMeshAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryEquipmentAwarePickupActor_eventHandleSkeletalMeshAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryEquipmentAwarePickupActor::execHandleSkeletalMeshAsset)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMeshAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSkeletalMeshAsset_Implementation(Z_Param_SkeletalMeshAsset);
	P_NATIVE_END;
}
// End Class ANinjaInventoryEquipmentAwarePickupActor Function HandleSkeletalMeshAsset

// Begin Class ANinjaInventoryEquipmentAwarePickupActor Function HandleStaticMeshAsset
struct NinjaInventoryEquipmentAwarePickupActor_eventHandleStaticMeshAsset_Parms
{
	UStaticMesh* StaticMeshAsset;
};
static const FName NAME_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset = FName(TEXT("HandleStaticMeshAsset"));
void ANinjaInventoryEquipmentAwarePickupActor::HandleStaticMeshAsset(UStaticMesh* StaticMeshAsset)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryEquipmentAwarePickupActor_eventHandleStaticMeshAsset_Parms Parms;
		Parms.StaticMeshAsset=StaticMeshAsset;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleStaticMeshAsset_Implementation(StaticMeshAsset);
	}
}
struct Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Handles a Static Mesh that has been loaded for this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ToolTip", "Handles a Static Mesh that has been loaded for this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryEquipmentAwarePickupActor_eventHandleStaticMeshAsset_Parms, StaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::NewProp_StaticMeshAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor, nullptr, "HandleStaticMeshAsset", nullptr, nullptr, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::PropPointers), sizeof(NinjaInventoryEquipmentAwarePickupActor_eventHandleStaticMeshAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryEquipmentAwarePickupActor_eventHandleStaticMeshAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryEquipmentAwarePickupActor::execHandleStaticMeshAsset)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMeshAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStaticMeshAsset_Implementation(Z_Param_StaticMeshAsset);
	P_NATIVE_END;
}
// End Class ANinjaInventoryEquipmentAwarePickupActor Function HandleStaticMeshAsset

// Begin Class ANinjaInventoryEquipmentAwarePickupActor
void ANinjaInventoryEquipmentAwarePickupActor::StaticRegisterNativesANinjaInventoryEquipmentAwarePickupActor()
{
	UClass* Class = ANinjaInventoryEquipmentAwarePickupActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSkeletalMeshComponent", &ANinjaInventoryEquipmentAwarePickupActor::execGetSkeletalMeshComponent },
		{ "GetStaticMeshComponent", &ANinjaInventoryEquipmentAwarePickupActor::execGetStaticMeshComponent },
		{ "HandleItemQualityUpdated", &ANinjaInventoryEquipmentAwarePickupActor::execHandleItemQualityUpdated },
		{ "HandleSkeletalMeshAsset", &ANinjaInventoryEquipmentAwarePickupActor::execHandleSkeletalMeshAsset },
		{ "HandleStaticMeshAsset", &ANinjaInventoryEquipmentAwarePickupActor::execHandleStaticMeshAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaInventoryEquipmentAwarePickupActor);
UClass* Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_NoRegister()
{
	return ANinjaInventoryEquipmentAwarePickupActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Pickup Actor that is aware of the Equipment and will try to collect the proper mesh to use.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Pickup Actor that is aware of the Equipment and will try to collect the proper mesh to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEquipmentStateTag_MetaData[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/** Gameplay Tag representing the Equipment State from which assets should be collected. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryEquipmentAwarePickupActor.h" },
		{ "ToolTip", "Gameplay Tag representing the Equipment State from which assets should be collected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEquipmentStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetSkeletalMeshComponent, "GetSkeletalMeshComponent" }, // 1658605148
		{ &Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_GetStaticMeshComponent, "GetStaticMeshComponent" }, // 361622009
		{ &Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleItemQualityUpdated, "HandleItemQualityUpdated" }, // 3222649641
		{ &Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleSkeletalMeshAsset, "HandleSkeletalMeshAsset" }, // 3137844758
		{ &Z_Construct_UFunction_ANinjaInventoryEquipmentAwarePickupActor_HandleStaticMeshAsset, "HandleStaticMeshAsset" }, // 1002221989
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaInventoryEquipmentAwarePickupActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::NewProp_TargetEquipmentStateTag = { "TargetEquipmentStateTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaInventoryEquipmentAwarePickupActor, TargetEquipmentStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEquipmentStateTag_MetaData), NewProp_TargetEquipmentStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::NewProp_TargetEquipmentStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaInventoryPickupActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::ClassParams = {
	&ANinjaInventoryEquipmentAwarePickupActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor()
{
	if (!Z_Registration_Info_UClass_ANinjaInventoryEquipmentAwarePickupActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaInventoryEquipmentAwarePickupActor.OuterSingleton, Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaInventoryEquipmentAwarePickupActor.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<ANinjaInventoryEquipmentAwarePickupActor>()
{
	return ANinjaInventoryEquipmentAwarePickupActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaInventoryEquipmentAwarePickupActor);
ANinjaInventoryEquipmentAwarePickupActor::~ANinjaInventoryEquipmentAwarePickupActor() {}
// End Class ANinjaInventoryEquipmentAwarePickupActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor, ANinjaInventoryEquipmentAwarePickupActor::StaticClass, TEXT("ANinjaInventoryEquipmentAwarePickupActor"), &Z_Registration_Info_UClass_ANinjaInventoryEquipmentAwarePickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaInventoryEquipmentAwarePickupActor), 526236472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_905705657(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

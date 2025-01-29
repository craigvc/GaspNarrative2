// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settlements/Settlement.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlement() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlement();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USettlementActivitySchedule_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSettlementSpawn();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UPOINavigationMarker_NoRegister();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSettlementSpawn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SettlementSpawn;
class UScriptStruct* FSettlementSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SettlementSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SettlementSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettlementSpawn, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SettlementSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_SettlementSpawn.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSettlementSpawn>()
{
	return FSettlementSpawn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSettlementSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Defines a spawn in our settlement - who should spawn, where they should spawn, as well as if they have previously been killed so we can prevent spawning, etc. */" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Defines a spawn in our settlement - who should spawn, where they should spawn, as well as if they have previously been killed so we can prevent spawning, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//Whether or not the spawn is disabled. Enemies that have been killed will disable their spawn if bRememberIfKilled is true \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Whether or not the spawn is disabled. Enemies that have been killed will disable their spawn if bRememberIfKilled is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnID_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//Used internally by settlements to identify which spawn is which \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Used internally by settlements to identify which spawn is which" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTag_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//Optional tag, can used to grab the spawn to modify it later (for example to change the spawned NPC)\n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Optional tag, can used to grab the spawn to modify it later (for example to change the spawned NPC)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCToSpawn_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//The NPC we want the spawn to spawn in \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The NPC we want the spawn to spawn in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "// Where we'll spawn the NPC\n" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Where we'll spawn the NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRememberIfKilled_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//Whether the spawn should deactivate itself once its enemy is killed, or whether we should respawn \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Whether the spawn should deactivate itself once its enemy is killed, or whether we should respawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedNPC_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//A pointer to the NPC, provided they are currently spawned in \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "A pointer to the NPC, provided they are currently spawned in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReleased_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "Comment", "//Whether the spawn has released the NPC or not. If true, the NPC has been detached from this spawn and no longer owns it. We also won't spawn it when we activate. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Whether the spawn has released the NPC or not. If true, the NPC has been detached from this spawn and no longer owns it. We also won't spawn it when we activate." },
	};
#endif // WITH_METADATA
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static void NewProp_bRememberIfKilled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRememberIfKilled;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpawnedNPC;
	static void NewProp_bReleased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReleased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettlementSpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FSettlementSpawn*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSettlementSpawn), &Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnID = { "SpawnID", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementSpawn, SpawnID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnID_MetaData), NewProp_SpawnID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnTag = { "SpawnTag", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementSpawn, SpawnTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTag_MetaData), NewProp_SpawnTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_NPCToSpawn = { "NPCToSpawn", nullptr, (EPropertyFlags)0x0114000001000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementSpawn, NPCToSpawn), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCToSpawn_MetaData), NewProp_NPCToSpawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementSpawn, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
void Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bRememberIfKilled_SetBit(void* Obj)
{
	((FSettlementSpawn*)Obj)->bRememberIfKilled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bRememberIfKilled = { "bRememberIfKilled", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSettlementSpawn), &Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bRememberIfKilled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRememberIfKilled_MetaData), NewProp_bRememberIfKilled_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnedNPC = { "SpawnedNPC", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSettlementSpawn, SpawnedNPC), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedNPC_MetaData), NewProp_SpawnedNPC_MetaData) };
void Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bReleased_SetBit(void* Obj)
{
	((FSettlementSpawn*)Obj)->bReleased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bReleased = { "bReleased", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSettlementSpawn), &Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bReleased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReleased_MetaData), NewProp_bReleased_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettlementSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_NPCToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bRememberIfKilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_SpawnedNPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewProp_bReleased,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettlementSpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SettlementSpawn",
	Z_Construct_UScriptStruct_FSettlementSpawn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementSpawn_Statics::PropPointers),
	sizeof(FSettlementSpawn),
	alignof(FSettlementSpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettlementSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSettlementSpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSettlementSpawn()
{
	if (!Z_Registration_Info_UScriptStruct_SettlementSpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SettlementSpawn.InnerSingleton, Z_Construct_UScriptStruct_FSettlementSpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SettlementSpawn.InnerSingleton;
}
// End ScriptStruct FSettlementSpawn

// Begin Class ASettlement Function Activate
static const FName NAME_ASettlement_Activate = FName(TEXT("Activate"));
void ASettlement::Activate()
{
	UFunction* Func = FindFunctionChecked(NAME_ASettlement_Activate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Activate_Implementation();
	}
}
struct Z_Construct_UFunction_ASettlement_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_Activate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASettlement_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate_Implementation();
	P_NATIVE_END;
}
// End Class ASettlement Function Activate

// Begin Class ASettlement Function ClaimNPC
struct Z_Construct_UFunction_ASettlement_ClaimNPC_Statics
{
	struct Settlement_eventClaimNPC_Parms
	{
		ANarrativeNPCCharacter* NPCToClaim;
		bool bMoveToSpawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "CPP_Default_bMoveToSpawn", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveToSpawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCToClaim;
	static void NewProp_bMoveToSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveToSpawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_NPCToClaim = { "NPCToClaim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settlement_eventClaimNPC_Parms, NPCToClaim), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_bMoveToSpawn_SetBit(void* Obj)
{
	((Settlement_eventClaimNPC_Parms*)Obj)->bMoveToSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_bMoveToSpawn = { "bMoveToSpawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventClaimNPC_Parms), &Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_bMoveToSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveToSpawn_MetaData), NewProp_bMoveToSpawn_MetaData) };
void Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Settlement_eventClaimNPC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventClaimNPC_Parms), &Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_NPCToClaim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_bMoveToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "ClaimNPC", nullptr, nullptr, Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::Settlement_eventClaimNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::Settlement_eventClaimNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_ClaimNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_ClaimNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execClaimNPC)
{
	P_GET_OBJECT(ANarrativeNPCCharacter,Z_Param_NPCToClaim);
	P_GET_UBOOL(Z_Param_bMoveToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClaimNPC(Z_Param_NPCToClaim,Z_Param_bMoveToSpawn);
	P_NATIVE_END;
}
// End Class ASettlement Function ClaimNPC

// Begin Class ASettlement Function Deactivate
static const FName NAME_ASettlement_Deactivate = FName(TEXT("Deactivate"));
void ASettlement::Deactivate()
{
	UFunction* Func = FindFunctionChecked(NAME_ASettlement_Deactivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Deactivate_Implementation();
	}
}
struct Z_Construct_UFunction_ASettlement_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASettlement_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate_Implementation();
	P_NATIVE_END;
}
// End Class ASettlement Function Deactivate

// Begin Class ASettlement Function GetSpawnData
struct Z_Construct_UFunction_ASettlement_GetSpawnData_Statics
{
	struct Settlement_eventGetSpawnData_Parms
	{
		FGuid SpawnID;
		FSettlementSpawn ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "Comment", "//Grab spawn data using spawn ID\n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Grab spawn data using spawn ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::NewProp_SpawnID = { "SpawnID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settlement_eventGetSpawnData_Parms, SpawnID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnID_MetaData), NewProp_SpawnID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settlement_eventGetSpawnData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSettlementSpawn, METADATA_PARAMS(0, nullptr) }; // 1158354933
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::NewProp_SpawnID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "GetSpawnData", nullptr, nullptr, Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::Settlement_eventGetSpawnData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::Settlement_eventGetSpawnData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_GetSpawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_GetSpawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execGetSpawnData)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_SpawnID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSettlementSpawn*)Z_Param__Result=P_THIS->GetSpawnData(Z_Param_Out_SpawnID);
	P_NATIVE_END;
}
// End Class ASettlement Function GetSpawnData

// Begin Class ASettlement Function IsActive
struct Z_Construct_UFunction_ASettlement_IsActive_Statics
{
	struct Settlement_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "Comment", "//Check whether settlement is active or whether WP has deactivated it \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Check whether settlement is active or whether WP has deactivated it" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASettlement_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Settlement_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventIsActive_Parms), &Z_Construct_UFunction_ASettlement_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_ASettlement_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_IsActive_Statics::Settlement_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_IsActive_Statics::Settlement_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// End Class ASettlement Function IsActive

// Begin Class ASettlement Function IsCleared
struct Z_Construct_UFunction_ASettlement_IsCleared_Statics
{
	struct Settlement_eventIsCleared_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "Comment", "//Return true if the settlement is cleared, meaning all spawns are deactivated and no NPCs remain \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Return true if the settlement is cleared, meaning all spawns are deactivated and no NPCs remain" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASettlement_IsCleared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Settlement_eventIsCleared_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_IsCleared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventIsCleared_Parms), &Z_Construct_UFunction_ASettlement_IsCleared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_IsCleared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_IsCleared_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_IsCleared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_IsCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "IsCleared", nullptr, nullptr, Z_Construct_UFunction_ASettlement_IsCleared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_IsCleared_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_IsCleared_Statics::Settlement_eventIsCleared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_IsCleared_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_IsCleared_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_IsCleared_Statics::Settlement_eventIsCleared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_IsCleared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_IsCleared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execIsCleared)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCleared();
	P_NATIVE_END;
}
// End Class ASettlement Function IsCleared

// Begin Class ASettlement Function ReleaseNPC
struct Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics
{
	struct Settlement_eventReleaseNPC_Parms
	{
		ANarrativeNPCCharacter* NPCToRelease;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCToRelease;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::NewProp_NPCToRelease = { "NPCToRelease", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Settlement_eventReleaseNPC_Parms, NPCToRelease), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Settlement_eventReleaseNPC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventReleaseNPC_Parms), &Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::NewProp_NPCToRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "ReleaseNPC", nullptr, nullptr, Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::Settlement_eventReleaseNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::Settlement_eventReleaseNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_ReleaseNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_ReleaseNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execReleaseNPC)
{
	P_GET_OBJECT(ANarrativeNPCCharacter,Z_Param_NPCToRelease);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReleaseNPC(Z_Param_NPCToRelease);
	P_NATIVE_END;
}
// End Class ASettlement Function ReleaseNPC

// Begin Class ASettlement Function SetActive
struct Z_Construct_UFunction_ASettlement_SetActive_Statics
{
	struct Settlement_eventSetActive_Parms
	{
		bool bActive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((Settlement_eventSetActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventSetActive_Parms), &Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
void Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Settlement_eventSetActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventSetActive_Parms), &Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_SetActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_SetActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_SetActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "SetActive", nullptr, nullptr, Z_Construct_UFunction_ASettlement_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_SetActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_SetActive_Statics::Settlement_eventSetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_SetActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_SetActive_Statics::Settlement_eventSetActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_SetActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_SetActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execSetActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetActive(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class ASettlement Function SetActive

// Begin Class ASettlement Function SetDisabled
struct Z_Construct_UFunction_ASettlement_SetDisabled_Statics
{
	struct Settlement_eventSetDisabled_Parms
	{
		bool bNewDisabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settlement" },
		{ "Comment", "//Disable the settlement\n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Disable the settlement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewDisabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASettlement_SetDisabled_Statics::NewProp_bNewDisabled_SetBit(void* Obj)
{
	((Settlement_eventSetDisabled_Parms*)Obj)->bNewDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASettlement_SetDisabled_Statics::NewProp_bNewDisabled = { "bNewDisabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Settlement_eventSetDisabled_Parms), &Z_Construct_UFunction_ASettlement_SetDisabled_Statics::NewProp_bNewDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewDisabled_MetaData), NewProp_bNewDisabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASettlement_SetDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASettlement_SetDisabled_Statics::NewProp_bNewDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_SetDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASettlement_SetDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASettlement, nullptr, "SetDisabled", nullptr, nullptr, Z_Construct_UFunction_ASettlement_SetDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_SetDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASettlement_SetDisabled_Statics::Settlement_eventSetDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASettlement_SetDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASettlement_SetDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASettlement_SetDisabled_Statics::Settlement_eventSetDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASettlement_SetDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASettlement_SetDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASettlement::execSetDisabled)
{
	P_GET_UBOOL(Z_Param_bNewDisabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisabled(Z_Param_bNewDisabled);
	P_NATIVE_END;
}
// End Class ASettlement Function SetDisabled

// Begin Class ASettlement
void ASettlement::StaticRegisterNativesASettlement()
{
	UClass* Class = ASettlement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &ASettlement::execActivate },
		{ "ClaimNPC", &ASettlement::execClaimNPC },
		{ "Deactivate", &ASettlement::execDeactivate },
		{ "GetSpawnData", &ASettlement::execGetSpawnData },
		{ "IsActive", &ASettlement::execIsActive },
		{ "IsCleared", &ASettlement::execIsCleared },
		{ "ReleaseNPC", &ASettlement::execReleaseNPC },
		{ "SetActive", &ASettlement::execSetActive },
		{ "SetDisabled", &ASettlement::execSetDisabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASettlement);
UClass* Z_Construct_UClass_ASettlement_NoRegister()
{
	return ASettlement::StaticClass();
}
struct Z_Construct_UClass_ASettlement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nIntended for non-multiplayer games, Settlements are useful for creating towns, villages, bandit camps, etc. They are always loaded into the world, however exist in a lightweight\ndeactivated state until activated. In this deactivated state you can access their name, location, check/modify which NPCs will spawn there etc. \nThis means you can change which NPCs spawn at a settlement, check if a settlement is cleared, move spawns around, etc even if a settlement\nisn't activated.  however none of their NPCs will be spawned in this deactivated state. \n\nOnce activated, settlements will spawn their NPCs in, and remove them when deactivated. They are typically activated by an ASettlementLoader. When World Partition\nloads/unloads the settlement loader, it will automatically activate or deactivate the settlement, meaning only settlements your player is near will be activated, and have their loaded in! \nThis means you get good performance. If your game has hundreds of towns or villages, only nearby ones will have their NPCs kept in the world. \n\nFinally, settlements are saved to disk. That means that if your ever change what NPC is spawned at a settlement, or whether you've discovered or cleared a \nsettlement, when you come back in and load your save the settlement will be as you left it. \n*/" },
		{ "IncludePath", "Settlements/Settlement.h" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Intended for non-multiplayer games, Settlements are useful for creating towns, villages, bandit camps, etc. They are always loaded into the world, however exist in a lightweight\ndeactivated state until activated. In this deactivated state you can access their name, location, check/modify which NPCs will spawn there etc.\nThis means you can change which NPCs spawn at a settlement, check if a settlement is cleared, move spawns around, etc even if a settlement\nisn't activated.  however none of their NPCs will be spawned in this deactivated state.\n\nOnce activated, settlements will spawn their NPCs in, and remove them when deactivated. They are typically activated by an ASettlementLoader. When World Partition\nloads/unloads the settlement loader, it will automatically activate or deactivate the settlement, meaning only settlements your player is near will be activated, and have their loaded in!\nThis means you get good performance. If your game has hundreds of towns or villages, only nearby ones will have their NPCs kept in the world.\n\nFinally, settlements are saved to disk. That means that if your ever change what NPC is spawned at a settlement, or whether you've discovered or cleared a\nsettlement, when you come back in and load your save the settlement will be as you left it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Root component - we want the settlement to have a transform \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Root component - we want the settlement to have a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementActivityManager_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//The settlement activity component. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The settlement activity component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIMarker_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//All settlements get a POI marker by default \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "All settlements get a POI marker by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawns_MetaData[] = {
		{ "Category", "Settlement Configuration|Spawns" },
		{ "Comment", "//The settlements spawns\n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The settlements spawns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//Enable this if you want to prevent the settlement activating, usually for debugging \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Enable this if you want to prevent the settlement activating, usually for debugging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementGUID_MetaData[] = {
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//The GUID that the save system uses to identify and save the settlement\n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The GUID that the save system uses to identify and save the settlement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementTag_MetaData[] = {
		{ "Categories", "Narrative.Settlements" },
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//The gameplay tag used to identity the settlement \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The gameplay tag used to identity the settlement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Narrative.POIs" },
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//If you want the settlement to be registered as a POI, provide a valid POI tag here and the settlement will auto-register itself as a POI. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "If you want the settlement to be registered as a POI, provide a valid POI tag here and the settlement will auto-register itself as a POI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementDisplayName_MetaData[] = {
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//The display name of the settlement. \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The display name of the settlement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementSchedule_MetaData[] = {
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//The settlements schedule, if one is desired.\n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "The settlements schedule, if one is desired." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//Whether the settlement is active or not \n" },
		{ "ModuleRelativePath", "Public/Settlements/Settlement.h" },
		{ "ToolTip", "Whether the settlement is active or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementActivityManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_POIMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawns;
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettlementGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettlementTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SettlementDisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementSchedule;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASettlement_Activate, "Activate" }, // 1047279188
		{ &Z_Construct_UFunction_ASettlement_ClaimNPC, "ClaimNPC" }, // 1316704991
		{ &Z_Construct_UFunction_ASettlement_Deactivate, "Deactivate" }, // 3960373170
		{ &Z_Construct_UFunction_ASettlement_GetSpawnData, "GetSpawnData" }, // 1281479680
		{ &Z_Construct_UFunction_ASettlement_IsActive, "IsActive" }, // 360478883
		{ &Z_Construct_UFunction_ASettlement_IsCleared, "IsCleared" }, // 2249618123
		{ &Z_Construct_UFunction_ASettlement_ReleaseNPC, "ReleaseNPC" }, // 2840418125
		{ &Z_Construct_UFunction_ASettlement_SetActive, "SetActive" }, // 1765730615
		{ &Z_Construct_UFunction_ASettlement_SetDisabled, "SetDisabled" }, // 3206541371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASettlement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementRoot = { "SettlementRoot", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SettlementRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementRoot_MetaData), NewProp_SettlementRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementActivityManager = { "SettlementActivityManager", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SettlementActivityManager), Z_Construct_UClass_USettlementActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementActivityManager_MetaData), NewProp_SettlementActivityManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_POIMarker = { "POIMarker", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, POIMarker), Z_Construct_UClass_UPOINavigationMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIMarker_MetaData), NewProp_POIMarker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_Spawns_Inner = { "Spawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSettlementSpawn, METADATA_PARAMS(0, nullptr) }; // 1158354933
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_Spawns = { "Spawns", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, Spawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawns_MetaData), NewProp_Spawns_MetaData) }; // 1158354933
void Z_Construct_UClass_ASettlement_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((ASettlement*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASettlement), &Z_Construct_UClass_ASettlement_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementGUID = { "SettlementGUID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SettlementGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementGUID_MetaData), NewProp_SettlementGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementTag = { "SettlementTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SettlementTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementTag_MetaData), NewProp_SettlementTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementDisplayName = { "SettlementDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SettlementDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementDisplayName_MetaData), NewProp_SettlementDisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementSchedule = { "SettlementSchedule", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SettlementSchedule), Z_Construct_UClass_USettlementActivitySchedule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementSchedule_MetaData), NewProp_SettlementSchedule_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x01440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlement, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ASettlement_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((ASettlement*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASettlement_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASettlement), &Z_Construct_UClass_ASettlement_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASettlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementActivityManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_POIMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_Spawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_Spawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SettlementSchedule,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlement_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASettlement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASettlement_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ASettlement, INarrativeSavableActor), false },  // 2545445142
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASettlement_Statics::ClassParams = {
	&ASettlement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASettlement_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASettlement_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlement_Statics::Class_MetaDataParams), Z_Construct_UClass_ASettlement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASettlement()
{
	if (!Z_Registration_Info_UClass_ASettlement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASettlement.OuterSingleton, Z_Construct_UClass_ASettlement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASettlement.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ASettlement>()
{
	return ASettlement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASettlement);
ASettlement::~ASettlement() {}
// End Class ASettlement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSettlementSpawn::StaticStruct, Z_Construct_UScriptStruct_FSettlementSpawn_Statics::NewStructOps, TEXT("SettlementSpawn"), &Z_Registration_Info_UScriptStruct_SettlementSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSettlementSpawn), 1158354933U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASettlement, ASettlement::StaticClass, TEXT("ASettlement"), &Z_Registration_Info_UClass_ASettlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASettlement), 2562519173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_691572669(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

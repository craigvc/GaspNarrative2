// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/NarrativeSave.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSave() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSave();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSave_NoRegister();
NARRATIVESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeActorRecord();
NARRATIVESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSaveComponent();
NARRATIVESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedLevel();
NARRATIVESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavePlayer();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin ScriptStruct FNarrativeSaveComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeSaveComponent;
class UScriptStruct* FNarrativeSaveComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSaveComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeSaveComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeSaveComponent, (UObject*)Z_Construct_UPackage__Script_NarrativeSaveSystem(), TEXT("NarrativeSaveComponent"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSaveComponent.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UScriptStruct* StaticStruct<FNarrativeSaveComponent>()
{
	return FNarrativeSaveComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/* Which component this is */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Which component this is" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Comment", "/* Contains all 'SaveGame' marked variables of the component  */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Contains all 'SaveGame' marked variables of the component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeSaveComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSaveComponent, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSaveComponent, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewProp_ByteData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
	nullptr,
	&NewStructOps,
	"NarrativeSaveComponent",
	Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::PropPointers),
	sizeof(FNarrativeSaveComponent),
	alignof(FNarrativeSaveComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSaveComponent()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSaveComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeSaveComponent.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSaveComponent.InnerSingleton;
}
// End ScriptStruct FNarrativeSaveComponent

// Begin ScriptStruct FNarrativeActorRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeActorRecord;
class UScriptStruct* FNarrativeActorRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeActorRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeActorRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeActorRecord, (UObject*)Z_Construct_UPackage__Script_NarrativeSaveSystem(), TEXT("NarrativeActorRecord"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeActorRecord.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UScriptStruct* StaticStruct<FNarrativeActorRecord>()
{
	return FNarrativeActorRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorGUID_MetaData[] = {
		{ "Comment", "/** The GUID we use to identify what actor this was */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "The GUID we use to identify what actor this was" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "Comment", "/* Identifier for which Actor this belongs to - TODO probably cant be removed isnt required */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Identifier for which Actor this belongs to - TODO probably cant be removed isnt required" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/* Save transform of actor */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Save transform of actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyed_MetaData[] = {
		{ "Comment", "/* Whether the actor has been destroyed. This is only relevant for actors placed in the level - dynamic actors simply have their save record removed. */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Whether the actor has been destroyed. This is only relevant for actors placed in the level - dynamic actors simply have their save record removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetStartup_MetaData[] = {
		{ "Comment", "/* Whether the actor is net startup or was spawned dynamically.  */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Whether the actor is net startup or was spawned dynamically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsDynamicSpawn_MetaData[] = {
		{ "Comment", "/* Whether the actor wants the save system to spawn the actor back in, or whether it should let our own code do so. */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Whether the actor wants the save system to spawn the actor back in, or whether it should let our own code do so." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSoftClass_MetaData[] = {
		{ "Comment", "/* Dynamically spawned actors need to remember their class so we can respawn the actor in when loading.  */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Dynamically spawned actors need to remember their class so we can respawn the actor in when loading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedComponents_MetaData[] = {
		{ "Comment", "/* Contains all saved component data */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Contains all saved component data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Comment", "/* Contains all 'SaveGame' marked variables of the Actor */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Contains all 'SaveGame' marked variables of the Actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGUID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyed;
	static void NewProp_bNetStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetStartup;
	static void NewProp_bNeedsDynamicSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsDynamicSpawn;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorSoftClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedComponents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeActorRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ActorGUID = { "ActorGUID", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeActorRecord, ActorGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorGUID_MetaData), NewProp_ActorGUID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeActorRecord, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeActorRecord, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
void Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bDestroyed_SetBit(void* Obj)
{
	((FNarrativeActorRecord*)Obj)->bDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bDestroyed = { "bDestroyed", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNarrativeActorRecord), &Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyed_MetaData), NewProp_bDestroyed_MetaData) };
void Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNetStartup_SetBit(void* Obj)
{
	((FNarrativeActorRecord*)Obj)->bNetStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNetStartup = { "bNetStartup", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNarrativeActorRecord), &Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNetStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetStartup_MetaData), NewProp_bNetStartup_MetaData) };
void Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNeedsDynamicSpawn_SetBit(void* Obj)
{
	((FNarrativeActorRecord*)Obj)->bNeedsDynamicSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNeedsDynamicSpawn = { "bNeedsDynamicSpawn", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNarrativeActorRecord), &Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNeedsDynamicSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsDynamicSpawn_MetaData), NewProp_bNeedsDynamicSpawn_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ActorSoftClass = { "ActorSoftClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeActorRecord, ActorSoftClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSoftClass_MetaData), NewProp_ActorSoftClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_SavedComponents_Inner = { "SavedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeSaveComponent, METADATA_PARAMS(0, nullptr) }; // 586133652
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_SavedComponents = { "SavedComponents", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeActorRecord, SavedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedComponents_MetaData), NewProp_SavedComponents_MetaData) }; // 586133652
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeActorRecord, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ActorGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNetStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_bNeedsDynamicSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ActorSoftClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_SavedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_SavedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewProp_ByteData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
	nullptr,
	&NewStructOps,
	"NarrativeActorRecord",
	Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::PropPointers),
	sizeof(FNarrativeActorRecord),
	alignof(FNarrativeActorRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeActorRecord()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeActorRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeActorRecord.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeActorRecord.InnerSingleton;
}
// End ScriptStruct FNarrativeActorRecord

// Begin ScriptStruct FNarrativeSavePlayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeSavePlayer;
class UScriptStruct* FNarrativeSavePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeSavePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeSavePlayer, (UObject*)Z_Construct_UPackage__Script_NarrativeSaveSystem(), TEXT("NarrativeSavePlayer"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavePlayer.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UScriptStruct* StaticStruct<FNarrativeSavePlayer>()
{
	return FNarrativeSavePlayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStateData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStateData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeSavePlayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewProp_ControllerData = { "ControllerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavePlayer, ControllerData), Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerData_MetaData), NewProp_ControllerData_MetaData) }; // 1167937850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewProp_PawnData = { "PawnData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavePlayer, PawnData), Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) }; // 1167937850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewProp_PlayerStateData = { "PlayerStateData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavePlayer, PlayerStateData), Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStateData_MetaData), NewProp_PlayerStateData_MetaData) }; // 1167937850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewProp_ControllerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewProp_PlayerStateData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
	nullptr,
	&NewStructOps,
	"NarrativeSavePlayer",
	Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::PropPointers),
	sizeof(FNarrativeSavePlayer),
	alignof(FNarrativeSavePlayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavePlayer()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavePlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeSavePlayer.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavePlayer.InnerSingleton;
}
// End ScriptStruct FNarrativeSavePlayer

// Begin ScriptStruct FNarrativeSavedLevel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeSavedLevel;
class UScriptStruct* FNarrativeSavedLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeSavedLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeSavedLevel, (UObject*)Z_Construct_UPackage__Script_NarrativeSaveSystem(), TEXT("NarrativeSavedLevel"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedLevel.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UScriptStruct* StaticStruct<FNarrativeSavedLevel>()
{
	return FNarrativeSavedLevel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Comment", "//The name of the map the records are for \n" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "The name of the map the records are for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordMap_MetaData[] = {
		{ "Comment", "//This maps the GUID returned by the maps actors save interface to that actors record, so we can load it back in! \n" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "This maps the GUID returned by the maps actors save interface to that actors record, so we can load it back in!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RecordMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeSavedLevel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedLevel, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_RecordMap_ValueProp = { "RecordMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(0, nullptr) }; // 1167937850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_RecordMap_Key_KeyProp = { "RecordMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_RecordMap = { "RecordMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedLevel, RecordMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordMap_MetaData), NewProp_RecordMap_MetaData) }; // 1167937850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_RecordMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_RecordMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewProp_RecordMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
	nullptr,
	&NewStructOps,
	"NarrativeSavedLevel",
	Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::PropPointers),
	sizeof(FNarrativeSavedLevel),
	alignof(FNarrativeSavedLevel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedLevel()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeSavedLevel.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedLevel.InnerSingleton;
}
// End ScriptStruct FNarrativeSavedLevel

// Begin Class UNarrativeSave Function OverrideLevelName
struct Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics
{
	struct NarrativeSave_eventOverrideLevelName_Parms
	{
		FString InLevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Save" },
		{ "Comment", "//Overrides the level we have loaded on the save file. This is only used by the character creator. \n" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Overrides the level we have loaded on the save file. This is only used by the character creator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InLevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::NewProp_InLevelName = { "InLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSave_eventOverrideLevelName_Parms, InLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLevelName_MetaData), NewProp_InLevelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::NewProp_InLevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSave, nullptr, "OverrideLevelName", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::NarrativeSave_eventOverrideLevelName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::NarrativeSave_eventOverrideLevelName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSave_OverrideLevelName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSave_OverrideLevelName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSave::execOverrideLevelName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InLevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideLevelName(Z_Param_InLevelName);
	P_NATIVE_END;
}
// End Class UNarrativeSave Function OverrideLevelName

// Begin Class UNarrativeSave
void UNarrativeSave::StaticRegisterNativesUNarrativeSave()
{
	UClass* Class = UNarrativeSave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverrideLevelName", &UNarrativeSave::execOverrideLevelName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSave);
UClass* Z_Construct_UClass_UNarrativeSave_NoRegister()
{
	return UNarrativeSave::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Save file that holds all actors that implement the INarrativeSavableActor interface. \n */" },
		{ "IncludePath", "NarrativeSave.h" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "Save file that holds all actors that implement the INarrativeSavableActor interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "Narrative Save" },
		{ "Comment", "//The name of the map we had loaded - note that the main menu loads whatever is saved in here, the subsystem doesn't use it on its end \n" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "The name of the map we had loaded - note that the main menu loads whatever is saved in here, the subsystem doesn't use it on its end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedLevels_MetaData[] = {
		{ "Comment", "//We store each level and its records seperately. TODO implement this and phase out RecordMap and PlayerData. \n" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "We store each level and its records seperately. TODO implement this and phase out RecordMap and PlayerData." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordMap_MetaData[] = {
		{ "Comment", "//This maps the GUID returned by the actors save interface to that actors record, so we can load it back in! \n" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "This maps the GUID returned by the actors save interface to that actors record, so we can load it back in!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "Comment", "/*This holds specific player data. - we handle loading players seperately as they are a little complex and consist of multiple actors(player state, player controller, pawn, etc)\n\x09We also store player data independently of level by default - this is typically how you want your save system to work - the players level, attributes, items, etc aren't tied to the level. */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "This holds specific player data. - we handle loading players seperately as they are a little complex and consist of multiple actors(player state, player controller, pawn, etc)\n       We also store player data independently of level by default - this is typically how you want your save system to work - the players level, attributes, items, etc aren't tied to the level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedDataVersion_MetaData[] = {
		{ "Comment", "/** What LatestVersion was when the archive was saved */" },
		{ "ModuleRelativePath", "Public/NarrativeSave.h" },
		{ "ToolTip", "What LatestVersion was when the archive was saved" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedLevels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RecordMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedDataVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeSave_OverrideLevelName, "OverrideLevelName" }, // 719722710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSave, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_SavedLevels_Inner = { "SavedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedLevel, METADATA_PARAMS(0, nullptr) }; // 903115860
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_SavedLevels = { "SavedLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSave, SavedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedLevels_MetaData), NewProp_SavedLevels_MetaData) }; // 903115860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_RecordMap_ValueProp = { "RecordMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(0, nullptr) }; // 1167937850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_RecordMap_Key_KeyProp = { "RecordMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_RecordMap = { "RecordMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSave, RecordMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordMap_MetaData), NewProp_RecordMap_MetaData) }; // 1167937850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSave, PlayerData), Z_Construct_UScriptStruct_FNarrativeSavePlayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 281164213
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeSave_Statics::NewProp_SavedDataVersion = { "SavedDataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSave, SavedDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedDataVersion_MetaData), NewProp_SavedDataVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_SavedLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_SavedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_RecordMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_RecordMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_RecordMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSave_Statics::NewProp_SavedDataVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeSave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSave_Statics::ClassParams = {
	&UNarrativeSave::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeSave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSave_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSave()
{
	if (!Z_Registration_Info_UClass_UNarrativeSave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSave.OuterSingleton, Z_Construct_UClass_UNarrativeSave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSave.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<UNarrativeSave>()
{
	return UNarrativeSave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSave);
UNarrativeSave::~UNarrativeSave() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNarrativeSave)
// End Class UNarrativeSave

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSave_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNarrativeSaveComponent::StaticStruct, Z_Construct_UScriptStruct_FNarrativeSaveComponent_Statics::NewStructOps, TEXT("NarrativeSaveComponent"), &Z_Registration_Info_UScriptStruct_NarrativeSaveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeSaveComponent), 586133652U) },
		{ FNarrativeActorRecord::StaticStruct, Z_Construct_UScriptStruct_FNarrativeActorRecord_Statics::NewStructOps, TEXT("NarrativeActorRecord"), &Z_Registration_Info_UScriptStruct_NarrativeActorRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeActorRecord), 1167937850U) },
		{ FNarrativeSavePlayer::StaticStruct, Z_Construct_UScriptStruct_FNarrativeSavePlayer_Statics::NewStructOps, TEXT("NarrativeSavePlayer"), &Z_Registration_Info_UScriptStruct_NarrativeSavePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeSavePlayer), 281164213U) },
		{ FNarrativeSavedLevel::StaticStruct, Z_Construct_UScriptStruct_FNarrativeSavedLevel_Statics::NewStructOps, TEXT("NarrativeSavedLevel"), &Z_Registration_Info_UScriptStruct_NarrativeSavedLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeSavedLevel), 903115860U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSave, UNarrativeSave::StaticClass, TEXT("UNarrativeSave"), &Z_Registration_Info_UClass_UNarrativeSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSave), 3266623206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSave_h_2969315285(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSave_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSave_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSave_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

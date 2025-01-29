// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/ArsenalSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArsenalSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UArsenalSettings
void UArsenalSettings::StaticRegisterNativesUArsenalSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArsenalSettings);
UClass* Z_Construct_UClass_UArsenalSettings_NoRegister()
{
	return UArsenalSettings::StaticClass();
}
struct Z_Construct_UClass_UArsenalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Configurable settings for Narrative Pro. \n */" },
		{ "IncludePath", "ArsenalSettings.h" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Configurable settings for Narrative Pro." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSaveName_MetaData[] = {
		{ "Category", "Narrative Pro|Save System" },
		{ "Comment", "/** This is the default save game name */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "This is the default save game name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUsername_MetaData[] = {
		{ "Category", "Narrative Pro|Gameplay" },
		{ "Comment", "//** If empty we'll keep Unreal assigned username, but if set to a valid string, game mode will override your player to use this.  */\n" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "/ If empty we'll keep Unreal assigned username, but if set to a valid string, game mode will override your player to use this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameEntryMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Narrative Pro|Maps" },
		{ "Comment", "/** The map that the default main menu will load. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "The map that the default main menu will load." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCreatorMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Narrative Pro|Maps" },
		{ "Comment", "/** The map that we'll open when the player wants to open the character creator */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "The map that we'll open when the player wants to open the character creator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadCharacterCreatorOnNewGame_MetaData[] = {
		{ "Category", "Narrative Pro|Maps" },
		{ "Comment", "/** If true, starting a new game will load the character creator, instead of loading the entry map. (The default character creator will then throw you into the entry map when you finish creation.) */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "If true, starting a new game will load the character creator, instead of loading the entry map. (The default character creator will then throw you into the entry map when you finish creation.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSaveSlots_MetaData[] = {
		{ "Category", "Narrative Pro|Save System" },
		{ "Comment", "/** How many save slots the default menu should support */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "How many save slots the default menu should support" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetadataSaveFileName_MetaData[] = {
		{ "Category", "Narrative Pro|Save System" },
		{ "Comment", "/** The save file name we'll use to store metadata about our main saves. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "The save file name we'll use to store metadata about our main saves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_TargetLocation_MetaData[] = {
		{ "Category", "Narrative Pro|Blackboard Keys" },
		{ "Comment", "/** TargetLocation BB key name  */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "TargetLocation BB key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_TargetRotation_MetaData[] = {
		{ "Category", "Narrative Pro|Blackboard Keys" },
		{ "Comment", "/** TargetRotation BB key name  */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "TargetRotation BB key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_Delay_MetaData[] = {
		{ "Category", "Narrative Pro|Blackboard Keys" },
		{ "Comment", "/** Delay BB key name  */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Delay BB key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_PlayerPawn_MetaData[] = {
		{ "Category", "Narrative Pro|Blackboard Keys" },
		{ "Comment", "/** PlayerPawn BB key name  */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "PlayerPawn BB key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_FollowTarget_MetaData[] = {
		{ "Category", "Narrative Pro|Blackboard Keys" },
		{ "Comment", "/** FollowTarget BB key name  */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "FollowTarget BB key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_AttackTarget_MetaData[] = {
		{ "Category", "Narrative Pro|Blackboard Keys" },
		{ "Comment", "/** Attack target BB key name  */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Attack target BB key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSoundClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Overall sound class */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Overall sound class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXSoundClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** SFX sound class */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "SFX sound class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UISoundClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** UI sound class */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "UI sound class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Dialogue sound class */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Dialogue sound class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicSoundClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Music sound class */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Music sound class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayMusicSoundWave_MetaData[] = {
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Default ambient gameplay music. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Default ambient gameplay music." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatMusicSoundWave_MetaData[] = {
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Default combat gameplay music. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Default combat gameplay music." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuSoundWave_MetaData[] = {
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Default main menu gameplay music. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Default main menu gameplay music." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseSoundWave_MetaData[] = {
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Default pause menu gameplay music. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Default pause menu gameplay music." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCreatorSoundWave_MetaData[] = {
		{ "Category", "Narrative Pro|Sounds" },
		{ "Comment", "/** Default character menu gameplay music. */" },
		{ "ModuleRelativePath", "Public/ArsenalSettings.h" },
		{ "ToolTip", "Default character menu gameplay music." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSaveName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultUsername;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameEntryMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterCreatorMap;
	static void NewProp_bLoadCharacterCreatorOnNewGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadCharacterCreatorOnNewGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSaveSlots;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataSaveFileName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_TargetLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_TargetRotation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_Delay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_PlayerPawn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_FollowTarget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBKey_AttackTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MasterSoundClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SFXSoundClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UISoundClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueSoundClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MusicSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GameplayMusicSoundWave;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CombatMusicSoundWave;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MainMenuSoundWave;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PauseSoundWave;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterCreatorSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArsenalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_DefaultSaveName = { "DefaultSaveName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, DefaultSaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSaveName_MetaData), NewProp_DefaultSaveName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_DefaultUsername = { "DefaultUsername", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, DefaultUsername), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUsername_MetaData), NewProp_DefaultUsername_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_GameEntryMap = { "GameEntryMap", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, GameEntryMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameEntryMap_MetaData), NewProp_GameEntryMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_CharacterCreatorMap = { "CharacterCreatorMap", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, CharacterCreatorMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterCreatorMap_MetaData), NewProp_CharacterCreatorMap_MetaData) };
void Z_Construct_UClass_UArsenalSettings_Statics::NewProp_bLoadCharacterCreatorOnNewGame_SetBit(void* Obj)
{
	((UArsenalSettings*)Obj)->bLoadCharacterCreatorOnNewGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_bLoadCharacterCreatorOnNewGame = { "bLoadCharacterCreatorOnNewGame", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArsenalSettings), &Z_Construct_UClass_UArsenalSettings_Statics::NewProp_bLoadCharacterCreatorOnNewGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadCharacterCreatorOnNewGame_MetaData), NewProp_bLoadCharacterCreatorOnNewGame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_NumSaveSlots = { "NumSaveSlots", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, NumSaveSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSaveSlots_MetaData), NewProp_NumSaveSlots_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MetadataSaveFileName = { "MetadataSaveFileName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, MetadataSaveFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetadataSaveFileName_MetaData), NewProp_MetadataSaveFileName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_TargetLocation = { "BBKey_TargetLocation", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, BBKey_TargetLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_TargetLocation_MetaData), NewProp_BBKey_TargetLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_TargetRotation = { "BBKey_TargetRotation", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, BBKey_TargetRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_TargetRotation_MetaData), NewProp_BBKey_TargetRotation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_Delay = { "BBKey_Delay", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, BBKey_Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_Delay_MetaData), NewProp_BBKey_Delay_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_PlayerPawn = { "BBKey_PlayerPawn", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, BBKey_PlayerPawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_PlayerPawn_MetaData), NewProp_BBKey_PlayerPawn_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_FollowTarget = { "BBKey_FollowTarget", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, BBKey_FollowTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_FollowTarget_MetaData), NewProp_BBKey_FollowTarget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_AttackTarget = { "BBKey_AttackTarget", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, BBKey_AttackTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_AttackTarget_MetaData), NewProp_BBKey_AttackTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MasterSoundClass = { "MasterSoundClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, MasterSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSoundClass_MetaData), NewProp_MasterSoundClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_SFXSoundClass = { "SFXSoundClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, SFXSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXSoundClass_MetaData), NewProp_SFXSoundClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_UISoundClass = { "UISoundClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, UISoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UISoundClass_MetaData), NewProp_UISoundClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_DialogueSoundClass = { "DialogueSoundClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, DialogueSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSoundClass_MetaData), NewProp_DialogueSoundClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MusicSoundClass = { "MusicSoundClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, MusicSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicSoundClass_MetaData), NewProp_MusicSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_GameplayMusicSoundWave = { "GameplayMusicSoundWave", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, GameplayMusicSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayMusicSoundWave_MetaData), NewProp_GameplayMusicSoundWave_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_CombatMusicSoundWave = { "CombatMusicSoundWave", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, CombatMusicSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatMusicSoundWave_MetaData), NewProp_CombatMusicSoundWave_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MainMenuSoundWave = { "MainMenuSoundWave", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, MainMenuSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuSoundWave_MetaData), NewProp_MainMenuSoundWave_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_PauseSoundWave = { "PauseSoundWave", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, PauseSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseSoundWave_MetaData), NewProp_PauseSoundWave_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UArsenalSettings_Statics::NewProp_CharacterCreatorSoundWave = { "CharacterCreatorSoundWave", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArsenalSettings, CharacterCreatorSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterCreatorSoundWave_MetaData), NewProp_CharacterCreatorSoundWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArsenalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_DefaultSaveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_DefaultUsername,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_GameEntryMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_CharacterCreatorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_bLoadCharacterCreatorOnNewGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_NumSaveSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MetadataSaveFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_PlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_FollowTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_BBKey_AttackTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MasterSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_SFXSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_UISoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_DialogueSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MusicSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_GameplayMusicSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_CombatMusicSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_MainMenuSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_PauseSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArsenalSettings_Statics::NewProp_CharacterCreatorSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArsenalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArsenalSettings_Statics::ClassParams = {
	&UArsenalSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArsenalSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UArsenalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArsenalSettings()
{
	if (!Z_Registration_Info_UClass_UArsenalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArsenalSettings.OuterSingleton, Z_Construct_UClass_UArsenalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArsenalSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UArsenalSettings>()
{
	return UArsenalSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArsenalSettings);
UArsenalSettings::~UArsenalSettings() {}
// End Class UArsenalSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArsenalSettings, UArsenalSettings::StaticClass, TEXT("UArsenalSettings"), &Z_Registration_Info_UClass_UArsenalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArsenalSettings), 4098957005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalSettings_h_4141599094(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/SkillTrees/SkillTreeComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillTreeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USkillTreeComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreePerk_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreeSkill_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedPerk();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedSkill();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSavedPerk
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedPerk;
class UScriptStruct* FSavedPerk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedPerk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedPerk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedPerk, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedPerk"));
	}
	return Z_Registration_Info_UScriptStruct_SavedPerk.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedPerk>()
{
	return FSavedPerk::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedPerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkClass_MetaData[] = {
		{ "Comment", "//The perk class - we'll search for this when loading game. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The perk class - we'll search for this when loading game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkLevel_MetaData[] = {
		{ "Comment", "//The level to restore the perk to\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The level to restore the perk to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PerkClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerkLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedPerk>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSavedPerk_Statics::NewProp_PerkClass = { "PerkClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedPerk, PerkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkClass_MetaData), NewProp_PerkClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSavedPerk_Statics::NewProp_PerkLevel = { "PerkLevel", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedPerk, PerkLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkLevel_MetaData), NewProp_PerkLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedPerk_Statics::NewProp_PerkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedPerk_Statics::NewProp_PerkLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedPerk_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedPerk",
	Z_Construct_UScriptStruct_FSavedPerk_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedPerk_Statics::PropPointers),
	sizeof(FSavedPerk),
	alignof(FSavedPerk),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedPerk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedPerk_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedPerk()
{
	if (!Z_Registration_Info_UScriptStruct_SavedPerk.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedPerk.InnerSingleton, Z_Construct_UScriptStruct_FSavedPerk_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedPerk.InnerSingleton;
}
// End ScriptStruct FSavedPerk

// Begin ScriptStruct FSavedSkill
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedSkill;
class UScriptStruct* FSavedSkill::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedSkill.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedSkill.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedSkill, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedSkill"));
	}
	return Z_Registration_Info_UScriptStruct_SavedSkill.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedSkill>()
{
	return FSavedSkill::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillClass_MetaData[] = {
		{ "Comment", "//The skills class - we'll search for this when loading game. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The skills class - we'll search for this when loading game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillLevel_MetaData[] = {
		{ "Comment", "//The level to restore the skill to\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The level to restore the skill to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedPerks_MetaData[] = {
		{ "Comment", "//The perks in the skill, and their info! \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The perks in the skill, and their info!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SkillClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedPerks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedPerks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedSkill>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SkillClass = { "SkillClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedSkill, SkillClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTreeSkill_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillClass_MetaData), NewProp_SkillClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SkillLevel = { "SkillLevel", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedSkill, SkillLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillLevel_MetaData), NewProp_SkillLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SavedPerks_Inner = { "SavedPerks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedPerk, METADATA_PARAMS(0, nullptr) }; // 399858452
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SavedPerks = { "SavedPerks", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedSkill, SavedPerks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedPerks_MetaData), NewProp_SavedPerks_MetaData) }; // 399858452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SkillClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SkillLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SavedPerks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedSkill_Statics::NewProp_SavedPerks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedSkill_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedSkill",
	Z_Construct_UScriptStruct_FSavedSkill_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedSkill_Statics::PropPointers),
	sizeof(FSavedSkill),
	alignof(FSavedSkill),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedSkill_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedSkill_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedSkill()
{
	if (!Z_Registration_Info_UScriptStruct_SavedSkill.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedSkill.InnerSingleton, Z_Construct_UScriptStruct_FSavedSkill_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedSkill.InnerSingleton;
}
// End ScriptStruct FSavedSkill

// Begin Class USkillTreeComponent Function BuyPerk
struct Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics
{
	struct SkillTreeComponent_eventBuyPerk_Parms
	{
		UTreePerk* Perk;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//Attempt to buy a perk. Will check that the prerequisite perks are purchased first. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "Attempt to buy a perk. Will check that the prerequisite perks are purchased first." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Perk;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::NewProp_Perk = { "Perk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventBuyPerk_Parms, Perk), Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkillTreeComponent_eventBuyPerk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTreeComponent_eventBuyPerk_Parms), &Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::NewProp_Perk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "BuyPerk", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::SkillTreeComponent_eventBuyPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::SkillTreeComponent_eventBuyPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_BuyPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_BuyPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execBuyPerk)
{
	P_GET_OBJECT(UTreePerk,Z_Param_Perk);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BuyPerk(Z_Param_Perk);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function BuyPerk

// Begin Class USkillTreeComponent Function CanBuyPerk
struct Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics
{
	struct SkillTreeComponent_eventCanBuyPerk_Parms
	{
		UTreePerk* Perk;
		FText OutCantBuyReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//Return whether or not we can purchase a perk. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "Return whether or not we can purchase a perk." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Perk;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutCantBuyReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_Perk = { "Perk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventCanBuyPerk_Parms, Perk), Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_OutCantBuyReason = { "OutCantBuyReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventCanBuyPerk_Parms, OutCantBuyReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkillTreeComponent_eventCanBuyPerk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTreeComponent_eventCanBuyPerk_Parms), &Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_Perk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_OutCantBuyReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "CanBuyPerk", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::SkillTreeComponent_eventCanBuyPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::SkillTreeComponent_eventCanBuyPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execCanBuyPerk)
{
	P_GET_OBJECT(UTreePerk,Z_Param_Perk);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutCantBuyReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBuyPerk(Z_Param_Perk,Z_Param_Out_OutCantBuyReason);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function CanBuyPerk

// Begin Class USkillTreeComponent Function GetPerkLevel
struct Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics
{
	struct SkillTreeComponent_eventGetPerkLevel_Parms
	{
		TSubclassOf<UTreePerk> PerkClass;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//Check what level a given perk is \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "Check what level a given perk is" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PerkClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::NewProp_PerkClass = { "PerkClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventGetPerkLevel_Parms, PerkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventGetPerkLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::NewProp_PerkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "GetPerkLevel", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::SkillTreeComponent_eventGetPerkLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::SkillTreeComponent_eventGetPerkLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execGetPerkLevel)
{
	P_GET_OBJECT(UClass,Z_Param_PerkClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPerkLevel(Z_Param_PerkClass);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function GetPerkLevel

// Begin Class USkillTreeComponent Function GiveSkillPoints
struct Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics
{
	struct SkillTreeComponent_eventGiveSkillPoints_Parms
	{
		int32 Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//Give the player the given amount of skill points \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "Give the player the given amount of skill points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventGiveSkillPoints_Parms, Points), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "GiveSkillPoints", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::SkillTreeComponent_eventGiveSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::SkillTreeComponent_eventGiveSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execGiveSkillPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveSkillPoints(Z_Param_Points);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function GiveSkillPoints

// Begin Class USkillTreeComponent Function HasRequiredPerks
struct Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics
{
	struct SkillTreeComponent_eventHasRequiredPerks_Parms
	{
		UTreePerk* Perk;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//Return whether or not we've unlocked previous perks - doesn't take into account skill points or anything like that - use CanBuyPerk if you want that. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "Return whether or not we've unlocked previous perks - doesn't take into account skill points or anything like that - use CanBuyPerk if you want that." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Perk;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::NewProp_Perk = { "Perk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillTreeComponent_eventHasRequiredPerks_Parms, Perk), Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkillTreeComponent_eventHasRequiredPerks_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillTreeComponent_eventHasRequiredPerks_Parms), &Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::NewProp_Perk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillTreeComponent, nullptr, "HasRequiredPerks", nullptr, nullptr, Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::SkillTreeComponent_eventHasRequiredPerks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::SkillTreeComponent_eventHasRequiredPerks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillTreeComponent::execHasRequiredPerks)
{
	P_GET_OBJECT(UTreePerk,Z_Param_Perk);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasRequiredPerks(Z_Param_Perk);
	P_NATIVE_END;
}
// End Class USkillTreeComponent Function HasRequiredPerks

// Begin Class USkillTreeComponent
void USkillTreeComponent::StaticRegisterNativesUSkillTreeComponent()
{
	UClass* Class = USkillTreeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuyPerk", &USkillTreeComponent::execBuyPerk },
		{ "CanBuyPerk", &USkillTreeComponent::execCanBuyPerk },
		{ "GetPerkLevel", &USkillTreeComponent::execGetPerkLevel },
		{ "GiveSkillPoints", &USkillTreeComponent::execGiveSkillPoints },
		{ "HasRequiredPerks", &USkillTreeComponent::execHasRequiredPerks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillTreeComponent);
UClass* Z_Construct_UClass_USkillTreeComponent_NoRegister()
{
	return USkillTreeComponent::StaticClass();
}
struct Z_Construct_UClass_USkillTreeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\nAdd to the PlayerState. \n\nThe skill tree component holds the players skills! Skills consist of a linked number of nodes called perks. Both perks and skills have levels - you can have a stealth skill\nwhich may be level 19, and within that skill you might have a perk called featherlight which may be purchased, and leveled up. IE 5% quieter footsteps at level 1, 10% at level 2, etc. \n\nNarrative ships with a Perk_AttributeMod which allows for easy attribute modifier perks, ie 5% higher attack damage, 10% higher sneak, etc. \n\nPerks are what you'd expect - hold 15% more weight, gain a new ability, etc! They are saved to disk via the FSavedPerk, which the component loads\nback in automatically. \n*/" },
		{ "IncludePath", "SkillTrees/SkillTreeComponent.h" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "Add to the PlayerState.\n\nThe skill tree component holds the players skills! Skills consist of a linked number of nodes called perks. Both perks and skills have levels - you can have a stealth skill\nwhich may be level 19, and within that skill you might have a perk called featherlight which may be purchased, and leveled up. IE 5% quieter footsteps at level 1, 10% at level 2, etc.\n\nNarrative ships with a Perk_AttributeMod which allows for easy attribute modifier perks, ie 5% higher attack damage, 10% higher sneak, etc.\n\nPerks are what you'd expect - hold 15% more weight, gain a new ability, etc! They are saved to disk via the FSavedPerk, which the component loads\nback in automatically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeSkills_Inner_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The skills in the skill tree, and the perks. Current perks are only set on the server - replication has not yet been supported. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The skills in the skill tree, and the perks. Current perks are only set on the server - replication has not yet been supported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeSkills_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The skills in the skill tree, and the perks. Current perks are only set on the server - replication has not yet been supported. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The skills in the skill tree, and the perks. Current perks are only set on the server - replication has not yet been supported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeSaveData_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The save data for our skill tree skills and perks. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The save data for our skill tree skills and perks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreePoints_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The amount of skill tree points we have available. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/SkillTreeComponent.h" },
		{ "ToolTip", "The amount of skill tree points we have available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillTreeSkills_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkillTreeSkills;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTreeSaveData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkillTreeSaveData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillTreePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillTreeComponent_BuyPerk, "BuyPerk" }, // 2192982164
		{ &Z_Construct_UFunction_USkillTreeComponent_CanBuyPerk, "CanBuyPerk" }, // 4041365361
		{ &Z_Construct_UFunction_USkillTreeComponent_GetPerkLevel, "GetPerkLevel" }, // 3818222783
		{ &Z_Construct_UFunction_USkillTreeComponent_GiveSkillPoints, "GiveSkillPoints" }, // 979261860
		{ &Z_Construct_UFunction_USkillTreeComponent_HasRequiredPerks, "HasRequiredPerks" }, // 3221242649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillTreeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSkills_Inner = { "SkillTreeSkills", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTreeSkill_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeSkills_Inner_MetaData), NewProp_SkillTreeSkills_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSkills = { "SkillTreeSkills", nullptr, (EPropertyFlags)0x002008800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeComponent, SkillTreeSkills), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeSkills_MetaData), NewProp_SkillTreeSkills_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSaveData_Inner = { "SkillTreeSaveData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedSkill, METADATA_PARAMS(0, nullptr) }; // 2713491700
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSaveData = { "SkillTreeSaveData", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeComponent, SkillTreeSaveData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeSaveData_MetaData), NewProp_SkillTreeSaveData_MetaData) }; // 2713491700
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreePoints = { "SkillTreePoints", nullptr, (EPropertyFlags)0x0020080001020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillTreeComponent, SkillTreePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreePoints_MetaData), NewProp_SkillTreePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSkills_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSkills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSaveData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreeSaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillTreeComponent_Statics::NewProp_SkillTreePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkillTreeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkillTreeComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(USkillTreeComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillTreeComponent_Statics::ClassParams = {
	&USkillTreeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillTreeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillTreeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkillTreeComponent()
{
	if (!Z_Registration_Info_UClass_USkillTreeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillTreeComponent.OuterSingleton, Z_Construct_UClass_USkillTreeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillTreeComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<USkillTreeComponent>()
{
	return USkillTreeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkillTreeComponent);
USkillTreeComponent::~USkillTreeComponent() {}
// End Class USkillTreeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavedPerk::StaticStruct, Z_Construct_UScriptStruct_FSavedPerk_Statics::NewStructOps, TEXT("SavedPerk"), &Z_Registration_Info_UScriptStruct_SavedPerk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedPerk), 399858452U) },
		{ FSavedSkill::StaticStruct, Z_Construct_UScriptStruct_FSavedSkill_Statics::NewStructOps, TEXT("SavedSkill"), &Z_Registration_Info_UScriptStruct_SavedSkill, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedSkill), 2713491700U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillTreeComponent, USkillTreeComponent::StaticClass, TEXT("USkillTreeComponent"), &Z_Registration_Info_UClass_USkillTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillTreeComponent), 330120107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_2208733319(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

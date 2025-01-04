// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_Block.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_Block() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Block();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Block_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_Block Function IsBlocking
struct Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics
{
	struct CombatAbility_Block_eventIsBlocking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Checks if the avatar is already blocking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Block.h" },
		{ "ToolTip", "Checks if the avatar is already blocking." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_Block_eventIsBlocking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_Block_eventIsBlocking_Parms), &Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Block, nullptr, "IsBlocking", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::CombatAbility_Block_eventIsBlocking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::CombatAbility_Block_eventIsBlocking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Block_IsBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Block_IsBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Block::execIsBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBlocking();
	P_NATIVE_END;
}
// End Class UCombatAbility_Block Function IsBlocking

// Begin Class UCombatAbility_Block
void UCombatAbility_Block::StaticRegisterNativesUCombatAbility_Block()
{
	UClass* Class = UCombatAbility_Block::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsBlocking", &UCombatAbility_Block::execIsBlocking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_Block);
UClass* Z_Construct_UClass_UCombatAbility_Block_NoRegister()
{
	return UCombatAbility_Block::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_Block_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Block Mechanic, adding and removing the Blocking Effect. \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_Block.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Block.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the Block Mechanic, adding and removing the Blocking Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingEffectClass_MetaData[] = {
		{ "Category", "Combat Ability|Block" },
		{ "Comment", "/** Gameplay Effect applied for the Blocking. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Block.h" },
		{ "ToolTip", "Gameplay Effect applied for the Blocking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakerHitEventTag_MetaData[] = {
		{ "Comment", "/** Task to track an external event informing that a breaker hit was received. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Block.h" },
		{ "ToolTip", "Task to track an external event informing that a breaker hit was received." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlockingEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BreakerHitEventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_Block_IsBlocking, "IsBlocking" }, // 2313702637
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_Block>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Block_Statics::NewProp_BlockingEffectClass = { "BlockingEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Block, BlockingEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingEffectClass_MetaData), NewProp_BlockingEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Block_Statics::NewProp_BreakerHitEventTag = { "BreakerHitEventTag", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Block, BreakerHitEventTag), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakerHitEventTag_MetaData), NewProp_BreakerHitEventTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_Block_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Block_Statics::NewProp_BlockingEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Block_Statics::NewProp_BreakerHitEventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Block_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_Block_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Block_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_Block_Statics::ClassParams = {
	&UCombatAbility_Block::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_Block_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Block_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Block_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_Block_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_Block()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_Block.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_Block.OuterSingleton, Z_Construct_UClass_UCombatAbility_Block_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_Block.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_Block>()
{
	return UCombatAbility_Block::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_Block);
UCombatAbility_Block::~UCombatAbility_Block() {}
// End Class UCombatAbility_Block

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Block_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_Block, UCombatAbility_Block::StaticClass, TEXT("UCombatAbility_Block"), &Z_Registration_Info_UClass_UCombatAbility_Block, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_Block), 2867938571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Block_h_1004859351(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Block_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Block_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

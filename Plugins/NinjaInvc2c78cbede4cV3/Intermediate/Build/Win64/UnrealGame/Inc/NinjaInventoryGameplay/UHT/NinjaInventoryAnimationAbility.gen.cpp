// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/NinjaInventoryAnimationAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryAnimationAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAnimationReceiverInterface_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryAnimationAbility();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryAnimationAbility_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayAbility();
NINJAINVENTORYGAMEPLAY_API UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UNinjaInventoryAnimationAbility Function HandleEventReceived
struct NinjaInventoryAnimationAbility_eventHandleEventReceived_Parms
{
	FGameplayEventData Payload;
};
static const FName NAME_UNinjaInventoryAnimationAbility_HandleEventReceived = FName(TEXT("HandleEventReceived"));
void UNinjaInventoryAnimationAbility::HandleEventReceived(const FGameplayEventData Payload)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryAnimationAbility_HandleEventReceived);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryAnimationAbility_eventHandleEventReceived_Parms Parms;
		Parms.Payload=Payload;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleEventReceived_Implementation(Payload);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage Ability" },
		{ "Comment", "/**\n\x09 * Handles a Gameplay Event that has been received, probably from the Animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ToolTip", "Handles a Gameplay Event that has been received, probably from the Animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAnimationAbility_eventHandleEventReceived_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAnimationAbility, nullptr, "HandleEventReceived", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::PropPointers), sizeof(NinjaInventoryAnimationAbility_eventHandleEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryAnimationAbility_eventHandleEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAnimationAbility::execHandleEventReceived)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEventReceived_Implementation(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAnimationAbility Function HandleEventReceived

// Begin Class UNinjaInventoryAnimationAbility
void UNinjaInventoryAnimationAbility::StaticRegisterNativesUNinjaInventoryAnimationAbility()
{
	UClass* Class = UNinjaInventoryAnimationAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleEventReceived", &UNinjaInventoryAnimationAbility::execHandleEventReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryAnimationAbility);
UClass* Z_Construct_UClass_UNinjaInventoryAnimationAbility_NoRegister()
{
	return UNinjaInventoryAnimationAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base ability providing a structure for animation-related tasks. \n */" },
		{ "IncludePath", "AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base ability providing a structure for animation-related tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageTable_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** A table of Animation Montages for events handled by this ability. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NinjaInventoryGameplay.InventoryAnimationTableRow" },
		{ "ToolTip", "A table of Animation Montages for events handled by this ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStrategy_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Defines how the item can be consumed from an animation's perspective. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ToolTip", "Defines how the item can be consumed from an animation's perspective." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEventTag_MetaData[] = {
		{ "Categories", "Inventory.Event.Animation" },
		{ "Category", "Equipment State" },
		{ "Comment", "/**\n\x09 * An optional animation event to wait before changing the state.\n\x09 * Only relevant if the strategy is set to \"Gameplay Event\".\n\x09 */" },
		{ "EditCondition", "AnimationStrategy == EInventoryAnimationStrategy::WaitForGameplayEvent" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ToolTip", "An optional animation event to wait before changing the state.\nOnly relevant if the strategy is set to \"Gameplay Event\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayMontageTask_MetaData[] = {
		{ "Comment", "/** Plays the selected Animation Montage. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ToolTip", "Plays the selected Animation Montage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitEventTask_MetaData[] = {
		{ "Comment", "/** Waits for the tracked Gameplay Event from the ongoing animation. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAnimationAbility.h" },
		{ "ToolTip", "Waits for the tracked Gameplay Event from the ongoing animation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageTable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationStrategy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationStrategy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationEventTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayMontageTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaitEventTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryAnimationAbility_HandleEventReceived, "HandleEventReceived" }, // 587386744
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryAnimationAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_MontageTable = { "MontageTable", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAnimationAbility, MontageTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageTable_MetaData), NewProp_MontageTable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_AnimationStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_AnimationStrategy = { "AnimationStrategy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAnimationAbility, AnimationStrategy), Z_Construct_UEnum_NinjaInventoryGameplay_EInventoryAnimationStrategy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationStrategy_MetaData), NewProp_AnimationStrategy_MetaData) }; // 360413212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_AnimationEventTag = { "AnimationEventTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAnimationAbility, AnimationEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationEventTag_MetaData), NewProp_AnimationEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_PlayMontageTask = { "PlayMontageTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAnimationAbility, PlayMontageTask), Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayMontageTask_MetaData), NewProp_PlayMontageTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_WaitEventTask = { "WaitEventTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAnimationAbility, WaitEventTask), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitEventTask_MetaData), NewProp_WaitEventTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_MontageTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_AnimationStrategy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_AnimationStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_AnimationEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_PlayMontageTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::NewProp_WaitEventTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryAnimationReceiverInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryAnimationAbility, IInventoryAnimationReceiverInterface), false },  // 2547750536
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::ClassParams = {
	&UNinjaInventoryAnimationAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryAnimationAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryAnimationAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryAnimationAbility.OuterSingleton, Z_Construct_UClass_UNinjaInventoryAnimationAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryAnimationAbility.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UNinjaInventoryAnimationAbility>()
{
	return UNinjaInventoryAnimationAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryAnimationAbility);
UNinjaInventoryAnimationAbility::~UNinjaInventoryAnimationAbility() {}
// End Class UNinjaInventoryAnimationAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAnimationAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryAnimationAbility, UNinjaInventoryAnimationAbility::StaticClass, TEXT("UNinjaInventoryAnimationAbility"), &Z_Registration_Info_UClass_UNinjaInventoryAnimationAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryAnimationAbility), 3810923471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAnimationAbility_h_1934079185(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAnimationAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAnimationAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

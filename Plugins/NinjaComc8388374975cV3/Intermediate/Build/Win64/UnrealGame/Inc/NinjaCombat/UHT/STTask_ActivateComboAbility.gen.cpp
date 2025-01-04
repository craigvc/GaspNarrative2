// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTTask_ActivateComboAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_USTTask_ActivateComboAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_USTTask_ActivateComboAbility_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EComboCountChange();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum EComboCountChange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboCountChange;
static UEnum* EComboCountChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComboCountChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComboCountChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_EComboCountChange, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("EComboCountChange"));
	}
	return Z_Registration_Info_UEnum_EComboCountChange.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<EComboCountChange>()
{
	return EComboCountChange_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Possible changes that this task will do to the combo change on activation. */" },
		{ "IncrementCount.Comment", "/** Increments the count, moving the Combo to the next state, ready for the next input. */" },
		{ "IncrementCount.Name", "EComboCountChange::IncrementCount" },
		{ "IncrementCount.ToolTip", "Increments the count, moving the Combo to the next state, ready for the next input." },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "NoChange.Comment", "/** The count won't be changed. Something else will have to do it, like a successful hit detection. */" },
		{ "NoChange.Name", "EComboCountChange::NoChange" },
		{ "NoChange.ToolTip", "The count won't be changed. Something else will have to do it, like a successful hit detection." },
		{ "ResetCount.Comment", "/** Resets the count, allowing the combo to loop from the start. */" },
		{ "ResetCount.Name", "EComboCountChange::ResetCount" },
		{ "ResetCount.ToolTip", "Resets the count, allowing the combo to loop from the start." },
		{ "ToolTip", "Possible changes that this task will do to the combo change on activation." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComboCountChange::NoChange", (int64)EComboCountChange::NoChange },
		{ "EComboCountChange::IncrementCount", (int64)EComboCountChange::IncrementCount },
		{ "EComboCountChange::ResetCount", (int64)EComboCountChange::ResetCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"EComboCountChange",
	"EComboCountChange",
	Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_EComboCountChange()
{
	if (!Z_Registration_Info_UEnum_EComboCountChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboCountChange.InnerSingleton, Z_Construct_UEnum_NinjaCombat_EComboCountChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComboCountChange.InnerSingleton;
}
// End Enum EComboCountChange

// Begin Class USTTask_ActivateComboAbility Function OnAbilityEnded
struct Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics
{
	struct STTask_ActivateComboAbility_eventOnAbilityEnded_Parms
	{
		FAbilityEndedData Data;
		const AActor* Owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notifies that the ability being executed has finished.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "ToolTip", "Notifies that the ability being executed has finished." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STTask_ActivateComboAbility_eventOnAbilityEnded_Parms, Data), Z_Construct_UScriptStruct_FAbilityEndedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3618296056
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STTask_ActivateComboAbility_eventOnAbilityEnded_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTTask_ActivateComboAbility, nullptr, "OnAbilityEnded", nullptr, nullptr, Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::STTask_ActivateComboAbility_eventOnAbilityEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::STTask_ActivateComboAbility_eventOnAbilityEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTTask_ActivateComboAbility::execOnAbilityEnded)
{
	P_GET_STRUCT_REF(FAbilityEndedData,Z_Param_Out_Data);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityEnded(Z_Param_Out_Data,Z_Param_Owner);
	P_NATIVE_END;
}
// End Class USTTask_ActivateComboAbility Function OnAbilityEnded

// Begin Class USTTask_ActivateComboAbility
void USTTask_ActivateComboAbility::StaticRegisterNativesUSTTask_ActivateComboAbility()
{
	UClass* Class = USTTask_ActivateComboAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAbilityEnded", &USTTask_ActivateComboAbility::execOnAbilityEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTTask_ActivateComboAbility);
UClass* Z_Construct_UClass_USTTask_ActivateComboAbility_NoRegister()
{
	return USTTask_ActivateComboAbility::StaticClass();
}
struct Z_Construct_UClass_USTTask_ActivateComboAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n * Activates a Gameplay Ability based on a given criteria.\n */" },
		{ "DisplayName", "Activate Combo Ability" },
		{ "IncludePath", "AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Activates a Gameplay Ability based on a given criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "/** Reference to the Actor owning the Combat Component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatComboManagerInterface" },
		{ "ToolTip", "Reference to the Actor owning the Combat Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Gameplay Tags used to activate the ability. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "ToolTip", "Gameplay Tags used to activate the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeOnActivation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** How to modify the Combo Count if there's an activation. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_ActivateComboAbility.h" },
		{ "ToolTip", "How to modify the Combo Count if there's an activation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeOnActivation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeOnActivation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USTTask_ActivateComboAbility_OnAbilityEnded, "OnAbilityEnded" }, // 639424864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTTask_ActivateComboAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTask_ActivateComboAbility, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTask_ActivateComboAbility, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTags_MetaData), NewProp_AbilityTags_MetaData) }; // 3352185621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_ChangeOnActivation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_ChangeOnActivation = { "ChangeOnActivation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTask_ActivateComboAbility, ChangeOnActivation), Z_Construct_UEnum_NinjaCombat_EComboCountChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeOnActivation_MetaData), NewProp_ChangeOnActivation_MetaData) }; // 957539688
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_ChangeOnActivation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::NewProp_ChangeOnActivation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::ClassParams = {
	&USTTask_ActivateComboAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTTask_ActivateComboAbility()
{
	if (!Z_Registration_Info_UClass_USTTask_ActivateComboAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTTask_ActivateComboAbility.OuterSingleton, Z_Construct_UClass_USTTask_ActivateComboAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTTask_ActivateComboAbility.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<USTTask_ActivateComboAbility>()
{
	return USTTask_ActivateComboAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTTask_ActivateComboAbility);
USTTask_ActivateComboAbility::~USTTask_ActivateComboAbility() {}
// End Class USTTask_ActivateComboAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComboCountChange_StaticEnum, TEXT("EComboCountChange"), &Z_Registration_Info_UEnum_EComboCountChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 957539688U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTTask_ActivateComboAbility, USTTask_ActivateComboAbility::StaticClass, TEXT("USTTask_ActivateComboAbility"), &Z_Registration_Info_UClass_USTTask_ActivateComboAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTTask_ActivateComboAbility), 743097905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_1260066347(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

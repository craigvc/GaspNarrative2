// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatWeaponAnimationProviderInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatWeaponAnimationProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponAnimationProviderInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatWeaponAnimationProviderInterface Function GetAnimationMontageForAbility
struct CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms
{
	FGameplayTagContainer AbilityTags;
	UAnimMontage* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAnimMontage* ICombatWeaponAnimationProviderInterface::GetAnimationMontageForAbility(FGameplayTagContainer const& AbilityTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAnimationMontageForAbility instead.");
	CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility = FName(TEXT("GetAnimationMontageForAbility"));
UAnimMontage* ICombatWeaponAnimationProviderInterface::Execute_GetAnimationMontageForAbility(const UObject* O, FGameplayTagContainer const& AbilityTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatWeaponAnimationProviderInterface::StaticClass()));
	CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility);
	if (Func)
	{
		Parms.AbilityTags=AbilityTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatWeaponAnimationProviderInterface*)(O->GetNativeInterfaceAddress(UCombatWeaponAnimationProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAnimationMontageForAbility_Implementation(AbilityTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Weapon Animation Provider Interface" },
		{ "Comment", "/**\n\x09 * Receives the Combat Target from a source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatWeaponAnimationProviderInterface.h" },
		{ "ToolTip", "Receives the Combat Target from a source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTags_MetaData), NewProp_AbilityTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatWeaponAnimationProviderInterface, nullptr, "GetAnimationMontageForAbility", nullptr, nullptr, Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::PropPointers), sizeof(CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatWeaponAnimationProviderInterface_eventGetAnimationMontageForAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatWeaponAnimationProviderInterface::execGetAnimationMontageForAbility)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_AbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetAnimationMontageForAbility_Implementation(Z_Param_Out_AbilityTags);
	P_NATIVE_END;
}
// End Interface UCombatWeaponAnimationProviderInterface Function GetAnimationMontageForAbility

// Begin Interface UCombatWeaponAnimationProviderInterface
void UCombatWeaponAnimationProviderInterface::StaticRegisterNativesUCombatWeaponAnimationProviderInterface()
{
	UClass* Class = UCombatWeaponAnimationProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimationMontageForAbility", &ICombatWeaponAnimationProviderInterface::execGetAnimationMontageForAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatWeaponAnimationProviderInterface);
UClass* Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_NoRegister()
{
	return UCombatWeaponAnimationProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatWeaponAnimationProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatWeaponAnimationProviderInterface_GetAnimationMontageForAbility, "GetAnimationMontageForAbility" }, // 2294588216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatWeaponAnimationProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics::ClassParams = {
	&UCombatWeaponAnimationProviderInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatWeaponAnimationProviderInterface()
{
	if (!Z_Registration_Info_UClass_UCombatWeaponAnimationProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatWeaponAnimationProviderInterface.OuterSingleton, Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatWeaponAnimationProviderInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatWeaponAnimationProviderInterface>()
{
	return UCombatWeaponAnimationProviderInterface::StaticClass();
}
UCombatWeaponAnimationProviderInterface::UCombatWeaponAnimationProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatWeaponAnimationProviderInterface);
UCombatWeaponAnimationProviderInterface::~UCombatWeaponAnimationProviderInterface() {}
// End Interface UCombatWeaponAnimationProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatWeaponAnimationProviderInterface, UCombatWeaponAnimationProviderInterface::StaticClass, TEXT("UCombatWeaponAnimationProviderInterface"), &Z_Registration_Info_UClass_UCombatWeaponAnimationProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatWeaponAnimationProviderInterface), 3283672249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_3737692410(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

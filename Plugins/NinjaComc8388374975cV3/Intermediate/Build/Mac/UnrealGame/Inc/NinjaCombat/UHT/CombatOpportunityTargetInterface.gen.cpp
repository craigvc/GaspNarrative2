// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatOpportunityTargetInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatOpportunityTargetInterface() {}

// Begin Cross Module References
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatOpportunityTargetInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatOpportunityTargetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatOpportunityTargetInterface Function GetContextualAnimSceneAsset
struct CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms
{
	FGameplayTagContainer AbilityTags;
	UContextualAnimSceneAsset* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms()
		: ReturnValue(NULL)
	{
	}
};
UContextualAnimSceneAsset* ICombatOpportunityTargetInterface::GetContextualAnimSceneAsset(FGameplayTagContainer AbilityTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetContextualAnimSceneAsset instead.");
	CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset = FName(TEXT("GetContextualAnimSceneAsset"));
UContextualAnimSceneAsset* ICombatOpportunityTargetInterface::Execute_GetContextualAnimSceneAsset(const UObject* O, FGameplayTagContainer AbilityTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatOpportunityTargetInterface::StaticClass()));
	CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset);
	if (Func)
	{
		Parms.AbilityTags=AbilityTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatOpportunityTargetInterface*)(O->GetNativeInterfaceAddress(UCombatOpportunityTargetInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetContextualAnimSceneAsset_Implementation(AbilityTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Opportunity Target Interface" },
		{ "Comment", "/**\n\x09 * Provides an optional Contextual Anim Scene Asset (CAS) that overrides the default one.\n\x09 * \n\x09 * This is only necessary if the default CAS is configured for a character with a skeleton\n\x09 * or proportions that are not compatible with this target.\n\x09 *\n\x09 * @param AbilityTags\n\x09 *\x09\x09Tags describing the Gameplay Ability performing the Opportunity Target Attack.\n\x09 *\x09\x09""Can be used to filter specific Contextual Animation Assets for certain abilities.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The Contextual Animation Asset to use for this target, for a given animation. If no\n\x09 *\x09\x09override is necessary and the default one from the ability is correct, returns null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatOpportunityTargetInterface.h" },
		{ "ToolTip", "Provides an optional Contextual Anim Scene Asset (CAS) that overrides the default one.\n\nThis is only necessary if the default CAS is configured for a character with a skeleton\nor proportions that are not compatible with this target.\n\n@param AbilityTags\n             Tags describing the Gameplay Ability performing the Opportunity Target Attack.\n             Can be used to filter specific Contextual Animation Assets for certain abilities.\n\n@return\n             The Contextual Animation Asset to use for this target, for a given animation. If no\n             override is necessary and the default one from the ability is correct, returns null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms, ReturnValue), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatOpportunityTargetInterface, nullptr, "GetContextualAnimSceneAsset", nullptr, nullptr, Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::PropPointers), sizeof(CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatOpportunityTargetInterface_eventGetContextualAnimSceneAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatOpportunityTargetInterface::execGetContextualAnimSceneAsset)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UContextualAnimSceneAsset**)Z_Param__Result=P_THIS->GetContextualAnimSceneAsset_Implementation(Z_Param_AbilityTags);
	P_NATIVE_END;
}
// End Interface UCombatOpportunityTargetInterface Function GetContextualAnimSceneAsset

// Begin Interface UCombatOpportunityTargetInterface
void UCombatOpportunityTargetInterface::StaticRegisterNativesUCombatOpportunityTargetInterface()
{
	UClass* Class = UCombatOpportunityTargetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContextualAnimSceneAsset", &ICombatOpportunityTargetInterface::execGetContextualAnimSceneAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatOpportunityTargetInterface);
UClass* Z_Construct_UClass_UCombatOpportunityTargetInterface_NoRegister()
{
	return UCombatOpportunityTargetInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatOpportunityTargetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatOpportunityTargetInterface_GetContextualAnimSceneAsset, "GetContextualAnimSceneAsset" }, // 3807245343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatOpportunityTargetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics::ClassParams = {
	&UCombatOpportunityTargetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatOpportunityTargetInterface()
{
	if (!Z_Registration_Info_UClass_UCombatOpportunityTargetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatOpportunityTargetInterface.OuterSingleton, Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatOpportunityTargetInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatOpportunityTargetInterface>()
{
	return UCombatOpportunityTargetInterface::StaticClass();
}
UCombatOpportunityTargetInterface::UCombatOpportunityTargetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatOpportunityTargetInterface);
UCombatOpportunityTargetInterface::~UCombatOpportunityTargetInterface() {}
// End Interface UCombatOpportunityTargetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatOpportunityTargetInterface, UCombatOpportunityTargetInterface::StaticClass, TEXT("UCombatOpportunityTargetInterface"), &Z_Registration_Info_UClass_UCombatOpportunityTargetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatOpportunityTargetInterface), 2685465451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_34663628(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

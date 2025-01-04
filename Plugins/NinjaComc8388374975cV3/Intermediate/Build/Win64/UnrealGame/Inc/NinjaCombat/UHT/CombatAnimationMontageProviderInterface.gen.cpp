// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Animation/CombatAnimationMontageProviderInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAnimationMontageProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationMontageProviderInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationMontageProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatAnimationMontageProviderInterface Function GetAnimationMontage
struct CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms
{
	FGameplayTagContainer AbilityTags;
	UAnimMontage* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAnimMontage* ICombatAnimationMontageProviderInterface::GetAnimationMontage(FGameplayTagContainer AbilityTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAnimationMontage instead.");
	CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatAnimationMontageProviderInterface_GetAnimationMontage = FName(TEXT("GetAnimationMontage"));
UAnimMontage* ICombatAnimationMontageProviderInterface::Execute_GetAnimationMontage(const UObject* O, FGameplayTagContainer AbilityTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationMontageProviderInterface::StaticClass()));
	CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationMontageProviderInterface_GetAnimationMontage);
	if (Func)
	{
		Parms.AbilityTags=AbilityTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatAnimationMontageProviderInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationMontageProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAnimationMontage_Implementation(AbilityTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Montage Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides an Animation Montage to be used by a combat ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationMontageProviderInterface.h" },
		{ "ToolTip", "Provides an Animation Montage to be used by a combat ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationMontageProviderInterface, nullptr, "GetAnimationMontage", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::PropPointers), sizeof(CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationMontageProviderInterface_eventGetAnimationMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationMontageProviderInterface::execGetAnimationMontage)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetAnimationMontage_Implementation(Z_Param_AbilityTags);
	P_NATIVE_END;
}
// End Interface UCombatAnimationMontageProviderInterface Function GetAnimationMontage

// Begin Interface UCombatAnimationMontageProviderInterface Function GetPlayRate
struct CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms
{
	FGameplayTagContainer AbilityTags;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms()
		: ReturnValue(0)
	{
	}
};
float ICombatAnimationMontageProviderInterface::GetPlayRate(FGameplayTagContainer AbilityTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayRate instead.");
	CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatAnimationMontageProviderInterface_GetPlayRate = FName(TEXT("GetPlayRate"));
float ICombatAnimationMontageProviderInterface::Execute_GetPlayRate(const UObject* O, FGameplayTagContainer AbilityTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationMontageProviderInterface::StaticClass()));
	CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationMontageProviderInterface_GetPlayRate);
	if (Func)
	{
		Parms.AbilityTags=AbilityTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatAnimationMontageProviderInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationMontageProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetPlayRate_Implementation(AbilityTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Montage Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides the Play Rate to be used by a combat ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationMontageProviderInterface.h" },
		{ "ToolTip", "Provides the Play Rate to be used by a combat ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationMontageProviderInterface, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::PropPointers), sizeof(CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationMontageProviderInterface_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationMontageProviderInterface::execGetPlayRate)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayRate_Implementation(Z_Param_AbilityTags);
	P_NATIVE_END;
}
// End Interface UCombatAnimationMontageProviderInterface Function GetPlayRate

// Begin Interface UCombatAnimationMontageProviderInterface Function GetSectionName
struct CombatAnimationMontageProviderInterface_eventGetSectionName_Parms
{
	FGameplayTagContainer AbilityTags;
	FName ReturnValue;
};
FName ICombatAnimationMontageProviderInterface::GetSectionName(FGameplayTagContainer AbilityTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSectionName instead.");
	CombatAnimationMontageProviderInterface_eventGetSectionName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatAnimationMontageProviderInterface_GetSectionName = FName(TEXT("GetSectionName"));
FName ICombatAnimationMontageProviderInterface::Execute_GetSectionName(const UObject* O, FGameplayTagContainer AbilityTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationMontageProviderInterface::StaticClass()));
	CombatAnimationMontageProviderInterface_eventGetSectionName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationMontageProviderInterface_GetSectionName);
	if (Func)
	{
		Parms.AbilityTags=AbilityTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatAnimationMontageProviderInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationMontageProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSectionName_Implementation(AbilityTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Montage Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides the Section Name to be used by a combat ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationMontageProviderInterface.h" },
		{ "ToolTip", "Provides the Section Name to be used by a combat ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationMontageProviderInterface_eventGetSectionName_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationMontageProviderInterface_eventGetSectionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationMontageProviderInterface, nullptr, "GetSectionName", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::PropPointers), sizeof(CombatAnimationMontageProviderInterface_eventGetSectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationMontageProviderInterface_eventGetSectionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationMontageProviderInterface::execGetSectionName)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSectionName_Implementation(Z_Param_AbilityTags);
	P_NATIVE_END;
}
// End Interface UCombatAnimationMontageProviderInterface Function GetSectionName

// Begin Interface UCombatAnimationMontageProviderInterface
void UCombatAnimationMontageProviderInterface::StaticRegisterNativesUCombatAnimationMontageProviderInterface()
{
	UClass* Class = UCombatAnimationMontageProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimationMontage", &ICombatAnimationMontageProviderInterface::execGetAnimationMontage },
		{ "GetPlayRate", &ICombatAnimationMontageProviderInterface::execGetPlayRate },
		{ "GetSectionName", &ICombatAnimationMontageProviderInterface::execGetSectionName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAnimationMontageProviderInterface);
UClass* Z_Construct_UClass_UCombatAnimationMontageProviderInterface_NoRegister()
{
	return UCombatAnimationMontageProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationMontageProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetAnimationMontage, "GetAnimationMontage" }, // 2474138814
		{ &Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetPlayRate, "GetPlayRate" }, // 2065412138
		{ &Z_Construct_UFunction_UCombatAnimationMontageProviderInterface_GetSectionName, "GetSectionName" }, // 3617392365
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatAnimationMontageProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics::ClassParams = {
	&UCombatAnimationMontageProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAnimationMontageProviderInterface()
{
	if (!Z_Registration_Info_UClass_UCombatAnimationMontageProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAnimationMontageProviderInterface.OuterSingleton, Z_Construct_UClass_UCombatAnimationMontageProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAnimationMontageProviderInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAnimationMontageProviderInterface>()
{
	return UCombatAnimationMontageProviderInterface::StaticClass();
}
UCombatAnimationMontageProviderInterface::UCombatAnimationMontageProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAnimationMontageProviderInterface);
UCombatAnimationMontageProviderInterface::~UCombatAnimationMontageProviderInterface() {}
// End Interface UCombatAnimationMontageProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationMontageProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAnimationMontageProviderInterface, UCombatAnimationMontageProviderInterface::StaticClass, TEXT("UCombatAnimationMontageProviderInterface"), &Z_Registration_Info_UClass_UCombatAnimationMontageProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAnimationMontageProviderInterface), 2310414137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationMontageProviderInterface_h_1694647539(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationMontageProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationMontageProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

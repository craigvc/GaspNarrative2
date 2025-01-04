// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Animation/CombatAnimationContextProviderInterface.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAnimationContextProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationContextProviderInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationContextProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatAnimationContextProviderInterface Function GetAnimationContext
struct CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms
{
	FGameplayTagContainer OutContextTags;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatAnimationContextProviderInterface::GetAnimationContext(FGameplayTagContainer& OutContextTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAnimationContext instead.");
	CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatAnimationContextProviderInterface_GetAnimationContext = FName(TEXT("GetAnimationContext"));
bool ICombatAnimationContextProviderInterface::Execute_GetAnimationContext(const UObject* O, FGameplayTagContainer& OutContextTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationContextProviderInterface::StaticClass()));
	CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationContextProviderInterface_GetAnimationContext);
	if (Func)
	{
		Parms.OutContextTags=OutContextTags;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutContextTags=Parms.OutContextTags;
	}
	else if (auto I = (const ICombatAnimationContextProviderInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationContextProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAnimationContext_Implementation(OutContextTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Context Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides the animation context, represented by gameplay tags.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationContextProviderInterface.h" },
		{ "ToolTip", "Provides the animation context, represented by gameplay tags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutContextTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::NewProp_OutContextTags = { "OutContextTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms, OutContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
void Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms), &Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::NewProp_OutContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationContextProviderInterface, nullptr, "GetAnimationContext", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::PropPointers), sizeof(CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationContextProviderInterface_eventGetAnimationContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationContextProviderInterface::execGetAnimationContext)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAnimationContext_Implementation(Z_Param_Out_OutContextTags);
	P_NATIVE_END;
}
// End Interface UCombatAnimationContextProviderInterface Function GetAnimationContext

// Begin Interface UCombatAnimationContextProviderInterface Function GetEffectContext
struct CombatAnimationContextProviderInterface_eventGetEffectContext_Parms
{
	FGameplayEffectContextHandle OutHandle;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatAnimationContextProviderInterface_eventGetEffectContext_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatAnimationContextProviderInterface::GetEffectContext(FGameplayEffectContextHandle& OutHandle) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEffectContext instead.");
	CombatAnimationContextProviderInterface_eventGetEffectContext_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatAnimationContextProviderInterface_GetEffectContext = FName(TEXT("GetEffectContext"));
bool ICombatAnimationContextProviderInterface::Execute_GetEffectContext(const UObject* O, FGameplayEffectContextHandle& OutHandle)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationContextProviderInterface::StaticClass()));
	CombatAnimationContextProviderInterface_eventGetEffectContext_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationContextProviderInterface_GetEffectContext);
	if (Func)
	{
		Parms.OutHandle=OutHandle;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		OutHandle=Parms.OutHandle;
	}
	else if (auto I = (const ICombatAnimationContextProviderInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationContextProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetEffectContext_Implementation(OutHandle);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Context Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides the effect context from the last event activation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationContextProviderInterface.h" },
		{ "ToolTip", "Provides the effect context from the last event activation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationContextProviderInterface_eventGetEffectContext_Parms, OutHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAnimationContextProviderInterface_eventGetEffectContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAnimationContextProviderInterface_eventGetEffectContext_Parms), &Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationContextProviderInterface, nullptr, "GetEffectContext", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::PropPointers), sizeof(CombatAnimationContextProviderInterface_eventGetEffectContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationContextProviderInterface_eventGetEffectContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationContextProviderInterface::execGetEffectContext)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEffectContext_Implementation(Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// End Interface UCombatAnimationContextProviderInterface Function GetEffectContext

// Begin Interface UCombatAnimationContextProviderInterface
void UCombatAnimationContextProviderInterface::StaticRegisterNativesUCombatAnimationContextProviderInterface()
{
	UClass* Class = UCombatAnimationContextProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimationContext", &ICombatAnimationContextProviderInterface::execGetAnimationContext },
		{ "GetEffectContext", &ICombatAnimationContextProviderInterface::execGetEffectContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAnimationContextProviderInterface);
UClass* Z_Construct_UClass_UCombatAnimationContextProviderInterface_NoRegister()
{
	return UCombatAnimationContextProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Animation/CombatAnimationContextProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetAnimationContext, "GetAnimationContext" }, // 3335881001
		{ &Z_Construct_UFunction_UCombatAnimationContextProviderInterface_GetEffectContext, "GetEffectContext" }, // 206566800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatAnimationContextProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics::ClassParams = {
	&UCombatAnimationContextProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAnimationContextProviderInterface()
{
	if (!Z_Registration_Info_UClass_UCombatAnimationContextProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAnimationContextProviderInterface.OuterSingleton, Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAnimationContextProviderInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAnimationContextProviderInterface>()
{
	return UCombatAnimationContextProviderInterface::StaticClass();
}
UCombatAnimationContextProviderInterface::UCombatAnimationContextProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAnimationContextProviderInterface);
UCombatAnimationContextProviderInterface::~UCombatAnimationContextProviderInterface() {}
// End Interface UCombatAnimationContextProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAnimationContextProviderInterface, UCombatAnimationContextProviderInterface::StaticClass, TEXT("UCombatAnimationContextProviderInterface"), &Z_Registration_Info_UClass_UCombatAnimationContextProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAnimationContextProviderInterface), 1591579501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_1415415509(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

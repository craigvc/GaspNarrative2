// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatTargetCosmeticsModifierInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatTargetCosmeticsModifierInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatTargetCosmeticsModifierInterface Function ModifyAudioEffect
struct CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms
{
	UAudioComponent* Audio;
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
};
void ICombatTargetCosmeticsModifierInterface::ModifyAudioEffect(UAudioComponent* Audio, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyAudioEffect instead.");
}
static FName NAME_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect = FName(TEXT("ModifyAudioEffect"));
void ICombatTargetCosmeticsModifierInterface::Execute_ModifyAudioEffect(UObject* O, UAudioComponent* Audio, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetCosmeticsModifierInterface::StaticClass()));
	CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect);
	if (Func)
	{
		Parms.Audio=Audio;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetCosmeticsModifierInterface*)(O->GetNativeInterfaceAddress(UCombatTargetCosmeticsModifierInterface::StaticClass())))
	{
		I->ModifyAudioEffect_Implementation(Audio,HitResult,SourceTags,TargetTags);
	}
}
struct Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Invoked to modify a Sound Effect triggered from a hit.\n\x09 *\n\x09 * @param Audio\x09\x09\x09Sound to modify.\n\x09 * @param HitResult\x09\x09Information about the hit that generated this flow.\n\x09 * @param SourceTags\x09Gameplay Tags representing the impact source.\n\x09 * @param TargetTags\x09Gameplay Tags representing the impact target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatTargetCosmeticsModifierInterface.h" },
		{ "ToolTip", "Invoked to modify a Sound Effect triggered from a hit.\n\n@param Audio                 Sound to modify.\n@param HitResult             Information about the hit that generated this flow.\n@param SourceTags    Gameplay Tags representing the impact source.\n@param TargetTags    Gameplay Tags representing the impact target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_Audio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface, nullptr, "ModifyAudioEffect", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::PropPointers), sizeof(CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetCosmeticsModifierInterface_eventModifyAudioEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetCosmeticsModifierInterface::execModifyAudioEffect)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyAudioEffect_Implementation(Z_Param_Audio,Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatTargetCosmeticsModifierInterface Function ModifyAudioEffect

// Begin Interface UCombatTargetCosmeticsModifierInterface Function ModifyParticleEffect
struct CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms
{
	UNiagaraComponent* Particles;
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
};
void ICombatTargetCosmeticsModifierInterface::ModifyParticleEffect(UNiagaraComponent* Particles, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyParticleEffect instead.");
}
static FName NAME_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect = FName(TEXT("ModifyParticleEffect"));
void ICombatTargetCosmeticsModifierInterface::Execute_ModifyParticleEffect(UObject* O, UNiagaraComponent* Particles, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetCosmeticsModifierInterface::StaticClass()));
	CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect);
	if (Func)
	{
		Parms.Particles=Particles;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetCosmeticsModifierInterface*)(O->GetNativeInterfaceAddress(UCombatTargetCosmeticsModifierInterface::StaticClass())))
	{
		I->ModifyParticleEffect_Implementation(Particles,HitResult,SourceTags,TargetTags);
	}
}
struct Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Interface" },
		{ "Comment", "/**\n\x09 * Invoked to modify a Sound Effect triggered from a hit.\n\x09 *\n\x09 * @param Particles\x09\x09Particles to modify.\n\x09 * @param HitResult\x09\x09Information about the hit that generated this flow.\n\x09 * @param SourceTags\x09Gameplay Tags representing the impact source.\n\x09 * @param TargetTags\x09Gameplay Tags representing the impact target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatTargetCosmeticsModifierInterface.h" },
		{ "ToolTip", "Invoked to modify a Sound Effect triggered from a hit.\n\n@param Particles             Particles to modify.\n@param HitResult             Information about the hit that generated this flow.\n@param SourceTags    Gameplay Tags representing the impact source.\n@param TargetTags    Gameplay Tags representing the impact target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms, Particles), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particles_MetaData), NewProp_Particles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_Particles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface, nullptr, "ModifyParticleEffect", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::PropPointers), sizeof(CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetCosmeticsModifierInterface_eventModifyParticleEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetCosmeticsModifierInterface::execModifyParticleEffect)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_Particles);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyParticleEffect_Implementation(Z_Param_Particles,Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Interface UCombatTargetCosmeticsModifierInterface Function ModifyParticleEffect

// Begin Interface UCombatTargetCosmeticsModifierInterface
void UCombatTargetCosmeticsModifierInterface::StaticRegisterNativesUCombatTargetCosmeticsModifierInterface()
{
	UClass* Class = UCombatTargetCosmeticsModifierInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModifyAudioEffect", &ICombatTargetCosmeticsModifierInterface::execModifyAudioEffect },
		{ "ModifyParticleEffect", &ICombatTargetCosmeticsModifierInterface::execModifyParticleEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatTargetCosmeticsModifierInterface);
UClass* Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_NoRegister()
{
	return UCombatTargetCosmeticsModifierInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatTargetCosmeticsModifierInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyAudioEffect, "ModifyAudioEffect" }, // 3034688417
		{ &Z_Construct_UFunction_UCombatTargetCosmeticsModifierInterface_ModifyParticleEffect, "ModifyParticleEffect" }, // 1776100885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatTargetCosmeticsModifierInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics::ClassParams = {
	&UCombatTargetCosmeticsModifierInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface()
{
	if (!Z_Registration_Info_UClass_UCombatTargetCosmeticsModifierInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatTargetCosmeticsModifierInterface.OuterSingleton, Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatTargetCosmeticsModifierInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatTargetCosmeticsModifierInterface>()
{
	return UCombatTargetCosmeticsModifierInterface::StaticClass();
}
UCombatTargetCosmeticsModifierInterface::UCombatTargetCosmeticsModifierInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatTargetCosmeticsModifierInterface);
UCombatTargetCosmeticsModifierInterface::~UCombatTargetCosmeticsModifierInterface() {}
// End Interface UCombatTargetCosmeticsModifierInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface, UCombatTargetCosmeticsModifierInterface::StaticClass, TEXT("UCombatTargetCosmeticsModifierInterface"), &Z_Registration_Info_UClass_UCombatTargetCosmeticsModifierInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatTargetCosmeticsModifierInterface), 1205471254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_1781620377(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

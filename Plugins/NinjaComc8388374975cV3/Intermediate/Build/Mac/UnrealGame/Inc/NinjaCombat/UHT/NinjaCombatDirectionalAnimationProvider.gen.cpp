// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h"
#include "NinjaCombat/Public/Types/FCombatAnimationDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatDirectionalAnimationProvider() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatAnimationDirection();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatDirectionalAnimationProvider Function CalculateAnimationAngle
struct NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms
{
	UNinjaCombatGameplayAbility* CombatAbility;
	float OutAngle;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle = FName(TEXT("CalculateAnimationAngle"));
bool UNinjaCombatDirectionalAnimationProvider::CalculateAnimationAngle(UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms Parms;
		Parms.CombatAbility=CombatAbility;
		Parms.OutAngle=OutAngle;
		const_cast<UNinjaCombatDirectionalAnimationProvider*>(this)->ProcessEvent(Func,&Parms);
		OutAngle=Parms.OutAngle;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatDirectionalAnimationProvider*>(this)->CalculateAnimationAngle_Implementation(CombatAbility, OutAngle);
	}
}
struct Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Calculates the Animation Angle, based on any logic applicable for the game.\n\x09 *\n\x09 * @param CombatAbility\x09\x09Gameplay ability providing any contextual information.\n\x09 * @param OutAngle\x09\x09\x09""Angle used to pick the proper animation, in the [-180, 180] range.\n\x09 * @return\x09\x09\x09\x09\x09True if an angle was calculated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h" },
		{ "ToolTip", "Calculates the Animation Angle, based on any logic applicable for the game.\n\n@param CombatAbility         Gameplay ability providing any contextual information.\n@param OutAngle                      Angle used to pick the proper animation, in the [-180, 180] range.\n@return                                      True if an angle was calculated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms, OutAngle), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms), &Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_OutAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider, nullptr, "CalculateAnimationAngle", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::PropPointers), sizeof(NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatDirectionalAnimationProvider_eventCalculateAnimationAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDirectionalAnimationProvider::execCalculateAnimationAngle)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalculateAnimationAngle_Implementation(Z_Param_CombatAbility,Z_Param_Out_OutAngle);
	P_NATIVE_END;
}
// End Class UNinjaCombatDirectionalAnimationProvider Function CalculateAnimationAngle

// Begin Class UNinjaCombatDirectionalAnimationProvider
void UNinjaCombatDirectionalAnimationProvider::StaticRegisterNativesUNinjaCombatDirectionalAnimationProvider()
{
	UClass* Class = UNinjaCombatDirectionalAnimationProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAnimationAngle", &UNinjaCombatDirectionalAnimationProvider::execCalculateAnimationAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatDirectionalAnimationProvider);
UClass* Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_NoRegister()
{
	return UNinjaCombatDirectionalAnimationProvider::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any animation providers that must consider a direction.\n */" },
		{ "IncludePath", "AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h" },
		{ "ToolTip", "Base class for any animation providers that must consider a direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDirections_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Maps the Animation Directions to the appropriate Animation sections.\n\x09 *\n\x09 * This setup expects that the default Animation Montage has multiple sections,\n\x09 * each representing a proper direction of the animation that will play.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h" },
		{ "TitleProperty", "{SectionName} {Range}" },
		{ "ToolTip", "Maps the Animation Directions to the appropriate Animation sections.\n\nThis setup expects that the default Animation Montage has multiple sections,\neach representing a proper direction of the animation that will play." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationDirections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationDirections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatDirectionalAnimationProvider_CalculateAnimationAngle, "CalculateAnimationAngle" }, // 2139168966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatDirectionalAnimationProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::NewProp_AnimationDirections_Inner = { "AnimationDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCombatAnimationDirection, METADATA_PARAMS(0, nullptr) }; // 2014871048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::NewProp_AnimationDirections = { "AnimationDirections", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatDirectionalAnimationProvider, AnimationDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationDirections_MetaData), NewProp_AnimationDirections_MetaData) }; // 2014871048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::NewProp_AnimationDirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::NewProp_AnimationDirections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimationProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::ClassParams = {
	&UNinjaCombatDirectionalAnimationProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::PropPointers),
	0,
	0x003110A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatDirectionalAnimationProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatDirectionalAnimationProvider.OuterSingleton, Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatDirectionalAnimationProvider.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatDirectionalAnimationProvider>()
{
	return UNinjaCombatDirectionalAnimationProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatDirectionalAnimationProvider);
UNinjaCombatDirectionalAnimationProvider::~UNinjaCombatDirectionalAnimationProvider() {}
// End Class UNinjaCombatDirectionalAnimationProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatDirectionalAnimationProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider, UNinjaCombatDirectionalAnimationProvider::StaticClass, TEXT("UNinjaCombatDirectionalAnimationProvider"), &Z_Registration_Info_UClass_UNinjaCombatDirectionalAnimationProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatDirectionalAnimationProvider), 616347007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatDirectionalAnimationProvider_h_2149078802(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatDirectionalAnimationProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatDirectionalAnimationProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

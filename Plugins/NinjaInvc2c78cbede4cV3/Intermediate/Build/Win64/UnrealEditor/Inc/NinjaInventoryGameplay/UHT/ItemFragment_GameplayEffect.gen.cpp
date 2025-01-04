// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_GameplayEffect.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_GameplayEffect() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_GameplayEffect();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_GameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UItemFragment_GameplayEffect Function GetMagnitudeValue
struct Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics
{
	struct ItemFragment_GameplayEffect_eventGetMagnitudeValue_Parms
	{
		FGameplayTag MagnitudeTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the Magnitude assigned to a tag. Zero if the provided tag is not registered.\n\x09 * \n\x09 * The fragment has two ways to overwrite the default value if necessary. First, it can do so\n\x09 * via the \"Try Override Default Magnitude Value\" function, which can provide either a new value\n\x09 * or the one already defined in the fragment.\n\x09 *\n\x09 * Second, if the item implements the \"Item Magnitude Value Interface\", it will be invoked and\n\x09 * the value will be the final level of substitution for the magnitude. Therefore, the value is\n\x09 * evaluated as: default < internal override < interface override.\n\x09 * \n\x09 * @param MagnitudeTag\x09\x09Gameplay Tag representing the desired data value.\n\x09 * @return\x09\x09\x09\x09\x09Magnitude value. Always zero if not registered in the fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_GameplayEffect.h" },
		{ "ToolTip", "Provides the Magnitude assigned to a tag. Zero if the provided tag is not registered.\n\nThe fragment has two ways to overwrite the default value if necessary. First, it can do so\nvia the \"Try Override Default Magnitude Value\" function, which can provide either a new value\nor the one already defined in the fragment.\n\nSecond, if the item implements the \"Item Magnitude Value Interface\", it will be invoked and\nthe value will be the final level of substitution for the magnitude. Therefore, the value is\nevaluated as: default < internal override < interface override.\n\n@param MagnitudeTag          Gameplay Tag representing the desired data value.\n@return                                      Magnitude value. Always zero if not registered in the fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagnitudeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::NewProp_MagnitudeTag = { "MagnitudeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_GameplayEffect_eventGetMagnitudeValue_Parms, MagnitudeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeTag_MetaData), NewProp_MagnitudeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_GameplayEffect_eventGetMagnitudeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::NewProp_MagnitudeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_GameplayEffect, nullptr, "GetMagnitudeValue", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::ItemFragment_GameplayEffect_eventGetMagnitudeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::ItemFragment_GameplayEffect_eventGetMagnitudeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_GameplayEffect::execGetMagnitudeValue)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MagnitudeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMagnitudeValue(Z_Param_Out_MagnitudeTag);
	P_NATIVE_END;
}
// End Class UItemFragment_GameplayEffect Function GetMagnitudeValue

// Begin Class UItemFragment_GameplayEffect Function TryOverrideDefaultMagnitudeValue
struct ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms
{
	const UNinjaInventoryItem* Item;
	FGameplayTag MagnitudeTag;
	float DefaultValue;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue = FName(TEXT("TryOverrideDefaultMagnitudeValue"));
float UItemFragment_GameplayEffect::TryOverrideDefaultMagnitudeValue(const UNinjaInventoryItem* Item, FGameplayTag const& MagnitudeTag, float DefaultValue) const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms Parms;
		Parms.Item=Item;
		Parms.MagnitudeTag=MagnitudeTag;
		Parms.DefaultValue=DefaultValue;
		const_cast<UItemFragment_GameplayEffect*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemFragment_GameplayEffect*>(this)->TryOverrideDefaultMagnitudeValue_Implementation(Item, MagnitudeTag, DefaultValue);
	}
}
struct Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Another option for blueprints or subclasses to provide a customized default magnitude.\n\x09 *\n\x09 * This obviously takes priority over the default value, BUT it will still be overriden\n\x09 * if the owning item implements the appropriate interface, with a proper value.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09""Access to the item setting a value to a Gameplay Effect.\n\x09 * @param MagnitudeTag\x09\x09Gameplay Tag representing the desired data value.\n\x09 * @param DefaultValue\x09\x09""Default value, as defined in the fragment.\n\x09 * @return\x09\x09\x09\x09\x09The overriden magnitude.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_GameplayEffect.h" },
		{ "ToolTip", "Another option for blueprints or subclasses to provide a customized default magnitude.\n\nThis obviously takes priority over the default value, BUT it will still be overriden\nif the owning item implements the appropriate interface, with a proper value.\n\n@param Item                          Access to the item setting a value to a Gameplay Effect.\n@param MagnitudeTag          Gameplay Tag representing the desired data value.\n@param DefaultValue          Default value, as defined in the fragment.\n@return                                      The overriden magnitude." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagnitudeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_MagnitudeTag = { "MagnitudeTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms, MagnitudeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeTag_MetaData), NewProp_MagnitudeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_MagnitudeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_GameplayEffect, nullptr, "TryOverrideDefaultMagnitudeValue", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::PropPointers), sizeof(ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFragment_GameplayEffect_eventTryOverrideDefaultMagnitudeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_GameplayEffect::execTryOverrideDefaultMagnitudeValue)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MagnitudeTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TryOverrideDefaultMagnitudeValue_Implementation(Z_Param_Item,Z_Param_Out_MagnitudeTag,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UItemFragment_GameplayEffect Function TryOverrideDefaultMagnitudeValue

// Begin Class UItemFragment_GameplayEffect
void UItemFragment_GameplayEffect::StaticRegisterNativesUItemFragment_GameplayEffect()
{
	UClass* Class = UItemFragment_GameplayEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMagnitudeValue", &UItemFragment_GameplayEffect::execGetMagnitudeValue },
		{ "TryOverrideDefaultMagnitudeValue", &UItemFragment_GameplayEffect::execTryOverrideDefaultMagnitudeValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_GameplayEffect);
UClass* Z_Construct_UClass_UItemFragment_GameplayEffect_NoRegister()
{
	return UItemFragment_GameplayEffect::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies a Gameplay Effect when the item is added, removing it later, along with the item.  \n */" },
		{ "DisplayName", "Gameplay Effect" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_GameplayEffect.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_GameplayEffect.h" },
		{ "ToolTip", "Applies a Gameplay Effect when the item is added, removing it later, along with the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseItemLevelAsEffectLevel_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** If set to true, uses the item level as the effect level, instead of the actual property. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_GameplayEffect.h" },
		{ "ToolTip", "If set to true, uses the item level as the effect level, instead of the actual property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectMagnitudes_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Magnitudes set to the Gameplay Effect, via their Data Tags (set by caller). */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_GameplayEffect.h" },
		{ "ToolTip", "Magnitudes set to the Gameplay Effect, via their Data Tags (set by caller)." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseItemLevelAsEffectLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectMagnitudes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectMagnitudes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EffectMagnitudes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_GameplayEffect_GetMagnitudeValue, "GetMagnitudeValue" }, // 2966621944
		{ &Z_Construct_UFunction_UItemFragment_GameplayEffect_TryOverrideDefaultMagnitudeValue, "TryOverrideDefaultMagnitudeValue" }, // 4050235923
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_GameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj)
{
	((UItemFragment_GameplayEffect*)Obj)->bUseItemLevelAsEffectLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel = { "bUseItemLevelAsEffectLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_GameplayEffect), &Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseItemLevelAsEffectLevel_MetaData), NewProp_bUseItemLevelAsEffectLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_EffectMagnitudes_ValueProp = { "EffectMagnitudes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_EffectMagnitudes_Key_KeyProp = { "EffectMagnitudes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_EffectMagnitudes = { "EffectMagnitudes", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_GameplayEffect, EffectMagnitudes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectMagnitudes_MetaData), NewProp_EffectMagnitudes_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_bUseItemLevelAsEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_EffectMagnitudes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_EffectMagnitudes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::NewProp_EffectMagnitudes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::ClassParams = {
	&UItemFragment_GameplayEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_GameplayEffect()
{
	if (!Z_Registration_Info_UClass_UItemFragment_GameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_GameplayEffect.OuterSingleton, Z_Construct_UClass_UItemFragment_GameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_GameplayEffect.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_GameplayEffect>()
{
	return UItemFragment_GameplayEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_GameplayEffect);
UItemFragment_GameplayEffect::~UItemFragment_GameplayEffect() {}
// End Class UItemFragment_GameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_GameplayEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_GameplayEffect, UItemFragment_GameplayEffect::StaticClass, TEXT("UItemFragment_GameplayEffect"), &Z_Registration_Info_UClass_UItemFragment_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_GameplayEffect), 1141421421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_GameplayEffect_h_2458509546(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_GameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_GameplayEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

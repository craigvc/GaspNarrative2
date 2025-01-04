// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/ViewModel_PoiseAndStagger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_PoiseAndStagger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_PoiseAndStagger();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_PoiseAndStagger_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UViewModel_PoiseAndStagger Function HandleStaggeredStateChanged
struct Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics
{
	struct ViewModel_PoiseAndStagger_eventHandleStaggeredStateChanged_Parms
	{
		UActorComponent* DamageManager;
		bool bNewIsStaggered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageManager;
	static void NewProp_bNewIsStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsStaggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::NewProp_DamageManager = { "DamageManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_PoiseAndStagger_eventHandleStaggeredStateChanged_Parms, DamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageManager_MetaData), NewProp_DamageManager_MetaData) };
void Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::NewProp_bNewIsStaggered_SetBit(void* Obj)
{
	((ViewModel_PoiseAndStagger_eventHandleStaggeredStateChanged_Parms*)Obj)->bNewIsStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::NewProp_bNewIsStaggered = { "bNewIsStaggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewModel_PoiseAndStagger_eventHandleStaggeredStateChanged_Parms), &Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::NewProp_bNewIsStaggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::NewProp_DamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::NewProp_bNewIsStaggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_PoiseAndStagger, nullptr, "HandleStaggeredStateChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::ViewModel_PoiseAndStagger_eventHandleStaggeredStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::ViewModel_PoiseAndStagger_eventHandleStaggeredStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_PoiseAndStagger::execHandleStaggeredStateChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_DamageManager);
	P_GET_UBOOL(Z_Param_bNewIsStaggered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStaggeredStateChanged(Z_Param_DamageManager,Z_Param_bNewIsStaggered);
	P_NATIVE_END;
}
// End Class UViewModel_PoiseAndStagger Function HandleStaggeredStateChanged

// Begin Class UViewModel_PoiseAndStagger
void UViewModel_PoiseAndStagger::GetbIsStaggered_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsStaggered();
}
void UViewModel_PoiseAndStagger::SetbIsStaggered_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsStaggered(Value);
}
void UViewModel_PoiseAndStagger::GetPoise_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPoise();
}
void UViewModel_PoiseAndStagger::SetPoise_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPoise(Value);
}
void UViewModel_PoiseAndStagger::GetPoiseDamage_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPoiseDamage();
}
void UViewModel_PoiseAndStagger::SetPoiseDamage_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPoiseDamage(Value);
}
void UViewModel_PoiseAndStagger::GetPoiseRecovery_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPoiseRecovery();
}
void UViewModel_PoiseAndStagger::SetPoiseRecovery_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPoiseRecovery(Value);
}
void UViewModel_PoiseAndStagger::GetPoiseRecoveryInterval_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPoiseRecoveryInterval();
}
void UViewModel_PoiseAndStagger::SetPoiseRecoveryInterval_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPoiseRecoveryInterval(Value);
}
void UViewModel_PoiseAndStagger::GetPoisePercent_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPoisePercent();
}
void UViewModel_PoiseAndStagger::SetPoisePercent_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPoisePercent(Value);
}
void UViewModel_PoiseAndStagger::GetStaggerDuration_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_PoiseAndStagger* Obj = (const UViewModel_PoiseAndStagger*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetStaggerDuration();
}
void UViewModel_PoiseAndStagger::SetStaggerDuration_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_PoiseAndStagger* Obj = (UViewModel_PoiseAndStagger*)Object;
	float& Value = *(float*)InValue;
	Obj->SetStaggerDuration(Value);
}
void UViewModel_PoiseAndStagger::StaticRegisterNativesUViewModel_PoiseAndStagger()
{
	UClass* Class = UViewModel_PoiseAndStagger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleStaggeredStateChanged", &UViewModel_PoiseAndStagger::execHandleStaggeredStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_PoiseAndStagger);
UClass* Z_Construct_UClass_UViewModel_PoiseAndStagger_NoRegister()
{
	return UViewModel_PoiseAndStagger::StaticClass();
}
struct Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Exposes information about a character's Poise and Stagger.\n */" },
		{ "DisplayName", "Poise and Stagger" },
		{ "IncludePath", "UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "Exposes information about a character's Poise and Stagger." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaggered_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Indicates if the character is currently staggered. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "Indicates if the character is currently staggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poise_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Poise available in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "Poise available in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseDamage_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Current Poise Damage applied. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "Current Poise Damage applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseRecovery_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** How much poise is recovered. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "How much poise is recovered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseRecoveryInterval_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** How fast poise is recovered. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "How fast poise is recovered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisePercent_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Percent value for the current poise damage. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "Percent value for the current poise damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaggerDuration_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Duration of the stagger effect. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_PoiseAndStagger.h" },
		{ "ToolTip", "Duration of the stagger effect." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaggered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Poise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoiseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoiseRecovery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoiseRecoveryInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoisePercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaggerDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_PoiseAndStagger_HandleStaggeredStateChanged, "HandleStaggeredStateChanged" }, // 1680212659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_PoiseAndStagger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_bIsStaggered_SetBit(void* Obj)
{
	((UViewModel_PoiseAndStagger*)Obj)->bIsStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_bIsStaggered = { "bIsStaggered", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetbIsStaggered_WrapperImpl, &UViewModel_PoiseAndStagger::GetbIsStaggered_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_PoiseAndStagger), &Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_bIsStaggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStaggered_MetaData), NewProp_bIsStaggered_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_Poise = { "Poise", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetPoise_WrapperImpl, &UViewModel_PoiseAndStagger::GetPoise_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_PoiseAndStagger, Poise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poise_MetaData), NewProp_Poise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoiseDamage = { "PoiseDamage", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetPoiseDamage_WrapperImpl, &UViewModel_PoiseAndStagger::GetPoiseDamage_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_PoiseAndStagger, PoiseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseDamage_MetaData), NewProp_PoiseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoiseRecovery = { "PoiseRecovery", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetPoiseRecovery_WrapperImpl, &UViewModel_PoiseAndStagger::GetPoiseRecovery_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_PoiseAndStagger, PoiseRecovery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseRecovery_MetaData), NewProp_PoiseRecovery_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoiseRecoveryInterval = { "PoiseRecoveryInterval", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetPoiseRecoveryInterval_WrapperImpl, &UViewModel_PoiseAndStagger::GetPoiseRecoveryInterval_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_PoiseAndStagger, PoiseRecoveryInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseRecoveryInterval_MetaData), NewProp_PoiseRecoveryInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoisePercent = { "PoisePercent", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetPoisePercent_WrapperImpl, &UViewModel_PoiseAndStagger::GetPoisePercent_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_PoiseAndStagger, PoisePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisePercent_MetaData), NewProp_PoisePercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_StaggerDuration = { "StaggerDuration", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_PoiseAndStagger::SetStaggerDuration_WrapperImpl, &UViewModel_PoiseAndStagger::GetStaggerDuration_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_PoiseAndStagger, StaggerDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaggerDuration_MetaData), NewProp_StaggerDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_bIsStaggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_Poise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoiseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoiseRecovery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoiseRecoveryInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_PoisePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::NewProp_StaggerDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::ClassParams = {
	&UViewModel_PoiseAndStagger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_PoiseAndStagger()
{
	if (!Z_Registration_Info_UClass_UViewModel_PoiseAndStagger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_PoiseAndStagger.OuterSingleton, Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_PoiseAndStagger.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UViewModel_PoiseAndStagger>()
{
	return UViewModel_PoiseAndStagger::StaticClass();
}
UViewModel_PoiseAndStagger::UViewModel_PoiseAndStagger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_PoiseAndStagger);
UViewModel_PoiseAndStagger::~UViewModel_PoiseAndStagger() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, bIsStaggered)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, Poise)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, PoiseDamage)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, PoiseRecovery)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, PoiseRecoveryInterval)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, PoisePercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_PoiseAndStagger, StaggerDuration)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_PoiseAndStagger)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, bIsStaggered)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, Poise)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, PoiseDamage)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, PoiseRecovery)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, PoiseRecoveryInterval)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, PoisePercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_PoiseAndStagger, StaggerDuration)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_PoiseAndStagger);
// End Class UViewModel_PoiseAndStagger

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_PoiseAndStagger, UViewModel_PoiseAndStagger::StaticClass, TEXT("UViewModel_PoiseAndStagger"), &Z_Registration_Info_UClass_UViewModel_PoiseAndStagger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_PoiseAndStagger), 1398276784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_450469153(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

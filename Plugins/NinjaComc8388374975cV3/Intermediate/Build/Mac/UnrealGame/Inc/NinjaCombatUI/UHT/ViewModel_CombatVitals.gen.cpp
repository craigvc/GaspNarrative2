// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/ViewModel_CombatVitals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_CombatVitals() {}

// Begin Cross Module References
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_CombatVitals();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_CombatVitals_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UViewModel_CombatVitals
void UViewModel_CombatVitals::GetbIsDead_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsDead();
}
void UViewModel_CombatVitals::SetbIsDead_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsDead(Value);
}
void UViewModel_CombatVitals::GetHealth_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetHealth();
}
void UViewModel_CombatVitals::SetHealth_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetHealth(Value);
}
void UViewModel_CombatVitals::GetHealthPercent_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetHealthPercent();
}
void UViewModel_CombatVitals::SetHealthPercent_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetHealthPercent(Value);
}
void UViewModel_CombatVitals::GetMaxHealthTotal_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxHealthTotal();
}
void UViewModel_CombatVitals::SetMaxHealthTotal_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxHealthTotal(Value);
}
void UViewModel_CombatVitals::GetStamina_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetStamina();
}
void UViewModel_CombatVitals::SetStamina_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetStamina(Value);
}
void UViewModel_CombatVitals::GetStaminaPercent_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetStaminaPercent();
}
void UViewModel_CombatVitals::SetStaminaPercent_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetStaminaPercent(Value);
}
void UViewModel_CombatVitals::GetMaxStaminaTotal_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxStaminaTotal();
}
void UViewModel_CombatVitals::SetMaxStaminaTotal_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxStaminaTotal(Value);
}
void UViewModel_CombatVitals::GetMagic_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMagic();
}
void UViewModel_CombatVitals::SetMagic_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMagic(Value);
}
void UViewModel_CombatVitals::GetMagicPercent_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMagicPercent();
}
void UViewModel_CombatVitals::SetMagicPercent_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMagicPercent(Value);
}
void UViewModel_CombatVitals::GetMaxMagicTotal_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_CombatVitals* Obj = (const UViewModel_CombatVitals*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxMagicTotal();
}
void UViewModel_CombatVitals::SetMaxMagicTotal_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_CombatVitals* Obj = (UViewModel_CombatVitals*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxMagicTotal(Value);
}
void UViewModel_CombatVitals::StaticRegisterNativesUViewModel_CombatVitals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_CombatVitals);
UClass* Z_Construct_UClass_UViewModel_CombatVitals_NoRegister()
{
	return UViewModel_CombatVitals::StaticClass();
}
struct Z_Construct_UClass_UViewModel_CombatVitals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Exposes the vital combat attributes commonly used in the player's HUD: Health, Stamina and Magic.\n */" },
		{ "DisplayName", "Combat Vitals" },
		{ "IncludePath", "UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Exposes the vital combat attributes commonly used in the player's HUD: Health, Stamina and Magic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Indicates if the character is currently dead. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Indicates if the character is currently dead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Current health available in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Current health available in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Percent value for the current health. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Percent value for the current health." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthTotal_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Maximum health available in the Attribute Set, including all modifiers. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Maximum health available in the Attribute Set, including all modifiers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Current stamina available in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Current stamina available in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaPercent_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Percent value for the current stamina. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Percent value for the current stamina." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaTotal_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Maximum stamina available in the Attribute Set, including all modifiers. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Maximum stamina available in the Attribute Set, including all modifiers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Current magic available in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Current magic available in the Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicPercent_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Percent value for the current magic. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Percent value for the current magic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagicTotal_MetaData[] = {
		{ "Category", "Combat Vitals" },
		{ "Comment", "/** Maximum magic available in the Attribute Set, including all modifiers. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_CombatVitals.h" },
		{ "ToolTip", "Maximum magic available in the Attribute Set, including all modifiers." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthTotal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStaminaTotal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMagicTotal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_CombatVitals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UViewModel_CombatVitals*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetbIsDead_WrapperImpl, &UViewModel_CombatVitals::GetbIsDead_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_CombatVitals), &Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetHealth_WrapperImpl, &UViewModel_CombatVitals::GetHealth_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetHealthPercent_WrapperImpl, &UViewModel_CombatVitals::GetHealthPercent_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPercent_MetaData), NewProp_HealthPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MaxHealthTotal = { "MaxHealthTotal", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetMaxHealthTotal_WrapperImpl, &UViewModel_CombatVitals::GetMaxHealthTotal_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, MaxHealthTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthTotal_MetaData), NewProp_MaxHealthTotal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetStamina_WrapperImpl, &UViewModel_CombatVitals::GetStamina_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_StaminaPercent = { "StaminaPercent", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetStaminaPercent_WrapperImpl, &UViewModel_CombatVitals::GetStaminaPercent_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, StaminaPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaPercent_MetaData), NewProp_StaminaPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MaxStaminaTotal = { "MaxStaminaTotal", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetMaxStaminaTotal_WrapperImpl, &UViewModel_CombatVitals::GetMaxStaminaTotal_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, MaxStaminaTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStaminaTotal_MetaData), NewProp_MaxStaminaTotal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetMagic_WrapperImpl, &UViewModel_CombatVitals::GetMagic_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, Magic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magic_MetaData), NewProp_Magic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MagicPercent = { "MagicPercent", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetMagicPercent_WrapperImpl, &UViewModel_CombatVitals::GetMagicPercent_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, MagicPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicPercent_MetaData), NewProp_MagicPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MaxMagicTotal = { "MaxMagicTotal", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_CombatVitals::SetMaxMagicTotal_WrapperImpl, &UViewModel_CombatVitals::GetMaxMagicTotal_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_CombatVitals, MaxMagicTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagicTotal_MetaData), NewProp_MaxMagicTotal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_CombatVitals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_HealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MaxHealthTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_StaminaPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MaxStaminaTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_Magic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MagicPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_CombatVitals_Statics::NewProp_MaxMagicTotal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_CombatVitals_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_CombatVitals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_CombatVitals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_CombatVitals_Statics::ClassParams = {
	&UViewModel_CombatVitals::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewModel_CombatVitals_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_CombatVitals_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_CombatVitals_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_CombatVitals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_CombatVitals()
{
	if (!Z_Registration_Info_UClass_UViewModel_CombatVitals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_CombatVitals.OuterSingleton, Z_Construct_UClass_UViewModel_CombatVitals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_CombatVitals.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UViewModel_CombatVitals>()
{
	return UViewModel_CombatVitals::StaticClass();
}
UViewModel_CombatVitals::UViewModel_CombatVitals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_CombatVitals);
UViewModel_CombatVitals::~UViewModel_CombatVitals() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, bIsDead)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, Health)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, HealthPercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, MaxHealthTotal)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, Stamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, StaminaPercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, MaxStaminaTotal)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, Magic)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, MagicPercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_CombatVitals, MaxMagicTotal)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_CombatVitals)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, bIsDead)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, Health)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, HealthPercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, MaxHealthTotal)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, Stamina)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, StaminaPercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, MaxStaminaTotal)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, Magic)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, MagicPercent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_CombatVitals, MaxMagicTotal)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_CombatVitals);
// End Class UViewModel_CombatVitals

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_CombatVitals, UViewModel_CombatVitals::StaticClass, TEXT("UViewModel_CombatVitals"), &Z_Registration_Info_UClass_UViewModel_CombatVitals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_CombatVitals), 1459069404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_1979574080(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

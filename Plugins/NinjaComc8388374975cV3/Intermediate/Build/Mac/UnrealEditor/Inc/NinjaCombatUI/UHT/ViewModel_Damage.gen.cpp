// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/ViewModel_Damage.h"
#include "NinjaCombat/Public/Types/FDamageEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_Damage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_Damage();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_Damage_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UViewModel_Damage Function HandleDamageReceived
struct Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics
{
	struct ViewModel_Damage_eventHandleDamageReceived_Parms
	{
		AActor* Causer;
		AActor* Target;
		FDamageEntry DamageEntry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Handles incoming damage. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
		{ "ToolTip", "Handles incoming damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_Damage_eventHandleDamageReceived_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_Damage_eventHandleDamageReceived_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::NewProp_DamageEntry = { "DamageEntry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_Damage_eventHandleDamageReceived_Parms, DamageEntry), Z_Construct_UScriptStruct_FDamageEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEntry_MetaData), NewProp_DamageEntry_MetaData) }; // 3044778572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::NewProp_DamageEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_Damage, nullptr, "HandleDamageReceived", nullptr, nullptr, Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::ViewModel_Damage_eventHandleDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::ViewModel_Damage_eventHandleDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_Damage::execHandleDamageReceived)
{
	P_GET_OBJECT(AActor,Z_Param_Causer);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FDamageEntry,Z_Param_Out_DamageEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDamageReceived(Z_Param_Causer,Z_Param_Target,Z_Param_Out_DamageEntry);
	P_NATIVE_END;
}
// End Class UViewModel_Damage Function HandleDamageReceived

// Begin Class UViewModel_Damage
void UViewModel_Damage::GetbReceivedBlockingHit_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_Damage* Obj = (const UViewModel_Damage*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasReceivedBlockingHit();
}
void UViewModel_Damage::SetbReceivedBlockingHit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_Damage* Obj = (UViewModel_Damage*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetReceivedBlockingHit(Value);
}
void UViewModel_Damage::GetbReceivedBreakerHit_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_Damage* Obj = (const UViewModel_Damage*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasReceivedBreakerHit();
}
void UViewModel_Damage::SetbReceivedBreakerHit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_Damage* Obj = (UViewModel_Damage*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetReceivedBreakerHit(Value);
}
void UViewModel_Damage::GetbReceivedCriticalHit_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_Damage* Obj = (const UViewModel_Damage*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasReceivedCriticalHit();
}
void UViewModel_Damage::SetbReceivedCriticalHit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_Damage* Obj = (UViewModel_Damage*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetReceivedCriticalHit(Value);
}
void UViewModel_Damage::GetbReceivedFatalHit_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_Damage* Obj = (const UViewModel_Damage*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasReceivedFatalHit();
}
void UViewModel_Damage::SetbReceivedFatalHit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_Damage* Obj = (UViewModel_Damage*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetReceivedFatalHit(Value);
}
void UViewModel_Damage::GetbReceivedStaggeringHit_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_Damage* Obj = (const UViewModel_Damage*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasReceivedStaggeringHit();
}
void UViewModel_Damage::SetbReceivedStaggeringHit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_Damage* Obj = (UViewModel_Damage*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetReceivedStaggeringHit(Value);
}
void UViewModel_Damage::GetLastDamageReceived_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_Damage* Obj = (const UViewModel_Damage*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetLastDamageReceived();
}
void UViewModel_Damage::SetLastDamageReceived_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_Damage* Obj = (UViewModel_Damage*)Object;
	float& Value = *(float*)InValue;
	Obj->SetLastDamageReceived(Value);
}
void UViewModel_Damage::StaticRegisterNativesUViewModel_Damage()
{
	UClass* Class = UViewModel_Damage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleDamageReceived", &UViewModel_Damage::execHandleDamageReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_Damage);
UClass* Z_Construct_UClass_UViewModel_Damage_NoRegister()
{
	return UViewModel_Damage::StaticClass();
}
struct Z_Construct_UClass_UViewModel_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Exposes information about damage received.\n */" },
		{ "DisplayName", "Damage" },
		{ "IncludePath", "UI/ViewModel/ViewModel_Damage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
		{ "ToolTip", "Exposes information about damage received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedBlockingHit_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedBreakerHit_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedCriticalHit_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedFatalHit_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedStaggeringHit_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDamageReceived_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Amount of damage received from the last attack. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_Damage.h" },
		{ "ToolTip", "Amount of damage received from the last attack." },
	};
#endif // WITH_METADATA
	static void NewProp_bReceivedBlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedBlockingHit;
	static void NewProp_bReceivedBreakerHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedBreakerHit;
	static void NewProp_bReceivedCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedCriticalHit;
	static void NewProp_bReceivedFatalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedFatalHit;
	static void NewProp_bReceivedStaggeringHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedStaggeringHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDamageReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_Damage_HandleDamageReceived, "HandleDamageReceived" }, // 64183746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBlockingHit_SetBit(void* Obj)
{
	((UViewModel_Damage*)Obj)->bReceivedBlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBlockingHit = { "bReceivedBlockingHit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_Damage::SetbReceivedBlockingHit_WrapperImpl, &UViewModel_Damage::GetbReceivedBlockingHit_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_Damage), &Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBlockingHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivedBlockingHit_MetaData), NewProp_bReceivedBlockingHit_MetaData) };
void Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBreakerHit_SetBit(void* Obj)
{
	((UViewModel_Damage*)Obj)->bReceivedBreakerHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBreakerHit = { "bReceivedBreakerHit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_Damage::SetbReceivedBreakerHit_WrapperImpl, &UViewModel_Damage::GetbReceivedBreakerHit_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_Damage), &Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBreakerHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivedBreakerHit_MetaData), NewProp_bReceivedBreakerHit_MetaData) };
void Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedCriticalHit_SetBit(void* Obj)
{
	((UViewModel_Damage*)Obj)->bReceivedCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedCriticalHit = { "bReceivedCriticalHit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_Damage::SetbReceivedCriticalHit_WrapperImpl, &UViewModel_Damage::GetbReceivedCriticalHit_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_Damage), &Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivedCriticalHit_MetaData), NewProp_bReceivedCriticalHit_MetaData) };
void Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedFatalHit_SetBit(void* Obj)
{
	((UViewModel_Damage*)Obj)->bReceivedFatalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedFatalHit = { "bReceivedFatalHit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_Damage::SetbReceivedFatalHit_WrapperImpl, &UViewModel_Damage::GetbReceivedFatalHit_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_Damage), &Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedFatalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivedFatalHit_MetaData), NewProp_bReceivedFatalHit_MetaData) };
void Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedStaggeringHit_SetBit(void* Obj)
{
	((UViewModel_Damage*)Obj)->bReceivedStaggeringHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedStaggeringHit = { "bReceivedStaggeringHit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_Damage::SetbReceivedStaggeringHit_WrapperImpl, &UViewModel_Damage::GetbReceivedStaggeringHit_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_Damage), &Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedStaggeringHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivedStaggeringHit_MetaData), NewProp_bReceivedStaggeringHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_LastDamageReceived = { "LastDamageReceived", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_Damage::SetLastDamageReceived_WrapperImpl, &UViewModel_Damage::GetLastDamageReceived_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_Damage, LastDamageReceived), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDamageReceived_MetaData), NewProp_LastDamageReceived_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedBreakerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedCriticalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedFatalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_bReceivedStaggeringHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_Damage_Statics::NewProp_LastDamageReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_Damage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_Damage_Statics::ClassParams = {
	&UViewModel_Damage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_Damage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_Damage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_Damage()
{
	if (!Z_Registration_Info_UClass_UViewModel_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_Damage.OuterSingleton, Z_Construct_UClass_UViewModel_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_Damage.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UViewModel_Damage>()
{
	return UViewModel_Damage::StaticClass();
}
UViewModel_Damage::UViewModel_Damage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_Damage);
UViewModel_Damage::~UViewModel_Damage() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_Damage, bReceivedBlockingHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_Damage, bReceivedBreakerHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_Damage, bReceivedCriticalHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_Damage, bReceivedFatalHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_Damage, bReceivedStaggeringHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_Damage, LastDamageReceived)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_Damage)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_Damage, bReceivedBlockingHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_Damage, bReceivedBreakerHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_Damage, bReceivedCriticalHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_Damage, bReceivedFatalHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_Damage, bReceivedStaggeringHit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_Damage, LastDamageReceived)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_Damage);
// End Class UViewModel_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_Damage, UViewModel_Damage::StaticClass, TEXT("UViewModel_Damage"), &Z_Registration_Info_UClass_UViewModel_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_Damage), 573458706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_3376375621(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/ViewModel_TargetLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_TargetLock() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UCombatViewModelInterface_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_TargetLock();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_TargetLock_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UViewModel_TargetLock Function GetWidgetOwner
struct Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics
{
	struct ViewModel_TargetLock_eventGetWidgetOwner_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|View Model" },
		{ "Comment", "/**\n\x09 * Provides the Combat Actor current bound to this Viewmodel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_TargetLock.h" },
		{ "ToolTip", "Provides the Combat Actor current bound to this Viewmodel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_TargetLock_eventGetWidgetOwner_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_TargetLock, nullptr, "GetWidgetOwner", nullptr, nullptr, Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::ViewModel_TargetLock_eventGetWidgetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::ViewModel_TargetLock_eventGetWidgetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_TargetLock::execGetWidgetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetWidgetOwner();
	P_NATIVE_END;
}
// End Class UViewModel_TargetLock Function GetWidgetOwner

// Begin Class UViewModel_TargetLock Function HandleTargetChanged
struct Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics
{
	struct ViewModel_TargetLock_eventHandleTargetChanged_Parms
	{
		UActorComponent* TargetManager;
		const AActor* NewCombatTarget;
		const AActor* OldCombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_TargetLock.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCombatTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_TargetLock_eventHandleTargetChanged_Parms, TargetManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetManager_MetaData), NewProp_TargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::NewProp_NewCombatTarget = { "NewCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_TargetLock_eventHandleTargetChanged_Parms, NewCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCombatTarget_MetaData), NewProp_NewCombatTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::NewProp_OldCombatTarget = { "OldCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_TargetLock_eventHandleTargetChanged_Parms, OldCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCombatTarget_MetaData), NewProp_OldCombatTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::NewProp_TargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::NewProp_NewCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::NewProp_OldCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_TargetLock, nullptr, "HandleTargetChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::ViewModel_TargetLock_eventHandleTargetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::ViewModel_TargetLock_eventHandleTargetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_TargetLock::execHandleTargetChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_TargetManager);
	P_GET_OBJECT(AActor,Z_Param_NewCombatTarget);
	P_GET_OBJECT(AActor,Z_Param_OldCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetChanged(Z_Param_TargetManager,Z_Param_NewCombatTarget,Z_Param_OldCombatTarget);
	P_NATIVE_END;
}
// End Class UViewModel_TargetLock Function HandleTargetChanged

// Begin Class UViewModel_TargetLock
void UViewModel_TargetLock::GetbIsLockedByHUDOwner_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_TargetLock* Obj = (const UViewModel_TargetLock*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsLockedByHUDOwner();
}
void UViewModel_TargetLock::SetbIsLockedByHUDOwner_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_TargetLock* Obj = (UViewModel_TargetLock*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsLockedByHUDOwner(Value);
}
void UViewModel_TargetLock::StaticRegisterNativesUViewModel_TargetLock()
{
	UClass* Class = UViewModel_TargetLock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWidgetOwner", &UViewModel_TargetLock::execGetWidgetOwner },
		{ "HandleTargetChanged", &UViewModel_TargetLock::execHandleTargetChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_TargetLock);
UClass* Z_Construct_UClass_UViewModel_TargetLock_NoRegister()
{
	return UViewModel_TargetLock::StaticClass();
}
struct Z_Construct_UClass_UViewModel_TargetLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Identifies a target lock on the widget's combat owner, being the HUD owner.\n */" },
		{ "DisplayName", "Target Lock" },
		{ "IncludePath", "UI/ViewModel/ViewModel_TargetLock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_TargetLock.h" },
		{ "ToolTip", "Identifies a target lock on the widget's combat owner, being the HUD owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLockedByHUDOwner_MetaData[] = {
		{ "Category", "Target Lock" },
		{ "Comment", "/** Indicates if the combatant is target locked by the HUD/Widget owner. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_TargetLock.h" },
		{ "ToolTip", "Indicates if the combatant is target locked by the HUD/Widget owner." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLockedByHUDOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLockedByHUDOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_TargetLock_GetWidgetOwner, "GetWidgetOwner" }, // 1692123990
		{ &Z_Construct_UFunction_UViewModel_TargetLock_HandleTargetChanged, "HandleTargetChanged" }, // 3027209780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_TargetLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_TargetLock_Statics::NewProp_bIsLockedByHUDOwner_SetBit(void* Obj)
{
	((UViewModel_TargetLock*)Obj)->bIsLockedByHUDOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_TargetLock_Statics::NewProp_bIsLockedByHUDOwner = { "bIsLockedByHUDOwner", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_TargetLock::SetbIsLockedByHUDOwner_WrapperImpl, &UViewModel_TargetLock::GetbIsLockedByHUDOwner_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_TargetLock), &Z_Construct_UClass_UViewModel_TargetLock_Statics::NewProp_bIsLockedByHUDOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLockedByHUDOwner_MetaData), NewProp_bIsLockedByHUDOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_TargetLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_TargetLock_Statics::NewProp_bIsLockedByHUDOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_TargetLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_TargetLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_TargetLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UViewModel_TargetLock_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatViewModelInterface_NoRegister, (int32)VTABLE_OFFSET(UViewModel_TargetLock, ICombatViewModelInterface), false },  // 2870042973
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_TargetLock_Statics::ClassParams = {
	&UViewModel_TargetLock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_TargetLock_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_TargetLock_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_TargetLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_TargetLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_TargetLock()
{
	if (!Z_Registration_Info_UClass_UViewModel_TargetLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_TargetLock.OuterSingleton, Z_Construct_UClass_UViewModel_TargetLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_TargetLock.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UViewModel_TargetLock>()
{
	return UViewModel_TargetLock::StaticClass();
}
UViewModel_TargetLock::UViewModel_TargetLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_TargetLock);
UViewModel_TargetLock::~UViewModel_TargetLock() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_TargetLock, bIsLockedByHUDOwner)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_TargetLock)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_TargetLock, bIsLockedByHUDOwner)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_TargetLock);
// End Class UViewModel_TargetLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_TargetLock, UViewModel_TargetLock::StaticClass, TEXT("UViewModel_TargetLock"), &Z_Registration_Info_UClass_UViewModel_TargetLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_TargetLock), 81518633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_774812133(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryCore/Public/Components/NinjaInventoryCoreComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryCoreComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryCore();
// End Cross Module References

// Begin Class UNinjaInventoryCoreComponent Function GetAbilitySystemComponent
struct NinjaInventoryCoreComponent_eventGetAbilitySystemComponent_Parms
{
	UAbilitySystemComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryCoreComponent_eventGetAbilitySystemComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaInventoryCoreComponent_GetAbilitySystemComponent = FName(TEXT("GetAbilitySystemComponent"));
UAbilitySystemComponent* UNinjaInventoryCoreComponent::GetAbilitySystemComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryCoreComponent_GetAbilitySystemComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryCoreComponent_eventGetAbilitySystemComponent_Parms Parms;
		const_cast<UNinjaInventoryCoreComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryCoreComponent*>(this)->GetAbilitySystemComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Core" },
		{ "Comment", "/**\n\x09 * Provides the Ability System Component assigned to the owner.\n\x09 * \n\x09 * Override this event if you want to cover more specific ways to obtain the\n\x09 * Ability System Component from the owner, other than using the default GAS\n\x09 * UAbilitySystemGlobals function library.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryCoreComponent.h" },
		{ "ToolTip", "Provides the Ability System Component assigned to the owner.\n\nOverride this event if you want to cover more specific ways to obtain the\nAbility System Component from the owner, other than using the default GAS\nUAbilitySystemGlobals function library." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryCoreComponent_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryCoreComponent, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::PropPointers), sizeof(NinjaInventoryCoreComponent_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryCoreComponent_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryCoreComponent::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryCoreComponent Function GetAbilitySystemComponent

// Begin Class UNinjaInventoryCoreComponent Function IsValidAbilitySystemComponent
struct NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms
{
	const UAbilitySystemComponent* AbilityComponent;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent = FName(TEXT("IsValidAbilitySystemComponent"));
bool UNinjaInventoryCoreComponent::IsValidAbilitySystemComponent(const UAbilitySystemComponent* AbilityComponent) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms Parms;
		Parms.AbilityComponent=AbilityComponent;
		const_cast<UNinjaInventoryCoreComponent*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryCoreComponent*>(this)->IsValidAbilitySystemComponent_Implementation(AbilityComponent);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Core" },
		{ "Comment", "/**\n\x09 * Checks if the Ability System Component is valid and ready to be used.\n\x09 *\n\x09 * Override this event if you want to provide other ways to specify that an\n\x09 * Ability System Component should be considered valid, which is particularly\n\x09 * important to determine if the inventory should be initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryCoreComponent.h" },
		{ "ToolTip", "Checks if the Ability System Component is valid and ready to be used.\n\nOverride this event if you want to provide other ways to specify that an\nAbility System Component should be considered valid, which is particularly\nimportant to determine if the inventory should be initialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms, AbilityComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms), &Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::NewProp_AbilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryCoreComponent, nullptr, "IsValidAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::PropPointers), sizeof(NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryCoreComponent_eventIsValidAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryCoreComponent::execIsValidAbilitySystemComponent)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilityComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidAbilitySystemComponent_Implementation(Z_Param_AbilityComponent);
	P_NATIVE_END;
}
// End Class UNinjaInventoryCoreComponent Function IsValidAbilitySystemComponent

// Begin Class UNinjaInventoryCoreComponent
void UNinjaInventoryCoreComponent::StaticRegisterNativesUNinjaInventoryCoreComponent()
{
	UClass* Class = UNinjaInventoryCoreComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilitySystemComponent", &UNinjaInventoryCoreComponent::execGetAbilitySystemComponent },
		{ "IsValidAbilitySystemComponent", &UNinjaInventoryCoreComponent::execIsValidAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryCoreComponent);
UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent_NoRegister()
{
	return UNinjaInventoryCoreComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Component class, providing common functionalities to all components. \n */" },
		{ "IncludePath", "Components/NinjaInventoryCoreComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/NinjaInventoryCoreComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base Component class, providing common functionalities to all components." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryCoreComponent_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1823516146
		{ &Z_Construct_UFunction_UNinjaInventoryCoreComponent_IsValidAbilitySystemComponent, "IsValidAbilitySystemComponent" }, // 3244140769
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryCoreComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics::ClassParams = {
	&UNinjaInventoryCoreComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryCoreComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryCoreComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryCoreComponent.OuterSingleton, Z_Construct_UClass_UNinjaInventoryCoreComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryCoreComponent.OuterSingleton;
}
template<> NINJAINVENTORYCORE_API UClass* StaticClass<UNinjaInventoryCoreComponent>()
{
	return UNinjaInventoryCoreComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryCoreComponent);
UNinjaInventoryCoreComponent::~UNinjaInventoryCoreComponent() {}
// End Class UNinjaInventoryCoreComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Components_NinjaInventoryCoreComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryCoreComponent, UNinjaInventoryCoreComponent::StaticClass, TEXT("UNinjaInventoryCoreComponent"), &Z_Registration_Info_UClass_UNinjaInventoryCoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryCoreComponent), 214742618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Components_NinjaInventoryCoreComponent_h_1033507674(TEXT("/Script/NinjaInventoryCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Components_NinjaInventoryCoreComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Components_NinjaInventoryCoreComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

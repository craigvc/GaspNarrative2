// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeASCActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeASCActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeASCActor();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeASCActor_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativeASCActor Function HandleDeath
struct NarrativeASCActor_eventHandleDeath_Parms
{
	AActor* KilledActor;
	UNarrativeAbilitySystemComponent* KilledActorASC;
};
static const FName NAME_ANarrativeASCActor_HandleDeath = FName(TEXT("HandleDeath"));
void ANarrativeASCActor::HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeASCActor_HandleDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeASCActor_eventHandleDeath_Parms Parms;
		Parms.KilledActor=KilledActor;
		Parms.KilledActorASC=KilledActorASC;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDeath_Implementation(KilledActor, KilledActorASC);
	}
}
struct Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KilledActorASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActorASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeASCActor_eventHandleDeath_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeASCActor_eventHandleDeath_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeASCActor, nullptr, "HandleDeath", nullptr, nullptr, Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::PropPointers), sizeof(NarrativeASCActor_eventHandleDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeASCActor_eventHandleDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeASCActor_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeASCActor_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeASCActor::execHandleDeath)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_KilledActorASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath_Implementation(Z_Param_KilledActor,Z_Param_KilledActorASC);
	P_NATIVE_END;
}
// End Class ANarrativeASCActor Function HandleDeath

// Begin Class ANarrativeASCActor Function InitializeAttributes
struct Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Abilities" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeASCActor, nullptr, "InitializeAttributes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeASCActor::execInitializeAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAttributes();
	P_NATIVE_END;
}
// End Class ANarrativeASCActor Function InitializeAttributes

// Begin Class ANarrativeASCActor
void ANarrativeASCActor::StaticRegisterNativesANarrativeASCActor()
{
	UClass* Class = ANarrativeASCActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleDeath", &ANarrativeASCActor::execHandleDeath },
		{ "InitializeAttributes", &ANarrativeASCActor::execInitializeAttributes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeASCActor);
UClass* Z_Construct_UClass_ANarrativeASCActor_NoRegister()
{
	return ANarrativeASCActor::StaticClass();
}
struct Z_Construct_UClass_ANarrativeASCActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Basic actor that comes with an Ability System Comp and some attributes. \n* \n* Added mostly for testing purposes, however would be useful for perhaps an attack dummy etc. \n*/" },
		{ "IncludePath", "GAS/NarrativeASCActor.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
		{ "ToolTip", "Basic actor that comes with an Ability System Comp and some attributes.\n\nAdded mostly for testing purposes, however would be useful for perhaps an attack dummy etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Narrative|Components|GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default attributes to apply to the actor - we can probably move this to the ASC itself. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
		{ "ToolTip", "Default attributes to apply to the actor - we can probably move this to the ASC itself." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// The level to assign to the ASC. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeASCActor.h" },
		{ "ToolTip", "The level to assign to the ASC." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeASCActor_HandleDeath, "HandleDeath" }, // 3103378991
		{ &Z_Construct_UFunction_ANarrativeASCActor_InitializeAttributes, "InitializeAttributes" }, // 3929467711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeASCActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeASCActor, AbilitySystemComponent), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeASCActor, AttributeSetBase), Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetBase_MetaData), NewProp_AttributeSetBase_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeASCActor, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeASCActor, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeASCActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_AttributeSetBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeASCActor_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeASCActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeASCActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeASCActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeASCActor_Statics::ClassParams = {
	&ANarrativeASCActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeASCActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeASCActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeASCActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeASCActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeASCActor()
{
	if (!Z_Registration_Info_UClass_ANarrativeASCActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeASCActor.OuterSingleton, Z_Construct_UClass_ANarrativeASCActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeASCActor.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeASCActor>()
{
	return ANarrativeASCActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeASCActor);
ANarrativeASCActor::~ANarrativeASCActor() {}
// End Class ANarrativeASCActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeASCActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeASCActor, ANarrativeASCActor::StaticClass, TEXT("ANarrativeASCActor"), &Z_Registration_Info_UClass_ANarrativeASCActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeASCActor), 718340821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeASCActor_h_4221057176(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeASCActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeASCActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

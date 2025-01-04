// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatWeaponInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatWeaponInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatWeaponInterface Function GetWeaponOwner
struct CombatWeaponInterface_eventGetWeaponOwner_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatWeaponInterface_eventGetWeaponOwner_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* ICombatWeaponInterface::GetWeaponOwner() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWeaponOwner instead.");
	CombatWeaponInterface_eventGetWeaponOwner_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatWeaponInterface_GetWeaponOwner = FName(TEXT("GetWeaponOwner"));
AActor* ICombatWeaponInterface::Execute_GetWeaponOwner(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatWeaponInterface::StaticClass()));
	CombatWeaponInterface_eventGetWeaponOwner_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatWeaponInterface_GetWeaponOwner);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatWeaponInterface*)(O->GetNativeInterfaceAddress(UCombatWeaponInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetWeaponOwner_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Interface" },
		{ "Comment", "/**\n\x09 * Provides the Actor that owns this weapon.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatWeaponInterface.h" },
		{ "ToolTip", "Provides the Actor that owns this weapon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWeaponInterface_eventGetWeaponOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatWeaponInterface, nullptr, "GetWeaponOwner", nullptr, nullptr, Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::PropPointers), sizeof(CombatWeaponInterface_eventGetWeaponOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatWeaponInterface_eventGetWeaponOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatWeaponInterface::execGetWeaponOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetWeaponOwner_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatWeaponInterface Function GetWeaponOwner

// Begin Interface UCombatWeaponInterface Function GetWeaponTags
struct CombatWeaponInterface_eventGetWeaponTags_Parms
{
	FGameplayTagContainer ReturnValue;
};
FGameplayTagContainer ICombatWeaponInterface::GetWeaponTags() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWeaponTags instead.");
	CombatWeaponInterface_eventGetWeaponTags_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatWeaponInterface_GetWeaponTags = FName(TEXT("GetWeaponTags"));
FGameplayTagContainer ICombatWeaponInterface::Execute_GetWeaponTags(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatWeaponInterface::StaticClass()));
	CombatWeaponInterface_eventGetWeaponTags_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatWeaponInterface_GetWeaponTags);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatWeaponInterface*)(O->GetNativeInterfaceAddress(UCombatWeaponInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetWeaponTags_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Interface" },
		{ "Comment", "/**\n\x09 * Provides all tags that represent this weapon. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatWeaponInterface.h" },
		{ "ToolTip", "Provides all tags that represent this weapon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWeaponInterface_eventGetWeaponTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatWeaponInterface, nullptr, "GetWeaponTags", nullptr, nullptr, Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::PropPointers), sizeof(CombatWeaponInterface_eventGetWeaponTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatWeaponInterface_eventGetWeaponTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatWeaponInterface::execGetWeaponTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetWeaponTags_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatWeaponInterface Function GetWeaponTags

// Begin Interface UCombatWeaponInterface
void UCombatWeaponInterface::StaticRegisterNativesUCombatWeaponInterface()
{
	UClass* Class = UCombatWeaponInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeaponOwner", &ICombatWeaponInterface::execGetWeaponOwner },
		{ "GetWeaponTags", &ICombatWeaponInterface::execGetWeaponTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatWeaponInterface);
UClass* Z_Construct_UClass_UCombatWeaponInterface_NoRegister()
{
	return UCombatWeaponInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatWeaponInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatWeaponInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponOwner, "GetWeaponOwner" }, // 2222396685
		{ &Z_Construct_UFunction_UCombatWeaponInterface_GetWeaponTags, "GetWeaponTags" }, // 2297907516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatWeaponInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatWeaponInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWeaponInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatWeaponInterface_Statics::ClassParams = {
	&UCombatWeaponInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWeaponInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatWeaponInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatWeaponInterface()
{
	if (!Z_Registration_Info_UClass_UCombatWeaponInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatWeaponInterface.OuterSingleton, Z_Construct_UClass_UCombatWeaponInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatWeaponInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatWeaponInterface>()
{
	return UCombatWeaponInterface::StaticClass();
}
UCombatWeaponInterface::UCombatWeaponInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatWeaponInterface);
UCombatWeaponInterface::~UCombatWeaponInterface() {}
// End Interface UCombatWeaponInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatWeaponInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatWeaponInterface, UCombatWeaponInterface::StaticClass, TEXT("UCombatWeaponInterface"), &Z_Registration_Info_UClass_UCombatWeaponInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatWeaponInterface), 2404718040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatWeaponInterface_h_1598347701(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatWeaponInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatWeaponInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatWeaponManagerInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatWeaponManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponManagerInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatWeaponManagerInterface Function GetWeapon
struct CombatWeaponManagerInterface_eventGetWeapon_Parms
{
	FGameplayTagQuery WeaponQuery;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatWeaponManagerInterface_eventGetWeapon_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* ICombatWeaponManagerInterface::GetWeapon(FGameplayTagQuery const& WeaponQuery) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWeapon instead.");
	CombatWeaponManagerInterface_eventGetWeapon_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatWeaponManagerInterface_GetWeapon = FName(TEXT("GetWeapon"));
AActor* ICombatWeaponManagerInterface::Execute_GetWeapon(const UObject* O, FGameplayTagQuery const& WeaponQuery)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatWeaponManagerInterface::StaticClass()));
	CombatWeaponManagerInterface_eventGetWeapon_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatWeaponManagerInterface_GetWeapon);
	if (Func)
	{
		Parms.WeaponQuery=WeaponQuery;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatWeaponManagerInterface*)(O->GetNativeInterfaceAddress(UCombatWeaponManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetWeapon_Implementation(WeaponQuery);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Manager Interface" },
		{ "Comment", "/**\n\x09 * Retrieves a weapon based on a query.\n\x09 *\n\x09 * @param WeaponQuery\x09\x09Gameplay Tag Query used to search for the requested weapon.\n\x09 * @return\x09\x09\x09\x09\x09The Actor representing the requested weapon. Implements ICombatWeaponInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatWeaponManagerInterface.h" },
		{ "ToolTip", "Retrieves a weapon based on a query.\n\n@param WeaponQuery           Gameplay Tag Query used to search for the requested weapon.\n@return                                      The Actor representing the requested weapon. Implements ICombatWeaponInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::NewProp_WeaponQuery = { "WeaponQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWeaponManagerInterface_eventGetWeapon_Parms, WeaponQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponQuery_MetaData), NewProp_WeaponQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatWeaponManagerInterface_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::NewProp_WeaponQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatWeaponManagerInterface, nullptr, "GetWeapon", nullptr, nullptr, Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::PropPointers), sizeof(CombatWeaponManagerInterface_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatWeaponManagerInterface_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatWeaponManagerInterface::execGetWeapon)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_WeaponQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetWeapon_Implementation(Z_Param_Out_WeaponQuery);
	P_NATIVE_END;
}
// End Interface UCombatWeaponManagerInterface Function GetWeapon

// Begin Interface UCombatWeaponManagerInterface
void UCombatWeaponManagerInterface::StaticRegisterNativesUCombatWeaponManagerInterface()
{
	UClass* Class = UCombatWeaponManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeapon", &ICombatWeaponManagerInterface::execGetWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatWeaponManagerInterface);
UClass* Z_Construct_UClass_UCombatWeaponManagerInterface_NoRegister()
{
	return UCombatWeaponManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatWeaponManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatWeaponManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatWeaponManagerInterface_GetWeapon, "GetWeapon" }, // 664961509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatWeaponManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatWeaponManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWeaponManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatWeaponManagerInterface_Statics::ClassParams = {
	&UCombatWeaponManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatWeaponManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatWeaponManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatWeaponManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatWeaponManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatWeaponManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatWeaponManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatWeaponManagerInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatWeaponManagerInterface>()
{
	return UCombatWeaponManagerInterface::StaticClass();
}
UCombatWeaponManagerInterface::UCombatWeaponManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatWeaponManagerInterface);
UCombatWeaponManagerInterface::~UCombatWeaponManagerInterface() {}
// End Interface UCombatWeaponManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatWeaponManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatWeaponManagerInterface, UCombatWeaponManagerInterface::StaticClass, TEXT("UCombatWeaponManagerInterface"), &Z_Registration_Info_UClass_UCombatWeaponManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatWeaponManagerInterface), 1001928686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatWeaponManagerInterface_h_1642003839(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatWeaponManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatWeaponManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

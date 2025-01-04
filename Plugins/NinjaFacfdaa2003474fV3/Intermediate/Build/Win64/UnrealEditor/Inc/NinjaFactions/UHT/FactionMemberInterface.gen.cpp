// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Interfaces/FactionMemberInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionMemberInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionMemberInterface();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionMemberInterface_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Interface UFactionMemberInterface Function GetFactionComponent
struct FactionMemberInterface_eventGetFactionComponent_Parms
{
	UNinjaFactionComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	FactionMemberInterface_eventGetFactionComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaFactionComponent* IFactionMemberInterface::GetFactionComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFactionComponent instead.");
	FactionMemberInterface_eventGetFactionComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFactionMemberInterface_GetFactionComponent = FName(TEXT("GetFactionComponent"));
UNinjaFactionComponent* IFactionMemberInterface::Execute_GetFactionComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFactionMemberInterface::StaticClass()));
	FactionMemberInterface_eventGetFactionComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFactionMemberInterface_GetFactionComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFactionMemberInterface*)(O->GetNativeInterfaceAddress(UFactionMemberInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetFactionComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Member Interface" },
		{ "Comment", "/**\n     * Provides the Faction Component assigned to this agent.\n     * \n     * @return\n     *      The component that bridges this actor with the world's Faction Database and\n     *      provides faction details, alignments, attitude checks, etc. Must be valid.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/FactionMemberInterface.h" },
		{ "ToolTip", "Provides the Faction Component assigned to this agent.\n\n@return\n     The component that bridges this actor with the world's Faction Database and\n     provides faction details, alignments, attitude checks, etc. Must be valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionMemberInterface_eventGetFactionComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionMemberInterface, nullptr, "GetFactionComponent", nullptr, nullptr, Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::PropPointers), sizeof(FactionMemberInterface_eventGetFactionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(FactionMemberInterface_eventGetFactionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFactionMemberInterface::execGetFactionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionComponent**)Z_Param__Result=P_THIS->GetFactionComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UFactionMemberInterface Function GetFactionComponent

// Begin Interface UFactionMemberInterface
void UFactionMemberInterface::StaticRegisterNativesUFactionMemberInterface()
{
	UClass* Class = UFactionMemberInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFactionComponent", &IFactionMemberInterface::execGetFactionComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactionMemberInterface);
UClass* Z_Construct_UClass_UFactionMemberInterface_NoRegister()
{
	return UFactionMemberInterface::StaticClass();
}
struct Z_Construct_UClass_UFactionMemberInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/FactionMemberInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactionMemberInterface_GetFactionComponent, "GetFactionComponent" }, // 3970894088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFactionMemberInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactionMemberInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionMemberInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactionMemberInterface_Statics::ClassParams = {
	&UFactionMemberInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionMemberInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactionMemberInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactionMemberInterface()
{
	if (!Z_Registration_Info_UClass_UFactionMemberInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactionMemberInterface.OuterSingleton, Z_Construct_UClass_UFactionMemberInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactionMemberInterface.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UFactionMemberInterface>()
{
	return UFactionMemberInterface::StaticClass();
}
UFactionMemberInterface::UFactionMemberInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionMemberInterface);
UFactionMemberInterface::~UFactionMemberInterface() {}
// End Interface UFactionMemberInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionMemberInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactionMemberInterface, UFactionMemberInterface::StaticClass, TEXT("UFactionMemberInterface"), &Z_Registration_Info_UClass_UFactionMemberInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactionMemberInterface), 3949940552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionMemberInterface_h_3015532331(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionMemberInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionMemberInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

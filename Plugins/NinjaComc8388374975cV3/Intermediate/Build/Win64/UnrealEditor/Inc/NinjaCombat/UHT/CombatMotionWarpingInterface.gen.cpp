// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/Components/CombatMotionWarpingInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatMotionWarpingInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMotionWarpingInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMotionWarpingInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatMotionWarpingInterface Function ClearCombatWarpTarget
struct CombatMotionWarpingInterface_eventClearCombatWarpTarget_Parms
{
	FName WarpName;
};
void ICombatMotionWarpingInterface::ClearCombatWarpTarget(const FName WarpName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearCombatWarpTarget instead.");
}
static FName NAME_UCombatMotionWarpingInterface_ClearCombatWarpTarget = FName(TEXT("ClearCombatWarpTarget"));
void ICombatMotionWarpingInterface::Execute_ClearCombatWarpTarget(UObject* O, const FName WarpName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMotionWarpingInterface::StaticClass()));
	CombatMotionWarpingInterface_eventClearCombatWarpTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMotionWarpingInterface_ClearCombatWarpTarget);
	if (Func)
	{
		Parms.WarpName=WarpName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMotionWarpingInterface*)(O->GetNativeInterfaceAddress(UCombatMotionWarpingInterface::StaticClass())))
	{
		I->ClearCombatWarpTarget_Implementation(WarpName);
	}
}
struct Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Warping Interface" },
		{ "Comment", "/**\n\x09 * Clears the combat target warp.\n\x09 * \n\x09 * @param WarpName\n\x09 *\x09\x09Name of the warp that has been previously defined.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMotionWarpingInterface.h" },
		{ "ToolTip", "Clears the combat target warp.\n\n@param WarpName\n             Name of the warp that has been previously defined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::NewProp_WarpName = { "WarpName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMotionWarpingInterface_eventClearCombatWarpTarget_Parms, WarpName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpName_MetaData), NewProp_WarpName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::NewProp_WarpName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMotionWarpingInterface, nullptr, "ClearCombatWarpTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::PropPointers), sizeof(CombatMotionWarpingInterface_eventClearCombatWarpTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMotionWarpingInterface_eventClearCombatWarpTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMotionWarpingInterface::execClearCombatWarpTarget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCombatWarpTarget_Implementation(Z_Param_WarpName);
	P_NATIVE_END;
}
// End Interface UCombatMotionWarpingInterface Function ClearCombatWarpTarget

// Begin Interface UCombatMotionWarpingInterface Function SetCombatWarpTarget
struct CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms
{
	FName WarpName;
	const AActor* Target;
	float DistanceOffset;
};
void ICombatMotionWarpingInterface::SetCombatWarpTarget(const FName WarpName, const AActor* Target, float DistanceOffset)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCombatWarpTarget instead.");
}
static FName NAME_UCombatMotionWarpingInterface_SetCombatWarpTarget = FName(TEXT("SetCombatWarpTarget"));
void ICombatMotionWarpingInterface::Execute_SetCombatWarpTarget(UObject* O, const FName WarpName, const AActor* Target, float DistanceOffset)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatMotionWarpingInterface::StaticClass()));
	CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatMotionWarpingInterface_SetCombatWarpTarget);
	if (Func)
	{
		Parms.WarpName=WarpName;
		Parms.Target=Target;
		Parms.DistanceOffset=DistanceOffset;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatMotionWarpingInterface*)(O->GetNativeInterfaceAddress(UCombatMotionWarpingInterface::StaticClass())))
	{
		I->SetCombatWarpTarget_Implementation(WarpName,Target,DistanceOffset);
	}
}
struct Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Warping Interface" },
		{ "Comment", "/**\n\x09 * Adds or updates a combat target warp, based on an actor's location and rotation.\n\x09 *\n\x09 * @param WarpName\x09\x09\x09Key used to store the warp target information.\n\x09 * @param Target\x09\x09\x09""Actor used as a reference for the Warp Target.\n\x09 * @param DistanceOffset\x09""An optional offset from the target towards the source.\n\x09 */" },
		{ "CPP_Default_DistanceOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMotionWarpingInterface.h" },
		{ "ToolTip", "Adds or updates a combat target warp, based on an actor's location and rotation.\n\n@param WarpName                      Key used to store the warp target information.\n@param Target                        Actor used as a reference for the Warp Target.\n@param DistanceOffset        An optional offset from the target towards the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::NewProp_WarpName = { "WarpName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms, WarpName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpName_MetaData), NewProp_WarpName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms, DistanceOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::NewProp_WarpName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::NewProp_DistanceOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatMotionWarpingInterface, nullptr, "SetCombatWarpTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::PropPointers), sizeof(CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatMotionWarpingInterface_eventSetCombatWarpTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatMotionWarpingInterface::execSetCombatWarpTarget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpName);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatWarpTarget_Implementation(Z_Param_WarpName,Z_Param_Target,Z_Param_DistanceOffset);
	P_NATIVE_END;
}
// End Interface UCombatMotionWarpingInterface Function SetCombatWarpTarget

// Begin Interface UCombatMotionWarpingInterface
void UCombatMotionWarpingInterface::StaticRegisterNativesUCombatMotionWarpingInterface()
{
	UClass* Class = UCombatMotionWarpingInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCombatWarpTarget", &ICombatMotionWarpingInterface::execClearCombatWarpTarget },
		{ "SetCombatWarpTarget", &ICombatMotionWarpingInterface::execSetCombatWarpTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatMotionWarpingInterface);
UClass* Z_Construct_UClass_UCombatMotionWarpingInterface_NoRegister()
{
	return UCombatMotionWarpingInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatMotionWarpingInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Components/CombatMotionWarpingInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatMotionWarpingInterface_ClearCombatWarpTarget, "ClearCombatWarpTarget" }, // 3435587506
		{ &Z_Construct_UFunction_UCombatMotionWarpingInterface_SetCombatWarpTarget, "SetCombatWarpTarget" }, // 3069121962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatMotionWarpingInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatMotionWarpingInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatMotionWarpingInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatMotionWarpingInterface_Statics::ClassParams = {
	&UCombatMotionWarpingInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatMotionWarpingInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatMotionWarpingInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatMotionWarpingInterface()
{
	if (!Z_Registration_Info_UClass_UCombatMotionWarpingInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatMotionWarpingInterface.OuterSingleton, Z_Construct_UClass_UCombatMotionWarpingInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatMotionWarpingInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatMotionWarpingInterface>()
{
	return UCombatMotionWarpingInterface::StaticClass();
}
UCombatMotionWarpingInterface::UCombatMotionWarpingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatMotionWarpingInterface);
UCombatMotionWarpingInterface::~UCombatMotionWarpingInterface() {}
// End Interface UCombatMotionWarpingInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMotionWarpingInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatMotionWarpingInterface, UCombatMotionWarpingInterface::StaticClass, TEXT("UCombatMotionWarpingInterface"), &Z_Registration_Info_UClass_UCombatMotionWarpingInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatMotionWarpingInterface), 2429923449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMotionWarpingInterface_h_3995632791(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMotionWarpingInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMotionWarpingInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

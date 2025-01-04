// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/NinjaInventoryPhysicsPickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryPhysicsPickupActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class ANinjaInventoryPhysicsPickupActor Function ApplyPhysics
struct NinjaInventoryPhysicsPickupActor_eventApplyPhysics_Parms
{
	UMeshComponent* MeshComponent;
};
static const FName NAME_ANinjaInventoryPhysicsPickupActor_ApplyPhysics = FName(TEXT("ApplyPhysics"));
void ANinjaInventoryPhysicsPickupActor::ApplyPhysics(UMeshComponent* MeshComponent) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryPhysicsPickupActor_ApplyPhysics);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryPhysicsPickupActor_eventApplyPhysics_Parms Parms;
		Parms.MeshComponent=MeshComponent;
		const_cast<ANinjaInventoryPhysicsPickupActor*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<ANinjaInventoryPhysicsPickupActor*>(this)->ApplyPhysics_Implementation(MeshComponent);
	}
}
struct Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Applies physics to the Mesh Component used to represent the equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPhysicsPickupActor.h" },
		{ "ToolTip", "Applies physics to the Mesh Component used to represent the equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryPhysicsPickupActor_eventApplyPhysics_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor, nullptr, "ApplyPhysics", nullptr, nullptr, Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::PropPointers), sizeof(NinjaInventoryPhysicsPickupActor_eventApplyPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryPhysicsPickupActor_eventApplyPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryPhysicsPickupActor::execApplyPhysics)
{
	P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPhysics_Implementation(Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class ANinjaInventoryPhysicsPickupActor Function ApplyPhysics

// Begin Class ANinjaInventoryPhysicsPickupActor
void ANinjaInventoryPhysicsPickupActor::StaticRegisterNativesANinjaInventoryPhysicsPickupActor()
{
	UClass* Class = ANinjaInventoryPhysicsPickupActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyPhysics", &ANinjaInventoryPhysicsPickupActor::execApplyPhysics },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaInventoryPhysicsPickupActor);
UClass* Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_NoRegister()
{
	return ANinjaInventoryPhysicsPickupActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Pickup Actor that is Aware of the Equipment and adds physics to the drop behavior.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryPhysicsPickupActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPhysicsPickupActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Pickup Actor that is Aware of the Equipment and adds physics to the drop behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/** An offset added to the height (Z axis). so the item can \"fall\". */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPhysicsPickupActor.h" },
		{ "ToolTip", "An offset added to the height (Z axis). so the item can \"fall\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMassInKg_MetaData[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Mass set to mesh component used to represent this pickup.\n\x09 * Only used if the item does not have a weight fragment that can be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPhysicsPickupActor.h" },
		{ "ToolTip", "Mass set to mesh component used to represent this pickup.\nOnly used if the item does not have a weight fragment that can be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMassInKg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaInventoryPhysicsPickupActor_ApplyPhysics, "ApplyPhysics" }, // 2543498376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaInventoryPhysicsPickupActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaInventoryPhysicsPickupActor, HeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightOffset_MetaData), NewProp_HeightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::NewProp_DefaultMassInKg = { "DefaultMassInKg", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaInventoryPhysicsPickupActor, DefaultMassInKg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMassInKg_MetaData), NewProp_DefaultMassInKg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::NewProp_HeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::NewProp_DefaultMassInKg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::ClassParams = {
	&ANinjaInventoryPhysicsPickupActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor()
{
	if (!Z_Registration_Info_UClass_ANinjaInventoryPhysicsPickupActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaInventoryPhysicsPickupActor.OuterSingleton, Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaInventoryPhysicsPickupActor.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<ANinjaInventoryPhysicsPickupActor>()
{
	return ANinjaInventoryPhysicsPickupActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaInventoryPhysicsPickupActor);
ANinjaInventoryPhysicsPickupActor::~ANinjaInventoryPhysicsPickupActor() {}
// End Class ANinjaInventoryPhysicsPickupActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryPhysicsPickupActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaInventoryPhysicsPickupActor, ANinjaInventoryPhysicsPickupActor::StaticClass, TEXT("ANinjaInventoryPhysicsPickupActor"), &Z_Registration_Info_UClass_ANinjaInventoryPhysicsPickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaInventoryPhysicsPickupActor), 501283237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryPhysicsPickupActor_h_1741991269(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryPhysicsPickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryPhysicsPickupActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

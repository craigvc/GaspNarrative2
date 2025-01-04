// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/NinjaEquipmentAssetCompatibilityCheck.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentAssetCompatibilityCheck() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UNinjaEquipmentAssetCompatibilityCheck Function IsCompatible
struct NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms
{
	FGameplayTagContainer AssetTags;
	AActor* EquipmentOwner;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible = FName(TEXT("IsCompatible"));
bool UNinjaEquipmentAssetCompatibilityCheck::IsCompatible(const FGameplayTagContainer AssetTags, AActor* EquipmentOwner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.EquipmentOwner=EquipmentOwner;
		const_cast<UNinjaEquipmentAssetCompatibilityCheck*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaEquipmentAssetCompatibilityCheck*>(this)->IsCompatible_Implementation(AssetTags, EquipmentOwner);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Asset Check" },
		{ "Comment", "/**\n\x09 * Checks if a given equipment asset tag container is compatible with the owner.\n\x09 *\n\x09 * @param AssetTags\x09\x09\x09Gameplay Tags assigned to the asset configuration.\n\x09 * @param EquipmentOwner\x09Owner of the equipment. May provide tags, additional information, etc.\n\x09 * @return\x09\x09\x09\x09\x09True if the asset is compatible, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipmentAssetCompatibilityCheck.h" },
		{ "ToolTip", "Checks if a given equipment asset tag container is compatible with the owner.\n\n@param AssetTags                     Gameplay Tags assigned to the asset configuration.\n@param EquipmentOwner        Owner of the equipment. May provide tags, additional information, etc.\n@return                                      True if the asset is compatible, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentOwner;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_EquipmentOwner = { "EquipmentOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms, EquipmentOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms), &Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_AssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_EquipmentOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck, nullptr, "IsCompatible", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::PropPointers), sizeof(NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentAssetCompatibilityCheck_eventIsCompatible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentAssetCompatibilityCheck::execIsCompatible)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AssetTags);
	P_GET_OBJECT(AActor,Z_Param_EquipmentOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompatible_Implementation(Z_Param_AssetTags,Z_Param_EquipmentOwner);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentAssetCompatibilityCheck Function IsCompatible

// Begin Class UNinjaEquipmentAssetCompatibilityCheck
void UNinjaEquipmentAssetCompatibilityCheck::StaticRegisterNativesUNinjaEquipmentAssetCompatibilityCheck()
{
	UClass* Class = UNinjaEquipmentAssetCompatibilityCheck::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsCompatible", &UNinjaEquipmentAssetCompatibilityCheck::execIsCompatible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentAssetCompatibilityCheck);
UClass* Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_NoRegister()
{
	return UNinjaEquipmentAssetCompatibilityCheck::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Checks if a given Equipment Asset (Mesh, Actors) is compatible with the owner.\n *\n * The most classic scenario is having a piece of equipment with meshes for male and female characters\n * and having this compatibility to check which mesh is the correct one to assign to the owner.\n */" },
		{ "IncludePath", "GameFramework/NinjaEquipmentAssetCompatibilityCheck.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipmentAssetCompatibilityCheck.h" },
		{ "ToolTip", "Checks if a given Equipment Asset (Mesh, Actors) is compatible with the owner.\n\nThe most classic scenario is having a piece of equipment with meshes for male and female characters\nand having this compatibility to check which mesh is the correct one to assign to the owner." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipmentAssetCompatibilityCheck_IsCompatible, "IsCompatible" }, // 2527465200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentAssetCompatibilityCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics::ClassParams = {
	&UNinjaEquipmentAssetCompatibilityCheck::StaticClass,
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
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentAssetCompatibilityCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentAssetCompatibilityCheck.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentAssetCompatibilityCheck.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentAssetCompatibilityCheck>()
{
	return UNinjaEquipmentAssetCompatibilityCheck::StaticClass();
}
UNinjaEquipmentAssetCompatibilityCheck::UNinjaEquipmentAssetCompatibilityCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentAssetCompatibilityCheck);
UNinjaEquipmentAssetCompatibilityCheck::~UNinjaEquipmentAssetCompatibilityCheck() {}
// End Class UNinjaEquipmentAssetCompatibilityCheck

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentAssetCompatibilityCheck_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck, UNinjaEquipmentAssetCompatibilityCheck::StaticClass, TEXT("UNinjaEquipmentAssetCompatibilityCheck"), &Z_Registration_Info_UClass_UNinjaEquipmentAssetCompatibilityCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentAssetCompatibilityCheck), 3857114578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentAssetCompatibilityCheck_h_4234017326(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentAssetCompatibilityCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentAssetCompatibilityCheck_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

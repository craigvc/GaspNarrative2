// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryPickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryPickupActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ANinjaInventoryPickupActor();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ANinjaInventoryPickupActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryPickupInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class ANinjaInventoryPickupActor Function HandleItemDataUpdated
static const FName NAME_ANinjaInventoryPickupActor_HandleItemDataUpdated = FName(TEXT("HandleItemDataUpdated"));
void ANinjaInventoryPickupActor::HandleItemDataUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryPickupActor_HandleItemDataUpdated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleItemDataUpdated_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Allows this item to react to the Item Instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "ToolTip", "Allows this item to react to the Item Instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryPickupActor, nullptr, "HandleItemDataUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryPickupActor::execHandleItemDataUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemDataUpdated_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaInventoryPickupActor Function HandleItemDataUpdated

// Begin Class ANinjaInventoryPickupActor Function HandleSourceUpdated
static const FName NAME_ANinjaInventoryPickupActor_HandleSourceUpdated = FName(TEXT("HandleSourceUpdated"));
void ANinjaInventoryPickupActor::HandleSourceUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaInventoryPickupActor_HandleSourceUpdated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleSourceUpdated_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Actor" },
		{ "Comment", "/**\n\x09 * Allows this item to react to the Source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "ToolTip", "Allows this item to react to the Source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryPickupActor, nullptr, "HandleSourceUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryPickupActor::execHandleSourceUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSourceUpdated_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaInventoryPickupActor Function HandleSourceUpdated

// Begin Class ANinjaInventoryPickupActor Function OnRep_ItemData
struct Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the Item Data that has been replicated.\n\x09 * Useful to gather specific fragments that affect cosmetics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "ToolTip", "Reacts to the Item Data that has been replicated.\nUseful to gather specific fragments that affect cosmetics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryPickupActor, nullptr, "OnRep_ItemData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryPickupActor::execOnRep_ItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ItemData();
	P_NATIVE_END;
}
// End Class ANinjaInventoryPickupActor Function OnRep_ItemData

// Begin Class ANinjaInventoryPickupActor Function OnRep_Source
struct Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the Source that has been replicated.\n\x09 * \n\x09 * Useful to gather aspects of the source once it has been set, since the\n\x09 * actual source might be unavailable later.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "ToolTip", "Reacts to the Source that has been replicated.\n\nUseful to gather aspects of the source once it has been set, since the\nactual source might be unavailable later." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaInventoryPickupActor, nullptr, "OnRep_Source", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaInventoryPickupActor::execOnRep_Source)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Source();
	P_NATIVE_END;
}
// End Class ANinjaInventoryPickupActor Function OnRep_Source

// Begin Class ANinjaInventoryPickupActor
void ANinjaInventoryPickupActor::StaticRegisterNativesANinjaInventoryPickupActor()
{
	UClass* Class = ANinjaInventoryPickupActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleItemDataUpdated", &ANinjaInventoryPickupActor::execHandleItemDataUpdated },
		{ "HandleSourceUpdated", &ANinjaInventoryPickupActor::execHandleSourceUpdated },
		{ "OnRep_ItemData", &ANinjaInventoryPickupActor::execOnRep_ItemData },
		{ "OnRep_Source", &ANinjaInventoryPickupActor::execOnRep_Source },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaInventoryPickupActor);
UClass* Z_Construct_UClass_ANinjaInventoryPickupActor_NoRegister()
{
	return ANinjaInventoryPickupActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaInventoryPickupActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A default Pickup Actor that implements the appropriate interface\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryPickupActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A default Pickup Actor that implements the appropriate interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Comment", "/** Data Asset representing the item to grant. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Data Asset representing the item to grant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePtr_MetaData[] = {
		{ "Comment", "/** Weak pointer to the source that originated this pickup. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryPickupActor.h" },
		{ "ToolTip", "Weak pointer to the source that originated this pickup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourcePtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleItemDataUpdated, "HandleItemDataUpdated" }, // 503067963
		{ &Z_Construct_UFunction_ANinjaInventoryPickupActor_HandleSourceUpdated, "HandleSourceUpdated" }, // 1923642365
		{ &Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_ItemData, "OnRep_ItemData" }, // 585273408
		{ &Z_Construct_UFunction_ANinjaInventoryPickupActor_OnRep_Source, "OnRep_Source" }, // 3037791215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaInventoryPickupActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::NewProp_ItemData = { "ItemData", "OnRep_ItemData", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaInventoryPickupActor, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::NewProp_SourcePtr = { "SourcePtr", "OnRep_Source", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaInventoryPickupActor, SourcePtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePtr_MetaData), NewProp_SourcePtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::NewProp_SourcePtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryPickupInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaInventoryPickupActor, IInventoryPickupInterface), false },  // 785141290
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::ClassParams = {
	&ANinjaInventoryPickupActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaInventoryPickupActor()
{
	if (!Z_Registration_Info_UClass_ANinjaInventoryPickupActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaInventoryPickupActor.OuterSingleton, Z_Construct_UClass_ANinjaInventoryPickupActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaInventoryPickupActor.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<ANinjaInventoryPickupActor>()
{
	return ANinjaInventoryPickupActor::StaticClass();
}
void ANinjaInventoryPickupActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ItemData(TEXT("ItemData"));
	static const FName Name_SourcePtr(TEXT("SourcePtr"));
	const bool bIsValid = true
		&& Name_ItemData == ClassReps[(int32)ENetFields_Private::ItemData].Property->GetFName()
		&& Name_SourcePtr == ClassReps[(int32)ENetFields_Private::SourcePtr].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANinjaInventoryPickupActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaInventoryPickupActor);
ANinjaInventoryPickupActor::~ANinjaInventoryPickupActor() {}
// End Class ANinjaInventoryPickupActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaInventoryPickupActor, ANinjaInventoryPickupActor::StaticClass, TEXT("ANinjaInventoryPickupActor"), &Z_Registration_Info_UClass_ANinjaInventoryPickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaInventoryPickupActor), 3006498678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_1132499304(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

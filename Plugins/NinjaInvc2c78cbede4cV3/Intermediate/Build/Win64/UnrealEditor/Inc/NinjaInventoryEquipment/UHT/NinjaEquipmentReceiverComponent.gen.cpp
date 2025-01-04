// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Components/NinjaEquipmentReceiverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentReceiverComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentActorInterface_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentReceiverComponent();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentReceiverComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UNinjaEquipmentReceiverComponent Function GetEquipmentOwner
struct Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics
{
	struct NinjaEquipmentReceiverComponent_eventGetEquipmentOwner_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment|Equipment Receiver" },
		{ "Comment", "/**\n\x09 * Provides the Pawn who owns this equipment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentReceiverComponent.h" },
		{ "ToolTip", "Provides the Pawn who owns this equipment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentReceiverComponent_eventGetEquipmentOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentReceiverComponent, nullptr, "GetEquipmentOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::NinjaEquipmentReceiverComponent_eventGetEquipmentOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::NinjaEquipmentReceiverComponent_eventGetEquipmentOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentReceiverComponent::execGetEquipmentOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetEquipmentOwner();
	P_NATIVE_END;
}
// End Class UNinjaEquipmentReceiverComponent Function GetEquipmentOwner

// Begin Class UNinjaEquipmentReceiverComponent
void UNinjaEquipmentReceiverComponent::StaticRegisterNativesUNinjaEquipmentReceiverComponent()
{
	UClass* Class = UNinjaEquipmentReceiverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentOwner", &UNinjaEquipmentReceiverComponent::execGetEquipmentOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentReceiverComponent);
UClass* Z_Construct_UClass_UNinjaEquipmentReceiverComponent_NoRegister()
{
	return UNinjaEquipmentReceiverComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Actor Component that can be added to equipment actors that are unable to implement the interface.\n * A common scenario for that is the Combat System, that is unable to add the interface in the header.\n */" },
		{ "IncludePath", "Components/NinjaEquipmentReceiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentReceiverComponent.h" },
		{ "ToolTip", "Actor Component that can be added to equipment actors that are unable to implement the interface.\nA common scenario for that is the Combat System, that is unable to add the interface in the header." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeUsedAsEffectCauser_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/** Determines if this equipment actor can be used as an effect causer. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentReceiverComponent.h" },
		{ "ToolTip", "Determines if this equipment actor can be used as an effect causer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "Comment", "/** The equipment instance assigned to this actor. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaEquipmentReceiverComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The equipment instance assigned to this actor." },
	};
#endif // WITH_METADATA
	static void NewProp_bCanBeUsedAsEffectCauser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeUsedAsEffectCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipmentReceiverComponent_GetEquipmentOwner, "GetEquipmentOwner" }, // 219063626
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentReceiverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::NewProp_bCanBeUsedAsEffectCauser_SetBit(void* Obj)
{
	((UNinjaEquipmentReceiverComponent*)Obj)->bCanBeUsedAsEffectCauser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::NewProp_bCanBeUsedAsEffectCauser = { "bCanBeUsedAsEffectCauser", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaEquipmentReceiverComponent), &Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::NewProp_bCanBeUsedAsEffectCauser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeUsedAsEffectCauser_MetaData), NewProp_bCanBeUsedAsEffectCauser_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0144000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentReceiverComponent, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::NewProp_bCanBeUsedAsEffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEquipmentActorInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaEquipmentReceiverComponent, IEquipmentActorInterface), false },  // 140923710
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::ClassParams = {
	&UNinjaEquipmentReceiverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentReceiverComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentReceiverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentReceiverComponent.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentReceiverComponent.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentReceiverComponent>()
{
	return UNinjaEquipmentReceiverComponent::StaticClass();
}
void UNinjaEquipmentReceiverComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Equipment(TEXT("Equipment"));
	const bool bIsValid = true
		&& Name_Equipment == ClassReps[(int32)ENetFields_Private::Equipment].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaEquipmentReceiverComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentReceiverComponent);
UNinjaEquipmentReceiverComponent::~UNinjaEquipmentReceiverComponent() {}
// End Class UNinjaEquipmentReceiverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentReceiverComponent, UNinjaEquipmentReceiverComponent::StaticClass, TEXT("UNinjaEquipmentReceiverComponent"), &Z_Registration_Info_UClass_UNinjaEquipmentReceiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentReceiverComponent), 1516363049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_2416585359(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Interfaces/EquipmentActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentActorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentActorInterface();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipmentActorInterface_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Interface UEquipmentActorInterface Function GetEquipment
struct EquipmentActorInterface_eventGetEquipment_Parms
{
	const UNinjaEquipment* ReturnValue;

	/** Constructor, initializes return property only **/
	EquipmentActorInterface_eventGetEquipment_Parms()
		: ReturnValue(NULL)
	{
	}
};
const UNinjaEquipment* IEquipmentActorInterface::GetEquipment() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEquipment instead.");
	EquipmentActorInterface_eventGetEquipment_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UEquipmentActorInterface_GetEquipment = FName(TEXT("GetEquipment"));
const UNinjaEquipment* IEquipmentActorInterface::Execute_GetEquipment(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEquipmentActorInterface::StaticClass()));
	EquipmentActorInterface_eventGetEquipment_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UEquipmentActorInterface_GetEquipment);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IEquipmentActorInterface*)(O->GetNativeInterfaceAddress(UEquipmentActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetEquipment_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Actor" },
		{ "Comment", "/**\n\x09 * Retrieves the Equipment that originated the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentActorInterface.h" },
		{ "ToolTip", "Retrieves the Equipment that originated the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentActorInterface_eventGetEquipment_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentActorInterface, nullptr, "GetEquipment", nullptr, nullptr, Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::PropPointers), sizeof(EquipmentActorInterface_eventGetEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(EquipmentActorInterface_eventGetEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentActorInterface::execGetEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaEquipment**)Z_Param__Result=P_THIS->GetEquipment_Implementation();
	P_NATIVE_END;
}
// End Interface UEquipmentActorInterface Function GetEquipment

// Begin Interface UEquipmentActorInterface Function IsEffectCauser
struct EquipmentActorInterface_eventIsEffectCauser_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	EquipmentActorInterface_eventIsEffectCauser_Parms()
		: ReturnValue(false)
	{
	}
};
bool IEquipmentActorInterface::IsEffectCauser() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsEffectCauser instead.");
	EquipmentActorInterface_eventIsEffectCauser_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UEquipmentActorInterface_IsEffectCauser = FName(TEXT("IsEffectCauser"));
bool IEquipmentActorInterface::Execute_IsEffectCauser(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEquipmentActorInterface::StaticClass()));
	EquipmentActorInterface_eventIsEffectCauser_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UEquipmentActorInterface_IsEffectCauser);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IEquipmentActorInterface*)(O->GetNativeInterfaceAddress(UEquipmentActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsEffectCauser_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Actor" },
		{ "Comment", "/**\n\x09 * Determines if this Actor should be considered the effect causer of a granted ability.\n\x09 *\n\x09 * By default, this returns true, but if you have multiple Actors being spawned by one Equipment,\n\x09 * then you should make sure that the correct one will return true and others will return false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentActorInterface.h" },
		{ "ToolTip", "Determines if this Actor should be considered the effect causer of a granted ability.\n\nBy default, this returns true, but if you have multiple Actors being spawned by one Equipment,\nthen you should make sure that the correct one will return true and others will return false." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EquipmentActorInterface_eventIsEffectCauser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipmentActorInterface_eventIsEffectCauser_Parms), &Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentActorInterface, nullptr, "IsEffectCauser", nullptr, nullptr, Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::PropPointers), sizeof(EquipmentActorInterface_eventIsEffectCauser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::Function_MetaDataParams) };
static_assert(sizeof(EquipmentActorInterface_eventIsEffectCauser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentActorInterface::execIsEffectCauser)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEffectCauser_Implementation();
	P_NATIVE_END;
}
// End Interface UEquipmentActorInterface Function IsEffectCauser

// Begin Interface UEquipmentActorInterface Function SetEquipment
struct EquipmentActorInterface_eventSetEquipment_Parms
{
	const UNinjaEquipment* Equipment;
};
void IEquipmentActorInterface::SetEquipment(const UNinjaEquipment* Equipment)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEquipment instead.");
}
static FName NAME_UEquipmentActorInterface_SetEquipment = FName(TEXT("SetEquipment"));
void IEquipmentActorInterface::Execute_SetEquipment(UObject* O, const UNinjaEquipment* Equipment)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEquipmentActorInterface::StaticClass()));
	EquipmentActorInterface_eventSetEquipment_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UEquipmentActorInterface_SetEquipment);
	if (Func)
	{
		Parms.Equipment=Equipment;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IEquipmentActorInterface*)(O->GetNativeInterfaceAddress(UEquipmentActorInterface::StaticClass())))
	{
		I->SetEquipment_Implementation(Equipment);
	}
}
struct Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Actor" },
		{ "Comment", "/**\n\x09 * Sets the Equipment that owns this actor.\n\x09 *\n\x09 * @param Equipment\n\x09 *\x09\x09The immutable equipment that owns this actor. Through  this instance, an actor\n\x09 *\x09\x09""can access the equipment instance, definition and so on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentActorInterface.h" },
		{ "ToolTip", "Sets the Equipment that owns this actor.\n\n@param Equipment\n             The immutable equipment that owns this actor. Through  this instance, an actor\n             can access the equipment instance, definition and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentActorInterface_eventSetEquipment_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentActorInterface, nullptr, "SetEquipment", nullptr, nullptr, Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::PropPointers), sizeof(EquipmentActorInterface_eventSetEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(EquipmentActorInterface_eventSetEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEquipmentActorInterface::execSetEquipment)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEquipment_Implementation(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Interface UEquipmentActorInterface Function SetEquipment

// Begin Interface UEquipmentActorInterface
void UEquipmentActorInterface::StaticRegisterNativesUEquipmentActorInterface()
{
	UClass* Class = UEquipmentActorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipment", &IEquipmentActorInterface::execGetEquipment },
		{ "IsEffectCauser", &IEquipmentActorInterface::execIsEffectCauser },
		{ "SetEquipment", &IEquipmentActorInterface::execSetEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentActorInterface);
UClass* Z_Construct_UClass_UEquipmentActorInterface_NoRegister()
{
	return UEquipmentActorInterface::StaticClass();
}
struct Z_Construct_UClass_UEquipmentActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentActorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentActorInterface_GetEquipment, "GetEquipment" }, // 1551846477
		{ &Z_Construct_UFunction_UEquipmentActorInterface_IsEffectCauser, "IsEffectCauser" }, // 4015204470
		{ &Z_Construct_UFunction_UEquipmentActorInterface_SetEquipment, "SetEquipment" }, // 3652491066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentActorInterface_Statics::ClassParams = {
	&UEquipmentActorInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentActorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentActorInterface()
{
	if (!Z_Registration_Info_UClass_UEquipmentActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentActorInterface.OuterSingleton, Z_Construct_UClass_UEquipmentActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentActorInterface.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UEquipmentActorInterface>()
{
	return UEquipmentActorInterface::StaticClass();
}
UEquipmentActorInterface::UEquipmentActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentActorInterface);
UEquipmentActorInterface::~UEquipmentActorInterface() {}
// End Interface UEquipmentActorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentActorInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentActorInterface, UEquipmentActorInterface::StaticClass, TEXT("UEquipmentActorInterface"), &Z_Registration_Info_UClass_UEquipmentActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentActorInterface), 140923710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentActorInterface_h_597936910(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentActorInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

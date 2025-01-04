// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Interfaces/InventoryAnimationProviderInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryAnimationProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAnimationProviderInterface();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAnimationProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Interface UInventoryAnimationProviderInterface Function GetInventoryAnimation
struct InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms
{
	UObject* Requester;
	FGameplayTagQuery AnimationQuery;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInventoryAnimationProviderInterface::GetInventoryAnimation(UObject* Requester, FGameplayTagQuery AnimationQuery)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInventoryAnimation instead.");
	InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryAnimationProviderInterface_GetInventoryAnimation = FName(TEXT("GetInventoryAnimation"));
bool IInventoryAnimationProviderInterface::Execute_GetInventoryAnimation(UObject* O, UObject* Requester, FGameplayTagQuery AnimationQuery)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryAnimationProviderInterface::StaticClass()));
	InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryAnimationProviderInterface_GetInventoryAnimation);
	if (Func)
	{
		Parms.Requester=Requester;
		Parms.AnimationQuery=AnimationQuery;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryAnimationProviderInterface*)(O->GetNativeInterfaceAddress(UInventoryAnimationProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInventoryAnimation_Implementation(Requester,AnimationQuery);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Animation Provider Interface" },
		{ "Comment", "/**\n\x09 * Receives a montage that has been found by the system.\n\x09 *\n\x09 * @param Requester\n\x09 *\x09\x09Object requesting the animation. Must implement the Inventory Animation Receiver Interface\n\x09 *\x09\x09which will be used to provide the animation from the Query. This strategy allows asynchronous\n\x09 *\x09\x09loading of animation assets.\n\x09 *\n\x09 * @param AnimationQuery\n\x09 *\x09\x09Query used to retrieve the desired Animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/InventoryAnimationProviderInterface.h" },
		{ "ToolTip", "Receives a montage that has been found by the system.\n\n@param Requester\n             Object requesting the animation. Must implement the Inventory Animation Receiver Interface\n             which will be used to provide the animation from the Query. This strategy allows asynchronous\n             loading of animation assets.\n\n@param AnimationQuery\n             Query used to retrieve the desired Animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "MustImplement", "/Script/NinjaInventoryGameplay.InventoryAnimationReceiverInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationQuery;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms, Requester), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_AnimationQuery = { "AnimationQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms, AnimationQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(0, nullptr) }; // 572225232
void Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms), &Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_AnimationQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAnimationProviderInterface, nullptr, "GetInventoryAnimation", nullptr, nullptr, Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::PropPointers), sizeof(InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryAnimationProviderInterface_eventGetInventoryAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryAnimationProviderInterface::execGetInventoryAnimation)
{
	P_GET_OBJECT(UObject,Z_Param_Requester);
	P_GET_STRUCT(FGameplayTagQuery,Z_Param_AnimationQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInventoryAnimation_Implementation(Z_Param_Requester,Z_Param_AnimationQuery);
	P_NATIVE_END;
}
// End Interface UInventoryAnimationProviderInterface Function GetInventoryAnimation

// Begin Interface UInventoryAnimationProviderInterface
void UInventoryAnimationProviderInterface::StaticRegisterNativesUInventoryAnimationProviderInterface()
{
	UClass* Class = UInventoryAnimationProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryAnimation", &IInventoryAnimationProviderInterface::execGetInventoryAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryAnimationProviderInterface);
UClass* Z_Construct_UClass_UInventoryAnimationProviderInterface_NoRegister()
{
	return UInventoryAnimationProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/InventoryAnimationProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryAnimationProviderInterface_GetInventoryAnimation, "GetInventoryAnimation" }, // 859957514
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryAnimationProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics::ClassParams = {
	&UInventoryAnimationProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryAnimationProviderInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryAnimationProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryAnimationProviderInterface.OuterSingleton, Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryAnimationProviderInterface.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryAnimationProviderInterface>()
{
	return UInventoryAnimationProviderInterface::StaticClass();
}
UInventoryAnimationProviderInterface::UInventoryAnimationProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryAnimationProviderInterface);
UInventoryAnimationProviderInterface::~UInventoryAnimationProviderInterface() {}
// End Interface UInventoryAnimationProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryAnimationProviderInterface, UInventoryAnimationProviderInterface::StaticClass, TEXT("UInventoryAnimationProviderInterface"), &Z_Registration_Info_UClass_UInventoryAnimationProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryAnimationProviderInterface), 1879792338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_3547715747(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

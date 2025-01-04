// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Interfaces/FactionSourceInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionSourceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSourceInterface();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSourceInterface_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Interface UFactionSourceInterface Function CanProvideFactionValues
struct FactionSourceInterface_eventCanProvideFactionValues_Parms
{
	const UNinjaFactionDataAsset* Faction;
	int32 Reputation;
	FGameplayTag EventTag;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FactionSourceInterface_eventCanProvideFactionValues_Parms()
		: ReturnValue(false)
	{
	}
};
bool IFactionSourceInterface::CanProvideFactionValues(const UNinjaFactionDataAsset* Faction, int32 Reputation, FGameplayTag EventTag) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanProvideFactionValues instead.");
	FactionSourceInterface_eventCanProvideFactionValues_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFactionSourceInterface_CanProvideFactionValues = FName(TEXT("CanProvideFactionValues"));
bool IFactionSourceInterface::Execute_CanProvideFactionValues(const UObject* O, const UNinjaFactionDataAsset* Faction, int32 Reputation, FGameplayTag EventTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFactionSourceInterface::StaticClass()));
	FactionSourceInterface_eventCanProvideFactionValues_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFactionSourceInterface_CanProvideFactionValues);
	if (Func)
	{
		Parms.Faction=Faction;
		Parms.Reputation=Reputation;
		Parms.EventTag=EventTag;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFactionSourceInterface*)(O->GetNativeInterfaceAddress(UFactionSourceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanProvideFactionValues_Implementation(Faction,Reputation,EventTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Source Interface" },
		{ "Comment", "/**\n     * Checks if this source can actually provide a certain Faction and Reputation.\n     *\n     * @param Faction       Faction to be evaluated.\n     * @param Reputation    Amount of reputation being evaluated.\n     * @param EventTag\x09\x09""Event that would potentially yield such reputation gains.\n     * @return              True if this faction and reputation can be granted by this character.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/FactionSourceInterface.h" },
		{ "ToolTip", "Checks if this source can actually provide a certain Faction and Reputation.\n\n@param Faction       Faction to be evaluated.\n@param Reputation    Amount of reputation being evaluated.\n@param EventTag         Event that would potentially yield such reputation gains.\n@return              True if this faction and reputation can be granted by this character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Faction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSourceInterface_eventCanProvideFactionValues_Parms, Faction), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faction_MetaData), NewProp_Faction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSourceInterface_eventCanProvideFactionValues_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSourceInterface_eventCanProvideFactionValues_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FactionSourceInterface_eventCanProvideFactionValues_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FactionSourceInterface_eventCanProvideFactionValues_Parms), &Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_Faction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionSourceInterface, nullptr, "CanProvideFactionValues", nullptr, nullptr, Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::PropPointers), sizeof(FactionSourceInterface_eventCanProvideFactionValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(FactionSourceInterface_eventCanProvideFactionValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFactionSourceInterface::execCanProvideFactionValues)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_Faction);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanProvideFactionValues_Implementation(Z_Param_Faction,Z_Param_Reputation,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Interface UFactionSourceInterface Function CanProvideFactionValues

// Begin Interface UFactionSourceInterface Function GetReputationRewards
struct FactionSourceInterface_eventGetReputationRewards_Parms
{
	const UNinjaFactionComponent* FactionMember;
	FGameplayTag EventTag;
	TMap<UNinjaFactionDataAsset*,int32> ReturnValue;
};
TMap<UNinjaFactionDataAsset*,int32> IFactionSourceInterface::GetReputationRewards(const UNinjaFactionComponent* FactionMember, FGameplayTag EventTag) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetReputationRewards instead.");
	FactionSourceInterface_eventGetReputationRewards_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFactionSourceInterface_GetReputationRewards = FName(TEXT("GetReputationRewards"));
TMap<UNinjaFactionDataAsset*,int32> IFactionSourceInterface::Execute_GetReputationRewards(const UObject* O, const UNinjaFactionComponent* FactionMember, FGameplayTag EventTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFactionSourceInterface::StaticClass()));
	FactionSourceInterface_eventGetReputationRewards_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFactionSourceInterface_GetReputationRewards);
	if (Func)
	{
		Parms.FactionMember=FactionMember;
		Parms.EventTag=EventTag;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFactionSourceInterface*)(O->GetNativeInterfaceAddress(UFactionSourceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetReputationRewards_Implementation(FactionMember,EventTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Source Interface" },
		{ "Comment", "/**\n     * Provides a map of all reputation rewards granted by this source.\n     *\n     * For Event Types, you can use the \"Faction Event Type\" enum as a starting point, but you\n     * can create your own enumeration or constant values to represent your own events.\n     *\n     * @param FactionMember\n     *      The member requesting the rewards. You may use this to modify the rewards so, for\n     *      example, the faction is always dynamic, based on the requesting member.\n     *      \n     * @param EventTag\n     *      Arbitrary event type, used to differentiate multiple reasons why this reward is\n     *      being collected. Available events are to be defined by each project, but some common\n     *      examples would be \"character was killed\", \"item was collected\", \"quest was finished\".\n     *\n     * @return\n     *      A map of factions and reputation gains provided by this source, for a given event.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/FactionSourceInterface.h" },
		{ "ToolTip", "Provides a map of all reputation rewards granted by this source.\n\nFor Event Types, you can use the \"Faction Event Type\" enum as a starting point, but you\ncan create your own enumeration or constant values to represent your own events.\n\n@param FactionMember\n     The member requesting the rewards. You may use this to modify the rewards so, for\n     example, the faction is always dynamic, based on the requesting member.\n\n@param EventTag\n     Arbitrary event type, used to differentiate multiple reasons why this reward is\n     being collected. Available events are to be defined by each project, but some common\n     examples would be \"character was killed\", \"item was collected\", \"quest was finished\".\n\n@return\n     A map of factions and reputation gains provided by this source, for a given event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionMember_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionMember;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_FactionMember = { "FactionMember", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSourceInterface_eventGetReputationRewards_Parms, FactionMember), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionMember_MetaData), NewProp_FactionMember_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSourceInterface_eventGetReputationRewards_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactionSourceInterface_eventGetReputationRewards_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_FactionMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionSourceInterface, nullptr, "GetReputationRewards", nullptr, nullptr, Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::PropPointers), sizeof(FactionSourceInterface_eventGetReputationRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::Function_MetaDataParams) };
static_assert(sizeof(FactionSourceInterface_eventGetReputationRewards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFactionSourceInterface::execGetReputationRewards)
{
	P_GET_OBJECT(UNinjaFactionComponent,Z_Param_FactionMember);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UNinjaFactionDataAsset*,int32>*)Z_Param__Result=P_THIS->GetReputationRewards_Implementation(Z_Param_FactionMember,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Interface UFactionSourceInterface Function GetReputationRewards

// Begin Interface UFactionSourceInterface
void UFactionSourceInterface::StaticRegisterNativesUFactionSourceInterface()
{
	UClass* Class = UFactionSourceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanProvideFactionValues", &IFactionSourceInterface::execCanProvideFactionValues },
		{ "GetReputationRewards", &IFactionSourceInterface::execGetReputationRewards },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactionSourceInterface);
UClass* Z_Construct_UClass_UFactionSourceInterface_NoRegister()
{
	return UFactionSourceInterface::StaticClass();
}
struct Z_Construct_UClass_UFactionSourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/FactionSourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactionSourceInterface_CanProvideFactionValues, "CanProvideFactionValues" }, // 785460820
		{ &Z_Construct_UFunction_UFactionSourceInterface_GetReputationRewards, "GetReputationRewards" }, // 885749306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFactionSourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactionSourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionSourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactionSourceInterface_Statics::ClassParams = {
	&UFactionSourceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionSourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactionSourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactionSourceInterface()
{
	if (!Z_Registration_Info_UClass_UFactionSourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactionSourceInterface.OuterSingleton, Z_Construct_UClass_UFactionSourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactionSourceInterface.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UFactionSourceInterface>()
{
	return UFactionSourceInterface::StaticClass();
}
UFactionSourceInterface::UFactionSourceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionSourceInterface);
UFactionSourceInterface::~UFactionSourceInterface() {}
// End Interface UFactionSourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactionSourceInterface, UFactionSourceInterface::StaticClass, TEXT("UFactionSourceInterface"), &Z_Registration_Info_UClass_UFactionSourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactionSourceInterface), 3858788717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_3988663299(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

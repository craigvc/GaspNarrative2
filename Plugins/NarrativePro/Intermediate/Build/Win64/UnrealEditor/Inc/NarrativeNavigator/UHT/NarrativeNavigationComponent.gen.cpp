// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/NarrativeNavigationComponent.h"
#include "NarrativeNavigator/Public/NavigationSubsystem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNavigationComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ACustomWaypoint_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_AMapTileBounds_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UMapTileComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature();
NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature();
NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature();
NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPointOfInterestLocation();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Delegate FOnMarkerAdded
struct Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics
{
	struct _Script_NarrativeNavigator_eventOnMarkerAdded_Parms
	{
		UNavigationMarkerComponent* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNavigator_eventOnMarkerAdded_Parms, Marker), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Marker_MetaData), NewProp_Marker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNavigator, nullptr, "OnMarkerAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnMarkerAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnMarkerAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMarkerAdded_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerAdded, UNavigationMarkerComponent* Marker)
{
	struct _Script_NarrativeNavigator_eventOnMarkerAdded_Parms
	{
		UNavigationMarkerComponent* Marker;
	};
	_Script_NarrativeNavigator_eventOnMarkerAdded_Parms Parms;
	Parms.Marker=Marker;
	OnMarkerAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMarkerAdded

// Begin Delegate FOnMarkerRemoved
struct Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics
{
	struct _Script_NarrativeNavigator_eventOnMarkerRemoved_Parms
	{
		UNavigationMarkerComponent* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNavigator_eventOnMarkerRemoved_Parms, Marker), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Marker_MetaData), NewProp_Marker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNavigator, nullptr, "OnMarkerRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnMarkerRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnMarkerRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMarkerRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerRemoved, UNavigationMarkerComponent* Marker)
{
	struct _Script_NarrativeNavigator_eventOnMarkerRemoved_Parms
	{
		UNavigationMarkerComponent* Marker;
	};
	_Script_NarrativeNavigator_eventOnMarkerRemoved_Parms Parms;
	Parms.Marker=Marker;
	OnMarkerRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMarkerRemoved

// Begin Delegate FOnDiscoverPointOfInterest
struct Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics
{
	struct _Script_NarrativeNavigator_eventOnDiscoverPointOfInterest_Parms
	{
		FGameplayTag POITag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNavigator_eventOnDiscoverPointOfInterest_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::NewProp_POITag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNavigator, nullptr, "OnDiscoverPointOfInterest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnDiscoverPointOfInterest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnDiscoverPointOfInterest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDiscoverPointOfInterest_DelegateWrapper(const FMulticastScriptDelegate& OnDiscoverPointOfInterest, FGameplayTag const& POITag)
{
	struct _Script_NarrativeNavigator_eventOnDiscoverPointOfInterest_Parms
	{
		FGameplayTag POITag;
	};
	_Script_NarrativeNavigator_eventOnDiscoverPointOfInterest_Parms Parms;
	Parms.POITag=POITag;
	OnDiscoverPointOfInterest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDiscoverPointOfInterest

// Begin Delegate FOnFastTravelRequested
struct Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics
{
	struct _Script_NarrativeNavigator_eventOnFastTravelRequested_Parms
	{
		FPointOfInterestLocation POI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::NewProp_POI = { "POI", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNavigator_eventOnFastTravelRequested_Parms, POI), Z_Construct_UScriptStruct_FPointOfInterestLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_MetaData), NewProp_POI_MetaData) }; // 3732342648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::NewProp_POI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNavigator, nullptr, "OnFastTravelRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnFastTravelRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnFastTravelRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFastTravelRequested_DelegateWrapper(const FMulticastScriptDelegate& OnFastTravelRequested, FPointOfInterestLocation const& POI)
{
	struct _Script_NarrativeNavigator_eventOnFastTravelRequested_Parms
	{
		FPointOfInterestLocation POI;
	};
	_Script_NarrativeNavigator_eventOnFastTravelRequested_Parms Parms;
	Parms.POI=POI;
	OnFastTravelRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFastTravelRequested

// Begin Class UNarrativeNavigationComponent Function DiscoverPOI
struct Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics
{
	struct NarrativeNavigationComponent_eventDiscoverPOI_Parms
	{
		FGameplayTag POITag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Set a POI as having been \"discovered\" by the player\n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Set a POI as having been \"discovered\" by the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventDiscoverPOI_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NewProp_POITag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "DiscoverPOI", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NarrativeNavigationComponent_eventDiscoverPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NarrativeNavigationComponent_eventDiscoverPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execDiscoverPOI)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DiscoverPOI(Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function DiscoverPOI

// Begin Class UNarrativeNavigationComponent Function HasDiscoveredPOI
struct Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics
{
	struct NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms
	{
		FGameplayTag POITag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Check if we've found the given POI in the world\n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Check if we've found the given POI in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "HasDiscoveredPOI", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execHasDiscoveredPOI)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDiscoveredPOI(Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function HasDiscoveredPOI

// Begin Class UNarrativeNavigationComponent Function PlaceCustomWaypoint
struct Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics
{
	struct NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms
	{
		FTransform Transform;
		ACustomWaypoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms, ReturnValue), Z_Construct_UClass_ACustomWaypoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "PlaceCustomWaypoint", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execPlaceCustomWaypoint)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACustomWaypoint**)Z_Param__Result=P_THIS->PlaceCustomWaypoint(Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function PlaceCustomWaypoint

// Begin Class UNarrativeNavigationComponent Function RemoveCustomWaypoint
struct Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics
{
	struct NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms
	{
		ACustomWaypoint* Waypoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Waypoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NewProp_Waypoint = { "Waypoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms, Waypoint), Z_Construct_UClass_ACustomWaypoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NewProp_Waypoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "RemoveCustomWaypoint", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execRemoveCustomWaypoint)
{
	P_GET_OBJECT(ACustomWaypoint,Z_Param_Waypoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCustomWaypoint(Z_Param_Waypoint);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function RemoveCustomWaypoint

// Begin Class UNarrativeNavigationComponent Function SelectMarker
struct Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics
{
	struct NarrativeNavigationComponent_eventSelectMarker_Parms
	{
		UNavigationMarkerComponent* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventSelectMarker_Parms, Marker), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Marker_MetaData), NewProp_Marker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "SelectMarker", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NarrativeNavigationComponent_eventSelectMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NarrativeNavigationComponent_eventSelectMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execSelectMarker)
{
	P_GET_OBJECT(UNavigationMarkerComponent,Z_Param_Marker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectMarker(Z_Param_Marker);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function SelectMarker

// Begin Class UNarrativeNavigationComponent Function ServerSelectMarker
struct NarrativeNavigationComponent_eventServerSelectMarker_Parms
{
	UNavigationMarkerComponent* Marker;
};
static const FName NAME_UNarrativeNavigationComponent_ServerSelectMarker = FName(TEXT("ServerSelectMarker"));
void UNarrativeNavigationComponent::ServerSelectMarker(UNavigationMarkerComponent* Marker)
{
	NarrativeNavigationComponent_eventServerSelectMarker_Parms Parms;
	Parms.Marker=Marker;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeNavigationComponent_ServerSelectMarker);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventServerSelectMarker_Parms, Marker), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Marker_MetaData), NewProp_Marker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "ServerSelectMarker", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::PropPointers), sizeof(NarrativeNavigationComponent_eventServerSelectMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNavigationComponent_eventServerSelectMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execServerSelectMarker)
{
	P_GET_OBJECT(UNavigationMarkerComponent,Z_Param_Marker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSelectMarker_Implementation(Z_Param_Marker);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function ServerSelectMarker

// Begin Class UNarrativeNavigationComponent Function SetMapLayer
struct Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics
{
	struct NarrativeNavigationComponent_eventSetMapLayer_Parms
	{
		FGameplayTag NewLayer;
		FGameplayTagContainer Domains;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Layers" },
		{ "Comment", "//Set the layer of this map tile for the given domains \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Set the layer of this map tile for the given domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLayer_MetaData[] = {
		{ "Categories", "Navigator.MapLayer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Domains;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_NewLayer = { "NewLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventSetMapLayer_Parms, NewLayer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLayer_MetaData), NewProp_NewLayer_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_Domains = { "Domains", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventSetMapLayer_Parms, Domains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domains_MetaData), NewProp_Domains_MetaData) }; // 3352185621
void Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventSetMapLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventSetMapLayer_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_NewLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_Domains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "SetMapLayer", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NarrativeNavigationComponent_eventSetMapLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NarrativeNavigationComponent_eventSetMapLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execSetMapLayer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_NewLayer);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_Domains);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMapLayer(Z_Param_NewLayer,Z_Param_Domains);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function SetMapLayer

// Begin Class UNarrativeNavigationComponent
void UNarrativeNavigationComponent::StaticRegisterNativesUNarrativeNavigationComponent()
{
	UClass* Class = UNarrativeNavigationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DiscoverPOI", &UNarrativeNavigationComponent::execDiscoverPOI },
		{ "HasDiscoveredPOI", &UNarrativeNavigationComponent::execHasDiscoveredPOI },
		{ "PlaceCustomWaypoint", &UNarrativeNavigationComponent::execPlaceCustomWaypoint },
		{ "RemoveCustomWaypoint", &UNarrativeNavigationComponent::execRemoveCustomWaypoint },
		{ "SelectMarker", &UNarrativeNavigationComponent::execSelectMarker },
		{ "ServerSelectMarker", &UNarrativeNavigationComponent::execServerSelectMarker },
		{ "SetMapLayer", &UNarrativeNavigationComponent::execSetMapLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeNavigationComponent);
UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister()
{
	return UNarrativeNavigationComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeNavigationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\nAdd this to your PlayerController.\n\nTo enable navigation, add this to your controller, and you're away.  */" },
		{ "DisplayName", "Navigation Component" },
		{ "IncludePath", "NarrativeNavigationComponent.h" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Add this to your PlayerController.\n\nTo enable navigation, add this to your controller, and you're away." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCustomMarkerTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveredPOIs_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/**Contains all the POI's we've found */" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Contains all the POI's we've found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomWaypoints_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//Our custom waypoints that we've placed. These are serialized to disk. s\n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Our custom waypoints that we've placed. These are serialized to disk. s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//How many unreal units wide (cm) is your map image? Enter it here. \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "How many unreal units wide (cm) is your map image? Enter it here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapOrigin_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//What position in the world is the center of your map? Enter that position here. (ie where was the camera located that you took your map shot from)\n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "What position in the world is the center of your map? Enter that position here. (ie where was the camera located that you took your map shot from)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCustomWaypoints_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//The max number of custom waypoints we're allowed to place in the world \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "The max number of custom waypoints we're allowed to place in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTileBounds_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//The bounds we've found in the world, should one exist \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "The bounds we've found in the world, should one exist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//All of the markers currently being tracked by this navigation component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "All of the markers currently being tracked by this navigation component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTiles_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//We cache map tiles seperately for quick access\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "We cache map tiles seperately for quick access" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMarkerAdded_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a marker is added to our navigation\n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a marker is added to our navigation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMarkerRemoved_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a marker is removed from our navigation \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a marker is removed from our navigation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPOIDiscovered_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a point of interest has been discovered, in case you want to add a message to the UI or something similar \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a point of interest has been discovered, in case you want to add a message to the UI or something similar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFastTravelRequested_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a fast travel has been requested - each games fast travel implemtation may be game specific. \n" },
		{ "ModuleRelativePath", "Public/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a fast travel has been requested - each games fast travel implemtation may be game specific." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCustomMarkerTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedCustomMarkerTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiscoveredPOIs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomWaypoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCustomWaypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTileBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTiles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MapTiles;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMarkerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMarkerRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPOIDiscovered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFastTravelRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI, "DiscoverPOI" }, // 3360016449
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI, "HasDiscoveredPOI" }, // 977070563
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint, "PlaceCustomWaypoint" }, // 3286513213
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint, "RemoveCustomWaypoint" }, // 2524208725
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker, "SelectMarker" }, // 2597658271
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_ServerSelectMarker, "ServerSelectMarker" }, // 3399552950
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer, "SetMapLayer" }, // 860135370
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeNavigationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms_Inner = { "SavedCustomMarkerTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms = { "SavedCustomMarkerTransforms", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, SavedCustomMarkerTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCustomMarkerTransforms_MetaData), NewProp_SavedCustomMarkerTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_DiscoveredPOIs = { "DiscoveredPOIs", nullptr, (EPropertyFlags)0x0020080001000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, DiscoveredPOIs), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscoveredPOIs_MetaData), NewProp_DiscoveredPOIs_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints_Inner = { "CustomWaypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACustomWaypoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints = { "CustomWaypoints", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, CustomWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomWaypoints_MetaData), NewProp_CustomWaypoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapWidth_MetaData), NewProp_MapWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapOrigin = { "MapOrigin", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapOrigin_MetaData), NewProp_MapOrigin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MaxCustomWaypoints = { "MaxCustomWaypoints", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MaxCustomWaypoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCustomWaypoints_MetaData), NewProp_MaxCustomWaypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTileBounds = { "MapTileBounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapTileBounds), Z_Construct_UClass_AMapTileBounds_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTileBounds_MetaData), NewProp_MapTileBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles_ElementProp = { "MapTiles", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapTileComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles = { "MapTiles", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTiles_MetaData), NewProp_MapTiles_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerAdded = { "OnMarkerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnMarkerAdded), Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMarkerAdded_MetaData), NewProp_OnMarkerAdded_MetaData) }; // 1427637595
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerRemoved = { "OnMarkerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnMarkerRemoved), Z_Construct_UDelegateFunction_NarrativeNavigator_OnMarkerRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMarkerRemoved_MetaData), NewProp_OnMarkerRemoved_MetaData) }; // 753381616
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnPOIDiscovered = { "OnPOIDiscovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnPOIDiscovered), Z_Construct_UDelegateFunction_NarrativeNavigator_OnDiscoverPointOfInterest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPOIDiscovered_MetaData), NewProp_OnPOIDiscovered_MetaData) }; // 3173808967
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnFastTravelRequested = { "OnFastTravelRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnFastTravelRequested), Z_Construct_UDelegateFunction_NarrativeNavigator_OnFastTravelRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFastTravelRequested_MetaData), NewProp_OnFastTravelRequested_MetaData) }; // 2956471495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_DiscoveredPOIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MaxCustomWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTileBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnPOIDiscovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnFastTravelRequested,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeNavigationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeNavigationComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::ClassParams = {
	&UNarrativeNavigationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeNavigationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeNavigationComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeNavigationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeNavigationComponent.OuterSingleton, Z_Construct_UClass_UNarrativeNavigationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeNavigationComponent.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UNarrativeNavigationComponent>()
{
	return UNarrativeNavigationComponent::StaticClass();
}
void UNarrativeNavigationComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DiscoveredPOIs(TEXT("DiscoveredPOIs"));
	const bool bIsValid = true
		&& Name_DiscoveredPOIs == ClassReps[(int32)ENetFields_Private::DiscoveredPOIs].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeNavigationComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeNavigationComponent);
UNarrativeNavigationComponent::~UNarrativeNavigationComponent() {}
// End Class UNarrativeNavigationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeNavigationComponent, UNarrativeNavigationComponent::StaticClass, TEXT("UNarrativeNavigationComponent"), &Z_Registration_Info_UClass_UNarrativeNavigationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeNavigationComponent), 1625979747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_3495764483(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

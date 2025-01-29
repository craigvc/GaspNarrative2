// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/NavigationSubsystem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationSubsystem();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationSubsystem_NoRegister();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPointOfInterestLocation();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin ScriptStruct FPointOfInterestLocation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointOfInterestLocation;
class UScriptStruct* FPointOfInterestLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointOfInterestLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointOfInterestLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointOfInterestLocation, (UObject*)Z_Construct_UPackage__Script_NarrativeNavigator(), TEXT("PointOfInterestLocation"));
	}
	return Z_Registration_Info_UScriptStruct_PointOfInterestLocation.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UScriptStruct* StaticStruct<FPointOfInterestLocation>()
{
	return FPointOfInterestLocation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "Category", "Point of Interest" },
		{ "Comment", "//The POI Tag ID \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "The POI Tag ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIActor_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Optional actor that the POI refers to - if the actor moves around, the location will match the actors position. \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Optional actor that the POI refers to - if the actor moves around, the location will match the actors position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIMarker_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Optional POI marker that the POI was generated from - we cache this here so we can refresh the marker when discovered\n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Optional POI marker that the POI was generated from - we cache this here so we can refresh the marker when discovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POILocation_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Fixed location the POI can refer to - useful for POIs that don't move around. \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Fixed location the POI can refer to - useful for POIs that don't move around." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIDisplayName_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//The display name the POI should show, for example if we discover a POI. \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "The display name the POI should show, for example if we discover a POI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_POIActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_POIMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILocation;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POIDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointOfInterestLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointOfInterestLocation, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POIActor = { "POIActor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointOfInterestLocation, POIActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIActor_MetaData), NewProp_POIActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POIMarker = { "POIMarker", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointOfInterestLocation, POIMarker), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIMarker_MetaData), NewProp_POIMarker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POILocation = { "POILocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointOfInterestLocation, POILocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILocation_MetaData), NewProp_POILocation_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POIDisplayName = { "POIDisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointOfInterestLocation, POIDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIDisplayName_MetaData), NewProp_POIDisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POIActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POIMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POILocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewProp_POIDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
	nullptr,
	&NewStructOps,
	"PointOfInterestLocation",
	Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::PropPointers),
	sizeof(FPointOfInterestLocation),
	alignof(FPointOfInterestLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointOfInterestLocation()
{
	if (!Z_Registration_Info_UScriptStruct_PointOfInterestLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointOfInterestLocation.InnerSingleton, Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PointOfInterestLocation.InnerSingleton;
}
// End ScriptStruct FPointOfInterestLocation

// Begin Class UNavigationSubsystem Function AddPointOfInterest_Actor
struct Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics
{
	struct NavigationSubsystem_eventAddPointOfInterest_Actor_Parms
	{
		FGameplayTag POITag;
		FText POIDisplayName;
		AActor* POIActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Add an actor POI. POI will return actors location as actor moves\n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Add an actor POI. POI will return actors location as actor moves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POIDisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_POIActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventAddPointOfInterest_Actor_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_POIDisplayName = { "POIDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventAddPointOfInterest_Actor_Parms, POIDisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_POIActor = { "POIActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventAddPointOfInterest_Actor_Parms, POIActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationSubsystem_eventAddPointOfInterest_Actor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationSubsystem_eventAddPointOfInterest_Actor_Parms), &Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_POIDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_POIActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSubsystem, nullptr, "AddPointOfInterest_Actor", nullptr, nullptr, Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NavigationSubsystem_eventAddPointOfInterest_Actor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::NavigationSubsystem_eventAddPointOfInterest_Actor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationSubsystem::execAddPointOfInterest_Actor)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_POITag);
	P_GET_PROPERTY(FTextProperty,Z_Param_POIDisplayName);
	P_GET_OBJECT(AActor,Z_Param_POIActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddPointOfInterest_Actor(Z_Param_POITag,Z_Param_POIDisplayName,Z_Param_POIActor);
	P_NATIVE_END;
}
// End Class UNavigationSubsystem Function AddPointOfInterest_Actor

// Begin Class UNavigationSubsystem Function AddPointOfInterest_Vector
struct Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics
{
	struct NavigationSubsystem_eventAddPointOfInterest_Vector_Parms
	{
		FGameplayTag POITag;
		FText POIDisplayName;
		FVector POILocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Add an POI using a fixed location that doesn't change position \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Add an POI using a fixed location that doesn't change position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POILocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POIDisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventAddPointOfInterest_Vector_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_POIDisplayName = { "POIDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventAddPointOfInterest_Vector_Parms, POIDisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_POILocation = { "POILocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventAddPointOfInterest_Vector_Parms, POILocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILocation_MetaData), NewProp_POILocation_MetaData) };
void Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationSubsystem_eventAddPointOfInterest_Vector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationSubsystem_eventAddPointOfInterest_Vector_Parms), &Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_POIDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_POILocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSubsystem, nullptr, "AddPointOfInterest_Vector", nullptr, nullptr, Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NavigationSubsystem_eventAddPointOfInterest_Vector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::NavigationSubsystem_eventAddPointOfInterest_Vector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationSubsystem::execAddPointOfInterest_Vector)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_POITag);
	P_GET_PROPERTY(FTextProperty,Z_Param_POIDisplayName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_POILocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddPointOfInterest_Vector(Z_Param_POITag,Z_Param_POIDisplayName,Z_Param_Out_POILocation);
	P_NATIVE_END;
}
// End Class UNavigationSubsystem Function AddPointOfInterest_Vector

// Begin Class UNavigationSubsystem Function GetNearestPOIToPoint
struct Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics
{
	struct NavigationSubsystem_eventGetNearestPOIToPoint_Parms
	{
		FPointOfInterestLocation OutPointOfInterest;
		FVector TestLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Find POI that is nearest to the given location\n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Find POI that is nearest to the given location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestLocation_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPointOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_OutPointOfInterest = { "OutPointOfInterest", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventGetNearestPOIToPoint_Parms, OutPointOfInterest), Z_Construct_UScriptStruct_FPointOfInterestLocation, METADATA_PARAMS(0, nullptr) }; // 3732342648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventGetNearestPOIToPoint_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestLocation_MetaData), NewProp_TestLocation_MetaData) };
void Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationSubsystem_eventGetNearestPOIToPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationSubsystem_eventGetNearestPOIToPoint_Parms), &Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_OutPointOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_TestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSubsystem, nullptr, "GetNearestPOIToPoint", nullptr, nullptr, Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NavigationSubsystem_eventGetNearestPOIToPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::NavigationSubsystem_eventGetNearestPOIToPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationSubsystem::execGetNearestPOIToPoint)
{
	P_GET_STRUCT_REF(FPointOfInterestLocation,Z_Param_Out_OutPointOfInterest);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TestLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNearestPOIToPoint(Z_Param_Out_OutPointOfInterest,Z_Param_Out_TestLocation);
	P_NATIVE_END;
}
// End Class UNavigationSubsystem Function GetNearestPOIToPoint

// Begin Class UNavigationSubsystem Function GetPointOfInterest
struct Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics
{
	struct NavigationSubsystem_eventGetPointOfInterest_Parms
	{
		FPointOfInterestLocation OutPointOfInterest;
		FGameplayTag POITag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Return a POI that has previously been cached. \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Return a POI that has previously been cached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPointOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_OutPointOfInterest = { "OutPointOfInterest", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventGetPointOfInterest_Parms, OutPointOfInterest), Z_Construct_UScriptStruct_FPointOfInterestLocation, METADATA_PARAMS(0, nullptr) }; // 3732342648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventGetPointOfInterest_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationSubsystem_eventGetPointOfInterest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationSubsystem_eventGetPointOfInterest_Parms), &Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_OutPointOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSubsystem, nullptr, "GetPointOfInterest", nullptr, nullptr, Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NavigationSubsystem_eventGetPointOfInterest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NavigationSubsystem_eventGetPointOfInterest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationSubsystem::execGetPointOfInterest)
{
	P_GET_STRUCT_REF(FPointOfInterestLocation,Z_Param_Out_OutPointOfInterest);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPointOfInterest(Z_Param_Out_OutPointOfInterest,Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNavigationSubsystem Function GetPointOfInterest

// Begin Class UNavigationSubsystem
void UNavigationSubsystem::StaticRegisterNativesUNavigationSubsystem()
{
	UClass* Class = UNavigationSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPointOfInterest_Actor", &UNavigationSubsystem::execAddPointOfInterest_Actor },
		{ "AddPointOfInterest_Vector", &UNavigationSubsystem::execAddPointOfInterest_Vector },
		{ "GetNearestPOIToPoint", &UNavigationSubsystem::execGetNearestPOIToPoint },
		{ "GetPointOfInterest", &UNavigationSubsystem::execGetPointOfInterest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSubsystem);
UClass* Z_Construct_UClass_UNavigationSubsystem_NoRegister()
{
	return UNavigationSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNavigationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem for navigator, at the moment just used for caching POIs. \n */" },
		{ "IncludePath", "NavigationSubsystem.h" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "Subsystem for navigator, at the moment just used for caching POIs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[] = {
		{ "Comment", "//We cache POIs using tags for efficient lookups \n" },
		{ "ModuleRelativePath", "Public/NavigationSubsystem.h" },
		{ "ToolTip", "We cache POIs using tags for efficient lookups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PointsOfInterest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Actor, "AddPointOfInterest_Actor" }, // 379669742
		{ &Z_Construct_UFunction_UNavigationSubsystem_AddPointOfInterest_Vector, "AddPointOfInterest_Vector" }, // 3288619174
		{ &Z_Construct_UFunction_UNavigationSubsystem_GetNearestPOIToPoint, "GetNearestPOIToPoint" }, // 2095158995
		{ &Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest, "GetPointOfInterest" }, // 1397496716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_PointsOfInterest_ValueProp = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPointOfInterestLocation, METADATA_PARAMS(0, nullptr) }; // 3732342648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_PointsOfInterest_Key_KeyProp = { "PointsOfInterest_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationSubsystem, PointsOfInterest), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsOfInterest_MetaData), NewProp_PointsOfInterest_MetaData) }; // 1298103297 3732342648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_PointsOfInterest_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_PointsOfInterest_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_PointsOfInterest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSubsystem_Statics::ClassParams = {
	&UNavigationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationSubsystem()
{
	if (!Z_Registration_Info_UClass_UNavigationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSubsystem.OuterSingleton, Z_Construct_UClass_UNavigationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationSubsystem.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UNavigationSubsystem>()
{
	return UNavigationSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSubsystem);
UNavigationSubsystem::~UNavigationSubsystem() {}
// End Class UNavigationSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPointOfInterestLocation::StaticStruct, Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics::NewStructOps, TEXT("PointOfInterestLocation"), &Z_Registration_Info_UScriptStruct_PointOfInterestLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointOfInterestLocation), 3732342648U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationSubsystem, UNavigationSubsystem::StaticClass, TEXT("UNavigationSubsystem"), &Z_Registration_Info_UClass_UNavigationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSubsystem), 2760389908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_1003642416(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/NavigationMarkerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationMarkerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature();
NARRATIVENAVIGATOR_API UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationMarkerSettings();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneDrawData();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Delegate FOnRefreshRequired
struct Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNavigator, nullptr, "OnRefreshRequired__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRefreshRequired_DelegateWrapper(const FMulticastScriptDelegate& OnRefreshRequired)
{
	OnRefreshRequired.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRefreshRequired

// Begin Delegate FOnSelected
struct Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics
{
	struct _Script_NarrativeNavigator_eventOnSelected_Parms
	{
		UNarrativeNavigationComponent* Selector;
		APlayerController* SelectorOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNavigator_eventOnSelected_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::NewProp_SelectorOwner = { "SelectorOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNavigator_eventOnSelected_Parms, SelectorOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::NewProp_SelectorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNavigator, nullptr, "OnSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::_Script_NarrativeNavigator_eventOnSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSelected, UNarrativeNavigationComponent* Selector, APlayerController* SelectorOwner)
{
	struct _Script_NarrativeNavigator_eventOnSelected_Parms
	{
		UNarrativeNavigationComponent* Selector;
		APlayerController* SelectorOwner;
	};
	_Script_NarrativeNavigator_eventOnSelected_Parms Parms;
	Parms.Selector=Selector;
	Parms.SelectorOwner=SelectorOwner;
	OnSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSelected

// Begin ScriptStruct FZoneDrawData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneDrawData;
class UScriptStruct* FZoneDrawData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneDrawData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneDrawData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneDrawData, (UObject*)Z_Construct_UPackage__Script_NarrativeNavigator(), TEXT("ZoneDrawData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneDrawData.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UScriptStruct* StaticStruct<FZoneDrawData>()
{
	return FZoneDrawData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FZoneDrawData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Map Points" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneDrawData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneDrawData, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneDrawData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
	nullptr,
	&NewStructOps,
	"ZoneDrawData",
	Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers),
	sizeof(FZoneDrawData),
	alignof(FZoneDrawData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneDrawData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneDrawData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneDrawData()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneDrawData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneDrawData.InnerSingleton, Z_Construct_UScriptStruct_FZoneDrawData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ZoneDrawData.InnerSingleton;
}
// End ScriptStruct FZoneDrawData

// Begin ScriptStruct FNavigationMarkerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationMarkerSettings;
class UScriptStruct* FNavigationMarkerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMarkerSettings, (UObject*)Z_Construct_UPackage__Script_NarrativeNavigator(), TEXT("NavigationMarkerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UScriptStruct* StaticStruct<FNavigationMarkerSettings>()
{
	return FNavigationMarkerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocationDisplayName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocationIcon_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IconTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IconSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IconOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bShowActorRotation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationDisplayName_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The display name to use for this location \n" },
		{ "EditCondition", "bOverride_LocationDisplayName" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "The display name to use for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationIcon_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The icon to use for this location \n" },
		{ "EditCondition", "bOverride_LocationIcon" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "The icon to use for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTint_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Tint for the icon\n" },
		{ "EditCondition", "bOverride_IconTint" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Tint for the icon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The icons size on the compass, map, screen marker, whereever the icon is being used \n" },
		{ "EditCondition", "bOverride_IconSize" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "The icons size on the compass, map, screen marker, whereever the icon is being used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconOffset_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Add an offset in the actors space - more efficient than making markers scene components with a transform \n" },
		{ "EditCondition", "bOverride_IconOffset" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Add an offset in the actors space - more efficient than making markers scene components with a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowActorRotation_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Whether this markers rotation should be shown on the map, for any navigator widgets that use this feature\n" },
		{ "EditCondition", "bOverride_bShowActorRotation" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Whether this markers rotation should be shown on the map, for any navigator widgets that use this feature" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_LocationDisplayName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocationDisplayName;
	static void NewProp_bOverride_LocationIcon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocationIcon;
	static void NewProp_bOverride_IconTint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IconTint;
	static void NewProp_bOverride_IconSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IconSize;
	static void NewProp_bOverride_IconOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IconOffset;
	static void NewProp_bOverride_bShowActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bShowActorRotation;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LocationDisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconOffset;
	static void NewProp_bShowActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowActorRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationMarkerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_LocationDisplayName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName = { "bOverride_LocationDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocationDisplayName_MetaData), NewProp_bOverride_LocationDisplayName_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_LocationIcon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon = { "bOverride_LocationIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocationIcon_MetaData), NewProp_bOverride_LocationIcon_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_IconTint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint = { "bOverride_IconTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IconTint_MetaData), NewProp_bOverride_IconTint_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_IconSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize = { "bOverride_IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IconSize_MetaData), NewProp_bOverride_IconSize_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_IconOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset = { "bOverride_IconOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IconOffset_MetaData), NewProp_bOverride_IconOffset_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_bShowActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation = { "bOverride_bShowActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_bShowActorRotation_MetaData), NewProp_bOverride_bShowActorRotation_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_LocationDisplayName = { "LocationDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, LocationDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationDisplayName_MetaData), NewProp_LocationDisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_LocationIcon = { "LocationIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, LocationIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationIcon_MetaData), NewProp_LocationIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconTint = { "IconTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, IconTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTint_MetaData), NewProp_IconTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconOffset = { "IconOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, IconOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconOffset_MetaData), NewProp_IconOffset_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bShowActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation = { "bShowActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowActorRotation_MetaData), NewProp_bShowActorRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_LocationDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_LocationIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
	nullptr,
	&NewStructOps,
	"NavigationMarkerSettings",
	Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers),
	sizeof(FNavigationMarkerSettings),
	alignof(FNavigationMarkerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavigationMarkerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.InnerSingleton, Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.InnerSingleton;
}
// End ScriptStruct FNavigationMarkerSettings

// Begin Class UNavigationMarkerComponent Function AddDomains
struct Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics
{
	struct NavigationMarkerComponent_eventAddDomains_Parms
	{
		FGameplayTagContainer NewMarkerDomains;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "// addd domains \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "addd domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMarkerDomains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMarkerDomains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::NewProp_NewMarkerDomains = { "NewMarkerDomains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventAddDomains_Parms, NewMarkerDomains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMarkerDomains_MetaData), NewProp_NewMarkerDomains_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::NewProp_NewMarkerDomains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "AddDomains", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::NavigationMarkerComponent_eventAddDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::NavigationMarkerComponent_eventAddDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execAddDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewMarkerDomains);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDomains(Z_Param_Out_NewMarkerDomains);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function AddDomains

// Begin Class UNavigationMarkerComponent Function CanInteract
struct NavigationMarkerComponent_eventCanInteract_Parms
{
	UNarrativeNavigationComponent* Selector;
	APlayerController* SelectorOwner;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NavigationMarkerComponent_eventCanInteract_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNavigationMarkerComponent_CanInteract = FName(TEXT("CanInteract"));
bool UNavigationMarkerComponent::CanInteract(UNarrativeNavigationComponent* Selector, APlayerController* SelectorOwner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNavigationMarkerComponent_CanInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavigationMarkerComponent_eventCanInteract_Parms Parms;
		Parms.Selector=Selector;
		Parms.SelectorOwner=SelectorOwner;
		const_cast<UNavigationMarkerComponent*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNavigationMarkerComponent*>(this)->CanInteract_Implementation(Selector, SelectorOwner);
	}
}
struct Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Handle what the marker should be clickable or hoverable, or if it is just an icon with no interaction\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Handle what the marker should be clickable or hoverable, or if it is just an icon with no interaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorOwner;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventCanInteract_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_SelectorOwner = { "SelectorOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventCanInteract_Parms, SelectorOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationMarkerComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationMarkerComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_SelectorOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::PropPointers), sizeof(NavigationMarkerComponent_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavigationMarkerComponent_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execCanInteract)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_GET_OBJECT(APlayerController,Z_Param_SelectorOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(Z_Param_Selector,Z_Param_SelectorOwner);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function CanInteract

// Begin Class UNavigationMarkerComponent Function GetMarkerActionText
struct NavigationMarkerComponent_eventGetMarkerActionText_Parms
{
	UNarrativeNavigationComponent* Selector;
	APlayerController* SelectorOwner;
	FText ReturnValue;
};
static const FName NAME_UNavigationMarkerComponent_GetMarkerActionText = FName(TEXT("GetMarkerActionText"));
FText UNavigationMarkerComponent::GetMarkerActionText(UNarrativeNavigationComponent* Selector, APlayerController* SelectorOwner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNavigationMarkerComponent_GetMarkerActionText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavigationMarkerComponent_eventGetMarkerActionText_Parms Parms;
		Parms.Selector=Selector;
		Parms.SelectorOwner=SelectorOwner;
		const_cast<UNavigationMarkerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNavigationMarkerComponent*>(this)->GetMarkerActionText_Implementation(Selector, SelectorOwner);
	}
}
struct Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Text for what happens when we click on the marker \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Text for what happens when we click on the marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorOwner;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerActionText_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::NewProp_SelectorOwner = { "SelectorOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerActionText_Parms, SelectorOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerActionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::NewProp_SelectorOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "GetMarkerActionText", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::PropPointers), sizeof(NavigationMarkerComponent_eventGetMarkerActionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavigationMarkerComponent_eventGetMarkerActionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execGetMarkerActionText)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_GET_OBJECT(APlayerController,Z_Param_SelectorOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetMarkerActionText_Implementation(Z_Param_Selector,Z_Param_SelectorOwner);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function GetMarkerActionText

// Begin Class UNavigationMarkerComponent Function GetMarkerColor
struct NavigationMarkerComponent_eventGetMarkerColor_Parms
{
	APlayerController* Viewer;
	FGameplayTag NavigatorType;
	FLinearColor ReturnValue;

	/** Constructor, initializes return property only **/
	NavigationMarkerComponent_eventGetMarkerColor_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNavigationMarkerComponent_GetMarkerColor = FName(TEXT("GetMarkerColor"));
FLinearColor UNavigationMarkerComponent::GetMarkerColor(APlayerController* Viewer, FGameplayTag const& NavigatorType) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNavigationMarkerComponent_GetMarkerColor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavigationMarkerComponent_eventGetMarkerColor_Parms Parms;
		Parms.Viewer=Viewer;
		Parms.NavigatorType=NavigatorType;
		const_cast<UNavigationMarkerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNavigationMarkerComponent*>(this)->GetMarkerColor_Implementation(Viewer, NavigatorType);
	}
}
struct Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Display color for the marker, override if you need dynamic \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Display color for the marker, override if you need dynamic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigatorType_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Viewer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::NewProp_Viewer = { "Viewer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerColor_Parms, Viewer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::NewProp_NavigatorType = { "NavigatorType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerColor_Parms, NavigatorType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigatorType_MetaData), NewProp_NavigatorType_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::NewProp_Viewer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::NewProp_NavigatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "GetMarkerColor", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::PropPointers), sizeof(NavigationMarkerComponent_eventGetMarkerColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavigationMarkerComponent_eventGetMarkerColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execGetMarkerColor)
{
	P_GET_OBJECT(APlayerController,Z_Param_Viewer);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NavigatorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetMarkerColor_Implementation(Z_Param_Viewer,Z_Param_Out_NavigatorType);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function GetMarkerColor

// Begin Class UNavigationMarkerComponent Function GetMarkerDisplayText
struct NavigationMarkerComponent_eventGetMarkerDisplayText_Parms
{
	APlayerController* Viewer;
	FGameplayTag NavigatorType;
	FText ReturnValue;
};
static const FName NAME_UNavigationMarkerComponent_GetMarkerDisplayText = FName(TEXT("GetMarkerDisplayText"));
FText UNavigationMarkerComponent::GetMarkerDisplayText(APlayerController* Viewer, FGameplayTag const& NavigatorType) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNavigationMarkerComponent_GetMarkerDisplayText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavigationMarkerComponent_eventGetMarkerDisplayText_Parms Parms;
		Parms.Viewer=Viewer;
		Parms.NavigatorType=NavigatorType;
		const_cast<UNavigationMarkerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNavigationMarkerComponent*>(this)->GetMarkerDisplayText_Implementation(Viewer, NavigatorType);
	}
}
struct Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Display text for the marker, override if you need dynamic \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Display text for the marker, override if you need dynamic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigatorType_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Viewer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatorType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::NewProp_Viewer = { "Viewer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerDisplayText_Parms, Viewer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::NewProp_NavigatorType = { "NavigatorType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerDisplayText_Parms, NavigatorType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigatorType_MetaData), NewProp_NavigatorType_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::NewProp_Viewer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::NewProp_NavigatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "GetMarkerDisplayText", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::PropPointers), sizeof(NavigationMarkerComponent_eventGetMarkerDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavigationMarkerComponent_eventGetMarkerDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execGetMarkerDisplayText)
{
	P_GET_OBJECT(APlayerController,Z_Param_Viewer);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NavigatorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetMarkerDisplayText_Implementation(Z_Param_Viewer,Z_Param_Out_NavigatorType);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function GetMarkerDisplayText

// Begin Class UNavigationMarkerComponent Function GetMarkerSettings
struct Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics
{
	struct NavigationMarkerComponent_eventGetMarkerSettings_Parms
	{
		FGameplayTag NavigatorType;
		FNavigationMarkerSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Grab the settings for the nav marker and any overrides - this is just called once on init for marker icons\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Grab the settings for the nav marker and any overrides - this is just called once on init for marker icons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigatorType_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::NewProp_NavigatorType = { "NavigatorType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerSettings_Parms, NavigatorType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigatorType_MetaData), NewProp_NavigatorType_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventGetMarkerSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(0, nullptr) }; // 1503443034
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::NewProp_NavigatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "GetMarkerSettings", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::NavigationMarkerComponent_eventGetMarkerSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::NavigationMarkerComponent_eventGetMarkerSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execGetMarkerSettings)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NavigatorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNavigationMarkerSettings*)Z_Param__Result=P_THIS->GetMarkerSettings(Z_Param_Out_NavigatorType);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function GetMarkerSettings

// Begin Class UNavigationMarkerComponent Function OnSelect
struct NavigationMarkerComponent_eventOnSelect_Parms
{
	UNarrativeNavigationComponent* Selector;
	APlayerController* SelectorOwner;
};
static const FName NAME_UNavigationMarkerComponent_OnSelect = FName(TEXT("OnSelect"));
void UNavigationMarkerComponent::OnSelect(UNarrativeNavigationComponent* Selector, APlayerController* SelectorOwner)
{
	UFunction* Func = FindFunctionChecked(NAME_UNavigationMarkerComponent_OnSelect);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NavigationMarkerComponent_eventOnSelect_Parms Parms;
		Parms.Selector=Selector;
		Parms.SelectorOwner=SelectorOwner;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSelect_Implementation(Selector, SelectorOwner);
	}
}
struct Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Handle what the marker should do when clicked in the map\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Handle what the marker should do when clicked in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventOnSelect_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::NewProp_SelectorOwner = { "SelectorOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventOnSelect_Parms, SelectorOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::NewProp_SelectorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "OnSelect", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::PropPointers), sizeof(NavigationMarkerComponent_eventOnSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavigationMarkerComponent_eventOnSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execOnSelect)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_GET_OBJECT(APlayerController,Z_Param_SelectorOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelect_Implementation(Z_Param_Selector,Z_Param_SelectorOwner);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function OnSelect

// Begin Class UNavigationMarkerComponent Function RefreshMarker
struct Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Call this function whenever you've changed some settings on the marker! It will inform the UI widgets they need to refresh themselves. \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Call this function whenever you've changed some settings on the marker! It will inform the UI widgets they need to refresh themselves." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "RefreshMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execRefreshMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshMarker();
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function RefreshMarker

// Begin Class UNavigationMarkerComponent Function RemoveDomains
struct Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics
{
	struct NavigationMarkerComponent_eventRemoveDomains_Parms
	{
		FGameplayTagContainer RemoveDomains;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//remove domains \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "remove domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveDomains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveDomains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::NewProp_RemoveDomains = { "RemoveDomains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventRemoveDomains_Parms, RemoveDomains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveDomains_MetaData), NewProp_RemoveDomains_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::NewProp_RemoveDomains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "RemoveDomains", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::NavigationMarkerComponent_eventRemoveDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::NavigationMarkerComponent_eventRemoveDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execRemoveDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemoveDomains);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDomains(Z_Param_Out_RemoveDomains);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function RemoveDomains

// Begin Class UNavigationMarkerComponent Function SetDefaultDomains
struct Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics
{
	struct NavigationMarkerComponent_eventSetDefaultDomains_Parms
	{
		FGameplayTagContainer NewMarkerDomain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMarkerDomain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::NewProp_NewMarkerDomain = { "NewMarkerDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventSetDefaultDomains_Parms, NewMarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMarkerDomain_MetaData), NewProp_NewMarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::NewProp_NewMarkerDomain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "SetDefaultDomains", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::NavigationMarkerComponent_eventSetDefaultDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::NavigationMarkerComponent_eventSetDefaultDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execSetDefaultDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewMarkerDomain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultDomains(Z_Param_Out_NewMarkerDomain);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function SetDefaultDomains

// Begin Class UNavigationMarkerComponent Function SetDomains
struct Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics
{
	struct NavigationMarkerComponent_eventSetDomains_Parms
	{
		FGameplayTagContainer NewMarkerDomain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "// Check if this marker should be shown in the given location \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Check if this marker should be shown in the given location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMarkerDomain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::NewProp_NewMarkerDomain = { "NewMarkerDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerComponent_eventSetDomains_Parms, NewMarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMarkerDomain_MetaData), NewProp_NewMarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::NewProp_NewMarkerDomain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationMarkerComponent, nullptr, "SetDomains", nullptr, nullptr, Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::NavigationMarkerComponent_eventSetDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::NavigationMarkerComponent_eventSetDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationMarkerComponent::execSetDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewMarkerDomain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDomains(Z_Param_Out_NewMarkerDomain);
	P_NATIVE_END;
}
// End Class UNavigationMarkerComponent Function SetDomains

// Begin Class UNavigationMarkerComponent
void UNavigationMarkerComponent::StaticRegisterNativesUNavigationMarkerComponent()
{
	UClass* Class = UNavigationMarkerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDomains", &UNavigationMarkerComponent::execAddDomains },
		{ "CanInteract", &UNavigationMarkerComponent::execCanInteract },
		{ "GetMarkerActionText", &UNavigationMarkerComponent::execGetMarkerActionText },
		{ "GetMarkerColor", &UNavigationMarkerComponent::execGetMarkerColor },
		{ "GetMarkerDisplayText", &UNavigationMarkerComponent::execGetMarkerDisplayText },
		{ "GetMarkerSettings", &UNavigationMarkerComponent::execGetMarkerSettings },
		{ "OnSelect", &UNavigationMarkerComponent::execOnSelect },
		{ "RefreshMarker", &UNavigationMarkerComponent::execRefreshMarker },
		{ "RemoveDomains", &UNavigationMarkerComponent::execRemoveDomains },
		{ "SetDefaultDomains", &UNavigationMarkerComponent::execSetDefaultDomains },
		{ "SetDomains", &UNavigationMarkerComponent::execSetDomains },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationMarkerComponent);
UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister()
{
	return UNavigationMarkerComponent::StaticClass();
}
struct Z_Construct_UClass_UNavigationMarkerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**Add this component to any actor you want to show up on Narrative Navigator UI like the compass, world map, etc. */" },
		{ "DisplayName", "Navigation Marker" },
		{ "IncludePath", "NavigationMarkerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Add this component to any actor you want to show up on Narrative Navigator UI like the compass, world map, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMarkerSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The properties the navigation marker should use \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "The properties the navigation marker should use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMapOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the world map needs any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (World Map)" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "If the world map needs any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the minimap needs any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (Minimap)" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "If the minimap needs any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the compass needs any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (Compass)" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "If the compass needs any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenspaceOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the screen space marker need any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (Screen Space)" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "If the screen space marker need any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMarkerActionText_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Text the marker should show as its action text in the world map when hovered\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Text the marker should show as its action text in the world map when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPinToMapEdge_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Whether this marker should always be on the edge of the map, rather than going beyond the maps border \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Whether this marker should always be on the edge of the map, rather than going beyond the maps border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerStartFadeOutDistance_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Compass only - The distance at which the compass begins to fade the marker out\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Compass only - The distance at which the compass begins to fade the marker out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerStartFadeInDistance_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Compass - only The distance at which we the compass begins to fade the marker in\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Compass - only The distance at which we the compass begins to fade the marker in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "Category", "Marker Setup" },
		{ "Comment", "//What navigation widgets will this navigation marker show up on?\n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "What navigation widgets will this navigation marker show up on?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefreshRequired_MetaData[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelected_MetaData[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Called when the marker is selected in the world map \n" },
		{ "ModuleRelativePath", "Public/NavigationMarkerComponent.h" },
		{ "ToolTip", "Called when the marker is selected in the world map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMarkerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMapOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimapOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompassOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenspaceOverrideSettings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultMarkerActionText;
	static void NewProp_bPinToMapEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinToMapEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerStartFadeOutDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerStartFadeInDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerDomain;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshRequired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_AddDomains, "AddDomains" }, // 2800774660
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_CanInteract, "CanInteract" }, // 2500360815
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerActionText, "GetMarkerActionText" }, // 4234151248
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerColor, "GetMarkerColor" }, // 4073166849
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerDisplayText, "GetMarkerDisplayText" }, // 3617214034
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_GetMarkerSettings, "GetMarkerSettings" }, // 1175311911
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_OnSelect, "OnSelect" }, // 1856201563
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_RefreshMarker, "RefreshMarker" }, // 2871200914
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_RemoveDomains, "RemoveDomains" }, // 3733406535
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_SetDefaultDomains, "SetDefaultDomains" }, // 903680741
		{ &Z_Construct_UFunction_UNavigationMarkerComponent_SetDomains, "SetDomains" }, // 1737875434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationMarkerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_DefaultMarkerSettings = { "DefaultMarkerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, DefaultMarkerSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMarkerSettings_MetaData), NewProp_DefaultMarkerSettings_MetaData) }; // 1503443034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_WorldMapOverrideSettings = { "WorldMapOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, WorldMapOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMapOverrideSettings_MetaData), NewProp_WorldMapOverrideSettings_MetaData) }; // 1503443034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MinimapOverrideSettings = { "MinimapOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, MinimapOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOverrideSettings_MetaData), NewProp_MinimapOverrideSettings_MetaData) }; // 1503443034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_CompassOverrideSettings = { "CompassOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, CompassOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassOverrideSettings_MetaData), NewProp_CompassOverrideSettings_MetaData) }; // 1503443034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_ScreenspaceOverrideSettings = { "ScreenspaceOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, ScreenspaceOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenspaceOverrideSettings_MetaData), NewProp_ScreenspaceOverrideSettings_MetaData) }; // 1503443034
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_DefaultMarkerActionText = { "DefaultMarkerActionText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, DefaultMarkerActionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMarkerActionText_MetaData), NewProp_DefaultMarkerActionText_MetaData) };
void Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_bPinToMapEdge_SetBit(void* Obj)
{
	((UNavigationMarkerComponent*)Obj)->bPinToMapEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_bPinToMapEdge = { "bPinToMapEdge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavigationMarkerComponent), &Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_bPinToMapEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPinToMapEdge_MetaData), NewProp_bPinToMapEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerStartFadeOutDistance = { "MarkerStartFadeOutDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, MarkerStartFadeOutDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerStartFadeOutDistance_MetaData), NewProp_MarkerStartFadeOutDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerStartFadeInDistance = { "MarkerStartFadeInDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, MarkerStartFadeInDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerStartFadeInDistance_MetaData), NewProp_MarkerStartFadeInDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerDomain = { "MarkerDomain", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, MarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerDomain_MetaData), NewProp_MarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_OnRefreshRequired = { "OnRefreshRequired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, OnRefreshRequired), Z_Construct_UDelegateFunction_NarrativeNavigator_OnRefreshRequired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefreshRequired_MetaData), NewProp_OnRefreshRequired_MetaData) }; // 3382479142
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_OnSelected = { "OnSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, OnSelected), Z_Construct_UDelegateFunction_NarrativeNavigator_OnSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelected_MetaData), NewProp_OnSelected_MetaData) }; // 1077222103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_DefaultMarkerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_WorldMapOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MinimapOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_CompassOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_ScreenspaceOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_DefaultMarkerActionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_bPinToMapEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerStartFadeOutDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerStartFadeInDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_OnRefreshRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_OnSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationMarkerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::ClassParams = {
	&UNavigationMarkerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationMarkerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationMarkerComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationMarkerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationMarkerComponent.OuterSingleton, Z_Construct_UClass_UNavigationMarkerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationMarkerComponent.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UNavigationMarkerComponent>()
{
	return UNavigationMarkerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationMarkerComponent);
UNavigationMarkerComponent::~UNavigationMarkerComponent() {}
// End Class UNavigationMarkerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZoneDrawData::StaticStruct, Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewStructOps, TEXT("ZoneDrawData"), &Z_Registration_Info_UScriptStruct_ZoneDrawData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneDrawData), 1846893630U) },
		{ FNavigationMarkerSettings::StaticStruct, Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewStructOps, TEXT("NavigationMarkerSettings"), &Z_Registration_Info_UScriptStruct_NavigationMarkerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationMarkerSettings), 1503443034U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationMarkerComponent, UNavigationMarkerComponent::StaticClass, TEXT("UNavigationMarkerComponent"), &Z_Registration_Info_UClass_UNavigationMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationMarkerComponent), 3736850006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_2439364683(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

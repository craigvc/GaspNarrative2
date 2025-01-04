// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/States/AnimNotifyState_MeleeScan.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MeleeScan() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_MeleeScan();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_MeleeScan_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EMeleeScanMode();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_MeleeScan Function CreateMeleeScanInstance
struct AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms
{
	AActor* Owner;
	AActor* Causer;
	UMeshComponent* SourceMesh;
	float Duration;
	UNinjaCombatMeleeScan* ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance = FName(TEXT("CreateMeleeScanInstance"));
UNinjaCombatMeleeScan* UAnimNotifyState_MeleeScan::CreateMeleeScanInstance(AActor* Owner, AActor* Causer, UMeshComponent* SourceMesh, float Duration) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms Parms;
		Parms.Owner=Owner;
		Parms.Causer=Causer;
		Parms.SourceMesh=SourceMesh;
		Parms.Duration=Duration;
		const_cast<UAnimNotifyState_MeleeScan*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAnimNotifyState_MeleeScan*>(this)->CreateMeleeScanInstance_Implementation(Owner, Causer, SourceMesh, Duration);
	}
}
struct Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Creates the Scan Instance from the parameters in this class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Creates the Scan Instance from the parameters in this class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms, SourceMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MeleeScan, nullptr, "CreateMeleeScanInstance", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::PropPointers), sizeof(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotifyState_MeleeScan_eventCreateMeleeScanInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyState_MeleeScan::execCreateMeleeScanInstance)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(AActor,Z_Param_Causer);
	P_GET_OBJECT(UMeshComponent,Z_Param_SourceMesh);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatMeleeScan**)Z_Param__Result=P_THIS->CreateMeleeScanInstance_Implementation(Z_Param_Owner,Z_Param_Causer,Z_Param_SourceMesh,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UAnimNotifyState_MeleeScan Function CreateMeleeScanInstance

// Begin Class UAnimNotifyState_MeleeScan Function InitializeObjects
struct Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics
{
	struct AnimNotifyState_MeleeScan_eventInitializeObjects_Parms
	{
		const AActor* AssetSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan Anim Notify State" },
		{ "Comment", "/**\n\x09 * Attempts to retrieve the Scan Mesh from the owner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Attempts to retrieve the Scan Mesh from the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::NewProp_AssetSource = { "AssetSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventInitializeObjects_Parms, AssetSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetSource_MetaData), NewProp_AssetSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::NewProp_AssetSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MeleeScan, nullptr, "InitializeObjects", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::AnimNotifyState_MeleeScan_eventInitializeObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::AnimNotifyState_MeleeScan_eventInitializeObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyState_MeleeScan::execInitializeObjects)
{
	P_GET_OBJECT(AActor,Z_Param_AssetSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeObjects(Z_Param_AssetSource);
	P_NATIVE_END;
}
// End Class UAnimNotifyState_MeleeScan Function InitializeObjects

// Begin Class UAnimNotifyState_MeleeScan Function TryInitializeObjectsForWeapon
struct Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics
{
	struct AnimNotifyState_MeleeScan_eventTryInitializeObjectsForWeapon_Parms
	{
		const AActor* Owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan Anim Notify State" },
		{ "Comment", "/**\n\x09 * Attempts to retrieve the Scan Mesh from the Weapon represented by the Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Attempts to retrieve the Scan Mesh from the Weapon represented by the Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MeleeScan_eventTryInitializeObjectsForWeapon_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MeleeScan, nullptr, "TryInitializeObjectsForWeapon", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::AnimNotifyState_MeleeScan_eventTryInitializeObjectsForWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::AnimNotifyState_MeleeScan_eventTryInitializeObjectsForWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyState_MeleeScan::execTryInitializeObjectsForWeapon)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryInitializeObjectsForWeapon(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UAnimNotifyState_MeleeScan Function TryInitializeObjectsForWeapon

// Begin Class UAnimNotifyState_MeleeScan
void UAnimNotifyState_MeleeScan::StaticRegisterNativesUAnimNotifyState_MeleeScan()
{
	UClass* Class = UAnimNotifyState_MeleeScan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMeleeScanInstance", &UAnimNotifyState_MeleeScan::execCreateMeleeScanInstance },
		{ "InitializeObjects", &UAnimNotifyState_MeleeScan::execInitializeObjects },
		{ "TryInitializeObjectsForWeapon", &UAnimNotifyState_MeleeScan::execTryInitializeObjectsForWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_MeleeScan);
UClass* Z_Construct_UClass_UAnimNotifyState_MeleeScan_NoRegister()
{
	return UAnimNotifyState_MeleeScan::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends Gameplay Events to start and stop melee scans.\n */" },
		{ "DisplayName", "Melee Scan" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Sends Gameplay Events to start and stop melee scans." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Determines if this scan uses the owner mesh that hosts this notify or a mesh from\n\x09 * a weapon that must be obtained from the owner's Combat Manager, by a Weapon Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Determines if this scan uses the owner mesh that hosts this notify or a mesh from\na weapon that must be obtained from the owner's Combat Manager, by a Weapon Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponQuery_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Query used to retrieve the backing weapon. */" },
		{ "EditCondition", "Source == ECombatAbilitySource::Weapon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Query used to retrieve the backing weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesComponentTag_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Enables the option to select a melee scan mesh by tag. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Enables the option to select a melee scan mesh by tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeMeshTag_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Indicates the specific Component Tag used to find the Melee Mesh Component.\n\x09 * Useful if the source is composed by many meshes that can participate in scans.\n\x09 */" },
		{ "EditCondition", "bUsesComponentTag" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Indicates the specific Component Tag used to find the Melee Mesh Component.\nUseful if the source is composed by many meshes that can participate in scans." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanSocketPrefix_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Prefix for all sockets used in this melee scan. */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Prefix for all sockets used in this melee scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanChannel_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Channel used for the scan. */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Channel used for the scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanMode_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Scan Mode to be used. */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Scan Mode to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxHalfExtent_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Half extent for a box sweep. */" },
		{ "EditCondition", "ScanMode == EMeleeScanMode::BoxSweep" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Half extent for a box sweep." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleExtent_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Extent for a capsule sweep. Max(X, Y) is used for radius, Z is used for Half-Height. */" },
		{ "EditCondition", "ScanMode == EMeleeScanMode::CapsuleSweep" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Extent for a capsule sweep. Max(X, Y) is used for radius, Z is used for Half-Height." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Radius for a sphere sweep. */" },
		{ "EditCondition", "ScanMode == EMeleeScanMode::SphereSweep" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Radius for a sphere sweep." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeHitOverride_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Gameplay Effect that overrides the one set in the ability. Not required.\n\x09 * Useful when the same montage have many attacks that require different types of damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Gameplay Effect that overrides the one set in the ability. Not required.\nUseful when the same montage have many attacks that require different types of damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanClass_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Class used to represent the Melee Scan. */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Class used to represent the Melee Scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailGameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "Weapon Trail" },
		{ "Comment", "/** Gameplay Cue Tag for the Melee Scan cosmetics (Weapon Trails). */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Gameplay Cue Tag for the Melee Scan cosmetics (Weapon Trails)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanMeshComponent_MetaData[] = {
		{ "Comment", "/** Weapon mesh obtained used by the scan. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_MeleeScan.h" },
		{ "ToolTip", "Weapon mesh obtained used by the scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponQuery;
	static void NewProp_bUsesComponentTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesComponentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeMeshTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScanSocketPrefix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScanChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScanMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScanMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxHalfExtent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeHitOverride;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeScanClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailGameplayCueTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_MeleeScan_CreateMeleeScanInstance, "CreateMeleeScanInstance" }, // 3693187142
		{ &Z_Construct_UFunction_UAnimNotifyState_MeleeScan_InitializeObjects, "InitializeObjects" }, // 2054176904
		{ &Z_Construct_UFunction_UAnimNotifyState_MeleeScan_TryInitializeObjectsForWeapon, "TryInitializeObjectsForWeapon" }, // 781053413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MeleeScan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, Source), Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 3452595870
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_WeaponQuery = { "WeaponQuery", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, WeaponQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponQuery_MetaData), NewProp_WeaponQuery_MetaData) }; // 572225232
void Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_bUsesComponentTag_SetBit(void* Obj)
{
	((UAnimNotifyState_MeleeScan*)Obj)->bUsesComponentTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_bUsesComponentTag = { "bUsesComponentTag", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_MeleeScan), &Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_bUsesComponentTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesComponentTag_MetaData), NewProp_bUsesComponentTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_MeleeMeshTag = { "MeleeMeshTag", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, MeleeMeshTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeMeshTag_MetaData), NewProp_MeleeMeshTag_MetaData) }; // 1298103297
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanSocketPrefix = { "ScanSocketPrefix", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, ScanSocketPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanSocketPrefix_MetaData), NewProp_ScanSocketPrefix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanChannel = { "ScanChannel", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, ScanChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanChannel_MetaData), NewProp_ScanChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanMode = { "ScanMode", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, ScanMode), Z_Construct_UEnum_NinjaCombat_EMeleeScanMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanMode_MetaData), NewProp_ScanMode_MetaData) }; // 4155429208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_BoxHalfExtent = { "BoxHalfExtent", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, BoxHalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxHalfExtent_MetaData), NewProp_BoxHalfExtent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_CapsuleExtent = { "CapsuleExtent", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, CapsuleExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleExtent_MetaData), NewProp_CapsuleExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_MeleeHitOverride = { "MeleeHitOverride", nullptr, (EPropertyFlags)0x0014000000000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, MeleeHitOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeHitOverride_MetaData), NewProp_MeleeHitOverride_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_MeleeScanClass = { "MeleeScanClass", nullptr, (EPropertyFlags)0x0014000002000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, MeleeScanClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanClass_MetaData), NewProp_MeleeScanClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_TrailGameplayCueTag = { "TrailGameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, TrailGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailGameplayCueTag_MetaData), NewProp_TrailGameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanMeshComponent = { "ScanMeshComponent", nullptr, (EPropertyFlags)0x0144000000080018, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeScan, ScanMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanMeshComponent_MetaData), NewProp_ScanMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_WeaponQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_bUsesComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_MeleeMeshTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanSocketPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_BoxHalfExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_CapsuleExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_MeleeHitOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_MeleeScanClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_TrailGameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::NewProp_ScanMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::ClassParams = {
	&UAnimNotifyState_MeleeScan::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::PropPointers),
	0,
	0x008130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_MeleeScan()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_MeleeScan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_MeleeScan.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_MeleeScan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_MeleeScan.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotifyState_MeleeScan>()
{
	return UAnimNotifyState_MeleeScan::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_MeleeScan);
UAnimNotifyState_MeleeScan::~UAnimNotifyState_MeleeScan() {}
// End Class UAnimNotifyState_MeleeScan

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_MeleeScan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_MeleeScan, UAnimNotifyState_MeleeScan::StaticClass, TEXT("UAnimNotifyState_MeleeScan"), &Z_Registration_Info_UClass_UAnimNotifyState_MeleeScan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_MeleeScan), 799500120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_MeleeScan_h_4001287740(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_MeleeScan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_MeleeScan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

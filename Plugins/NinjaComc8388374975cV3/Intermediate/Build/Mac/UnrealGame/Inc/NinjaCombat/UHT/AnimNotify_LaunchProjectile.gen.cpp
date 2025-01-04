// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/Notifies/AnimNotify_LaunchProjectile.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_LaunchProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_LaunchProjectile();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_LaunchProjectile_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotify_LaunchProjectile Function CreateRequestInstance
struct AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms
{
	AActor* Owner;
	UMeshComponent* SourceMesh;
	UNinjaCombatProjectileRequest* ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UAnimNotify_LaunchProjectile_CreateRequestInstance = FName(TEXT("CreateRequestInstance"));
UNinjaCombatProjectileRequest* UAnimNotify_LaunchProjectile::CreateRequestInstance(AActor* Owner, UMeshComponent* SourceMesh) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotify_LaunchProjectile_CreateRequestInstance);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms Parms;
		Parms.Owner=Owner;
		Parms.SourceMesh=SourceMesh;
		const_cast<UAnimNotify_LaunchProjectile*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAnimNotify_LaunchProjectile*>(this)->CreateRequestInstance_Implementation(Owner, SourceMesh);
	}
}
struct Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/**\n\x09 * Creates the Projectile Request from the parameters in this class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Creates the Projectile Request from the parameters in this class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms, SourceMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_LaunchProjectile, nullptr, "CreateRequestInstance", nullptr, nullptr, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::PropPointers), sizeof(AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotify_LaunchProjectile_eventCreateRequestInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotify_LaunchProjectile::execCreateRequestInstance)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(UMeshComponent,Z_Param_SourceMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatProjectileRequest**)Z_Param__Result=P_THIS->CreateRequestInstance_Implementation(Z_Param_Owner,Z_Param_SourceMesh);
	P_NATIVE_END;
}
// End Class UAnimNotify_LaunchProjectile Function CreateRequestInstance

// Begin Class UAnimNotify_LaunchProjectile Function GetProjectileClass
struct AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms
{
	const AActor* Owner;
	TSubclassOf<AActor> ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UAnimNotify_LaunchProjectile_GetProjectileClass = FName(TEXT("GetProjectileClass"));
TSubclassOf<AActor> UAnimNotify_LaunchProjectile::GetProjectileClass(const AActor* Owner) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotify_LaunchProjectile_GetProjectileClass);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms Parms;
		Parms.Owner=Owner;
		const_cast<UAnimNotify_LaunchProjectile*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAnimNotify_LaunchProjectile*>(this)->GetProjectileClass_Implementation(Owner);
	}
}
struct Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/**\n\x09 * Retrieves the Projectile Class for this notify.\n\x09 * This separation simplifies extending this projectile to apply custom projectile logic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Retrieves the Projectile Class for this notify.\nThis separation simplifies extending this projectile to apply custom projectile logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_LaunchProjectile, nullptr, "GetProjectileClass", nullptr, nullptr, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::PropPointers), sizeof(AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotify_LaunchProjectile_eventGetProjectileClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotify_LaunchProjectile::execGetProjectileClass)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetProjectileClass_Implementation(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UAnimNotify_LaunchProjectile Function GetProjectileClass

// Begin Class UAnimNotify_LaunchProjectile Function GetRangedMesh
struct Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics
{
	struct AnimNotify_LaunchProjectile_eventGetRangedMesh_Parms
	{
		const AActor* MeshOwner;
		UMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Launch Projectile Anim Notify" },
		{ "Comment", "/**\n\x09 * Provides the Ranged Source Mesh for this request.\n\x09 * \n\x09 * @param MeshOwner\x09Owner of the mesh. Could be the Animation Owner or a Weapon Instance.\n\x09 * @return\x09\x09\x09The projectile source obtained via the Ranged Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Provides the Ranged Source Mesh for this request.\n\n@param MeshOwner     Owner of the mesh. Could be the Animation Owner or a Weapon Instance.\n@return                      The projectile source obtained via the Ranged Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::NewProp_MeshOwner = { "MeshOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventGetRangedMesh_Parms, MeshOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOwner_MetaData), NewProp_MeshOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventGetRangedMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::NewProp_MeshOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_LaunchProjectile, nullptr, "GetRangedMesh", nullptr, nullptr, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::AnimNotify_LaunchProjectile_eventGetRangedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::AnimNotify_LaunchProjectile_eventGetRangedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotify_LaunchProjectile::execGetRangedMesh)
{
	P_GET_OBJECT(AActor,Z_Param_MeshOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshComponent**)Z_Param__Result=P_THIS->GetRangedMesh(Z_Param_MeshOwner);
	P_NATIVE_END;
}
// End Class UAnimNotify_LaunchProjectile Function GetRangedMesh

// Begin Class UAnimNotify_LaunchProjectile Function GetWeaponActor
struct Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics
{
	struct AnimNotify_LaunchProjectile_eventGetWeaponActor_Parms
	{
		const AActor* WeaponOwner;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Launch Projectile Anim Notify" },
		{ "Comment", "/**\n\x09 * Provides the weapon actor for from the provided query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Provides the weapon actor for from the provided query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventGetWeaponActor_Parms, WeaponOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotify_LaunchProjectile_eventGetWeaponActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::NewProp_WeaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_LaunchProjectile, nullptr, "GetWeaponActor", nullptr, nullptr, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::AnimNotify_LaunchProjectile_eventGetWeaponActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::AnimNotify_LaunchProjectile_eventGetWeaponActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotify_LaunchProjectile::execGetWeaponActor)
{
	P_GET_OBJECT(AActor,Z_Param_WeaponOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetWeaponActor(Z_Param_WeaponOwner);
	P_NATIVE_END;
}
// End Class UAnimNotify_LaunchProjectile Function GetWeaponActor

// Begin Class UAnimNotify_LaunchProjectile
void UAnimNotify_LaunchProjectile::StaticRegisterNativesUAnimNotify_LaunchProjectile()
{
	UClass* Class = UAnimNotify_LaunchProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateRequestInstance", &UAnimNotify_LaunchProjectile::execCreateRequestInstance },
		{ "GetProjectileClass", &UAnimNotify_LaunchProjectile::execGetProjectileClass },
		{ "GetRangedMesh", &UAnimNotify_LaunchProjectile::execGetRangedMesh },
		{ "GetWeaponActor", &UAnimNotify_LaunchProjectile::execGetWeaponActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_LaunchProjectile);
UClass* Z_Construct_UClass_UAnimNotify_LaunchProjectile_NoRegister()
{
	return UAnimNotify_LaunchProjectile::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends a Gameplay Event to launch a projectile.\n */" },
		{ "DisplayName", "Launch Projectile" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Sends a Gameplay Event to launch a projectile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/** Determines if the projectile launches from the owner or the weapon. */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Determines if the projectile launches from the owner or the weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponQuery_MetaData[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/** Query used to retrieve the weapon from which the projectile will launch. */" },
		{ "EditCondition", "Source == ECombatAbilitySource::Weapon" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Query used to retrieve the weapon from which the projectile will launch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginSocketName_MetaData[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/** Name of the socket used as reference for the projectile's origin. */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Name of the socket used as reference for the projectile's origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/**\n\x09 * Actor class for the projectile being spawned.\n\x09 * Values provided by a \"ProjectileProviderInterface\" will take precedence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatProjectileInterface" },
		{ "ToolTip", "Actor class for the projectile being spawned.\nValues provided by a \"ProjectileProviderInterface\" will take precedence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRequestClass_MetaData[] = {
		{ "Category", "Launch Projectile" },
		{ "Comment", "/** Class used to represent the Projectile Request. */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_LaunchProjectile.h" },
		{ "ToolTip", "Class used to represent the Projectile Request." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponQuery;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OriginSocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileRequestClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotify_LaunchProjectile_CreateRequestInstance, "CreateRequestInstance" }, // 2184966631
		{ &Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetProjectileClass, "GetProjectileClass" }, // 1515582327
		{ &Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetRangedMesh, "GetRangedMesh" }, // 3345235387
		{ &Z_Construct_UFunction_UAnimNotify_LaunchProjectile_GetWeaponActor, "GetWeaponActor" }, // 2957147830
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_LaunchProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LaunchProjectile, Source), Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 3452595870
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_WeaponQuery = { "WeaponQuery", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LaunchProjectile, WeaponQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponQuery_MetaData), NewProp_WeaponQuery_MetaData) }; // 572225232
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_OriginSocketName = { "OriginSocketName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LaunchProjectile, OriginSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginSocketName_MetaData), NewProp_OriginSocketName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LaunchProjectile, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_ProjectileRequestClass = { "ProjectileRequestClass", nullptr, (EPropertyFlags)0x0014000002000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_LaunchProjectile, ProjectileRequestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileRequestClass_MetaData), NewProp_ProjectileRequestClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_WeaponQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_OriginSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::NewProp_ProjectileRequestClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::ClassParams = {
	&UAnimNotify_LaunchProjectile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_LaunchProjectile()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_LaunchProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_LaunchProjectile.OuterSingleton, Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_LaunchProjectile.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotify_LaunchProjectile>()
{
	return UAnimNotify_LaunchProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_LaunchProjectile);
UAnimNotify_LaunchProjectile::~UAnimNotify_LaunchProjectile() {}
// End Class UAnimNotify_LaunchProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_LaunchProjectile, UAnimNotify_LaunchProjectile::StaticClass, TEXT("UAnimNotify_LaunchProjectile"), &Z_Registration_Info_UClass_UAnimNotify_LaunchProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_LaunchProjectile), 3567587120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_1734156018(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

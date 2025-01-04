// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/Components/NinjaCombatActorPoolComponent.h"
#include "NinjaCombatActorPool/Public/Types/FCombatPool.h"
#include "NinjaCombatActorPool/Public/Types/FCombatPoolableActorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatActorPoolComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister();
NINJACOMBATACTORPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolableActorInfo();
NINJACOMBATACTORPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolList();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin Class UNinjaCombatActorPoolComponent Function GetActorFromPool
struct Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics
{
	struct NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms
	{
		const TSubclassOf<AActor> ActorClass;
		bool bActivate;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Actor Pool" },
		{ "Comment", "/**\n\x09 * Retrieves an actor from the pool, for the provided class.\n\x09 *\n\x09 * An actor can be automatically activated, which is analogous to \"Begin Play\" or only reserved,\n\x09 * requiring an activation later on - this would be analogous to a \"deferred spawn\".\n\x09 *\n\x09 * @param ActorClass\x09\x09""Class used as reference.\n\x09 * @param bActivate\x09\x09\x09If true, the actor is immediately activated. Otherwise, it is only reserved.\n\x09 * @return\x09\x09\x09\x09\x09The actor instance for the class.\n\x09 */" },
		{ "CPP_Default_bActivate", "true" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatActorPoolComponent.h" },
		{ "ToolTip", "Retrieves an actor from the pool, for the provided class.\n\nAn actor can be automatically activated, which is analogous to \"Begin Play\" or only reserved,\nrequiring an activation later on - this would be analogous to a \"deferred spawn\".\n\n@param ActorClass            Class used as reference.\n@param bActivate                     If true, the actor is immediately activated. Otherwise, it is only reserved.\n@return                                      The actor instance for the class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static void NewProp_bActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
void Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_bActivate_SetBit(void* Obj)
{
	((NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms*)Obj)->bActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms), &Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_bActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatActorPoolComponent, nullptr, "GetActorFromPool", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::NinjaCombatActorPoolComponent_eventGetActorFromPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatActorPoolComponent::execGetActorFromPool)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_ActorClass);
	P_GET_UBOOL(Z_Param_bActivate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetActorFromPool(Z_Param_Out_ActorClass,Z_Param_bActivate);
	P_NATIVE_END;
}
// End Class UNinjaCombatActorPoolComponent Function GetActorFromPool

// Begin Class UNinjaCombatActorPoolComponent Function SpawnActor
struct Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics
{
	struct NinjaCombatActorPoolComponent_eventSpawnActor_Parms
	{
		const TSubclassOf<AActor> ActorClass;
		FGuid PoolableActorId;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Actor Pool" },
		{ "Comment", "/**\n\x09 * Spawn a poolable actor, with a proper name for replication.\n\x09 *\n\x09 * @param ActorClass\x09\x09Poolable actor class that will be spawned.\n\x09 * @param PoolableActorId\x09Unique identifier, used to generate the actor's name.\n\x09 * @return\x09\x09\x09\x09\x09New actor instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatActorPoolComponent.h" },
		{ "ToolTip", "Spawn a poolable actor, with a proper name for replication.\n\n@param ActorClass            Poolable actor class that will be spawned.\n@param PoolableActorId       Unique identifier, used to generate the actor's name.\n@return                                      New actor instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "MustImplement", "/Script/NinjaCombatActorPool.CombatPoolableActorInterface" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActorId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolableActorId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolComponent_eventSpawnActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NewProp_PoolableActorId = { "PoolableActorId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolComponent_eventSpawnActor_Parms, PoolableActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableActorId_MetaData), NewProp_PoolableActorId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolComponent_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NewProp_PoolableActorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatActorPoolComponent, nullptr, "SpawnActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NinjaCombatActorPoolComponent_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::NinjaCombatActorPoolComponent_eventSpawnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatActorPoolComponent::execSpawnActor)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_ActorClass);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_PoolableActorId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnActor(Z_Param_Out_ActorClass,Z_Param_Out_PoolableActorId);
	P_NATIVE_END;
}
// End Class UNinjaCombatActorPoolComponent Function SpawnActor

// Begin Class UNinjaCombatActorPoolComponent
void UNinjaCombatActorPoolComponent::StaticRegisterNativesUNinjaCombatActorPoolComponent()
{
	UClass* Class = UNinjaCombatActorPoolComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorFromPool", &UNinjaCombatActorPoolComponent::execGetActorFromPool },
		{ "SpawnActor", &UNinjaCombatActorPoolComponent::execSpawnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatActorPoolComponent);
UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister()
{
	return UNinjaCombatActorPoolComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * A pool of actors available to the owner, that are pre-spawned and ready to use.\n */" },
		{ "IncludePath", "Components/NinjaCombatActorPoolComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatActorPoolComponent.h" },
		{ "ToolTip", "A pool of actors available to the owner, that are pre-spawned and ready to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHandlingMethod_MetaData[] = {
		{ "Category", "Actor Pool" },
		{ "Comment", "/** Default collision handling method for new actors being spawned. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatActorPoolComponent.h" },
		{ "ToolTip", "Default collision handling method for new actors being spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActors_MetaData[] = {
		{ "Category", "Actor Pool" },
		{ "Comment", "/** All actors pooled by this component. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatActorPoolComponent.h" },
		{ "ToolTip", "All actors pooled by this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaCombatActorPoolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolableActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoolableActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatActorPoolComponent_GetActorFromPool, "GetActorFromPool" }, // 3415058326
		{ &Z_Construct_UFunction_UNinjaCombatActorPoolComponent_SpawnActor, "SpawnActor" }, // 1281019311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatActorPoolComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatActorPoolComponent, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionHandlingMethod_MetaData), NewProp_CollisionHandlingMethod_MetaData) }; // 2749820453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_PoolableActors_Inner = { "PoolableActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCombatPoolableActorInfo, METADATA_PARAMS(0, nullptr) }; // 4127248187
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_PoolableActors = { "PoolableActors", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatActorPoolComponent, PoolableActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableActors_MetaData), NewProp_PoolableActors_MetaData) }; // 4127248187
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatActorPoolComponent, Pool), Z_Construct_UScriptStruct_FCombatPoolList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pool_MetaData), NewProp_Pool_MetaData) }; // 2144696449
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_CollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_CollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_PoolableActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_PoolableActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::NewProp_Pool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::ClassParams = {
	&UNinjaCombatActorPoolComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatActorPoolComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatActorPoolComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatActorPoolComponent.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<UNinjaCombatActorPoolComponent>()
{
	return UNinjaCombatActorPoolComponent::StaticClass();
}
void UNinjaCombatActorPoolComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Pool(TEXT("Pool"));
	const bool bIsValid = true
		&& Name_Pool == ClassReps[(int32)ENetFields_Private::Pool].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaCombatActorPoolComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatActorPoolComponent);
UNinjaCombatActorPoolComponent::~UNinjaCombatActorPoolComponent() {}
// End Class UNinjaCombatActorPoolComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatActorPoolComponent, UNinjaCombatActorPoolComponent::StaticClass, TEXT("UNinjaCombatActorPoolComponent"), &Z_Registration_Info_UClass_UNinjaCombatActorPoolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatActorPoolComponent), 2053609684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_330875676(TEXT("/Script/NinjaCombatActorPool"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

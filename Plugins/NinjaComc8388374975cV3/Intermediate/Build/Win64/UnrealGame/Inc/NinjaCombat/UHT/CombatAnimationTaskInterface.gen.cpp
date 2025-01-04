// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatAnimationTaskInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAnimationTaskInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationTaskInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationTaskInterface_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatAnimationTaskInterface Function BindToAnimationBlendOut
struct CombatAnimationTaskInterface_eventBindToAnimationBlendOut_Parms
{
	FCombatAnimationEventDelegate Delegate;
};
void ICombatAnimationTaskInterface::BindToAnimationBlendOut(FCombatAnimationEventDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToAnimationBlendOut instead.");
}
static FName NAME_UCombatAnimationTaskInterface_BindToAnimationBlendOut = FName(TEXT("BindToAnimationBlendOut"));
void ICombatAnimationTaskInterface::Execute_BindToAnimationBlendOut(UObject* O, FCombatAnimationEventDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationTaskInterface::StaticClass()));
	CombatAnimationTaskInterface_eventBindToAnimationBlendOut_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationTaskInterface_BindToAnimationBlendOut);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatAnimationTaskInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationTaskInterface::StaticClass())))
	{
		I->BindToAnimationBlendOut_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Task Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the animation blends out.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatAnimationTaskInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the animation blends out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationTaskInterface_eventBindToAnimationBlendOut_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 3565995100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationTaskInterface, nullptr, "BindToAnimationBlendOut", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::PropPointers), sizeof(CombatAnimationTaskInterface_eventBindToAnimationBlendOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationTaskInterface_eventBindToAnimationBlendOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationTaskInterface::execBindToAnimationBlendOut)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAnimationBlendOut_Implementation(FCombatAnimationEventDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatAnimationTaskInterface Function BindToAnimationBlendOut

// Begin Interface UCombatAnimationTaskInterface Function BindToAnimationCancelled
struct CombatAnimationTaskInterface_eventBindToAnimationCancelled_Parms
{
	FCombatAnimationEventDelegate Delegate;
};
void ICombatAnimationTaskInterface::BindToAnimationCancelled(FCombatAnimationEventDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToAnimationCancelled instead.");
}
static FName NAME_UCombatAnimationTaskInterface_BindToAnimationCancelled = FName(TEXT("BindToAnimationCancelled"));
void ICombatAnimationTaskInterface::Execute_BindToAnimationCancelled(UObject* O, FCombatAnimationEventDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationTaskInterface::StaticClass()));
	CombatAnimationTaskInterface_eventBindToAnimationCancelled_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationTaskInterface_BindToAnimationCancelled);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatAnimationTaskInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationTaskInterface::StaticClass())))
	{
		I->BindToAnimationCancelled_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Task Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the animation is cancelled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatAnimationTaskInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the animation is cancelled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationTaskInterface_eventBindToAnimationCancelled_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 3565995100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationTaskInterface, nullptr, "BindToAnimationCancelled", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::PropPointers), sizeof(CombatAnimationTaskInterface_eventBindToAnimationCancelled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationTaskInterface_eventBindToAnimationCancelled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationTaskInterface::execBindToAnimationCancelled)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAnimationCancelled_Implementation(FCombatAnimationEventDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatAnimationTaskInterface Function BindToAnimationCancelled

// Begin Interface UCombatAnimationTaskInterface Function BindToAnimationCompleted
struct CombatAnimationTaskInterface_eventBindToAnimationCompleted_Parms
{
	FCombatAnimationEventDelegate Delegate;
};
void ICombatAnimationTaskInterface::BindToAnimationCompleted(FCombatAnimationEventDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToAnimationCompleted instead.");
}
static FName NAME_UCombatAnimationTaskInterface_BindToAnimationCompleted = FName(TEXT("BindToAnimationCompleted"));
void ICombatAnimationTaskInterface::Execute_BindToAnimationCompleted(UObject* O, FCombatAnimationEventDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationTaskInterface::StaticClass()));
	CombatAnimationTaskInterface_eventBindToAnimationCompleted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationTaskInterface_BindToAnimationCompleted);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatAnimationTaskInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationTaskInterface::StaticClass())))
	{
		I->BindToAnimationCompleted_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Task Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the animation completed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatAnimationTaskInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the animation completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationTaskInterface_eventBindToAnimationCompleted_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 3565995100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationTaskInterface, nullptr, "BindToAnimationCompleted", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::PropPointers), sizeof(CombatAnimationTaskInterface_eventBindToAnimationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationTaskInterface_eventBindToAnimationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationTaskInterface::execBindToAnimationCompleted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAnimationCompleted_Implementation(FCombatAnimationEventDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatAnimationTaskInterface Function BindToAnimationCompleted

// Begin Interface UCombatAnimationTaskInterface Function BindToAnimationInterrupted
struct CombatAnimationTaskInterface_eventBindToAnimationInterrupted_Parms
{
	FCombatAnimationEventDelegate Delegate;
};
void ICombatAnimationTaskInterface::BindToAnimationInterrupted(FCombatAnimationEventDelegate const& Delegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindToAnimationInterrupted instead.");
}
static FName NAME_UCombatAnimationTaskInterface_BindToAnimationInterrupted = FName(TEXT("BindToAnimationInterrupted"));
void ICombatAnimationTaskInterface::Execute_BindToAnimationInterrupted(UObject* O, FCombatAnimationEventDelegate const& Delegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatAnimationTaskInterface::StaticClass()));
	CombatAnimationTaskInterface_eventBindToAnimationInterrupted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatAnimationTaskInterface_BindToAnimationInterrupted);
	if (Func)
	{
		Parms.Delegate=Delegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatAnimationTaskInterface*)(O->GetNativeInterfaceAddress(UCombatAnimationTaskInterface::StaticClass())))
	{
		I->BindToAnimationInterrupted_Implementation(Delegate);
	}
}
struct Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Task Interface" },
		{ "Comment", "/**\n\x09 * Binds to a Multicast Delegate that will notify about the animation is interrupted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatAnimationTaskInterface.h" },
		{ "ToolTip", "Binds to a Multicast Delegate that will notify about the animation is interrupted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationTaskInterface_eventBindToAnimationInterrupted_Parms, Delegate), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 3565995100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAnimationTaskInterface, nullptr, "BindToAnimationInterrupted", nullptr, nullptr, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::PropPointers), sizeof(CombatAnimationTaskInterface_eventBindToAnimationInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAnimationTaskInterface_eventBindToAnimationInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAnimationTaskInterface::execBindToAnimationInterrupted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAnimationInterrupted_Implementation(FCombatAnimationEventDelegate(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Interface UCombatAnimationTaskInterface Function BindToAnimationInterrupted

// Begin Interface UCombatAnimationTaskInterface
void UCombatAnimationTaskInterface::StaticRegisterNativesUCombatAnimationTaskInterface()
{
	UClass* Class = UCombatAnimationTaskInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToAnimationBlendOut", &ICombatAnimationTaskInterface::execBindToAnimationBlendOut },
		{ "BindToAnimationCancelled", &ICombatAnimationTaskInterface::execBindToAnimationCancelled },
		{ "BindToAnimationCompleted", &ICombatAnimationTaskInterface::execBindToAnimationCompleted },
		{ "BindToAnimationInterrupted", &ICombatAnimationTaskInterface::execBindToAnimationInterrupted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAnimationTaskInterface);
UClass* Z_Construct_UClass_UCombatAnimationTaskInterface_NoRegister()
{
	return UCombatAnimationTaskInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatAnimationTaskInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatAnimationTaskInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationBlendOut, "BindToAnimationBlendOut" }, // 3604232740
		{ &Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCancelled, "BindToAnimationCancelled" }, // 118253645
		{ &Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationCompleted, "BindToAnimationCompleted" }, // 3726976055
		{ &Z_Construct_UFunction_UCombatAnimationTaskInterface_BindToAnimationInterrupted, "BindToAnimationInterrupted" }, // 4220292026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatAnimationTaskInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatAnimationTaskInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationTaskInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAnimationTaskInterface_Statics::ClassParams = {
	&UCombatAnimationTaskInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationTaskInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAnimationTaskInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAnimationTaskInterface()
{
	if (!Z_Registration_Info_UClass_UCombatAnimationTaskInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAnimationTaskInterface.OuterSingleton, Z_Construct_UClass_UCombatAnimationTaskInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAnimationTaskInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAnimationTaskInterface>()
{
	return UCombatAnimationTaskInterface::StaticClass();
}
UCombatAnimationTaskInterface::UCombatAnimationTaskInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAnimationTaskInterface);
UCombatAnimationTaskInterface::~UCombatAnimationTaskInterface() {}
// End Interface UCombatAnimationTaskInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAnimationTaskInterface, UCombatAnimationTaskInterface::StaticClass, TEXT("UCombatAnimationTaskInterface"), &Z_Registration_Info_UClass_UCombatAnimationTaskInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAnimationTaskInterface), 2729625103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_3639309504(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

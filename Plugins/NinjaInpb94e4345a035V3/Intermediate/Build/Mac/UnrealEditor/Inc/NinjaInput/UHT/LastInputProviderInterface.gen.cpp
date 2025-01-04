// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Interfaces/LastInputProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLastInputProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NINJAINPUT_API UClass* Z_Construct_UClass_ULastInputProviderInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_ULastInputProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Interface ULastInputProviderInterface Function GetLastInputVector
struct LastInputProviderInterface_eventGetLastInputVector_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	LastInputProviderInterface_eventGetLastInputVector_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector ILastInputProviderInterface::GetLastInputVector() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLastInputVector instead.");
	LastInputProviderInterface_eventGetLastInputVector_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_ULastInputProviderInterface_GetLastInputVector = FName(TEXT("GetLastInputVector"));
FVector ILastInputProviderInterface::Execute_GetLastInputVector(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULastInputProviderInterface::StaticClass()));
	LastInputProviderInterface_eventGetLastInputVector_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULastInputProviderInterface_GetLastInputVector);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ILastInputProviderInterface*)(O->GetNativeInterfaceAddress(ULastInputProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLastInputVector_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Last Input Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides the last input that has been processed by the pawn/character.\n\x09 *\n\x09 * Useful when the way to retrieve such value is not as simple as simply obtaining it\n\x09 * from the default Movement Component, which is what the Input Manager will do.\n\x09 * \n\x09 * @return\n\x09 *      Returns the last input vector that was handled by the Pawn or Character.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/LastInputProviderInterface.h" },
		{ "ToolTip", "Provides the last input that has been processed by the pawn/character.\n\nUseful when the way to retrieve such value is not as simple as simply obtaining it\nfrom the default Movement Component, which is what the Input Manager will do.\n\n@return\n     Returns the last input vector that was handled by the Pawn or Character." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LastInputProviderInterface_eventGetLastInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULastInputProviderInterface, nullptr, "GetLastInputVector", nullptr, nullptr, Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::PropPointers), sizeof(LastInputProviderInterface_eventGetLastInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(LastInputProviderInterface_eventGetLastInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILastInputProviderInterface::execGetLastInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastInputVector_Implementation();
	P_NATIVE_END;
}
// End Interface ULastInputProviderInterface Function GetLastInputVector

// Begin Interface ULastInputProviderInterface
void ULastInputProviderInterface::StaticRegisterNativesULastInputProviderInterface()
{
	UClass* Class = ULastInputProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLastInputVector", &ILastInputProviderInterface::execGetLastInputVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULastInputProviderInterface);
UClass* Z_Construct_UClass_ULastInputProviderInterface_NoRegister()
{
	return ULastInputProviderInterface::StaticClass();
}
struct Z_Construct_UClass_ULastInputProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/LastInputProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULastInputProviderInterface_GetLastInputVector, "GetLastInputVector" }, // 2483195228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILastInputProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULastInputProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULastInputProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULastInputProviderInterface_Statics::ClassParams = {
	&ULastInputProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULastInputProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULastInputProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULastInputProviderInterface()
{
	if (!Z_Registration_Info_UClass_ULastInputProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULastInputProviderInterface.OuterSingleton, Z_Construct_UClass_ULastInputProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULastInputProviderInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<ULastInputProviderInterface>()
{
	return ULastInputProviderInterface::StaticClass();
}
ULastInputProviderInterface::ULastInputProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULastInputProviderInterface);
ULastInputProviderInterface::~ULastInputProviderInterface() {}
// End Interface ULastInputProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_LastInputProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULastInputProviderInterface, ULastInputProviderInterface::StaticClass, TEXT("ULastInputProviderInterface"), &Z_Registration_Info_UClass_ULastInputProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULastInputProviderInterface), 1350107145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_LastInputProviderInterface_h_3765815112(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_LastInputProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_LastInputProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

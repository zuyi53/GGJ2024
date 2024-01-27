// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystem/Public/ATSTargetableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATSTargetableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetableInterface();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetableInterface_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSTargetPointComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(IATSTargetableInterface::execOnTargetLosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetLosed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IATSTargetableInterface::execOnTargetAcquired)
	{
		P_GET_OBJECT(UATSTargetPointComponent,Z_Param_point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetAcquired_Implementation(Z_Param_point);
		P_NATIVE_END;
	}
	struct ATSTargetableInterface_eventOnTargetAcquired_Parms
	{
		UATSTargetPointComponent* point;
	};
	void IATSTargetableInterface::OnTargetAcquired(UATSTargetPointComponent* point)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTargetAcquired instead.");
	}
	void IATSTargetableInterface::OnTargetLosed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTargetLosed instead.");
	}
	void UATSTargetableInterface::StaticRegisterNativesUATSTargetableInterface()
	{
		UClass* Class = UATSTargetableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetAcquired", &IATSTargetableInterface::execOnTargetAcquired },
			{ "OnTargetLosed", &IATSTargetableInterface::execOnTargetLosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_point;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::NewProp_point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATSTargetableInterface_eventOnTargetAcquired_Parms, point), Z_Construct_UClass_UATSTargetPointComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::NewProp_point_MetaData), Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::NewProp_point_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::NewProp_point,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetableInterface, nullptr, "OnTargetAcquired", nullptr, nullptr, Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::PropPointers), sizeof(ATSTargetableInterface_eventOnTargetAcquired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::PropPointers) < 2048);
	static_assert(sizeof(ATSTargetableInterface_eventOnTargetAcquired_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ATS" },
		{ "ModuleRelativePath", "Public/ATSTargetableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATSTargetableInterface, nullptr, "OnTargetLosed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATSTargetableInterface);
	UClass* Z_Construct_UClass_UATSTargetableInterface_NoRegister()
	{
		return UATSTargetableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UATSTargetableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UATSTargetableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetableInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UATSTargetableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UATSTargetableInterface_OnTargetAcquired, "OnTargetAcquired" }, // 1005986599
		{ &Z_Construct_UFunction_UATSTargetableInterface_OnTargetLosed, "OnTargetLosed" }, // 823821829
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetableInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSTargetableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATSTargetableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UATSTargetableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IATSTargetableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UATSTargetableInterface_Statics::ClassParams = {
		&UATSTargetableInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSTargetableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UATSTargetableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UATSTargetableInterface()
	{
		if (!Z_Registration_Info_UClass_UATSTargetableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATSTargetableInterface.OuterSingleton, Z_Construct_UClass_UATSTargetableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UATSTargetableInterface.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UATSTargetableInterface>()
	{
		return UATSTargetableInterface::StaticClass();
	}
	UATSTargetableInterface::UATSTargetableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UATSTargetableInterface);
	UATSTargetableInterface::~UATSTargetableInterface() {}
	static FName NAME_UATSTargetableInterface_OnTargetAcquired = FName(TEXT("OnTargetAcquired"));
	void IATSTargetableInterface::Execute_OnTargetAcquired(UObject* O, UATSTargetPointComponent* point)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UATSTargetableInterface::StaticClass()));
		ATSTargetableInterface_eventOnTargetAcquired_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UATSTargetableInterface_OnTargetAcquired);
		if (Func)
		{
			Parms.point=point;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IATSTargetableInterface*)(O->GetNativeInterfaceAddress(UATSTargetableInterface::StaticClass())))
		{
			I->OnTargetAcquired_Implementation(point);
		}
	}
	static FName NAME_UATSTargetableInterface_OnTargetLosed = FName(TEXT("OnTargetLosed"));
	void IATSTargetableInterface::Execute_OnTargetLosed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UATSTargetableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UATSTargetableInterface_OnTargetLosed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IATSTargetableInterface*)(O->GetNativeInterfaceAddress(UATSTargetableInterface::StaticClass())))
		{
			I->OnTargetLosed_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UATSTargetableInterface, UATSTargetableInterface::StaticClass, TEXT("UATSTargetableInterface"), &Z_Registration_Info_UClass_UATSTargetableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATSTargetableInterface), 2210170340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_2190501514(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSSavableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSSavableInterface() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSavableInterface();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSavableInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	DEFINE_FUNCTION(IALSSavableInterface::execGetComponentsToSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetComponentsToSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALSSavableInterface::execShouldBeIgnored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBeIgnored_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALSSavableInterface::execOnLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALSSavableInterface::execOnSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaved_Implementation();
		P_NATIVE_END;
	}
	struct ALSSavableInterface_eventGetComponentsToSave_Parms
	{
		TArray<UActorComponent*> ReturnValue;
	};
	struct ALSSavableInterface_eventShouldBeIgnored_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ALSSavableInterface_eventShouldBeIgnored_Parms()
			: ReturnValue(false)
		{
		}
	};
	TArray<UActorComponent*> IALSSavableInterface::GetComponentsToSave() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetComponentsToSave instead.");
		ALSSavableInterface_eventGetComponentsToSave_Parms Parms;
		return Parms.ReturnValue;
	}
	void IALSSavableInterface::OnLoaded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoaded instead.");
	}
	void IALSSavableInterface::OnSaved()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSaved instead.");
	}
	bool IALSSavableInterface::ShouldBeIgnored()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldBeIgnored instead.");
		ALSSavableInterface_eventShouldBeIgnored_Parms Parms;
		return Parms.ReturnValue;
	}
	void UALSSavableInterface::StaticRegisterNativesUALSSavableInterface()
	{
		UClass* Class = UALSSavableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComponentsToSave", &IALSSavableInterface::execGetComponentsToSave },
			{ "OnLoaded", &IALSSavableInterface::execOnLoaded },
			{ "OnSaved", &IALSSavableInterface::execOnSaved },
			{ "ShouldBeIgnored", &IALSSavableInterface::execShouldBeIgnored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSSavableInterface_eventGetComponentsToSave_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSavableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSSavableInterface, nullptr, "GetComponentsToSave", nullptr, nullptr, Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::PropPointers), sizeof(ALSSavableInterface_eventGetComponentsToSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSSavableInterface_eventGetComponentsToSave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSSavableInterface_OnLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSavableInterface_OnLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSavableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSSavableInterface_OnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSSavableInterface, nullptr, "OnLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_OnLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSSavableInterface_OnLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSSavableInterface_OnLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSSavableInterface_OnLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSSavableInterface_OnSaved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSavableInterface_OnSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSavableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSSavableInterface_OnSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSSavableInterface, nullptr, "OnSaved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_OnSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSSavableInterface_OnSaved_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSSavableInterface_OnSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSSavableInterface_OnSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSSavableInterface_eventShouldBeIgnored_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSSavableInterface_eventShouldBeIgnored_Parms), &Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/ALSSavableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSSavableInterface, nullptr, "ShouldBeIgnored", nullptr, nullptr, Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::PropPointers), sizeof(ALSSavableInterface_eventShouldBeIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSSavableInterface_eventShouldBeIgnored_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSSavableInterface);
	UClass* Z_Construct_UClass_UALSSavableInterface_NoRegister()
	{
		return UALSSavableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UALSSavableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSSavableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSavableInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSSavableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSSavableInterface_GetComponentsToSave, "GetComponentsToSave" }, // 2845926832
		{ &Z_Construct_UFunction_UALSSavableInterface_OnLoaded, "OnLoaded" }, // 2682018689
		{ &Z_Construct_UFunction_UALSSavableInterface_OnSaved, "OnSaved" }, // 1287867513
		{ &Z_Construct_UFunction_UALSSavableInterface_ShouldBeIgnored, "ShouldBeIgnored" }, // 962472423
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSavableInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSavableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALSSavableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSSavableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IALSSavableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSSavableInterface_Statics::ClassParams = {
		&UALSSavableInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSavableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSSavableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UALSSavableInterface()
	{
		if (!Z_Registration_Info_UClass_UALSSavableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSSavableInterface.OuterSingleton, Z_Construct_UClass_UALSSavableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSSavableInterface.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSSavableInterface>()
	{
		return UALSSavableInterface::StaticClass();
	}
	UALSSavableInterface::UALSSavableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSSavableInterface);
	UALSSavableInterface::~UALSSavableInterface() {}
	static FName NAME_UALSSavableInterface_GetComponentsToSave = FName(TEXT("GetComponentsToSave"));
	TArray<UActorComponent*> IALSSavableInterface::Execute_GetComponentsToSave(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALSSavableInterface::StaticClass()));
		ALSSavableInterface_eventGetComponentsToSave_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALSSavableInterface_GetComponentsToSave);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IALSSavableInterface*)(O->GetNativeInterfaceAddress(UALSSavableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetComponentsToSave_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UALSSavableInterface_OnLoaded = FName(TEXT("OnLoaded"));
	void IALSSavableInterface::Execute_OnLoaded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALSSavableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UALSSavableInterface_OnLoaded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IALSSavableInterface*)(O->GetNativeInterfaceAddress(UALSSavableInterface::StaticClass())))
		{
			I->OnLoaded_Implementation();
		}
	}
	static FName NAME_UALSSavableInterface_OnSaved = FName(TEXT("OnSaved"));
	void IALSSavableInterface::Execute_OnSaved(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALSSavableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UALSSavableInterface_OnSaved);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IALSSavableInterface*)(O->GetNativeInterfaceAddress(UALSSavableInterface::StaticClass())))
		{
			I->OnSaved_Implementation();
		}
	}
	static FName NAME_UALSSavableInterface_ShouldBeIgnored = FName(TEXT("ShouldBeIgnored"));
	bool IALSSavableInterface::Execute_ShouldBeIgnored(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALSSavableInterface::StaticClass()));
		ALSSavableInterface_eventShouldBeIgnored_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALSSavableInterface_ShouldBeIgnored);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IALSSavableInterface*)(O->GetNativeInterfaceAddress(UALSSavableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->ShouldBeIgnored_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSavableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSavableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSSavableInterface, UALSSavableInterface::StaticClass, TEXT("UALSSavableInterface"), &Z_Registration_Info_UClass_UALSSavableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSSavableInterface), 1099919627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSavableInterface_h_434870301(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSavableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSavableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSSaveTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSSaveTask() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveTask();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveTask_NoRegister();
	ASCENTSAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics
	{
		struct _Script_AscentSaveSystem_eventOnSaveFinished_Parms
		{
			bool Success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_AscentSaveSystem_eventOnSaveFinished_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AscentSaveSystem_eventOnSaveFinished_Parms), &Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success_MetaData), Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ALSSaveTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentSaveSystem, nullptr, "OnSaveFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::_Script_AscentSaveSystem_eventOnSaveFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::_Script_AscentSaveSystem_eventOnSaveFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentSaveSystem_OnSaveFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSaveFinished_DelegateWrapper(const FScriptDelegate& OnSaveFinished, bool Success)
{
	struct _Script_AscentSaveSystem_eventOnSaveFinished_Parms
	{
		bool Success;
	};
	_Script_AscentSaveSystem_eventOnSaveFinished_Parms Parms;
	Parms.Success=Success ? true : false;
	OnSaveFinished.ProcessDelegate<UObject>(&Parms);
}
	void UALSSaveTask::StaticRegisterNativesUALSSaveTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSSaveTask);
	UClass* Z_Construct_UClass_UALSSaveTask_NoRegister()
	{
		return UALSSaveTask::StaticClass();
	}
	struct Z_Construct_UClass_UALSSaveTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSSaveTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveTask_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ALSSaveTask.h" },
		{ "ModuleRelativePath", "Public/ALSSaveTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSSaveTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSSaveTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSSaveTask_Statics::ClassParams = {
		&UALSSaveTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSSaveTask_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UALSSaveTask()
	{
		if (!Z_Registration_Info_UClass_UALSSaveTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSSaveTask.OuterSingleton, Z_Construct_UClass_UALSSaveTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSSaveTask.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSSaveTask>()
	{
		return UALSSaveTask::StaticClass();
	}
	UALSSaveTask::UALSSaveTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSSaveTask);
	UALSSaveTask::~UALSSaveTask() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSSaveTask, UALSSaveTask::StaticClass, TEXT("UALSSaveTask"), &Z_Registration_Info_UClass_UALSSaveTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSSaveTask), 3046031256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTask_h_812122630(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

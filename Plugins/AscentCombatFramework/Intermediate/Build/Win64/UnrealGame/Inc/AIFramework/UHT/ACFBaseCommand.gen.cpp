// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commands/ACFBaseCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFBaseCommand() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFBaseCommand();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFBaseCommand_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFBaseCommand::execEndCommand)
	{
		P_GET_OBJECT(AACFAIController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCommand_Implementation(Z_Param_controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFBaseCommand::execExecuteCommand)
	{
		P_GET_OBJECT(AACFAIController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteCommand_Implementation(Z_Param_controller);
		P_NATIVE_END;
	}
	struct ACFBaseCommand_eventEndCommand_Parms
	{
		AACFAIController* controller;
	};
	struct ACFBaseCommand_eventExecuteCommand_Parms
	{
		AACFAIController* controller;
	};
	static FName NAME_UACFBaseCommand_EndCommand = FName(TEXT("EndCommand"));
	void UACFBaseCommand::EndCommand(AACFAIController* controller)
	{
		ACFBaseCommand_eventEndCommand_Parms Parms;
		Parms.controller=controller;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseCommand_EndCommand),&Parms);
	}
	static FName NAME_UACFBaseCommand_ExecuteCommand = FName(TEXT("ExecuteCommand"));
	void UACFBaseCommand::ExecuteCommand(AACFAIController* controller)
	{
		ACFBaseCommand_eventExecuteCommand_Parms Parms;
		Parms.controller=controller;
		ProcessEvent(FindFunctionChecked(NAME_UACFBaseCommand_ExecuteCommand),&Parms);
	}
	void UACFBaseCommand::StaticRegisterNativesUACFBaseCommand()
	{
		UClass* Class = UACFBaseCommand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndCommand", &UACFBaseCommand::execEndCommand },
			{ "ExecuteCommand", &UACFBaseCommand::execExecuteCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseCommand_eventEndCommand_Parms, controller), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Commands/ACFBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseCommand, nullptr, "EndCommand", nullptr, nullptr, Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::PropPointers), sizeof(ACFBaseCommand_eventEndCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseCommand_eventEndCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseCommand_EndCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseCommand_EndCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFBaseCommand_eventExecuteCommand_Parms, controller), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Commands/ACFBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFBaseCommand, nullptr, "ExecuteCommand", nullptr, nullptr, Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::PropPointers), sizeof(ACFBaseCommand_eventExecuteCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFBaseCommand_eventExecuteCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFBaseCommand);
	UClass* Z_Construct_UClass_UACFBaseCommand_NoRegister()
	{
		return UACFBaseCommand::StaticClass();
	}
	struct Z_Construct_UClass_UACFBaseCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDurationWait_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedDurationWait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFBaseCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseCommand_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFBaseCommand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFBaseCommand_EndCommand, "EndCommand" }, // 3559299448
		{ &Z_Construct_UFunction_UACFBaseCommand_ExecuteCommand, "ExecuteCommand" }, // 1065476385
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseCommand_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseCommand_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "Commands/ACFBaseCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Commands/ACFBaseCommand.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBaseCommand_Statics::NewProp_EstimatedDurationWait_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Commands/ACFBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFBaseCommand_Statics::NewProp_EstimatedDurationWait = { "EstimatedDurationWait", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBaseCommand, EstimatedDurationWait), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseCommand_Statics::NewProp_EstimatedDurationWait_MetaData), Z_Construct_UClass_UACFBaseCommand_Statics::NewProp_EstimatedDurationWait_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFBaseCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBaseCommand_Statics::NewProp_EstimatedDurationWait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFBaseCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFBaseCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFBaseCommand_Statics::ClassParams = {
		&UACFBaseCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFBaseCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseCommand_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFBaseCommand_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBaseCommand_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFBaseCommand()
	{
		if (!Z_Registration_Info_UClass_UACFBaseCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFBaseCommand.OuterSingleton, Z_Construct_UClass_UACFBaseCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFBaseCommand.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFBaseCommand>()
	{
		return UACFBaseCommand::StaticClass();
	}
	UACFBaseCommand::UACFBaseCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFBaseCommand);
	UACFBaseCommand::~UACFBaseCommand() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Commands_ACFBaseCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Commands_ACFBaseCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFBaseCommand, UACFBaseCommand::StaticClass, TEXT("UACFBaseCommand"), &Z_Registration_Info_UClass_UACFBaseCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFBaseCommand), 4158994301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Commands_ACFBaseCommand_h_1015414654(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Commands_ACFBaseCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Commands_ACFBaseCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

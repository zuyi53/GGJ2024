// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/ACFSustainedAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFSustainedAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFSustainedAction();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFSustainedAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	DEFINE_FUNCTION(UACFSustainedAction::execOnActionReleased)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_elapsedTimeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionReleased_Implementation(Z_Param_elapsedTimeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFSustainedAction::execPlayActionSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayActionSection(Z_Param_sectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFSustainedAction::execReleaseAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseAction();
		P_NATIVE_END;
	}
	struct ACFSustainedAction_eventOnActionReleased_Parms
	{
		float elapsedTimeSeconds;
	};
	static FName NAME_UACFSustainedAction_OnActionReleased = FName(TEXT("OnActionReleased"));
	void UACFSustainedAction::OnActionReleased(float elapsedTimeSeconds)
	{
		ACFSustainedAction_eventOnActionReleased_Parms Parms;
		Parms.elapsedTimeSeconds=elapsedTimeSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UACFSustainedAction_OnActionReleased),&Parms);
	}
	void UACFSustainedAction::StaticRegisterNativesUACFSustainedAction()
	{
		UClass* Class = UACFSustainedAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActionReleased", &UACFSustainedAction::execOnActionReleased },
			{ "PlayActionSection", &UACFSustainedAction::execPlayActionSection },
			{ "ReleaseAction", &UACFSustainedAction::execReleaseAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_elapsedTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::NewProp_elapsedTimeSeconds = { "elapsedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFSustainedAction_eventOnActionReleased_Parms, elapsedTimeSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::NewProp_elapsedTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Called when release action is triggered during the execution*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFSustainedAction.h" },
		{ "ToolTip", "Called when release action is triggered during the execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFSustainedAction, nullptr, "OnActionReleased", nullptr, nullptr, Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::PropPointers), sizeof(ACFSustainedAction_eventOnActionReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFSustainedAction_eventOnActionReleased_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFSustainedAction_OnActionReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFSustainedAction_OnActionReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics
	{
		struct ACFSustainedAction_eventPlayActionSection_Parms
		{
			FName sectionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_sectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFSustainedAction_eventPlayActionSection_Parms, sectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::NewProp_sectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFSustainedAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFSustainedAction, nullptr, "PlayActionSection", nullptr, nullptr, Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::ACFSustainedAction_eventPlayActionSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::ACFSustainedAction_eventPlayActionSection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFSustainedAction_PlayActionSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFSustainedAction_PlayActionSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFSustainedAction_ReleaseAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFSustainedAction_ReleaseAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFSustainedAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFSustainedAction_ReleaseAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFSustainedAction, nullptr, "ReleaseAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSustainedAction_ReleaseAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFSustainedAction_ReleaseAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFSustainedAction_ReleaseAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFSustainedAction_ReleaseAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFSustainedAction);
	UClass* Z_Construct_UClass_UACFSustainedAction_NoRegister()
	{
		return UACFSustainedAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFSustainedAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FinalSectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFSustainedAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSustainedAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFSustainedAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFSustainedAction_OnActionReleased, "OnActionReleased" }, // 626689935
		{ &Z_Construct_UFunction_UACFSustainedAction_PlayActionSection, "PlayActionSection" }, // 3855862069
		{ &Z_Construct_UFunction_UACFSustainedAction_ReleaseAction, "ReleaseAction" }, // 328202394
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSustainedAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSustainedAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Actions/ACFSustainedAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFSustainedAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSustainedAction_Statics::NewProp_FinalSectionName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFSustainedAction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFSustainedAction_Statics::NewProp_FinalSectionName = { "FinalSectionName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSustainedAction, FinalSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSustainedAction_Statics::NewProp_FinalSectionName_MetaData), Z_Construct_UClass_UACFSustainedAction_Statics::NewProp_FinalSectionName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFSustainedAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSustainedAction_Statics::NewProp_FinalSectionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFSustainedAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFSustainedAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFSustainedAction_Statics::ClassParams = {
		&UACFSustainedAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFSustainedAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFSustainedAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSustainedAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFSustainedAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSustainedAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFSustainedAction()
	{
		if (!Z_Registration_Info_UClass_UACFSustainedAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFSustainedAction.OuterSingleton, Z_Construct_UClass_UACFSustainedAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFSustainedAction.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFSustainedAction>()
	{
		return UACFSustainedAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFSustainedAction);
	UACFSustainedAction::~UACFSustainedAction() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFSustainedAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFSustainedAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFSustainedAction, UACFSustainedAction::StaticClass, TEXT("UACFSustainedAction"), &Z_Registration_Info_UClass_UACFSustainedAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFSustainedAction), 3049801403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFSustainedAction_h_3058206906(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFSustainedAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFSustainedAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFSummonAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFSummonAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPELLACTIONS_API UClass* Z_Construct_UClass_UACFSummonAction();
	SPELLACTIONS_API UClass* Z_Construct_UClass_UACFSummonAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpellActions();
// End Cross Module References
	DEFINE_FUNCTION(UACFSummonAction::execOnCompanionDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompanionDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFSummonAction::execKillCompanion)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillCompanion(Z_Param_comp);
		P_NATIVE_END;
	}
	void UACFSummonAction::StaticRegisterNativesUACFSummonAction()
	{
		UClass* Class = UACFSummonAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KillCompanion", &UACFSummonAction::execKillCompanion },
			{ "OnCompanionDeath", &UACFSummonAction::execOnCompanionDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics
	{
		struct ACFSummonAction_eventKillCompanion_Parms
		{
			AACFCharacter* comp;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_comp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::NewProp_comp = { "comp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFSummonAction_eventKillCompanion_Parms, comp), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::NewProp_comp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFSummonAction, nullptr, "KillCompanion", nullptr, nullptr, Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::ACFSummonAction_eventKillCompanion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::ACFSummonAction_eventKillCompanion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFSummonAction_KillCompanion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFSummonAction_KillCompanion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFSummonAction, nullptr, "OnCompanionDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFSummonAction);
	UClass* Z_Construct_UClass_UACFSummonAction_NoRegister()
	{
		return UACFSummonAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFSummonAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompanionToSummonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CompanionToSummonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCompanionNumb_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxCompanionNumb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoKillAfterSeconds_MetaData[];
#endif
		static void NewProp_bAutoKillAfterSeconds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoKillAfterSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoKillTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoKillTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFSummonAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpellActions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFSummonAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFSummonAction_KillCompanion, "KillCompanion" }, // 2232905748
		{ &Z_Construct_UFunction_UACFSummonAction_OnCompanionDeath, "OnCompanionDeath" }, // 2182631220
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSummonAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACFSummonAction.h" },
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSummonAction_Statics::NewProp_CompanionToSummonClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFSummonAction_Statics::NewProp_CompanionToSummonClass = { "CompanionToSummonClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSummonAction, CompanionToSummonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::NewProp_CompanionToSummonClass_MetaData), Z_Construct_UClass_UACFSummonAction_Statics::NewProp_CompanionToSummonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSummonAction_Statics::NewProp_MaxCompanionNumb_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFSummonAction_Statics::NewProp_MaxCompanionNumb = { "MaxCompanionNumb", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSummonAction, MaxCompanionNumb), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::NewProp_MaxCompanionNumb_MetaData), Z_Construct_UClass_UACFSummonAction_Statics::NewProp_MaxCompanionNumb_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSummonAction_Statics::NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFSummonAction_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSummonAction, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::NewProp_SpawnRadius_MetaData), Z_Construct_UClass_UACFSummonAction_Statics::NewProp_SpawnRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds_SetBit(void* Obj)
	{
		((UACFSummonAction*)Obj)->bAutoKillAfterSeconds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds = { "bAutoKillAfterSeconds", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFSummonAction), &Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds_MetaData), Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSummonAction_Statics::NewProp_AutoKillTime_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bAutoKillAfterSeconds" },
		{ "ModuleRelativePath", "Public/ACFSummonAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFSummonAction_Statics::NewProp_AutoKillTime = { "AutoKillTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSummonAction, AutoKillTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::NewProp_AutoKillTime_MetaData), Z_Construct_UClass_UACFSummonAction_Statics::NewProp_AutoKillTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFSummonAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSummonAction_Statics::NewProp_CompanionToSummonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSummonAction_Statics::NewProp_MaxCompanionNumb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSummonAction_Statics::NewProp_SpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSummonAction_Statics::NewProp_bAutoKillAfterSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSummonAction_Statics::NewProp_AutoKillTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFSummonAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFSummonAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFSummonAction_Statics::ClassParams = {
		&UACFSummonAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFSummonAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFSummonAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSummonAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFSummonAction()
	{
		if (!Z_Registration_Info_UClass_UACFSummonAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFSummonAction.OuterSingleton, Z_Construct_UClass_UACFSummonAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFSummonAction.OuterSingleton;
	}
	template<> SPELLACTIONS_API UClass* StaticClass<UACFSummonAction>()
	{
		return UACFSummonAction::StaticClass();
	}
	UACFSummonAction::UACFSummonAction() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFSummonAction);
	UACFSummonAction::~UACFSummonAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSummonAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSummonAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFSummonAction, UACFSummonAction::StaticClass, TEXT("UACFSummonAction"), &Z_Registration_Info_UClass_UACFSummonAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFSummonAction), 1189153839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSummonAction_h_782187800(TEXT("/Script/SpellActions"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSummonAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSummonAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

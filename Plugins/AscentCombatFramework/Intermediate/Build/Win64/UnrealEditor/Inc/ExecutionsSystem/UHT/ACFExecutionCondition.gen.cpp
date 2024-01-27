// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExecutionsSystem/Public/ACFExecutionCondition.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFExecutionCondition() {}
// Cross Module References
	COMBINEDANIMATIONSSYSTEM_API UClass* Z_Construct_UClass_UCASAnimCondition();
	EXECUTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFExecutionCondition();
	EXECUTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFExecutionCondition_NoRegister();
	EXECUTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFIsChildTagCondition();
	EXECUTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFIsChildTagCondition_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ExecutionsSystem();
// End Cross Module References
	void UACFExecutionCondition::StaticRegisterNativesUACFExecutionCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFExecutionCondition);
	UClass* Z_Construct_UClass_UACFExecutionCondition_NoRegister()
	{
		return UACFExecutionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFExecutionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimRootTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingHealthPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingHealthPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExecutionChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFExecutionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCASAnimCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_ExecutionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFExecutionCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CAS" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "ACFExecutionCondition.h" },
		{ "ModuleRelativePath", "Public/ACFExecutionCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_AnimRootTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFExecutionCondition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_AnimRootTag = { "AnimRootTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFExecutionCondition, AnimRootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_AnimRootTag_MetaData), Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_AnimRootTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_RemainingHealthPercentage_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Executions can be triggered only if the healt of the owner if belo*/" },
		{ "ModuleRelativePath", "Public/ACFExecutionCondition.h" },
		{ "ToolTip", "Executions can be triggered only if the healt of the owner if belo" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_RemainingHealthPercentage = { "RemainingHealthPercentage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFExecutionCondition, RemainingHealthPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_RemainingHealthPercentage_MetaData), Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_RemainingHealthPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_ExecutionChance_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Chances that the execution will be triggered*/" },
		{ "ModuleRelativePath", "Public/ACFExecutionCondition.h" },
		{ "ToolTip", "Chances that the execution will be triggered" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_ExecutionChance = { "ExecutionChance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFExecutionCondition, ExecutionChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_ExecutionChance_MetaData), Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_ExecutionChance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFExecutionCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_AnimRootTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_RemainingHealthPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFExecutionCondition_Statics::NewProp_ExecutionChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFExecutionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFExecutionCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFExecutionCondition_Statics::ClassParams = {
		&UACFExecutionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFExecutionCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFExecutionCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFExecutionCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFExecutionCondition()
	{
		if (!Z_Registration_Info_UClass_UACFExecutionCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFExecutionCondition.OuterSingleton, Z_Construct_UClass_UACFExecutionCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFExecutionCondition.OuterSingleton;
	}
	template<> EXECUTIONSSYSTEM_API UClass* StaticClass<UACFExecutionCondition>()
	{
		return UACFExecutionCondition::StaticClass();
	}
	UACFExecutionCondition::UACFExecutionCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFExecutionCondition);
	UACFExecutionCondition::~UACFExecutionCondition() {}
	void UACFIsChildTagCondition::StaticRegisterNativesUACFIsChildTagCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFIsChildTagCondition);
	UClass* Z_Construct_UClass_UACFIsChildTagCondition_NoRegister()
	{
		return UACFIsChildTagCondition::StaticClass();
	}
	struct Z_Construct_UClass_UACFIsChildTagCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimRootTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFIsChildTagCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCASAnimCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_ExecutionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFIsChildTagCondition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFIsChildTagCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CAS" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "ACFExecutionCondition.h" },
		{ "ModuleRelativePath", "Public/ACFExecutionCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFIsChildTagCondition_Statics::NewProp_AnimRootTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFExecutionCondition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFIsChildTagCondition_Statics::NewProp_AnimRootTag = { "AnimRootTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFIsChildTagCondition, AnimRootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFIsChildTagCondition_Statics::NewProp_AnimRootTag_MetaData), Z_Construct_UClass_UACFIsChildTagCondition_Statics::NewProp_AnimRootTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFIsChildTagCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFIsChildTagCondition_Statics::NewProp_AnimRootTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFIsChildTagCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFIsChildTagCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFIsChildTagCondition_Statics::ClassParams = {
		&UACFIsChildTagCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFIsChildTagCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFIsChildTagCondition_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFIsChildTagCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFIsChildTagCondition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFIsChildTagCondition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFIsChildTagCondition()
	{
		if (!Z_Registration_Info_UClass_UACFIsChildTagCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFIsChildTagCondition.OuterSingleton, Z_Construct_UClass_UACFIsChildTagCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFIsChildTagCondition.OuterSingleton;
	}
	template<> EXECUTIONSSYSTEM_API UClass* StaticClass<UACFIsChildTagCondition>()
	{
		return UACFIsChildTagCondition::StaticClass();
	}
	UACFIsChildTagCondition::UACFIsChildTagCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFIsChildTagCondition);
	UACFIsChildTagCondition::~UACFIsChildTagCondition() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutionCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutionCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFExecutionCondition, UACFExecutionCondition::StaticClass, TEXT("UACFExecutionCondition"), &Z_Registration_Info_UClass_UACFExecutionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFExecutionCondition), 3981791031U) },
		{ Z_Construct_UClass_UACFIsChildTagCondition, UACFIsChildTagCondition::StaticClass, TEXT("UACFIsChildTagCondition"), &Z_Registration_Info_UClass_UACFIsChildTagCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFIsChildTagCondition), 3279225369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutionCondition_h_3176782484(TEXT("/Script/ExecutionsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutionCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutionCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

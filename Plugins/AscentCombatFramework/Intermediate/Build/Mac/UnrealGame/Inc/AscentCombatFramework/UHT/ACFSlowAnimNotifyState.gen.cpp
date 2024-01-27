// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Animation/ACFSlowAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFSlowAnimNotifyState() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFSlowAnimNotifyState();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFSlowAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFSlowAnimNotifyState::StaticRegisterNativesUACFSlowAnimNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFSlowAnimNotifyState);
	UClass* Z_Construct_UClass_UACFSlowAnimNotifyState_NoRegister()
	{
		return UACFSlowAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UACFSlowAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previousRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_previousRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slowRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slowRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFSlowAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFSlowAnimNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_previousRate_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFSlowAnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_previousRate = { "previousRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSlowAnimNotifyState, previousRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_previousRate_MetaData), Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_previousRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_slowRate_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFSlowAnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_slowRate = { "slowRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSlowAnimNotifyState, slowRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_slowRate_MetaData), Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_slowRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_previousRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::NewProp_slowRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFSlowAnimNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::ClassParams = {
		&UACFSlowAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFSlowAnimNotifyState()
	{
		if (!Z_Registration_Info_UClass_UACFSlowAnimNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFSlowAnimNotifyState.OuterSingleton, Z_Construct_UClass_UACFSlowAnimNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFSlowAnimNotifyState.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFSlowAnimNotifyState>()
	{
		return UACFSlowAnimNotifyState::StaticClass();
	}
	UACFSlowAnimNotifyState::UACFSlowAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFSlowAnimNotifyState);
	UACFSlowAnimNotifyState::~UACFSlowAnimNotifyState() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFSlowAnimNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFSlowAnimNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFSlowAnimNotifyState, UACFSlowAnimNotifyState::StaticClass, TEXT("UACFSlowAnimNotifyState"), &Z_Registration_Info_UClass_UACFSlowAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFSlowAnimNotifyState), 360877866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFSlowAnimNotifyState_h_2338580588(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFSlowAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFSlowAnimNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

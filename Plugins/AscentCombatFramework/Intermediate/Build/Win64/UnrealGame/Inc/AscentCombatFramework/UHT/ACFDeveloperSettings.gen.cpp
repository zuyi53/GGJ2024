// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/ACFDeveloperSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDeveloperSettings() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDeveloperSettings();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDeveloperSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFDeveloperSettings::StaticRegisterNativesUACFDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFDeveloperSettings);
	UClass* Z_Construct_UClass_UACFDeveloperSettings_NoRegister()
	{
		return UACFDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UACFDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultHitState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDeathState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDeathState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ascent Combat Settings" },
		{ "IncludePath", "ACFDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/ACFDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultHitState_MetaData[] = {
		{ "Category", "ACF | Default Tags" },
		{ "ModuleRelativePath", "Public/ACFDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultHitState = { "DefaultHitState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDeveloperSettings, DefaultHitState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultHitState_MetaData), Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultHitState_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultDeathState_MetaData[] = {
		{ "Category", "ACF | Default Tags" },
		{ "ModuleRelativePath", "Public/ACFDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultDeathState = { "DefaultDeathState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFDeveloperSettings, DefaultDeathState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultDeathState_MetaData), Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultDeathState_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultHitState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_DefaultDeathState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDeveloperSettings_Statics::ClassParams = {
		&UACFDeveloperSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFDeveloperSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UACFDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFDeveloperSettings.OuterSingleton, Z_Construct_UClass_UACFDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFDeveloperSettings.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFDeveloperSettings>()
	{
		return UACFDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDeveloperSettings);
	UACFDeveloperSettings::~UACFDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_ACFDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_ACFDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFDeveloperSettings, UACFDeveloperSettings::StaticClass, TEXT("UACFDeveloperSettings"), &Z_Registration_Info_UClass_UACFDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFDeveloperSettings), 1271231234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_ACFDeveloperSettings_h_684522098(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_ACFDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_ACFDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedRPGSystem/Public/ARSDeveloperSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSDeveloperSettings() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSDeveloperSettings();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSDeveloperSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem();
// End Cross Module References
	void UARSDeveloperSettings::StaticRegisterNativesUARSDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSDeveloperSettings);
	UClass* Z_Construct_UClass_UARSDeveloperSettings_NoRegister()
	{
		return UARSDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UARSDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributesRootTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAttributesRootTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticsRootTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatisticsRootTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesRootTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesRootTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesGenerationConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesGenerationConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ascent RPG System" },
		{ "IncludePath", "ARSDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_PrimaryAttributesRootTag_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Define here the tag Root of your Primary Attributes*/" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
		{ "ToolTip", "Define here the tag Root of your Primary Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_PrimaryAttributesRootTag = { "PrimaryAttributesRootTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSDeveloperSettings, PrimaryAttributesRootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_PrimaryAttributesRootTag_MetaData), Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_PrimaryAttributesRootTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_StatisticsRootTag_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Define here the tag Root of your Statistics*/" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
		{ "ToolTip", "Define here the tag Root of your Statistics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_StatisticsRootTag = { "StatisticsRootTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSDeveloperSettings, StatisticsRootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_StatisticsRootTag_MetaData), Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_StatisticsRootTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesRootTag_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Define here the tag Root of your Attributes*/" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
		{ "ToolTip", "Define here the tag Root of your Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesRootTag = { "AttributesRootTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSDeveloperSettings, AttributesRootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesRootTag_MetaData), Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesRootTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_HealthTag_MetaData[] = {
		{ "Category", "ARS | Default Tags" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_HealthTag = { "HealthTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSDeveloperSettings, HealthTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_HealthTag_MetaData), Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_HealthTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "ARS" },
		{ "Comment", "/*Max Level for all your character*/" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
		{ "ToolTip", "Max Level for all your character" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSDeveloperSettings, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_MaxLevel_MetaData), Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_MaxLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesGenerationConfig_MetaData[] = {
		{ "AllowedClasses", "ARSGenerationRulesDataAsset" },
		{ "Category", "ARS" },
		{ "Comment", "/*Define here the tag Root of your Primary Attributes*/" },
		{ "ModuleRelativePath", "Public/ARSDeveloperSettings.h" },
		{ "ToolTip", "Define here the tag Root of your Primary Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesGenerationConfig = { "AttributesGenerationConfig", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSDeveloperSettings, AttributesGenerationConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesGenerationConfig_MetaData), Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesGenerationConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_PrimaryAttributesRootTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_StatisticsRootTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesRootTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_HealthTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_MaxLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSDeveloperSettings_Statics::NewProp_AttributesGenerationConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSDeveloperSettings_Statics::ClassParams = {
		&UARSDeveloperSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARSDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UARSDeveloperSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSDeveloperSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UARSDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UARSDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSDeveloperSettings.OuterSingleton, Z_Construct_UClass_UARSDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSDeveloperSettings.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<UARSDeveloperSettings>()
	{
		return UARSDeveloperSettings::StaticClass();
	}
	UARSDeveloperSettings::UARSDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSDeveloperSettings);
	UARSDeveloperSettings::~UARSDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSDeveloperSettings, UARSDeveloperSettings::StaticClass, TEXT("UARSDeveloperSettings"), &Z_Registration_Info_UClass_UARSDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSDeveloperSettings), 4215883650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSDeveloperSettings_h_2140494327(TEXT("/Script/AdvancedRPGSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

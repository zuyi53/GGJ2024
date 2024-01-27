// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentSaveSystem/Public/ALSSaveGameSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSSaveGameSettings() {}
// Cross Module References
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveGame_NoRegister();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveGameSettings();
	ASCENTSAVESYSTEM_API UClass* Z_Construct_UClass_UALSSaveGameSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AscentSaveSystem();
// End Cross Module References
	void UALSSaveGameSettings::StaticRegisterNativesUALSSaveGameSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSSaveGameSettings);
	UClass* Z_Construct_UClass_UALSSaveGameSettings_NoRegister()
	{
		return UALSSaveGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UALSSaveGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentSavedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnComponentSavedFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentLoadedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnComponentLoadedFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavesMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavesMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveScreenWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveScreenWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveScreenHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveScreenHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSSaveGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentSaveSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Ascent Load & Save" },
		{ "IncludePath", "ALSSaveGameSettings.h" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveGameClass_MetaData[] = {
		{ "Category", "ALS | Defaults" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGameSettings, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UALSSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveGameClass_MetaData), Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveGameClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentSavedFunctionName_MetaData[] = {
		{ "Category", "ALS | Defaults" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentSavedFunctionName = { "OnComponentSavedFunctionName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGameSettings, OnComponentSavedFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentSavedFunctionName_MetaData), Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentSavedFunctionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentLoadedFunctionName_MetaData[] = {
		{ "Category", "ALS | Defaults" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentLoadedFunctionName = { "OnComponentLoadedFunctionName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGameSettings, OnComponentLoadedFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentLoadedFunctionName_MetaData), Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentLoadedFunctionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SavesMetadata_MetaData[] = {
		{ "Category", "ALS | Defaults" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SavesMetadata = { "SavesMetadata", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGameSettings, SavesMetadata), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SavesMetadata_MetaData), Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SavesMetadata_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenWidth_MetaData[] = {
		{ "Category", "ALS | Screenshot" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenWidth = { "SaveScreenWidth", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGameSettings, SaveScreenWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenWidth_MetaData), Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenHeight_MetaData[] = {
		{ "Category", "ALS | Screenshot" },
		{ "ModuleRelativePath", "Public/ALSSaveGameSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenHeight = { "SaveScreenHeight", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSSaveGameSettings, SaveScreenHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenHeight_MetaData), Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSSaveGameSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveGameClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentSavedFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_OnComponentLoadedFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SavesMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSSaveGameSettings_Statics::NewProp_SaveScreenHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSSaveGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSSaveGameSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSSaveGameSettings_Statics::ClassParams = {
		&UALSSaveGameSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSSaveGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSSaveGameSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSSaveGameSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSSaveGameSettings()
	{
		if (!Z_Registration_Info_UClass_UALSSaveGameSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSSaveGameSettings.OuterSingleton, Z_Construct_UClass_UALSSaveGameSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSSaveGameSettings.OuterSingleton;
	}
	template<> ASCENTSAVESYSTEM_API UClass* StaticClass<UALSSaveGameSettings>()
	{
		return UALSSaveGameSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSSaveGameSettings);
	UALSSaveGameSettings::~UALSSaveGameSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGameSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGameSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSSaveGameSettings, UALSSaveGameSettings::StaticClass, TEXT("UALSSaveGameSettings"), &Z_Registration_Info_UClass_UALSSaveGameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSSaveGameSettings), 2128964658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGameSettings_h_1445465951(TEXT("/Script/AscentSaveSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGameSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSSaveGameSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

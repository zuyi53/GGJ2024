// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFActionsDeveloperSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionsDeveloperSettings() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsDeveloperSettings();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsDeveloperSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	void UACFActionsDeveloperSettings::StaticRegisterNativesUACFActionsDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionsDeveloperSettings);
	UClass* Z_Construct_UClass_UACFActionsDeveloperSettings_NoRegister()
	{
		return UACFActionsDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionsDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetActionsRootTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetActionsRootTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActionsState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultActionsState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Ascent Actions System Settings" },
		{ "IncludePath", "ACFActionsDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/ACFActionsDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_MovesetActionsRootTag_MetaData[] = {
		{ "Category", "ACF | Root Tags" },
		{ "ModuleRelativePath", "Public/ACFActionsDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_MovesetActionsRootTag = { "MovesetActionsRootTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsDeveloperSettings, MovesetActionsRootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_MovesetActionsRootTag_MetaData), Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_MovesetActionsRootTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_DefaultActionsState_MetaData[] = {
		{ "Category", "ACF | Default Tags" },
		{ "ModuleRelativePath", "Public/ACFActionsDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_DefaultActionsState = { "DefaultActionsState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsDeveloperSettings, DefaultActionsState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_DefaultActionsState_MetaData), Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_DefaultActionsState_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_MovesetActionsRootTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::NewProp_DefaultActionsState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionsDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::ClassParams = {
		&UACFActionsDeveloperSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFActionsDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UACFActionsDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionsDeveloperSettings.OuterSingleton, Z_Construct_UClass_UACFActionsDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionsDeveloperSettings.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFActionsDeveloperSettings>()
	{
		return UACFActionsDeveloperSettings::StaticClass();
	}
	UACFActionsDeveloperSettings::UACFActionsDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionsDeveloperSettings);
	UACFActionsDeveloperSettings::~UACFActionsDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionsDeveloperSettings, UACFActionsDeveloperSettings::StaticClass, TEXT("UACFActionsDeveloperSettings"), &Z_Registration_Info_UClass_UACFActionsDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionsDeveloperSettings), 3476280144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsDeveloperSettings_h_1898585989(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_ACFActionsDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

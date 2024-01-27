// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFCCDeveloperSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCCDeveloperSettings() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCCDeveloperSettings();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCCDeveloperSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	void UACFCCDeveloperSettings::StaticRegisterNativesUACFCCDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCCDeveloperSettings);
	UClass* Z_Construct_UClass_UACFCCDeveloperSettings_NoRegister()
	{
		return UACFCCDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UACFCCDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetTypeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetTypeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationOverlayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationOverlayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCCDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCDeveloperSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCCDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ascent Character Controller Settings" },
		{ "IncludePath", "ACFCCDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/ACFCCDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_MovesetTypeTag_MetaData[] = {
		{ "Category", "ACF | Root Tags" },
		{ "ModuleRelativePath", "Public/ACFCCDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_MovesetTypeTag = { "MovesetTypeTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCCDeveloperSettings, MovesetTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_MovesetTypeTag_MetaData), Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_MovesetTypeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_AnimationOverlayTag_MetaData[] = {
		{ "Category", "ACF | Root Tags" },
		{ "ModuleRelativePath", "Public/ACFCCDeveloperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_AnimationOverlayTag = { "AnimationOverlayTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCCDeveloperSettings, AnimationOverlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_AnimationOverlayTag_MetaData), Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_AnimationOverlayTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCCDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_MovesetTypeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCCDeveloperSettings_Statics::NewProp_AnimationOverlayTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCCDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCCDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCCDeveloperSettings_Statics::ClassParams = {
		&UACFCCDeveloperSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFCCDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCCDeveloperSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCCDeveloperSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCCDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UACFCCDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCCDeveloperSettings.OuterSingleton, Z_Construct_UClass_UACFCCDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCCDeveloperSettings.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFCCDeveloperSettings>()
	{
		return UACFCCDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCCDeveloperSettings);
	UACFCCDeveloperSettings::~UACFCCDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCCDeveloperSettings, UACFCCDeveloperSettings::StaticClass, TEXT("UACFCCDeveloperSettings"), &Z_Registration_Info_UClass_UACFCCDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCCDeveloperSettings), 2464623967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCDeveloperSettings_h_1412845817(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFCCDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFInventorySettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFInventorySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWorldItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFInventorySettings();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFInventorySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UACFInventorySettings::StaticRegisterNativesUACFInventorySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFInventorySettings);
	UClass* Z_Construct_UClass_UACFInventorySettings_NoRegister()
	{
		return UACFInventorySettings::StaticClass();
	}
	struct Z_Construct_UClass_UACFInventorySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemtypeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemtypeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotsTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlotsTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCurrencyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultCurrencyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WorldItemClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFInventorySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInventorySettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ascent Inventory Settings" },
		{ "IncludePath", "ACFInventorySettings.h" },
		{ "ModuleRelativePath", "Public/ACFInventorySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemtypeTag_MetaData[] = {
		{ "Category", "ACF | Root Tags" },
		{ "ModuleRelativePath", "Public/ACFInventorySettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemtypeTag = { "ItemtypeTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInventorySettings, ItemtypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemtypeTag_MetaData), Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemtypeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemSlotsTag_MetaData[] = {
		{ "Category", "ACF | Root Tags" },
		{ "ModuleRelativePath", "Public/ACFInventorySettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemSlotsTag = { "ItemSlotsTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInventorySettings, ItemSlotsTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemSlotsTag_MetaData), Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemSlotsTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_DefaultCurrencyName_MetaData[] = {
		{ "Category", "ACF | Defaults" },
		{ "ModuleRelativePath", "Public/ACFInventorySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_DefaultCurrencyName = { "DefaultCurrencyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInventorySettings, DefaultCurrencyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_DefaultCurrencyName_MetaData), Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_DefaultCurrencyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_WorldItemClass_MetaData[] = {
		{ "Category", "ACF | Defaults" },
		{ "ModuleRelativePath", "Public/ACFInventorySettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_WorldItemClass = { "WorldItemClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFInventorySettings, WorldItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFWorldItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_WorldItemClass_MetaData), Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_WorldItemClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFInventorySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemtypeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_ItemSlotsTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_DefaultCurrencyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFInventorySettings_Statics::NewProp_WorldItemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFInventorySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFInventorySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFInventorySettings_Statics::ClassParams = {
		&UACFInventorySettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFInventorySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFInventorySettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFInventorySettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFInventorySettings()
	{
		if (!Z_Registration_Info_UClass_UACFInventorySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFInventorySettings.OuterSingleton, Z_Construct_UClass_UACFInventorySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFInventorySettings.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UACFInventorySettings>()
	{
		return UACFInventorySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFInventorySettings);
	UACFInventorySettings::~UACFInventorySettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFInventorySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFInventorySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFInventorySettings, UACFInventorySettings::StaticClass, TEXT("UACFInventorySettings"), &Z_Registration_Info_UClass_UACFInventorySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFInventorySettings), 2458839939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFInventorySettings_h_1148950792(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFInventorySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFInventorySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFTeamsConfigDataAsset.h"
#include "ACFCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFTeamsConfigDataAsset() {}
// Cross Module References
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamsConfigDataAsset();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamsConfigDataAsset_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_AscentCoreInterfaces();
// End Cross Module References
	void UACFTeamsConfigDataAsset::StaticRegisterNativesUACFTeamsConfigDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFTeamsConfigDataAsset);
	UClass* Z_Construct_UClass_UACFTeamsConfigDataAsset_NoRegister()
	{
		return UACFTeamsConfigDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Teams_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Teams_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Teams_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Teams_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Teams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCoreInterfaces,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFTeamsConfigDataAsset.h" },
		{ "ModuleRelativePath", "Public/ACFTeamsConfigDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_ValueProp = { "Teams", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(0, nullptr) }; // 2227953295
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_Key_KeyProp = { "Teams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFTeamsConfigDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams = { "Teams", nullptr, (EPropertyFlags)0x0020080000000055, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFTeamsConfigDataAsset, Teams), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_MetaData), Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_MetaData) }; // 2489062856 2227953295
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::NewProp_Teams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTeamsConfigDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::ClassParams = {
		&UACFTeamsConfigDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFTeamsConfigDataAsset()
	{
		if (!Z_Registration_Info_UClass_UACFTeamsConfigDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFTeamsConfigDataAsset.OuterSingleton, Z_Construct_UClass_UACFTeamsConfigDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFTeamsConfigDataAsset.OuterSingleton;
	}
	template<> ASCENTCOREINTERFACES_API UClass* StaticClass<UACFTeamsConfigDataAsset>()
	{
		return UACFTeamsConfigDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTeamsConfigDataAsset);
	UACFTeamsConfigDataAsset::~UACFTeamsConfigDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFTeamsConfigDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFTeamsConfigDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFTeamsConfigDataAsset, UACFTeamsConfigDataAsset::StaticClass, TEXT("UACFTeamsConfigDataAsset"), &Z_Registration_Info_UClass_UACFTeamsConfigDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFTeamsConfigDataAsset), 4076285504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFTeamsConfigDataAsset_h_2907356629(TEXT("/Script/AscentCoreInterfaces"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFTeamsConfigDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_ACFTeamsConfigDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

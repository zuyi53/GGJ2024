// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ACFActionsSetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionsSetFactory() {}
// Cross Module References
	ASCENTEDITOREXTENSIONS_API UClass* Z_Construct_UClass_UACFActionsSetFactory();
	ASCENTEDITOREXTENSIONS_API UClass* Z_Construct_UClass_UACFActionsSetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AscentEditorExtensions();
// End Cross Module References
	void UACFActionsSetFactory::StaticRegisterNativesUACFActionsSetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionsSetFactory);
	UClass* Z_Construct_UClass_UACFActionsSetFactory_NoRegister()
	{
		return UACFActionsSetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionsSetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionsSetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentEditorExtensions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsSetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACFActionsSetFactory.h" },
		{ "ModuleRelativePath", "Private/ACFActionsSetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionsSetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionsSetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionsSetFactory_Statics::ClassParams = {
		&UACFActionsSetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionsSetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFActionsSetFactory()
	{
		if (!Z_Registration_Info_UClass_UACFActionsSetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionsSetFactory.OuterSingleton, Z_Construct_UClass_UACFActionsSetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionsSetFactory.OuterSingleton;
	}
	template<> ASCENTEDITOREXTENSIONS_API UClass* StaticClass<UACFActionsSetFactory>()
	{
		return UACFActionsSetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionsSetFactory);
	UACFActionsSetFactory::~UACFActionsSetFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Private_ACFActionsSetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Private_ACFActionsSetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionsSetFactory, UACFActionsSetFactory::StaticClass, TEXT("UACFActionsSetFactory"), &Z_Registration_Info_UClass_UACFActionsSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionsSetFactory), 3605159597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Private_ACFActionsSetFactory_h_949367985(TEXT("/Script/AscentEditorExtensions"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Private_ACFActionsSetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Private_ACFActionsSetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

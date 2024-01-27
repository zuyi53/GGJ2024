// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFActionsBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionsBlueprint() {}
// Cross Module References
	ASCENTEDITOREXTENSIONS_API UClass* Z_Construct_UClass_UACFActionsBlueprint();
	ASCENTEDITOREXTENSIONS_API UClass* Z_Construct_UClass_UACFActionsBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_AscentEditorExtensions();
// End Cross Module References
	void UACFActionsBlueprint::StaticRegisterNativesUACFActionsBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionsBlueprint);
	UClass* Z_Construct_UClass_UACFActionsBlueprint_NoRegister()
	{
		return UACFActionsBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionsBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionsBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentEditorExtensions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACFActionsBlueprint.h" },
		{ "ModuleRelativePath", "Public/ACFActionsBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionsBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionsBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionsBlueprint_Statics::ClassParams = {
		&UACFActionsBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionsBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFActionsBlueprint()
	{
		if (!Z_Registration_Info_UClass_UACFActionsBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionsBlueprint.OuterSingleton, Z_Construct_UClass_UACFActionsBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionsBlueprint.OuterSingleton;
	}
	template<> ASCENTEDITOREXTENSIONS_API UClass* StaticClass<UACFActionsBlueprint>()
	{
		return UACFActionsBlueprint::StaticClass();
	}
	UACFActionsBlueprint::UACFActionsBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionsBlueprint);
	UACFActionsBlueprint::~UACFActionsBlueprint() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Public_ACFActionsBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Public_ACFActionsBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionsBlueprint, UACFActionsBlueprint::StaticClass, TEXT("UACFActionsBlueprint"), &Z_Registration_Info_UClass_UACFActionsBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionsBlueprint), 1417335948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Public_ACFActionsBlueprint_h_1584652488(TEXT("/Script/AscentEditorExtensions"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Public_ACFActionsBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentEditorExtensions_Public_ACFActionsBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

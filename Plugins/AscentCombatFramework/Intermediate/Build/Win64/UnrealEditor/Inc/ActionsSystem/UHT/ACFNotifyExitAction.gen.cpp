// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFNotifyExitAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFNotifyExitAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFNotifyExitAction();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFNotifyExitAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	void UACFNotifyExitAction::StaticRegisterNativesUACFNotifyExitAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFNotifyExitAction);
	UClass* Z_Construct_UClass_UACFNotifyExitAction_NoRegister()
	{
		return UACFNotifyExitAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFNotifyExitAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFNotifyExitAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFNotifyExitAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFNotifyExitAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFNotifyExitAction.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFNotifyExitAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFNotifyExitAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFNotifyExitAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFNotifyExitAction_Statics::ClassParams = {
		&UACFNotifyExitAction::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFNotifyExitAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFNotifyExitAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFNotifyExitAction()
	{
		if (!Z_Registration_Info_UClass_UACFNotifyExitAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFNotifyExitAction.OuterSingleton, Z_Construct_UClass_UACFNotifyExitAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFNotifyExitAction.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFNotifyExitAction>()
	{
		return UACFNotifyExitAction::StaticClass();
	}
	UACFNotifyExitAction::UACFNotifyExitAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFNotifyExitAction);
	UACFNotifyExitAction::~UACFNotifyExitAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyExitAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyExitAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFNotifyExitAction, UACFNotifyExitAction::StaticClass, TEXT("UACFNotifyExitAction"), &Z_Registration_Info_UClass_UACFNotifyExitAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFNotifyExitAction), 2957735497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyExitAction_h_636762639(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyExitAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyExitAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

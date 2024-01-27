// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFNotifyAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFNotifyAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFNotifyAction();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFNotifyAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	void UACFNotifyAction::StaticRegisterNativesUACFNotifyAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFNotifyAction);
	UClass* Z_Construct_UClass_UACFNotifyAction_NoRegister()
	{
		return UACFNotifyAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFNotifyAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFNotifyAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFNotifyAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFNotifyAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFNotifyAction.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFNotifyAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFNotifyAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFNotifyAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFNotifyAction_Statics::ClassParams = {
		&UACFNotifyAction::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFNotifyAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFNotifyAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFNotifyAction()
	{
		if (!Z_Registration_Info_UClass_UACFNotifyAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFNotifyAction.OuterSingleton, Z_Construct_UClass_UACFNotifyAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFNotifyAction.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFNotifyAction>()
	{
		return UACFNotifyAction::StaticClass();
	}
	UACFNotifyAction::UACFNotifyAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFNotifyAction);
	UACFNotifyAction::~UACFNotifyAction() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFNotifyAction, UACFNotifyAction::StaticClass, TEXT("UACFNotifyAction"), &Z_Registration_Info_UClass_UACFNotifyAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFNotifyAction), 3322041383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyAction_h_1021965016(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Animation_ACFNotifyAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

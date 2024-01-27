// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFSpellProjectileAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFSpellProjectileAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile_NoRegister();
	SPELLACTIONS_API UClass* Z_Construct_UClass_UACFSpellProjectileAction();
	SPELLACTIONS_API UClass* Z_Construct_UClass_UACFSpellProjectileAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpellActions();
// End Cross Module References
	void UACFSpellProjectileAction::StaticRegisterNativesUACFSpellProjectileAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFSpellProjectileAction);
	UClass* Z_Construct_UClass_UACFSpellProjectileAction_NoRegister()
	{
		return UACFSpellProjectileAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFSpellProjectileAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFSpellProjectileAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpellActions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSpellProjectileAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSpellProjectileAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACFSpellProjectileAction.h" },
		{ "ModuleRelativePath", "Public/ACFSpellProjectileAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSpellProjectileAction_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFSpellProjectileAction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFSpellProjectileAction_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFSpellProjectileAction, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSpellProjectileAction_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UACFSpellProjectileAction_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFSpellProjectileAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSpellProjectileAction_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFSpellProjectileAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFSpellProjectileAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFSpellProjectileAction_Statics::ClassParams = {
		&UACFSpellProjectileAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFSpellProjectileAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFSpellProjectileAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSpellProjectileAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFSpellProjectileAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSpellProjectileAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFSpellProjectileAction()
	{
		if (!Z_Registration_Info_UClass_UACFSpellProjectileAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFSpellProjectileAction.OuterSingleton, Z_Construct_UClass_UACFSpellProjectileAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFSpellProjectileAction.OuterSingleton;
	}
	template<> SPELLACTIONS_API UClass* StaticClass<UACFSpellProjectileAction>()
	{
		return UACFSpellProjectileAction::StaticClass();
	}
	UACFSpellProjectileAction::UACFSpellProjectileAction() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFSpellProjectileAction);
	UACFSpellProjectileAction::~UACFSpellProjectileAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSpellProjectileAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSpellProjectileAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFSpellProjectileAction, UACFSpellProjectileAction::StaticClass, TEXT("UACFSpellProjectileAction"), &Z_Registration_Info_UClass_UACFSpellProjectileAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFSpellProjectileAction), 2353007441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSpellProjectileAction_h_3180219325(TEXT("/Script/SpellActions"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSpellProjectileAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFSpellProjectileAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

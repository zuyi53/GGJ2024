// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCameraManager/Public/CCMStartSequenceNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCMStartSequenceNotify() {}
// Cross Module References
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMStartSequenceNotify();
	CINEMATICCAMERAMANAGER_API UClass* Z_Construct_UClass_UCCMStartSequenceNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_CinematicCameraManager();
// End Cross Module References
	void UCCMStartSequenceNotify::StaticRegisterNativesUCCMStartSequenceNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCCMStartSequenceNotify);
	UClass* Z_Construct_UClass_UCCMStartSequenceNotify_NoRegister()
	{
		return UCCMStartSequenceNotify::StaticClass();
	}
	struct Z_Construct_UClass_UCCMStartSequenceNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCCMStartSequenceNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCameraManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMStartSequenceNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMStartSequenceNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "CCMStartSequenceNotify.h" },
		{ "ModuleRelativePath", "Public/CCMStartSequenceNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCMStartSequenceNotify_Statics::NewProp_SequenceName_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/CCMStartSequenceNotify.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCCMStartSequenceNotify_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCCMStartSequenceNotify, SequenceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMStartSequenceNotify_Statics::NewProp_SequenceName_MetaData), Z_Construct_UClass_UCCMStartSequenceNotify_Statics::NewProp_SequenceName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCCMStartSequenceNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCCMStartSequenceNotify_Statics::NewProp_SequenceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCCMStartSequenceNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCCMStartSequenceNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCCMStartSequenceNotify_Statics::ClassParams = {
		&UCCMStartSequenceNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCCMStartSequenceNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCCMStartSequenceNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMStartSequenceNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UCCMStartSequenceNotify_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCMStartSequenceNotify_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCCMStartSequenceNotify()
	{
		if (!Z_Registration_Info_UClass_UCCMStartSequenceNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCCMStartSequenceNotify.OuterSingleton, Z_Construct_UClass_UCCMStartSequenceNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCCMStartSequenceNotify.OuterSingleton;
	}
	template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<UCCMStartSequenceNotify>()
	{
		return UCCMStartSequenceNotify::StaticClass();
	}
	UCCMStartSequenceNotify::UCCMStartSequenceNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCCMStartSequenceNotify);
	UCCMStartSequenceNotify::~UCCMStartSequenceNotify() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMStartSequenceNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMStartSequenceNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCCMStartSequenceNotify, UCCMStartSequenceNotify::StaticClass, TEXT("UCCMStartSequenceNotify"), &Z_Registration_Info_UClass_UCCMStartSequenceNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCCMStartSequenceNotify), 1948427086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMStartSequenceNotify_h_723518181(TEXT("/Script/CinematicCameraManager"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMStartSequenceNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMStartSequenceNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

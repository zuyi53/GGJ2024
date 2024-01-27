// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollisionsManager/Public/ACMActivateCollisionANS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMActivateCollisionANS() {}
// Cross Module References
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMActivateCollisionANS();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMActivateCollisionANS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_CollisionsManager();
// End Cross Module References
	void UACMActivateCollisionANS::StaticRegisterNativesUACMActivateCollisionANS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMActivateCollisionANS);
	UClass* Z_Construct_UClass_UACMActivateCollisionANS_NoRegister()
	{
		return UACMActivateCollisionANS::StaticClass();
	}
	struct Z_Construct_UClass_UACMActivateCollisionANS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TracesToStart_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracesToStart_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TracesToStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACMActivateCollisionANS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMActivateCollisionANS_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMActivateCollisionANS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ACMActivateCollisionANS.h" },
		{ "ModuleRelativePath", "Public/ACMActivateCollisionANS.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart_Inner = { "TracesToStart", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMActivateCollisionANS.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart = { "TracesToStart", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMActivateCollisionANS, TracesToStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart_MetaData), Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACMActivateCollisionANS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMActivateCollisionANS_Statics::NewProp_TracesToStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACMActivateCollisionANS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMActivateCollisionANS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMActivateCollisionANS_Statics::ClassParams = {
		&UACMActivateCollisionANS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACMActivateCollisionANS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACMActivateCollisionANS_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMActivateCollisionANS_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMActivateCollisionANS_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMActivateCollisionANS_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACMActivateCollisionANS()
	{
		if (!Z_Registration_Info_UClass_UACMActivateCollisionANS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMActivateCollisionANS.OuterSingleton, Z_Construct_UClass_UACMActivateCollisionANS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACMActivateCollisionANS.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UClass* StaticClass<UACMActivateCollisionANS>()
	{
		return UACMActivateCollisionANS::StaticClass();
	}
	UACMActivateCollisionANS::UACMActivateCollisionANS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACMActivateCollisionANS);
	UACMActivateCollisionANS::~UACMActivateCollisionANS() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMActivateCollisionANS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMActivateCollisionANS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACMActivateCollisionANS, UACMActivateCollisionANS::StaticClass, TEXT("UACMActivateCollisionANS"), &Z_Registration_Info_UClass_UACMActivateCollisionANS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMActivateCollisionANS), 1812089506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMActivateCollisionANS_h_1388459923(TEXT("/Script/CollisionsManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMActivateCollisionANS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMActivateCollisionANS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

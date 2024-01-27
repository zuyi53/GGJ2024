// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehavioralThree/ACFUpdateStateBTService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUpdateStateBTService() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFUpdateStateBTService();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFUpdateStateBTService_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	void UACFUpdateStateBTService::StaticRegisterNativesUACFUpdateStateBTService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFUpdateStateBTService);
	UClass* Z_Construct_UClass_UACFUpdateStateBTService_NoRegister()
	{
		return UACFUpdateStateBTService::StaticClass();
	}
	struct Z_Construct_UClass_UACFUpdateStateBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_aiController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUpdateStateBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateStateBTService_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateStateBTService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehavioralThree/ACFUpdateStateBTService.h" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateStateBTService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_aiController_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateStateBTService.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateStateBTService, aiController), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_aiController_MetaData), Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_aiController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_CharOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateStateBTService.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_CharOwner = { "CharOwner", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateStateBTService, CharOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_CharOwner_MetaData), Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_CharOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUpdateStateBTService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_aiController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateStateBTService_Statics::NewProp_CharOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUpdateStateBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUpdateStateBTService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUpdateStateBTService_Statics::ClassParams = {
		&UACFUpdateStateBTService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFUpdateStateBTService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateStateBTService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateStateBTService_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFUpdateStateBTService_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateStateBTService_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFUpdateStateBTService()
	{
		if (!Z_Registration_Info_UClass_UACFUpdateStateBTService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFUpdateStateBTService.OuterSingleton, Z_Construct_UClass_UACFUpdateStateBTService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFUpdateStateBTService.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFUpdateStateBTService>()
	{
		return UACFUpdateStateBTService::StaticClass();
	}
	UACFUpdateStateBTService::UACFUpdateStateBTService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUpdateStateBTService);
	UACFUpdateStateBTService::~UACFUpdateStateBTService() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateStateBTService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateStateBTService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFUpdateStateBTService, UACFUpdateStateBTService::StaticClass, TEXT("UACFUpdateStateBTService"), &Z_Registration_Info_UClass_UACFUpdateStateBTService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFUpdateStateBTService), 3130162400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateStateBTService_h_2745616803(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateStateBTService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateStateBTService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

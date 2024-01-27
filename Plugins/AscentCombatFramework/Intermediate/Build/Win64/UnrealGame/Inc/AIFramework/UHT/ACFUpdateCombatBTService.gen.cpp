// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehavioralThree/ACFUpdateCombatBTService.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUpdateCombatBTService() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFUpdateCombatBTService();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFUpdateCombatBTService_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	void UACFUpdateCombatBTService::StaticRegisterNativesUACFUpdateCombatBTService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFUpdateCombatBTService);
	UClass* Z_Construct_UClass_UACFUpdateCombatBTService_NoRegister()
	{
		return UACFUpdateCombatBTService::StaticClass();
	}
	struct Z_Construct_UClass_UACFUpdateCombatBTService_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_targetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatBehav_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_combatBehav;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchCombatTypeActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchCombatTypeActionTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUpdateCombatBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateCombatBTService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BehavioralThree/ACFUpdateCombatBTService.h" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateCombatBTService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_aiController_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateCombatBTService.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateCombatBTService, aiController), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_aiController_MetaData), Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_aiController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_targetActor_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateCombatBTService.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateCombatBTService, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_targetActor_MetaData), Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_targetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_CharOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateCombatBTService.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_CharOwner = { "CharOwner", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateCombatBTService, CharOwner), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_CharOwner_MetaData), Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_CharOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_combatBehav_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateCombatBTService.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_combatBehav = { "combatBehav", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateCombatBTService, combatBehav), Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_combatBehav_MetaData), Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_combatBehav_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_SwitchCombatTypeActionTag_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/BehavioralThree/ACFUpdateCombatBTService.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_SwitchCombatTypeActionTag = { "SwitchCombatTypeActionTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUpdateCombatBTService, SwitchCombatTypeActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_SwitchCombatTypeActionTag_MetaData), Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_SwitchCombatTypeActionTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUpdateCombatBTService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_aiController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_CharOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_combatBehav,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUpdateCombatBTService_Statics::NewProp_SwitchCombatTypeActionTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUpdateCombatBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUpdateCombatBTService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUpdateCombatBTService_Statics::ClassParams = {
		&UACFUpdateCombatBTService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFUpdateCombatBTService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFUpdateCombatBTService_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUpdateCombatBTService_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFUpdateCombatBTService()
	{
		if (!Z_Registration_Info_UClass_UACFUpdateCombatBTService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFUpdateCombatBTService.OuterSingleton, Z_Construct_UClass_UACFUpdateCombatBTService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFUpdateCombatBTService.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFUpdateCombatBTService>()
	{
		return UACFUpdateCombatBTService::StaticClass();
	}
	UACFUpdateCombatBTService::UACFUpdateCombatBTService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUpdateCombatBTService);
	UACFUpdateCombatBTService::~UACFUpdateCombatBTService() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateCombatBTService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateCombatBTService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFUpdateCombatBTService, UACFUpdateCombatBTService::StaticClass, TEXT("UACFUpdateCombatBTService"), &Z_Registration_Info_UClass_UACFUpdateCombatBTService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFUpdateCombatBTService), 2174424162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateCombatBTService_h_2972289305(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateCombatBTService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_BehavioralThree_ACFUpdateCombatBTService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

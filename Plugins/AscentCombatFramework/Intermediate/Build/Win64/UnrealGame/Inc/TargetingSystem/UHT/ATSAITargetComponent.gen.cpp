// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetingSystem/Public/ATSAITargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATSAITargetComponent() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSAITargetComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSAITargetComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSBaseTargetComponent();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UATSAITargetComponent::StaticRegisterNativesUATSAITargetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATSAITargetComponent);
	UClass* Z_Construct_UClass_UATSAITargetComponent_NoRegister()
	{
		return UATSAITargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UATSAITargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UATSAITargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UATSBaseTargetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATSAITargetComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UATSAITargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ATS" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ATSAITargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATSAITargetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UATSAITargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATSAITargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UATSAITargetComponent_Statics::ClassParams = {
		&UATSAITargetComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATSAITargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UATSAITargetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UATSAITargetComponent()
	{
		if (!Z_Registration_Info_UClass_UATSAITargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATSAITargetComponent.OuterSingleton, Z_Construct_UClass_UATSAITargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UATSAITargetComponent.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UATSAITargetComponent>()
	{
		return UATSAITargetComponent::StaticClass();
	}
	UATSAITargetComponent::UATSAITargetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UATSAITargetComponent);
	UATSAITargetComponent::~UATSAITargetComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSAITargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSAITargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UATSAITargetComponent, UATSAITargetComponent::StaticClass, TEXT("UATSAITargetComponent"), &Z_Registration_Info_UClass_UATSAITargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATSAITargetComponent), 1303141591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSAITargetComponent_h_2810204212(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSAITargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSAITargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

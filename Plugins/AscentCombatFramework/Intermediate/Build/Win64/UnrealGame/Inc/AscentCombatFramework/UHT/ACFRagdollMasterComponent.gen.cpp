// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFRagdollMasterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFRagdollMasterComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollMasterComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollMasterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFRagdollMasterComponent::StaticRegisterNativesUACFRagdollMasterComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFRagdollMasterComponent);
	UClass* Z_Construct_UClass_UACFRagdollMasterComponent_NoRegister()
	{
		return UACFRagdollMasterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFRagdollMasterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentlyActiveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentlyActiveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_currentlyActiveComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pendingDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pendingDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pendingDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFRagdollMasterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollMasterComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollMasterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFRagdollMasterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents_Inner = { "currentlyActiveComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UACFRagdollComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents = { "currentlyActiveComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollMasterComponent, currentlyActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents_MetaData), Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete_Inner = { "pendingDelete", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UACFRagdollComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFRagdollMasterComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete = { "pendingDelete", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRagdollMasterComponent, pendingDelete), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete_MetaData), Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFRagdollMasterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_currentlyActiveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRagdollMasterComponent_Statics::NewProp_pendingDelete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFRagdollMasterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFRagdollMasterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFRagdollMasterComponent_Statics::ClassParams = {
		&UACFRagdollMasterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFRagdollMasterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollMasterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollMasterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFRagdollMasterComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRagdollMasterComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFRagdollMasterComponent()
	{
		if (!Z_Registration_Info_UClass_UACFRagdollMasterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFRagdollMasterComponent.OuterSingleton, Z_Construct_UClass_UACFRagdollMasterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFRagdollMasterComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFRagdollMasterComponent>()
	{
		return UACFRagdollMasterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFRagdollMasterComponent);
	UACFRagdollMasterComponent::~UACFRagdollMasterComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollMasterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollMasterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFRagdollMasterComponent, UACFRagdollMasterComponent::StaticClass, TEXT("UACFRagdollMasterComponent"), &Z_Registration_Info_UClass_UACFRagdollMasterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFRagdollMasterComponent), 1141907148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollMasterComponent_h_253077302(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollMasterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFRagdollMasterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
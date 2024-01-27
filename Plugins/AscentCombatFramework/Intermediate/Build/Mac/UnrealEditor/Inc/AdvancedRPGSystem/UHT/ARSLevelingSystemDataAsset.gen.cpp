// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedRPGSystem/Public/ARSLevelingSystemDataAsset.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSLevelingSystemDataAsset() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSLevelingSystemDataAsset();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSLevelingSystemDataAsset_NoRegister();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesByLevel();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_AdvancedRPGSystem();
// End Cross Module References
	void UARSLevelingSystemDataAsset::StaticRegisterNativesUARSLevelingSystemDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSLevelingSystemDataAsset);
	UClass* Z_Construct_UClass_UARSLevelingSystemDataAsset_NoRegister()
	{
		return UARSLevelingSystemDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesByLevelCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesByLevelCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesByLevelCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedRPGSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ARSLevelingSystemDataAsset.h" },
		{ "ModuleRelativePath", "Public/ARSLevelingSystemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves_Inner = { "AttributesByLevelCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributesByLevel, METADATA_PARAMS(0, nullptr) }; // 3034392841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves_MetaData[] = {
		{ "Category", "ARS" },
		{ "ModuleRelativePath", "Public/ARSLevelingSystemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves = { "AttributesByLevelCurves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARSLevelingSystemDataAsset, AttributesByLevelCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves_MetaData), Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves_MetaData) }; // 3034392841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::NewProp_AttributesByLevelCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSLevelingSystemDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::ClassParams = {
		&UARSLevelingSystemDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UARSLevelingSystemDataAsset()
	{
		if (!Z_Registration_Info_UClass_UARSLevelingSystemDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSLevelingSystemDataAsset.OuterSingleton, Z_Construct_UClass_UARSLevelingSystemDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSLevelingSystemDataAsset.OuterSingleton;
	}
	template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<UARSLevelingSystemDataAsset>()
	{
		return UARSLevelingSystemDataAsset::StaticClass();
	}
	UARSLevelingSystemDataAsset::UARSLevelingSystemDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSLevelingSystemDataAsset);
	UARSLevelingSystemDataAsset::~UARSLevelingSystemDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSLevelingSystemDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSLevelingSystemDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSLevelingSystemDataAsset, UARSLevelingSystemDataAsset::StaticClass, TEXT("UARSLevelingSystemDataAsset"), &Z_Registration_Info_UClass_UARSLevelingSystemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSLevelingSystemDataAsset), 654283887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSLevelingSystemDataAsset_h_1715137048(TEXT("/Script/AdvancedRPGSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSLevelingSystemDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSLevelingSystemDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

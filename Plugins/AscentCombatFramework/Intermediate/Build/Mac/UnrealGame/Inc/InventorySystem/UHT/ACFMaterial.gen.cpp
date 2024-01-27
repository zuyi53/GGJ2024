// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMaterial() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFMaterial();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void AACFMaterial::StaticRegisterNativesAACFMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFMaterial);
	UClass* Z_Construct_UClass_AACFMaterial_NoRegister()
	{
		return AACFMaterial::StaticClass();
	}
	struct Z_Construct_UClass_AACFMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMaterial_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFMaterial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/ACFMaterial.h" },
		{ "ModuleRelativePath", "Public/Items/ACFMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFMaterial_Statics::ClassParams = {
		&AACFMaterial::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFMaterial_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AACFMaterial()
	{
		if (!Z_Registration_Info_UClass_AACFMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFMaterial.OuterSingleton, Z_Construct_UClass_AACFMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFMaterial.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFMaterial>()
	{
		return AACFMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFMaterial);
	AACFMaterial::~AACFMaterial() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFMaterial, AACFMaterial::StaticClass, TEXT("AACFMaterial"), &Z_Registration_Info_UClass_AACFMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFMaterial), 1139383380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMaterial_h_3116408933(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGameInstance() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFGameInstance();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFGameInstance::StaticRegisterNativesUACFGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFGameInstance);
	UClass* Z_Construct_UClass_UACFGameInstance_NoRegister()
	{
		return UACFGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UACFGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UnloadedLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnloadedLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnloadedLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/ACFGameInstance.h" },
		{ "ModuleRelativePath", "Public/Game/ACFGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels_Inner = { "LoadedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels = { "LoadedLevels", nullptr, (EPropertyFlags)0x0020080001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGameInstance, LoadedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels_MetaData), Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels_Inner = { "UnloadedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Game/ACFGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels = { "UnloadedLevels", nullptr, (EPropertyFlags)0x0020080001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGameInstance, UnloadedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels_MetaData), Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameInstance_Statics::NewProp_LoadedLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameInstance_Statics::NewProp_UnloadedLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFGameInstance_Statics::ClassParams = {
		&UACFGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFGameInstance()
	{
		if (!Z_Registration_Info_UClass_UACFGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFGameInstance.OuterSingleton, Z_Construct_UClass_UACFGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFGameInstance.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFGameInstance>()
	{
		return UACFGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFGameInstance);
	UACFGameInstance::~UACFGameInstance() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFGameInstance, UACFGameInstance::StaticClass, TEXT("UACFGameInstance"), &Z_Registration_Info_UClass_UACFGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFGameInstance), 2985096839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameInstance_h_3422341759(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

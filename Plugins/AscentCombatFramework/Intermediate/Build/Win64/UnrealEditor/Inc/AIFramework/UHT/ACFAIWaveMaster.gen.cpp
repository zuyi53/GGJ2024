// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Groups/ACFAIWaveMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAIWaveMaster() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIWaveMaster();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIWaveMaster_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFAIWavesMasterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	void AACFAIWaveMaster::StaticRegisterNativesAACFAIWaveMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFAIWaveMaster);
	UClass* Z_Construct_UClass_AACFAIWaveMaster_NoRegister()
	{
		return AACFAIWaveMaster::StaticClass();
	}
	struct Z_Construct_UClass_AACFAIWaveMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wavesComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_wavesComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFAIWaveMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIWaveMaster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIWaveMaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Groups/ACFAIWaveMaster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIWaveMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIWaveMaster_Statics::NewProp_wavesComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Groups/ACFAIWaveMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIWaveMaster_Statics::NewProp_wavesComp = { "wavesComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIWaveMaster, wavesComp), Z_Construct_UClass_UACFAIWavesMasterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIWaveMaster_Statics::NewProp_wavesComp_MetaData), Z_Construct_UClass_AACFAIWaveMaster_Statics::NewProp_wavesComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFAIWaveMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIWaveMaster_Statics::NewProp_wavesComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFAIWaveMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFAIWaveMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFAIWaveMaster_Statics::ClassParams = {
		&AACFAIWaveMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AACFAIWaveMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIWaveMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIWaveMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFAIWaveMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIWaveMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFAIWaveMaster()
	{
		if (!Z_Registration_Info_UClass_AACFAIWaveMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFAIWaveMaster.OuterSingleton, Z_Construct_UClass_AACFAIWaveMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFAIWaveMaster.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFAIWaveMaster>()
	{
		return AACFAIWaveMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFAIWaveMaster);
	AACFAIWaveMaster::~AACFAIWaveMaster() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIWaveMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIWaveMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFAIWaveMaster, AACFAIWaveMaster::StaticClass, TEXT("AACFAIWaveMaster"), &Z_Registration_Info_UClass_AACFAIWaveMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFAIWaveMaster), 441294121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIWaveMaster_h_359631510(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIWaveMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIWaveMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

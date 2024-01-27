// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Animation/ACFGoRagdollForDurationNotify.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGoRagdollForDurationNotify() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFGoRagdollForDurationNotify();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFGoRagdollForDurationNotify_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRagdollImpulse();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFGoRagdollForDurationNotify::StaticRegisterNativesUACFGoRagdollForDurationNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFGoRagdollForDurationNotify);
	UClass* Z_Construct_UClass_UACFGoRagdollForDurationNotify_NoRegister()
	{
		return UACFGoRagdollForDurationNotify::StaticClass();
	}
	struct Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFGoRagdollForDurationNotify.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFGoRagdollForDurationNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_RagdollImpulse_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFGoRagdollForDurationNotify.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_RagdollImpulse = { "RagdollImpulse", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGoRagdollForDurationNotify, RagdollImpulse), Z_Construct_UScriptStruct_FRagdollImpulse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_RagdollImpulse_MetaData), Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_RagdollImpulse_MetaData) }; // 1734255984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFGoRagdollForDurationNotify.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFGoRagdollForDurationNotify, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_Duration_MetaData), Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_Duration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_RagdollImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFGoRagdollForDurationNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::ClassParams = {
		&UACFGoRagdollForDurationNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFGoRagdollForDurationNotify()
	{
		if (!Z_Registration_Info_UClass_UACFGoRagdollForDurationNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFGoRagdollForDurationNotify.OuterSingleton, Z_Construct_UClass_UACFGoRagdollForDurationNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFGoRagdollForDurationNotify.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFGoRagdollForDurationNotify>()
	{
		return UACFGoRagdollForDurationNotify::StaticClass();
	}
	UACFGoRagdollForDurationNotify::UACFGoRagdollForDurationNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFGoRagdollForDurationNotify);
	UACFGoRagdollForDurationNotify::~UACFGoRagdollForDurationNotify() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFGoRagdollForDurationNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFGoRagdollForDurationNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFGoRagdollForDurationNotify, UACFGoRagdollForDurationNotify::StaticClass, TEXT("UACFGoRagdollForDurationNotify"), &Z_Registration_Info_UClass_UACFGoRagdollForDurationNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFGoRagdollForDurationNotify), 987250008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFGoRagdollForDurationNotify_h_275191688(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFGoRagdollForDurationNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFGoRagdollForDurationNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

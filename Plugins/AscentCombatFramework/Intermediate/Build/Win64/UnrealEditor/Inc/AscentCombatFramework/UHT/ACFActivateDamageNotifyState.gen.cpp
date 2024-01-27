// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Animation/ACFActivateDamageNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActivateDamageNotifyState() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFActivateDamageNotifyState();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFActivateDamageNotifyState_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFActivateDamageNotifyState::StaticRegisterNativesUACFActivateDamageNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActivateDamageNotifyState);
	UClass* Z_Construct_UClass_UACFActivateDamageNotifyState_NoRegister()
	{
		return UACFActivateDamageNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UACFActivateDamageNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageToActivate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageToActivate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFActivateDamageNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFActivateDamageNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFActivateDamageNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate = { "DamageToActivate", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActivateDamageNotifyState, DamageToActivate), Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate_MetaData), Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate_MetaData) }; // 3742955585
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels_Inner = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFActivateDamageNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActivateDamageNotifyState, TraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels_MetaData), Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_DamageToActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::NewProp_TraceChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActivateDamageNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::ClassParams = {
		&UACFActivateDamageNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFActivateDamageNotifyState()
	{
		if (!Z_Registration_Info_UClass_UACFActivateDamageNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActivateDamageNotifyState.OuterSingleton, Z_Construct_UClass_UACFActivateDamageNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActivateDamageNotifyState.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFActivateDamageNotifyState>()
	{
		return UACFActivateDamageNotifyState::StaticClass();
	}
	UACFActivateDamageNotifyState::UACFActivateDamageNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActivateDamageNotifyState);
	UACFActivateDamageNotifyState::~UACFActivateDamageNotifyState() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFActivateDamageNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFActivateDamageNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActivateDamageNotifyState, UACFActivateDamageNotifyState::StaticClass, TEXT("UACFActivateDamageNotifyState"), &Z_Registration_Info_UClass_UACFActivateDamageNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActivateDamageNotifyState), 3709441045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFActivateDamageNotifyState_h_3472700977(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFActivateDamageNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFActivateDamageNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

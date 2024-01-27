// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFHitAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFHitAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFHitAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFHitAction_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFHitAction::StaticRegisterNativesUACFHitAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFHitAction);
	UClass* Z_Construct_UClass_UACFHitAction_NoRegister()
	{
		return UACFHitAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFHitAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitDirectionToMontageSectionMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitDirectionToMontageSectionMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitDirectionToMontageSectionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDirectionToMontageSectionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitDirectionToMontageSectionMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFHitAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHitAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFHitAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/ACFHitAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFHitAction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_ValueProp = { "HitDirectionToMontageSectionMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp = { "HitDirectionToMontageSectionMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFHitAction.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap = { "HitDirectionToMontageSectionMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFHitAction, HitDirectionToMontageSectionMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_MetaData), Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_MetaData) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFHitAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFHitAction_Statics::NewProp_HitDirectionToMontageSectionMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFHitAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFHitAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFHitAction_Statics::ClassParams = {
		&UACFHitAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFHitAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFHitAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHitAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFHitAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFHitAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFHitAction()
	{
		if (!Z_Registration_Info_UClass_UACFHitAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFHitAction.OuterSingleton, Z_Construct_UClass_UACFHitAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFHitAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFHitAction>()
	{
		return UACFHitAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFHitAction);
	UACFHitAction::~UACFHitAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFHitAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFHitAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFHitAction, UACFHitAction::StaticClass, TEXT("UACFHitAction"), &Z_Registration_Info_UClass_UACFHitAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFHitAction), 1979400120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFHitAction_h_831657007(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFHitAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFHitAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

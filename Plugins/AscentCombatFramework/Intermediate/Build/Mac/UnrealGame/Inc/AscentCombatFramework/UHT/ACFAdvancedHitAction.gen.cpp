// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFAdvancedHitAction.h"
#include "ACFActionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAdvancedHitAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSections();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFAdvancedHitAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFAdvancedHitAction_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EHitDirection();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFAdvancedHitAction::StaticRegisterNativesUACFAdvancedHitAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFAdvancedHitAction);
	UClass* Z_Construct_UClass_UACFAdvancedHitAction_NoRegister()
	{
		return UACFAdvancedHitAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFAdvancedHitAction_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrontDetailsSectionByBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontDetailsSectionByBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrontDetailsSectionByBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitWarpDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitWarpDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAdvancedHitAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAdvancedHitAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/ACFAdvancedHitAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFAdvancedHitAction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_ValueProp = { "HitDirectionToMontageSectionMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp = { "HitDirectionToMontageSectionMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCombatFramework_EHitDirection, METADATA_PARAMS(0, nullptr) }; // 1482211941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFAdvancedHitAction.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap = { "HitDirectionToMontageSectionMap", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAdvancedHitAction, HitDirectionToMontageSectionMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_MetaData), Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_MetaData) }; // 1482211941
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames_Inner = { "FrontDetailsSectionByBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneSections, METADATA_PARAMS(0, nullptr) }; // 3243565428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFAdvancedHitAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames = { "FrontDetailsSectionByBoneNames", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAdvancedHitAction, FrontDetailsSectionByBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames_MetaData), Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames_MetaData) }; // 3243565428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_hitWarpDistance_MetaData[] = {
		{ "Category", "ACF| Warp" },
		{ "EditCondition", "bSnapToTarget" },
		{ "ModuleRelativePath", "Public/Actions/ACFAdvancedHitAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_hitWarpDistance = { "hitWarpDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFAdvancedHitAction, hitWarpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_hitWarpDistance_MetaData), Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_hitWarpDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAdvancedHitAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_HitDirectionToMontageSectionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_FrontDetailsSectionByBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAdvancedHitAction_Statics::NewProp_hitWarpDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAdvancedHitAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAdvancedHitAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAdvancedHitAction_Statics::ClassParams = {
		&UACFAdvancedHitAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFAdvancedHitAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFAdvancedHitAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFAdvancedHitAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFAdvancedHitAction()
	{
		if (!Z_Registration_Info_UClass_UACFAdvancedHitAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFAdvancedHitAction.OuterSingleton, Z_Construct_UClass_UACFAdvancedHitAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFAdvancedHitAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFAdvancedHitAction>()
	{
		return UACFAdvancedHitAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAdvancedHitAction);
	UACFAdvancedHitAction::~UACFAdvancedHitAction() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAdvancedHitAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAdvancedHitAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFAdvancedHitAction, UACFAdvancedHitAction::StaticClass, TEXT("UACFAdvancedHitAction"), &Z_Registration_Info_UClass_UACFAdvancedHitAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFAdvancedHitAction), 2926865061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAdvancedHitAction_h_2105946873(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAdvancedHitAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFAdvancedHitAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/ACFActionsSet.h"
#include "ACFActionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionsSet() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsSet();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsSet_NoRegister();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionState();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	void UACFActionsSet::StaticRegisterNativesUACFActionsSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionsSet);
	UClass* Z_Construct_UClass_UACFActionsSet_NoRegister()
	{
		return UACFActionsSet::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionsSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionsSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ACF" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Actions/ACFActionsSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ACFActionsSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(0, nullptr) }; // 3894552089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "ACF | Actions" },
		{ "ModuleRelativePath", "Public/Actions/ACFActionsSet.h" },
		{ "TitleProperty", "TagName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0020088000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsSet, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions_MetaData), Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions_MetaData) }; // 3894552089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFActionsSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsSet_Statics::NewProp_Actions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionsSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionsSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionsSet_Statics::ClassParams = {
		&UACFActionsSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFActionsSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionsSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFActionsSet()
	{
		if (!Z_Registration_Info_UClass_UACFActionsSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionsSet.OuterSingleton, Z_Construct_UClass_UACFActionsSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionsSet.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFActionsSet>()
	{
		return UACFActionsSet::StaticClass();
	}
	UACFActionsSet::UACFActionsSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionsSet);
	UACFActionsSet::~UACFActionsSet() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFActionsSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFActionsSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionsSet, UACFActionsSet::StaticClass, TEXT("UACFActionsSet"), &Z_Registration_Info_UClass_UACFActionsSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionsSet), 4066505675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFActionsSet_h_1653245833(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFActionsSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFActionsSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

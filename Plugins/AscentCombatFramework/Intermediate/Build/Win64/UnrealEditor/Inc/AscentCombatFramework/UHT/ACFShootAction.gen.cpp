// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFShootAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFShootAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFShootAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFShootAction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFProjectile_NoRegister();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EShootTargetType();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFShootAction::StaticRegisterNativesUACFShootAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFShootAction);
	UClass* Z_Construct_UClass_UACFShootAction_NoRegister()
	{
		return UACFShootAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFShootAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwipeTargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwipeTargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwipeTargetType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFShootAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/ACFShootAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAction_Statics::NewProp_ProjectileOverride_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFShootAction_Statics::NewProp_ProjectileOverride = { "ProjectileOverride", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAction, ProjectileOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::NewProp_ProjectileOverride_MetaData), Z_Construct_UClass_UACFShootAction_Statics::NewProp_ProjectileOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAction_Statics::NewProp_DeltaDirection_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The direction offset from the controller position*/" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAction.h" },
		{ "ToolTip", "The direction offset from the controller position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFShootAction_Statics::NewProp_DeltaDirection = { "DeltaDirection", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAction, DeltaDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::NewProp_DeltaDirection_MetaData), Z_Construct_UClass_UACFShootAction_Statics::NewProp_DeltaDirection_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFShootAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType = { "SwipeTargetType", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFShootAction, SwipeTargetType), Z_Construct_UEnum_InventorySystem_EShootTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType_MetaData), Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType_MetaData) }; // 4018612882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFShootAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAction_Statics::NewProp_ProjectileOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAction_Statics::NewProp_DeltaDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFShootAction_Statics::NewProp_SwipeTargetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFShootAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFShootAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFShootAction_Statics::ClassParams = {
		&UACFShootAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFShootAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFShootAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFShootAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFShootAction()
	{
		if (!Z_Registration_Info_UClass_UACFShootAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFShootAction.OuterSingleton, Z_Construct_UClass_UACFShootAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFShootAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFShootAction>()
	{
		return UACFShootAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFShootAction);
	UACFShootAction::~UACFShootAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFShootAction, UACFShootAction::StaticClass, TEXT("UACFShootAction"), &Z_Registration_Info_UClass_UACFShootAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFShootAction), 2706351207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAction_h_3389342249(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFShootAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

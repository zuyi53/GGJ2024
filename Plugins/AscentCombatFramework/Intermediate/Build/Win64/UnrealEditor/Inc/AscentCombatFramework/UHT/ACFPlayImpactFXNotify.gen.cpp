// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Animation/ACFPlayImpactFXNotify.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPlayImpactFXNotify() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFPlayImpactFXNotify();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFPlayImpactFXNotify_NoRegister();
	COLLISIONSMANAGER_API UEnum* Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFPlayImpactFXNotify::StaticRegisterNativesUACFPlayImpactFXNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFPlayImpactFXNotify);
	UClass* Z_Construct_UClass_UACFPlayImpactFXNotify_NoRegister()
	{
		return UACFPlayImpactFXNotify::StaticClass();
	}
	struct Z_Construct_UClass_UACFPlayImpactFXNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReaction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitReaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageReceivedType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageReceivedType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFPlayImpactFXNotify.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFPlayImpactFXNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_HitReaction_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFPlayImpactFXNotify.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_HitReaction = { "HitReaction", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFPlayImpactFXNotify, HitReaction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_HitReaction_MetaData), Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_HitReaction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_DamageReceivedType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFPlayImpactFXNotify.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_DamageReceivedType = { "DamageReceivedType", nullptr, (EPropertyFlags)0x0014000000000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFPlayImpactFXNotify, DamageReceivedType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_DamageReceivedType_MetaData), Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_DamageReceivedType_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFPlayImpactFXNotify.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFPlayImpactFXNotify, SpawnLocation), Z_Construct_UEnum_CollisionsManager_ESpawnFXLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation_MetaData), Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation_MetaData) }; // 2040338089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SocketOrBoneLocation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFPlayImpactFXNotify.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SocketOrBoneLocation = { "SocketOrBoneLocation", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFPlayImpactFXNotify, SocketOrBoneLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SocketOrBoneLocation_MetaData), Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SocketOrBoneLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_HitReaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_DamageReceivedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::NewProp_SocketOrBoneLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFPlayImpactFXNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::ClassParams = {
		&UACFPlayImpactFXNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFPlayImpactFXNotify()
	{
		if (!Z_Registration_Info_UClass_UACFPlayImpactFXNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFPlayImpactFXNotify.OuterSingleton, Z_Construct_UClass_UACFPlayImpactFXNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFPlayImpactFXNotify.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFPlayImpactFXNotify>()
	{
		return UACFPlayImpactFXNotify::StaticClass();
	}
	UACFPlayImpactFXNotify::UACFPlayImpactFXNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFPlayImpactFXNotify);
	UACFPlayImpactFXNotify::~UACFPlayImpactFXNotify() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFPlayImpactFXNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFPlayImpactFXNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFPlayImpactFXNotify, UACFPlayImpactFXNotify::StaticClass, TEXT("UACFPlayImpactFXNotify"), &Z_Registration_Info_UClass_UACFPlayImpactFXNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFPlayImpactFXNotify), 2225626703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFPlayImpactFXNotify_h_2353651872(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFPlayImpactFXNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Animation_ACFPlayImpactFXNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

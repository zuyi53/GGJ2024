// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFMovesetLayer.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFMovesetLayer() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimLayer();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFMovesetLayer();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFMovesetLayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	void UACFMovesetLayer::StaticRegisterNativesUACFMovesetLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFMovesetLayer);
	UClass* Z_Construct_UClass_UACFMovesetLayer_NoRegister()
	{
		return UACFMovesetLayer::StaticClass();
	}
	struct Z_Construct_UClass_UACFMovesetLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFMovesetLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFAnimLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMovesetLayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFMovesetLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/ACFMovesetLayer.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFMovesetLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFMovesetLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFMovesetLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFMovesetLayer_Statics::ClassParams = {
		&UACFMovesetLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFMovesetLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFMovesetLayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFMovesetLayer()
	{
		if (!Z_Registration_Info_UClass_UACFMovesetLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFMovesetLayer.OuterSingleton, Z_Construct_UClass_UACFMovesetLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFMovesetLayer.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFMovesetLayer>()
	{
		return UACFMovesetLayer::StaticClass();
	}
	UACFMovesetLayer::UACFMovesetLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFMovesetLayer);
	UACFMovesetLayer::~UACFMovesetLayer() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFMovesetLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFMovesetLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFMovesetLayer, UACFMovesetLayer::StaticClass, TEXT("UACFMovesetLayer"), &Z_Registration_Info_UClass_UACFMovesetLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFMovesetLayer), 3645386594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFMovesetLayer_h_2479909102(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFMovesetLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFMovesetLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

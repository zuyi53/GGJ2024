// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFRiderAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFRiderAnimInstance() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFRiderLayer();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFRiderAnimInstance();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFRiderAnimInstance_NoRegister();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_UACFRiderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	void UACFRiderAnimInstance::StaticRegisterNativesUACFRiderAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFRiderAnimInstance);
	UClass* Z_Construct_UClass_UACFRiderAnimInstance_NoRegister()
	{
		return UACFRiderAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UACFRiderAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRiding_MetaData[];
#endif
		static void NewProp_bIsRiding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRiding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountTurn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RiderComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFRiderAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFRiderLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ACFRiderAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ACFRiderAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding_SetBit(void* Obj)
	{
		((UACFRiderAnimInstance*)Obj)->bIsRiding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding = { "bIsRiding", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFRiderAnimInstance), &Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding_MetaData), Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountSpeed_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountSpeed = { "MountSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRiderAnimInstance, MountSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountSpeed_MetaData), Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountTurn_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountTurn = { "MountTurn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRiderAnimInstance, MountTurn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountTurn_MetaData), Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountTurn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_RiderComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFRiderAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_RiderComp = { "RiderComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFRiderAnimInstance, RiderComp), Z_Construct_UClass_UACFRiderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_RiderComp_MetaData), Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_RiderComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFRiderAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_bIsRiding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_MountTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFRiderAnimInstance_Statics::NewProp_RiderComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFRiderAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFRiderAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFRiderAnimInstance_Statics::ClassParams = {
		&UACFRiderAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFRiderAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFRiderAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFRiderAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFRiderAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UACFRiderAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFRiderAnimInstance.OuterSingleton, Z_Construct_UClass_UACFRiderAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFRiderAnimInstance.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<UACFRiderAnimInstance>()
	{
		return UACFRiderAnimInstance::StaticClass();
	}
	UACFRiderAnimInstance::UACFRiderAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFRiderAnimInstance);
	UACFRiderAnimInstance::~UACFRiderAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFRiderAnimInstance, UACFRiderAnimInstance::StaticClass, TEXT("UACFRiderAnimInstance"), &Z_Registration_Info_UClass_UACFRiderAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFRiderAnimInstance), 718248477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAnimInstance_h_3110470893(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

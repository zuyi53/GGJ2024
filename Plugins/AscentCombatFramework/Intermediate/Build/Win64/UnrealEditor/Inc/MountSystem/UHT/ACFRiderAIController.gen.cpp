// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MountSystem/Public/ACFRiderAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFRiderAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_AACFRiderAIController();
	MOUNTSYSTEM_API UClass* Z_Construct_UClass_AACFRiderAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MountSystem();
// End Cross Module References
	void AACFRiderAIController::StaticRegisterNativesAACFRiderAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFRiderAIController);
	UClass* Z_Construct_UClass_AACFRiderAIController_NoRegister()
	{
		return AACFRiderAIController::StaticClass();
	}
	struct Z_Construct_UClass_AACFRiderAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideControlWithMountRotation_MetaData[];
#endif
		static void NewProp_bOverrideControlWithMountRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideControlWithMountRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClampMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFRiderAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MountSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRiderAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ACFRiderAIController.h" },
		{ "ModuleRelativePath", "Public/ACFRiderAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFRiderAIController.h" },
	};
#endif
	void Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation_SetBit(void* Obj)
	{
		((AACFRiderAIController*)Obj)->bOverrideControlWithMountRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation = { "bOverrideControlWithMountRotation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFRiderAIController), &Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation_MetaData), Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_OffsetRotCorrection_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bOverrideControlWithMountRotation == true" },
		{ "ModuleRelativePath", "Public/ACFRiderAIController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_OffsetRotCorrection = { "OffsetRotCorrection", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFRiderAIController, OffsetRotCorrection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_OffsetRotCorrection_MetaData), Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_OffsetRotCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bOverrideControlWithMountRotation == true" },
		{ "ModuleRelativePath", "Public/ACFRiderAIController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFRiderAIController, ClampMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMin_MetaData), Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bOverrideControlWithMountRotation == true" },
		{ "ModuleRelativePath", "Public/ACFRiderAIController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFRiderAIController, ClampMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMax_MetaData), Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMax_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFRiderAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_bOverrideControlWithMountRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_OffsetRotCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFRiderAIController_Statics::NewProp_ClampMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFRiderAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFRiderAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFRiderAIController_Statics::ClassParams = {
		&AACFRiderAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AACFRiderAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFRiderAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFRiderAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFRiderAIController()
	{
		if (!Z_Registration_Info_UClass_AACFRiderAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFRiderAIController.OuterSingleton, Z_Construct_UClass_AACFRiderAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFRiderAIController.OuterSingleton;
	}
	template<> MOUNTSYSTEM_API UClass* StaticClass<AACFRiderAIController>()
	{
		return AACFRiderAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFRiderAIController);
	AACFRiderAIController::~AACFRiderAIController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFRiderAIController, AACFRiderAIController::StaticClass, TEXT("AACFRiderAIController"), &Z_Registration_Info_UClass_AACFRiderAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFRiderAIController), 398489222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAIController_h_936670936(TEXT("/Script/MountSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

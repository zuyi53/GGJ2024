// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFSetHandsIKEnabledNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFSetHandsIKEnabledNotify() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFSetHandsIKEnabledNotify();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFSetHandsIKEnabledNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	void UACFSetHandsIKEnabledNotify::StaticRegisterNativesUACFSetHandsIKEnabledNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFSetHandsIKEnabledNotify);
	UClass* Z_Construct_UClass_UACFSetHandsIKEnabledNotify_NoRegister()
	{
		return UACFSetHandsIKEnabledNotify::StaticClass();
	}
	struct Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFSetHandsIKEnabledNotify.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFSetHandsIKEnabledNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFSetHandsIKEnabledNotify.h" },
	};
#endif
	void Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UACFSetHandsIKEnabledNotify*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFSetHandsIKEnabledNotify), &Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFSetHandsIKEnabledNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::ClassParams = {
		&UACFSetHandsIKEnabledNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFSetHandsIKEnabledNotify()
	{
		if (!Z_Registration_Info_UClass_UACFSetHandsIKEnabledNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFSetHandsIKEnabledNotify.OuterSingleton, Z_Construct_UClass_UACFSetHandsIKEnabledNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFSetHandsIKEnabledNotify.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFSetHandsIKEnabledNotify>()
	{
		return UACFSetHandsIKEnabledNotify::StaticClass();
	}
	UACFSetHandsIKEnabledNotify::UACFSetHandsIKEnabledNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFSetHandsIKEnabledNotify);
	UACFSetHandsIKEnabledNotify::~UACFSetHandsIKEnabledNotify() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetHandsIKEnabledNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetHandsIKEnabledNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFSetHandsIKEnabledNotify, UACFSetHandsIKEnabledNotify::StaticClass, TEXT("UACFSetHandsIKEnabledNotify"), &Z_Registration_Info_UClass_UACFSetHandsIKEnabledNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFSetHandsIKEnabledNotify), 1105786277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetHandsIKEnabledNotify_h_2908709920(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetHandsIKEnabledNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetHandsIKEnabledNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

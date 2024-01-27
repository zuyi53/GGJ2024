// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ACFSetFeetIKEnabledNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFSetFeetIKEnabledNotify() {}
// Cross Module References
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFSetFeetIKEnabledNotify();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFSetFeetIKEnabledNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_CharacterController();
// End Cross Module References
	void UACFSetFeetIKEnabledNotify::StaticRegisterNativesUACFSetFeetIKEnabledNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFSetFeetIKEnabledNotify);
	UClass* Z_Construct_UClass_UACFSetFeetIKEnabledNotify_NoRegister()
	{
		return UACFSetFeetIKEnabledNotify::StaticClass();
	}
	struct Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics
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
	UObject* (*const Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ACFSetFeetIKEnabledNotify.h" },
		{ "ModuleRelativePath", "Public/Animation/ACFSetFeetIKEnabledNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Animation/ACFSetFeetIKEnabledNotify.h" },
	};
#endif
	void Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UACFSetFeetIKEnabledNotify*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFSetFeetIKEnabledNotify), &Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFSetFeetIKEnabledNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::ClassParams = {
		&UACFSetFeetIKEnabledNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFSetFeetIKEnabledNotify()
	{
		if (!Z_Registration_Info_UClass_UACFSetFeetIKEnabledNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFSetFeetIKEnabledNotify.OuterSingleton, Z_Construct_UClass_UACFSetFeetIKEnabledNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFSetFeetIKEnabledNotify.OuterSingleton;
	}
	template<> CHARACTERCONTROLLER_API UClass* StaticClass<UACFSetFeetIKEnabledNotify>()
	{
		return UACFSetFeetIKEnabledNotify::StaticClass();
	}
	UACFSetFeetIKEnabledNotify::UACFSetFeetIKEnabledNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFSetFeetIKEnabledNotify);
	UACFSetFeetIKEnabledNotify::~UACFSetFeetIKEnabledNotify() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetFeetIKEnabledNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetFeetIKEnabledNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFSetFeetIKEnabledNotify, UACFSetFeetIKEnabledNotify::StaticClass, TEXT("UACFSetFeetIKEnabledNotify"), &Z_Registration_Info_UClass_UACFSetFeetIKEnabledNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFSetFeetIKEnabledNotify), 815051533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetFeetIKEnabledNotify_h_2521463696(TEXT("/Script/CharacterController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetFeetIKEnabledNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFSetFeetIKEnabledNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

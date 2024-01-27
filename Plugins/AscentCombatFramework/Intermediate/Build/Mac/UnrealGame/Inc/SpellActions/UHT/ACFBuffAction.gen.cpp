// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFBuffAction.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFBuffAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedAttributeSetModifier();
	SPELLACTIONS_API UClass* Z_Construct_UClass_UACFBuffAction();
	SPELLACTIONS_API UClass* Z_Construct_UClass_UACFBuffAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpellActions();
// End Cross Module References
	void UACFBuffAction::StaticRegisterNativesUACFBuffAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFBuffAction);
	UClass* Z_Construct_UClass_UACFBuffAction_NoRegister()
	{
		return UACFBuffAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFBuffAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuffToApply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuffToApply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFBuffAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SpellActions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBuffAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBuffAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ACFBuffAction.h" },
		{ "ModuleRelativePath", "Public/ACFBuffAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFBuffAction_Statics::NewProp_BuffToApply_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFBuffAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFBuffAction_Statics::NewProp_BuffToApply = { "BuffToApply", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFBuffAction, BuffToApply), Z_Construct_UScriptStruct_FTimedAttributeSetModifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBuffAction_Statics::NewProp_BuffToApply_MetaData), Z_Construct_UClass_UACFBuffAction_Statics::NewProp_BuffToApply_MetaData) }; // 1745705883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFBuffAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFBuffAction_Statics::NewProp_BuffToApply,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFBuffAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFBuffAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFBuffAction_Statics::ClassParams = {
		&UACFBuffAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFBuffAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFBuffAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBuffAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFBuffAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFBuffAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFBuffAction()
	{
		if (!Z_Registration_Info_UClass_UACFBuffAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFBuffAction.OuterSingleton, Z_Construct_UClass_UACFBuffAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFBuffAction.OuterSingleton;
	}
	template<> SPELLACTIONS_API UClass* StaticClass<UACFBuffAction>()
	{
		return UACFBuffAction::StaticClass();
	}
	UACFBuffAction::UACFBuffAction() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFBuffAction);
	UACFBuffAction::~UACFBuffAction() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFBuffAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFBuffAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFBuffAction, UACFBuffAction::StaticClass, TEXT("UACFBuffAction"), &Z_Registration_Info_UClass_UACFBuffAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFBuffAction), 3917641991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFBuffAction_h_3445285429(TEXT("/Script/SpellActions"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFBuffAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_SpellActions_Public_ACFBuffAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

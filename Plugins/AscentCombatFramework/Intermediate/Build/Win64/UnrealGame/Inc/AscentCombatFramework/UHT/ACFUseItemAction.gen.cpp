// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actions/ACFUseItemAction.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUseItemAction() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFUseItemAction();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFUseItemAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	void UACFUseItemAction::StaticRegisterNativesUACFUseItemAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFUseItemAction);
	UClass* Z_Construct_UClass_UACFUseItemAction_NoRegister()
	{
		return UACFUseItemAction::StaticClass();
	}
	struct Z_Construct_UClass_UACFUseItemAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseIfInterrupted_MetaData[];
#endif
		static void NewProp_bShouldUseIfInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseIfInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryToEquipOffhand_MetaData[];
#endif
		static void NewProp_bTryToEquipOffhand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToEquipOffhand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryToEquipAmmo_MetaData[];
#endif
		static void NewProp_bTryToEquipAmmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToEquipAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckHandsIK_MetaData[];
#endif
		static void NewProp_bCheckHandsIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckHandsIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUseItemAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFBaseAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/ACFUseItemAction.h" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_ItemSlot_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUseItemAction, ItemSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_ItemSlot_MetaData), Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_ItemSlot_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted_SetBit(void* Obj)
	{
		((UACFUseItemAction*)Obj)->bShouldUseIfInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted = { "bShouldUseIfInterrupted", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFUseItemAction), &Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted_MetaData), Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand_SetBit(void* Obj)
	{
		((UACFUseItemAction*)Obj)->bTryToEquipOffhand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand = { "bTryToEquipOffhand", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFUseItemAction), &Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand_MetaData), Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo_SetBit(void* Obj)
	{
		((UACFUseItemAction*)Obj)->bTryToEquipAmmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo = { "bTryToEquipAmmo", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFUseItemAction), &Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo_MetaData), Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
	void Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK_SetBit(void* Obj)
	{
		((UACFUseItemAction*)Obj)->bCheckHandsIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK = { "bCheckHandsIK", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFUseItemAction), &Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK_MetaData), Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_OffHandSlot_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditCondition", "bTryToEquipOffhand" },
		{ "ModuleRelativePath", "Public/Actions/ACFUseItemAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_OffHandSlot = { "OffHandSlot", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFUseItemAction, OffHandSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_OffHandSlot_MetaData), Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_OffHandSlot_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUseItemAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_ItemSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bShouldUseIfInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipOffhand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bTryToEquipAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_bCheckHandsIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUseItemAction_Statics::NewProp_OffHandSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUseItemAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUseItemAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUseItemAction_Statics::ClassParams = {
		&UACFUseItemAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFUseItemAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFUseItemAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFUseItemAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFUseItemAction()
	{
		if (!Z_Registration_Info_UClass_UACFUseItemAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFUseItemAction.OuterSingleton, Z_Construct_UClass_UACFUseItemAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFUseItemAction.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFUseItemAction>()
	{
		return UACFUseItemAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUseItemAction);
	UACFUseItemAction::~UACFUseItemAction() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFUseItemAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFUseItemAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFUseItemAction, UACFUseItemAction::StaticClass, TEXT("UACFUseItemAction"), &Z_Registration_Info_UClass_UACFUseItemAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFUseItemAction), 1969950491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFUseItemAction_h_2572843313(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFUseItemAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actions_ACFUseItemAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

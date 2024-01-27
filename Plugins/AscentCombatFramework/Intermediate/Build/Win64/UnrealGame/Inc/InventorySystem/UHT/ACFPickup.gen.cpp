// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/ACFPickup.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPickup() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatisticValue();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTimedAttributeSetModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFPickup();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFPickup_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AACFWorldItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void AACFPickup::StaticRegisterNativesAACFPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFPickup);
	UClass* Z_Construct_UClass_AACFPickup_NoRegister()
	{
		return AACFPickup::StaticClass();
	}
	struct Z_Construct_UClass_AACFPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPickOnOverlap_MetaData[];
#endif
		static void NewProp_bPickOnOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPickOnOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEquipOnPick_MetaData[];
#endif
		static void NewProp_bAutoEquipOnPick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEquipOnPick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickUpCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PickUpCapsule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnPickupEffect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickupEffect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnPickupEffect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnPickupBuff_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickupBuff_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnPickupBuff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFWorldItem,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ACFPickup.h" },
		{ "ModuleRelativePath", "Public/Items/ACFPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFPickup.h" },
	};
#endif
	void Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap_SetBit(void* Obj)
	{
		((AACFPickup*)Obj)->bPickOnOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap = { "bPickOnOverlap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFPickup), &Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap_MetaData), Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFPickup.h" },
	};
#endif
	void Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick_SetBit(void* Obj)
	{
		((AACFPickup*)Obj)->bAutoEquipOnPick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick = { "bAutoEquipOnPick", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFPickup), &Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick_MetaData), Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPickup_Statics::NewProp_PickUpCapsule_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ACFPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_PickUpCapsule = { "PickUpCapsule", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPickup, PickUpCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::NewProp_PickUpCapsule_MetaData), Z_Construct_UClass_AACFPickup_Statics::NewProp_PickUpCapsule_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect_Inner = { "OnPickupEffect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatisticValue, METADATA_PARAMS(0, nullptr) }; // 2111676830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFPickup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect = { "OnPickupEffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPickup, OnPickupEffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect_MetaData), Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect_MetaData) }; // 2111676830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff_Inner = { "OnPickupBuff", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimedAttributeSetModifier, METADATA_PARAMS(0, nullptr) }; // 1745705883
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Items/ACFPickup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff = { "OnPickupBuff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFPickup, OnPickupBuff), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff_MetaData), Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff_MetaData) }; // 1745705883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_bPickOnOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_bAutoEquipOnPick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_PickUpCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPickup_Statics::NewProp_OnPickupBuff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFPickup_Statics::ClassParams = {
		&AACFPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AACFPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFPickup()
	{
		if (!Z_Registration_Info_UClass_AACFPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFPickup.OuterSingleton, Z_Construct_UClass_AACFPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFPickup.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AACFPickup>()
	{
		return AACFPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFPickup);
	AACFPickup::~AACFPickup() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFPickup, AACFPickup::StaticClass, TEXT("AACFPickup"), &Z_Registration_Info_UClass_AACFPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFPickup), 171143595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFPickup_h_3837296842(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/ACFWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
enum class EHandleType : uint8;
struct FAttributesSetModifier;
struct FGameplayTag;
#ifdef INVENTORYSYSTEM_ACFWeapon_generated_h
#error "ACFWeapon.generated.h already included, missing '#pragma once' in ACFWeapon.h"
#endif
#define INVENTORYSYSTEM_ACFWeapon_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponEffects_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FWeaponEffects>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInternal_OnWeaponSheathed); \
	DECLARE_FUNCTION(execInternal_OnWeaponUnsheathed); \
	DECLARE_FUNCTION(execOnWeaponSheathed); \
	DECLARE_FUNCTION(execOnWeaponUnsheathed); \
	DECLARE_FUNCTION(execGetMeshComponent); \
	DECLARE_FUNCTION(execGetUnsheatedAttributeSetModifier); \
	DECLARE_FUNCTION(execSetUnsheatedAttributeSetModifier); \
	DECLARE_FUNCTION(execGetLeftHandleIKPosition); \
	DECLARE_FUNCTION(execSetIsUsingLeftHandIK); \
	DECLARE_FUNCTION(execIsUsingLeftHandIK); \
	DECLARE_FUNCTION(execSetHandleType); \
	DECLARE_FUNCTION(execOverridesMainHandMovesetActions); \
	DECLARE_FUNCTION(execOverridesMainHandOverlay); \
	DECLARE_FUNCTION(execOverridesMainHandMoveset); \
	DECLARE_FUNCTION(execGetEquippedSocketName); \
	DECLARE_FUNCTION(execGetOnBodySocketName); \
	DECLARE_FUNCTION(execGetAssociatedMovesetOverlayTag); \
	DECLARE_FUNCTION(execGetAssociatedMovesetActionsTag); \
	DECLARE_FUNCTION(execGetAssociatedMovesetTag); \
	DECLARE_FUNCTION(execGetWeaponType); \
	DECLARE_FUNCTION(execGetHandleType);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFWeapon(); \
	friend struct Z_Construct_UClass_AACFWeapon_Statics; \
public: \
	DECLARE_CLASS(AACFWeapon, AACFEquippableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AACFWeapon)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFWeapon(AACFWeapon&&); \
	NO_API AACFWeapon(const AACFWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFWeapon) \
	NO_API virtual ~AACFWeapon();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_30_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AACFWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

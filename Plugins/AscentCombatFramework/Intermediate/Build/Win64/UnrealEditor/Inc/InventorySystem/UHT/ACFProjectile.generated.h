// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/ACFProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UACMCollisionManagerComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class UStaticMesh;
struct FHitResult;
#ifdef INVENTORYSYSTEM_ACFProjectile_generated_h
#error "ACFProjectile.generated.h already included, missing '#pragma once' in ACFProjectile.h"
#endif
#define INVENTORYSYSTEM_ACFProjectile_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleProjectileHit); \
	DECLARE_FUNCTION(execHandleAttackHit); \
	DECLARE_FUNCTION(execGetInteractableName); \
	DECLARE_FUNCTION(execCanBeInteracted); \
	DECLARE_FUNCTION(execOnInteractedByPawn); \
	DECLARE_FUNCTION(execAttachToHit); \
	DECLARE_FUNCTION(execActivateDamage); \
	DECLARE_FUNCTION(execSetupProjectile); \
	DECLARE_FUNCTION(execGetDropOnDeathPercentage); \
	DECLARE_FUNCTION(execShouldBeDroppedOnDeath); \
	DECLARE_FUNCTION(execGetCollisionComp); \
	DECLARE_FUNCTION(execGetStaticMesh); \
	DECLARE_FUNCTION(execGetProjectileMovementComp);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFProjectile(); \
	friend struct Z_Construct_UClass_AACFProjectile_Statics; \
public: \
	DECLARE_CLASS(AACFProjectile, AACFEquippableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AACFProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AACFProjectile*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFProjectile(AACFProjectile&&); \
	NO_API AACFProjectile(const AACFProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFProjectile) \
	NO_API virtual ~AACFProjectile();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AACFProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

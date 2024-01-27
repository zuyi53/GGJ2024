// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/ACFRangedWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFProjectile;
class AActor;
class UACFShootingComponent;
enum class EShootingType : uint8;
enum class EShootTargetType : uint8;
#ifdef INVENTORYSYSTEM_ACFRangedWeapon_generated_h
#error "ACFRangedWeapon.generated.h already included, missing '#pragma once' in ACFRangedWeapon.h"
#endif
#define INVENTORYSYSTEM_ACFRangedWeapon_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Reload_Implementation(bool bTryToEquipAmmo); \
	virtual void ShootProjectile_Implementation(EShootTargetType targetType, float charge, TSubclassOf<AACFProjectile>  projectileOverride); \
	virtual void SwipeTraceShoot_Implementation(EShootTargetType targetType); \
	virtual void ShootAtDirection_Implementation(FRotator const& direction, float charge, TSubclassOf<AACFProjectile>  projectileOverride); \
	virtual void ShootAtActor_Implementation(const AActor* target, float randomDeviation, float charge, TSubclassOf<AACFProjectile>  projectileOverride); \
	virtual void Shoot_Implementation(FRotator const& deltaRot, float charge, TSubclassOf<AACFProjectile>  projectileOverride); \
 \
	DECLARE_FUNCTION(execNeedsReload); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execGetShootingComponent); \
	DECLARE_FUNCTION(execGetShootingType); \
	DECLARE_FUNCTION(execGetShootingSocket); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetAmmoMagazine); \
	DECLARE_FUNCTION(execGetProjectileSpeed); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShootProjectile); \
	DECLARE_FUNCTION(execSwipeTraceShoot); \
	DECLARE_FUNCTION(execShootAtDirection); \
	DECLARE_FUNCTION(execShootAtActor); \
	DECLARE_FUNCTION(execShoot);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFRangedWeapon(); \
	friend struct Z_Construct_UClass_AACFRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(AACFRangedWeapon, AACFWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AACFRangedWeapon)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFRangedWeapon(AACFRangedWeapon&&); \
	NO_API AACFRangedWeapon(const AACFRangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFRangedWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFRangedWeapon) \
	NO_API virtual ~AACFRangedWeapon();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AACFRangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFRangedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

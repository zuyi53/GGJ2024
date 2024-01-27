// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFShootingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFProjectile;
class AActor;
class APawn;
class UMeshComponent;
struct FImpactFX;
struct FInventoryItem;
#ifdef INVENTORYSYSTEM_ACFShootingComponent_generated_h
#error "ACFShootingComponent.generated.h already included, missing '#pragma once' in ACFShootingComponent.h"
#endif
#define INVENTORYSYSTEM_ACFShootingComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_17_DELEGATE \
INVENTORYSYSTEM_API void FOnCurrentAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentAmmoChanged, int32 currentAmmoInMagazine, int32 totalAmmo);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayMuzzleEffect_Implementation(); \
	virtual void Reload_Implementation(bool bTryToEquipAmmo); \
	virtual void ReduceAmmoMagazine_Implementation(int32 amount); \
	virtual bool SetupShootingComponent_Validate(APawn* , UMeshComponent* ); \
	virtual void SetupShootingComponent_Implementation(APawn* inOwner, UMeshComponent* inMesh); \
	virtual bool Internal_SetupComponent_Validate(APawn* , UMeshComponent* ); \
	virtual void Internal_SetupComponent_Implementation(APawn* inOwner, UMeshComponent* inMesh); \
 \
	DECLARE_FUNCTION(execSetUseMagazine); \
	DECLARE_FUNCTION(execGetUseMagazine); \
	DECLARE_FUNCTION(execPlayMuzzleEffect); \
	DECLARE_FUNCTION(execGetTotalAmmoCount); \
	DECLARE_FUNCTION(execGetCurrentAmmoInMagazine); \
	DECLARE_FUNCTION(execGetTotalEquippedAmmoCount); \
	DECLARE_FUNCTION(execGetAmmoMagazine); \
	DECLARE_FUNCTION(execGetAllowedProjectiles); \
	DECLARE_FUNCTION(execGetShootingMesh); \
	DECLARE_FUNCTION(execGetProjectileStartSocketName); \
	DECLARE_FUNCTION(execGetShootingSocketPosition); \
	DECLARE_FUNCTION(execTryGetAllowedAmmoFromInventory); \
	DECLARE_FUNCTION(execIsFullMagazine); \
	DECLARE_FUNCTION(execNeedsReload); \
	DECLARE_FUNCTION(execCanUseProjectile); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execTryEquipAmmoFromInventory); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execReduceAmmoMagazine); \
	DECLARE_FUNCTION(execSwipeTraceShootAtDirection); \
	DECLARE_FUNCTION(execShootAtDirection); \
	DECLARE_FUNCTION(execShootAtActor); \
	DECLARE_FUNCTION(execGetProjectileSpeed); \
	DECLARE_FUNCTION(execReinitializeShootingComponent); \
	DECLARE_FUNCTION(execSetupShootingComponent); \
	DECLARE_FUNCTION(execInternal_SetupComponent); \
	DECLARE_FUNCTION(execOnRep_currentMagazine);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFShootingComponent(); \
	friend struct Z_Construct_UClass_UACFShootingComponent_Statics; \
public: \
	DECLARE_CLASS(UACFShootingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UACFShootingComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		shootingMesh=NETFIELD_REP_START, \
		characterOwner, \
		currentMagazine, \
		NETFIELD_REP_END=currentMagazine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFShootingComponent(UACFShootingComponent&&); \
	NO_API UACFShootingComponent(const UACFShootingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFShootingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFShootingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFShootingComponent) \
	NO_API virtual ~UACFShootingComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_19_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UACFShootingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFShootingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

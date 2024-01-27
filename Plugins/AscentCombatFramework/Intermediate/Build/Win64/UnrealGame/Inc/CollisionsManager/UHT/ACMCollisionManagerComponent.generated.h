// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACMCollisionManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FTraceInfo;
class AActor;
class UMeshComponent;
struct FHitResult;
struct FTraceInfo;
#ifdef COLLISIONSMANAGER_ACMCollisionManagerComponent_generated_h
#error "ACMCollisionManagerComponent.generated.h already included, missing '#pragma once' in ACMCollisionManagerComponent.h"
#endif
#define COLLISIONSMANAGER_ACMCollisionManagerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_16_DELEGATE \
COLLISIONSMANAGER_API void FOnCollisionDetected_DelegateWrapper(const FMulticastScriptDelegate& OnCollisionDetected, FHitResult const& HitResult);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_18_DELEGATE \
COLLISIONSMANAGER_API void FOnActorDamaged_DelegateWrapper(const FMulticastScriptDelegate& OnActorDamaged, AActor* damageReceiver);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopTrails_Implementation(FName const& trail); \
	virtual void PlayTrails_Implementation(FName const& trail); \
	virtual void StartAllTimedTraces_Implementation(float Duration); \
	virtual void StartTimedSingleTrace_Implementation(FName const& TraceName, float Duration); \
	virtual void StopSingleTrace_Implementation(FName const& Name); \
	virtual void StartSingleTrace_Implementation(FName const& Name); \
	virtual void StopAllTraces_Implementation(); \
	virtual void StartAllTraces_Implementation(); \
	virtual void PerformSwipeTraceShot_Implementation(FVector const& start, FVector const& end, float radius); \
	virtual void PerformAreaDamageForDuration_Implementation(FVector const& damageCenter, float damageRadius, float duration, float damageInterval); \
	virtual void PerformAreaDamage_Single_Implementation(FVector const& damageCenter, float damageRadius); \
	virtual void StopCurrentAreaDamage_Implementation(); \
	virtual void StartAreaDamage_Implementation(FVector const& damageCenter, float damageRadius, float damageInterval); \
 \
	DECLARE_FUNCTION(execHandleAreaDamageLooping); \
	DECLARE_FUNCTION(execHandleAreaDamageFinished); \
	DECLARE_FUNCTION(execHandleAllTimedTraceFinished); \
	DECLARE_FUNCTION(execHandleTimedSingleTraceFinished); \
	DECLARE_FUNCTION(execTryGetTraceConfig); \
	DECLARE_FUNCTION(execSetTraceConfig); \
	DECLARE_FUNCTION(execGetActorOwner); \
	DECLARE_FUNCTION(execSetActorOwner); \
	DECLARE_FUNCTION(execIsTraceActive); \
	DECLARE_FUNCTION(execGetDamageTraces); \
	DECLARE_FUNCTION(execStopTrails); \
	DECLARE_FUNCTION(execPlayTrails); \
	DECLARE_FUNCTION(execStartAllTimedTraces); \
	DECLARE_FUNCTION(execStartTimedSingleTrace); \
	DECLARE_FUNCTION(execStopSingleTrace); \
	DECLARE_FUNCTION(execStartSingleTrace); \
	DECLARE_FUNCTION(execStopAllTraces); \
	DECLARE_FUNCTION(execStartAllTraces); \
	DECLARE_FUNCTION(execPerformSwipeTraceShot_Local); \
	DECLARE_FUNCTION(execPerformSwipeTraceShot); \
	DECLARE_FUNCTION(execClearCollisionChannels); \
	DECLARE_FUNCTION(execSetCollisionChannels); \
	DECLARE_FUNCTION(execAddCollisionChannel); \
	DECLARE_FUNCTION(execAddActorToIgnore); \
	DECLARE_FUNCTION(execPerformAreaDamageForDuration); \
	DECLARE_FUNCTION(execPerformAreaDamage_Single_Local); \
	DECLARE_FUNCTION(execPerformAreaDamage_Single); \
	DECLARE_FUNCTION(execStopCurrentAreaDamage); \
	DECLARE_FUNCTION(execStartAreaDamage); \
	DECLARE_FUNCTION(execSetupCollisionManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACMCollisionManagerComponent(); \
	friend struct Z_Construct_UClass_UACMCollisionManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UACMCollisionManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CollisionsManager"), NO_API) \
	DECLARE_SERIALIZER(UACMCollisionManagerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACMCollisionManagerComponent(UACMCollisionManagerComponent&&); \
	NO_API UACMCollisionManagerComponent(const UACMCollisionManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACMCollisionManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACMCollisionManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACMCollisionManagerComponent) \
	NO_API virtual ~UACMCollisionManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLISIONSMANAGER_API UClass* StaticClass<class UACMCollisionManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMCollisionManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

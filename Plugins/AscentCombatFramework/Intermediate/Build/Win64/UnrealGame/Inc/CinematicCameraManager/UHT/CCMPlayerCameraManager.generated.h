// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CCMPlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UCameraComponent;
class USceneComponent;
class USpringArmComponent;
enum class ELockType : uint8;
struct FCCMSequenceEvent;
#ifdef CINEMATICCAMERAMANAGER_CCMPlayerCameraManager_generated_h
#error "CCMPlayerCameraManager.generated.h already included, missing '#pragma once' in CCMPlayerCameraManager.h"
#endif
#define CINEMATICCAMERAMANAGER_CCMPlayerCameraManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_15_DELEGATE \
CINEMATICCAMERAMANAGER_API void FOnCameraSequenceStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCameraSequenceStarted, FName const& cameraSequence);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_16_DELEGATE \
CINEMATICCAMERAMANAGER_API void FOnCameraSequenceEnded_DelegateWrapper(const FMulticastScriptDelegate& OnCameraSequenceEnded, FName const& cameraSequence);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePawnChanged); \
	DECLARE_FUNCTION(execOverrideCameraReferences); \
	DECLARE_FUNCTION(execRemoveSequenceEventModifier); \
	DECLARE_FUNCTION(execAddSequenceEventModifier); \
	DECLARE_FUNCTION(execStopCurrentCameraSequence); \
	DECLARE_FUNCTION(execTriggerCameraSequence); \
	DECLARE_FUNCTION(execSetFollowPlayer); \
	DECLARE_FUNCTION(execStopLookingActor); \
	DECLARE_FUNCTION(execLockCameraOnComponent); \
	DECLARE_FUNCTION(execLockCameraOnActor); \
	DECLARE_FUNCTION(execResetCameraPosition); \
	DECLARE_FUNCTION(execStopCameraEvent); \
	DECLARE_FUNCTION(execTriggerTimedCameraEvent); \
	DECLARE_FUNCTION(execTriggerCameraEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACCMPlayerCameraManager(); \
	friend struct Z_Construct_UClass_ACCMPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(ACCMPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCameraManager"), NO_API) \
	DECLARE_SERIALIZER(ACCMPlayerCameraManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCMPlayerCameraManager(ACCMPlayerCameraManager&&); \
	NO_API ACCMPlayerCameraManager(const ACCMPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCMPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCMPlayerCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACCMPlayerCameraManager) \
	NO_API virtual ~ACCMPlayerCameraManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<class ACCMPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

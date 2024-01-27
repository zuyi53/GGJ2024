// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CCMCameraFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACCMPlayerCameraManager;
class UObject;
class USceneComponent;
enum class ELockType : uint8;
#ifdef CINEMATICCAMERAMANAGER_CCMCameraFunctionLibrary_generated_h
#error "CCMCameraFunctionLibrary.generated.h already included, missing '#pragma once' in CCMCameraFunctionLibrary.h"
#endif
#define CINEMATICCAMERAMANAGER_CCMCameraFunctionLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCameraPosition); \
	DECLARE_FUNCTION(execLockCameraOnComponent); \
	DECLARE_FUNCTION(execStopLockingCameraOnActor); \
	DECLARE_FUNCTION(execLockCameraOnActor); \
	DECLARE_FUNCTION(execStopCameraEvent); \
	DECLARE_FUNCTION(execTriggerTimedCameraEvent); \
	DECLARE_FUNCTION(execTriggerCameraEvent); \
	DECLARE_FUNCTION(execGetLocalCinematicCameraManager);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCCMCameraFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCCMCameraFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCCMCameraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicCameraManager"), NO_API) \
	DECLARE_SERIALIZER(UCCMCameraFunctionLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCCMCameraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCCMCameraFunctionLibrary(UCCMCameraFunctionLibrary&&); \
	NO_API UCCMCameraFunctionLibrary(const UCCMCameraFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCCMCameraFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCCMCameraFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCCMCameraFunctionLibrary) \
	NO_API virtual ~UCCMCameraFunctionLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_16_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERAMANAGER_API UClass* StaticClass<class UCCMCameraFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMCameraFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

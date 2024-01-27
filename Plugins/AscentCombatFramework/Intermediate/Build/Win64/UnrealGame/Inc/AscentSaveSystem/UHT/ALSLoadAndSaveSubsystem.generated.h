// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALSLoadAndSaveSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UALSSaveGame;
class UALSSaveInfo;
class USaveGame;
class UTexture2D;
class UWorld;
enum class ELoadingState : uint8;
struct FALSSaveMetadata;
#ifdef ASCENTSAVESYSTEM_ALSLoadAndSaveSubsystem_generated_h
#error "ALSLoadAndSaveSubsystem.generated.h already included, missing '#pragma once' in ALSLoadAndSaveSubsystem.h"
#endif
#define ASCENTSAVESYSTEM_ALSLoadAndSaveSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLoadCompleted); \
	DECLARE_FUNCTION(execHandleLoadingFinished); \
	DECLARE_FUNCTION(execGetCurrentSaveGame); \
	DECLARE_FUNCTION(execGetCurrentSaveName); \
	DECLARE_FUNCTION(execGetSystemState); \
	DECLARE_FUNCTION(execGetScreenshotForSave); \
	DECLARE_FUNCTION(execHasAnySaveGame); \
	DECLARE_FUNCTION(execGetAllSaveGames); \
	DECLARE_FUNCTION(execLoadOrCreateSaveInfo); \
	DECLARE_FUNCTION(execLoadOrCreateSaveGame); \
	DECLARE_FUNCTION(execTryGetSaveMetadata); \
	DECLARE_FUNCTION(execIsNewGame); \
	DECLARE_FUNCTION(execSetNewGame); \
	DECLARE_FUNCTION(execLoadPlayer); \
	DECLARE_FUNCTION(execSavePlayer); \
	DECLARE_FUNCTION(execLoadLocalPlayer); \
	DECLARE_FUNCTION(execSaveLocalPlayer); \
	DECLARE_FUNCTION(execLoadLevelFromSaveGame); \
	DECLARE_FUNCTION(execLoadCurrentLevel); \
	DECLARE_FUNCTION(execLoadGameWorld); \
	DECLARE_FUNCTION(execSaveGameWorld);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALSLoadAndSaveSubsystem(); \
	friend struct Z_Construct_UClass_UALSLoadAndSaveSubsystem_Statics; \
public: \
	DECLARE_CLASS(UALSLoadAndSaveSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AscentSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UALSLoadAndSaveSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UALSLoadAndSaveSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSLoadAndSaveSubsystem(UALSLoadAndSaveSubsystem&&); \
	NO_API UALSLoadAndSaveSubsystem(const UALSLoadAndSaveSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSLoadAndSaveSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSLoadAndSaveSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UALSLoadAndSaveSubsystem) \
	NO_API virtual ~UALSLoadAndSaveSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_29_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTSAVESYSTEM_API UClass* StaticClass<class UALSLoadAndSaveSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentSaveSystem_Public_ALSLoadAndSaveSubsystem_h


#define FOREACH_ENUM_ELOADINGSTATE(op) \
	op(ELoadingState::EIdle) \
	op(ELoadingState::ESaving) \
	op(ELoadingState::ELoading) 

enum class ELoadingState : uint8;
template<> struct TIsUEnumClass<ELoadingState> { enum { Value = true }; };
template<> ASCENTSAVESYSTEM_API UEnum* StaticEnum<ELoadingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

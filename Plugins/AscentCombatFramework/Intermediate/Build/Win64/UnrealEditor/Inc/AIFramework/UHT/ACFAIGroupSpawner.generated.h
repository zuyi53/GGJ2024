// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groups/ACFAIGroupSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
class UACFGroupAIComponent;
class USplineComponent;
enum class ETeam : uint8;
struct FAIAgentsInfo;
#ifdef AIFRAMEWORK_ACFAIGroupSpawner_generated_h
#error "ACFAIGroupSpawner.generated.h already included, missing '#pragma once' in ACFAIGroupSpawner.h"
#endif
#define AIFRAMEWORK_ACFAIGroupSpawner_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustSpawnerPos); \
	DECLARE_FUNCTION(execStopUpdatePos); \
	DECLARE_FUNCTION(execStartUpdatePos); \
	DECLARE_FUNCTION(execGetAgentNearestTo); \
	DECLARE_FUNCTION(execGetAgentWithIndex); \
	DECLARE_FUNCTION(execGetCombatTeam); \
	DECLARE_FUNCTION(execGetAIGroupComponent); \
	DECLARE_FUNCTION(execGetSplineComponent); \
	DECLARE_FUNCTION(execGetGroupSize); \
	DECLARE_FUNCTION(execGetPatrolPoint); \
	DECLARE_FUNCTION(execGetEntityExtentRadius); \
	DECLARE_FUNCTION(execAssignTeamToEntity); \
	DECLARE_FUNCTION(execIsEntityAlive); \
	DECLARE_FUNCTION(execGetEntityCombatTeam);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFAIGroupSpawner(); \
	friend struct Z_Construct_UClass_AACFAIGroupSpawner_Statics; \
public: \
	DECLARE_CLASS(AACFAIGroupSpawner, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFramework"), NO_API) \
	DECLARE_SERIALIZER(AACFAIGroupSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<AACFAIGroupSpawner*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFAIGroupSpawner(AACFAIGroupSpawner&&); \
	NO_API AACFAIGroupSpawner(const AACFAIGroupSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFAIGroupSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFAIGroupSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFAIGroupSpawner) \
	NO_API virtual ~AACFAIGroupSpawner();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIFRAMEWORK_API UClass* StaticClass<class AACFAIGroupSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Groups_ACFAIGroupSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

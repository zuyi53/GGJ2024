// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/ACFBaseAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UACFBaseAction;
class UAnimMontage;
class USceneComponent;
enum class EMontageReproductionType : uint8;
struct FACFMontageInfo;
struct FACFWarpReproductionInfo;
struct FActionConfig;
struct FGameplayTag;
#ifdef ACTIONSSYSTEM_ACFBaseAction_generated_h
#error "ACFBaseAction.generated.h already included, missing '#pragma once' in ACFBaseAction.h"
#endif
#define ACTIONSSYSTEM_ACFBaseAction_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleMontageStarted); \
	DECLARE_FUNCTION(execHandleMontageFinished); \
	DECLARE_FUNCTION(execExitAction); \
	DECLARE_FUNCTION(execSetMontageReproductionType); \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execClientsOnSubActionStateExited); \
	DECLARE_FUNCTION(execClientsOnSubActionStateEntered); \
	DECLARE_FUNCTION(execOnSubActionStateExited); \
	DECLARE_FUNCTION(execOnSubActionStateEntered); \
	DECLARE_FUNCTION(execClientsOnNotablePointReached); \
	DECLARE_FUNCTION(execOnNotablePointReached); \
	DECLARE_FUNCTION(execStopActionImmediately); \
	DECLARE_FUNCTION(execSetMontageInfo); \
	DECLARE_FUNCTION(execGetWarpTargetComponent); \
	DECLARE_FUNCTION(execGetWarpTransform); \
	DECLARE_FUNCTION(execGetWarpInfo); \
	DECLARE_FUNCTION(execGetMontageSectionName); \
	DECLARE_FUNCTION(execGetActionTag); \
	DECLARE_FUNCTION(execCanExecuteAction); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execPlayEffects); \
	DECLARE_FUNCTION(execOnActionTransition); \
	DECLARE_FUNCTION(execClientsOnActionEnded); \
	DECLARE_FUNCTION(execOnActionEnded); \
	DECLARE_FUNCTION(execClientsOnActionStarted); \
	DECLARE_FUNCTION(execOnActionStarted); \
	DECLARE_FUNCTION(execGetAnimMontage); \
	DECLARE_FUNCTION(execSetAnimMontage); \
	DECLARE_FUNCTION(execSetActionConfig); \
	DECLARE_FUNCTION(execGetActionConfig); \
	DECLARE_FUNCTION(execStartCooldown); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFBaseAction(); \
	friend struct Z_Construct_UClass_UACFBaseAction_Statics; \
public: \
	DECLARE_CLASS(UACFBaseAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionsSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFBaseAction)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFBaseAction(UACFBaseAction&&); \
	NO_API UACFBaseAction(const UACFBaseAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFBaseAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFBaseAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFBaseAction) \
	NO_API virtual ~UACFBaseAction();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSSYSTEM_API UClass* StaticClass<class UACFBaseAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Actions_ACFBaseAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

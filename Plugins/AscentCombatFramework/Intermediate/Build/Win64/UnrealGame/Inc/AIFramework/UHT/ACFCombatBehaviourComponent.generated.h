// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFCombatBehaviourComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAICombatState : uint8;
#ifdef AIFRAMEWORK_ACFCombatBehaviourComponent_generated_h
#error "ACFCombatBehaviourComponent.generated.h already included, missing '#pragma once' in ACFCombatBehaviourComponent.h"
#endif
#define AIFRAMEWORK_ACFCombatBehaviourComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIdealDistanceByCombatState); \
	DECLARE_FUNCTION(execGetBestCombatStateByTargetDistance); \
	DECLARE_FUNCTION(execIsTargetInMeleeRange); \
	DECLARE_FUNCTION(execTryExecuteConditionAction); \
	DECLARE_FUNCTION(execTryExecuteActionByCombatState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFCombatBehaviourComponent(); \
	friend struct Z_Construct_UClass_UACFCombatBehaviourComponent_Statics; \
public: \
	DECLARE_CLASS(UACFCombatBehaviourComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFramework"), NO_API) \
	DECLARE_SERIALIZER(UACFCombatBehaviourComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFCombatBehaviourComponent(UACFCombatBehaviourComponent&&); \
	NO_API UACFCombatBehaviourComponent(const UACFCombatBehaviourComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFCombatBehaviourComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFCombatBehaviourComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFCombatBehaviourComponent) \
	NO_API virtual ~UACFCombatBehaviourComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIFRAMEWORK_API UClass* StaticClass<class UACFCombatBehaviourComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

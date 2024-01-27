// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/ACFAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UACFMovesetLayer;
enum class EACFDirection : uint8;
enum class ELocomotionState : uint8;
struct FGameplayTag;
struct FMoveset;
struct FOverlayLayer;
#ifdef CHARACTERCONTROLLER_ACFAnimInstance_generated_h
#error "ACFAnimInstance.generated.h already included, missing '#pragma once' in ACFAnimInstance.h"
#endif
#define CHARACTERCONTROLLER_ACFAnimInstance_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EACFDirection GetDirectionFromAngle_Implementation(float angle, EACFDirection currentDirection, bool bUseCurrentDirection); \
 \
	DECLARE_FUNCTION(execHandleTargetLocomotionStateChanged); \
	DECLARE_FUNCTION(execGetDirectionFromAngle); \
	DECLARE_FUNCTION(execSetTurnInPlaceYawOffset); \
	DECLARE_FUNCTION(execSetStartDirection); \
	DECLARE_FUNCTION(execGetStartDirection); \
	DECLARE_FUNCTION(execSetEnableHandIK); \
	DECLARE_FUNCTION(execGetEnableHandIK); \
	DECLARE_FUNCTION(execSetEnableFootIK); \
	DECLARE_FUNCTION(execGetEnableFootIK); \
	DECLARE_FUNCTION(execResetToDefaultOverlay); \
	DECLARE_FUNCTION(execResetToDefaultMoveset); \
	DECLARE_FUNCTION(execGetCurrentOverlay); \
	DECLARE_FUNCTION(execGetCurrentMovesetTag); \
	DECLARE_FUNCTION(execGetMovesetByTag); \
	DECLARE_FUNCTION(execGetCurrentMoveset); \
	DECLARE_FUNCTION(execIsVelocityOverrideByAnim); \
	DECLARE_FUNCTION(execRemoveOverlay); \
	DECLARE_FUNCTION(execSetMoveset); \
	DECLARE_FUNCTION(execSetRidingLayer); \
	DECLARE_FUNCTION(execSetAnimationOverlay); \
	DECLARE_FUNCTION(execGetAnimationOverlay); \
	DECLARE_FUNCTION(execGetIsInAir); \
	DECLARE_FUNCTION(execGetIsCrouching); \
	DECLARE_FUNCTION(execGetTargetLocomotionState); \
	DECLARE_FUNCTION(execGetCurrentLocomotionState); \
	DECLARE_FUNCTION(execIsLocalPlayer); \
	DECLARE_FUNCTION(execGetTurnRate); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetNormalizedSwimSpeed); \
	DECLARE_FUNCTION(execGetNormalizedSpeed); \
	DECLARE_FUNCTION(execGetDirection);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAnimInstance(); \
	friend struct Z_Construct_UClass_UACFAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UACFAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CharacterController"), NO_API) \
	DECLARE_SERIALIZER(UACFAnimInstance)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAnimInstance(UACFAnimInstance&&); \
	NO_API UACFAnimInstance(const UACFAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFAnimInstance) \
	NO_API virtual ~UACFAnimInstance();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_18_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERCONTROLLER_API UClass* StaticClass<class UACFAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Animation_ACFAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

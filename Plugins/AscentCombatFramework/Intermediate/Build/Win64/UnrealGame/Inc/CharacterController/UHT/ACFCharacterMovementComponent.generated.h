// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EACFDirection : uint8;
enum class ELocomotionState : uint8;
enum class EMontageReproductionType : uint8;
enum class EMovementStance : uint8;
enum class ERotationMode : uint8;
struct FAimOffset;
struct FCharacterGroundInfo;
struct FSnapConfiguration;
#ifdef CHARACTERCONTROLLER_ACFCharacterMovementComponent_generated_h
#error "ACFCharacterMovementComponent.generated.h already included, missing '#pragma once' in ACFCharacterMovementComponent.h"
#endif
#define CHARACTERCONTROLLER_ACFCharacterMovementComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_13_DELEGATE \
CHARACTERCONTROLLER_API void FOnLocomotionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLocomotionStateChanged, ELocomotionState State);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_14_DELEGATE \
CHARACTERCONTROLLER_API void FOnMoveStanceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMoveStanceChanged, EMovementStance stance);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_15_DELEGATE \
CHARACTERCONTROLLER_API void FOnRotationModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRotationModeChanged, ERotationMode rotMode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_16_DELEGATE \
CHARACTERCONTROLLER_API void FOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementModeChanged, EMovementMode newMovementMode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientsSetRotationMode_Implementation(ERotationMode const& inRotMode); \
	virtual void SetMontageReprodutionType_Implementation(EMontageReproductionType repType); \
	virtual void SetLocomotionStateSpeed_Implementation(ELocomotionState State, float speed, float swimSpeed); \
	virtual void SetLocomotionState_Implementation(ELocomotionState State); \
	virtual void BrakeToPreviousState_Implementation(); \
	virtual void AccelerateToNextState_Implementation(); \
	virtual void DeactivateCurrentLocomotionStance_Implementation(); \
	virtual void DeactivateLocomotionStance_Implementation(EMovementStance locStance); \
	virtual void ActivateLocomotionStance_Implementation(EMovementStance locStance); \
	virtual void SetRotationMode_Implementation(ERotationMode inRotMode); \
	virtual void SetCanMove_Implementation(bool inCanMove); \
 \
	DECLARE_FUNCTION(execClientsSetRotationMode); \
	DECLARE_FUNCTION(execOnRep_IsStrafing); \
	DECLARE_FUNCTION(execOnRep_LocomotionStance); \
	DECLARE_FUNCTION(execOnRep_ReproductionType); \
	DECLARE_FUNCTION(execHandleStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentLocomotionState); \
	DECLARE_FUNCTION(execOnRep_LocomotionState); \
	DECLARE_FUNCTION(execCalculateCurrentSnapDirection); \
	DECLARE_FUNCTION(execCalculateCurrentSnapMultiplier); \
	DECLARE_FUNCTION(execStopOverrideSpeedAndDirection); \
	DECLARE_FUNCTION(execStartOverrideSpeedAndDirection); \
	DECLARE_FUNCTION(execStopSnapping); \
	DECLARE_FUNCTION(execStartSnapping); \
	DECLARE_FUNCTION(execGetMontageReprodutionType); \
	DECLARE_FUNCTION(execSetMontageReprodutionType); \
	DECLARE_FUNCTION(execSetLocomotionStateSpeed); \
	DECLARE_FUNCTION(execSetLocomotionState); \
	DECLARE_FUNCTION(execResetToDefaultLocomotionState); \
	DECLARE_FUNCTION(execGetAimOffset); \
	DECLARE_FUNCTION(execGetCurrentInputDirection); \
	DECLARE_FUNCTION(execGetCurrentInputVector); \
	DECLARE_FUNCTION(execGetTargetLocomotionState); \
	DECLARE_FUNCTION(execGetCameraMovementInputVector); \
	DECLARE_FUNCTION(execGetWorldMovementInputVector); \
	DECLARE_FUNCTION(execGetMoveRightAxis); \
	DECLARE_FUNCTION(execGetMoveForwardAxis); \
	DECLARE_FUNCTION(execMoveUp); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execTurnAtRateLocal); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execBrakeToPreviousState); \
	DECLARE_FUNCTION(execAccelerateToNextState); \
	DECLARE_FUNCTION(execDeactivateCurrentLocomotionStance); \
	DECLARE_FUNCTION(execDeactivateLocomotionStance); \
	DECLARE_FUNCTION(execActivateLocomotionStance); \
	DECLARE_FUNCTION(execResetStrafeMovement); \
	DECLARE_FUNCTION(execSetRotationMode); \
	DECLARE_FUNCTION(execGetCharacterMaxSwimSpeedByState); \
	DECLARE_FUNCTION(execGetCharacterMaxSpeedByState); \
	DECLARE_FUNCTION(execGetCurrentLocomotionState); \
	DECLARE_FUNCTION(execSetCanMove); \
	DECLARE_FUNCTION(execGetCanMove); \
	DECLARE_FUNCTION(execGetRotationMode); \
	DECLARE_FUNCTION(execIsCharacterStrafing); \
	DECLARE_FUNCTION(execGetCurrentMovementStance); \
	DECLARE_FUNCTION(execGetCharacterMaxSpeed); \
	DECLARE_FUNCTION(execGetRotationRateYaw); \
	DECLARE_FUNCTION(execGetGroundInfo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UACFCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UACFCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterController"), NO_API) \
	DECLARE_SERIALIZER(UACFCharacterMovementComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bCanMove=NETFIELD_REP_START, \
		RotationMode, \
		LocomotionStates, \
		CharacterMaxSpeed, \
		targetAlpha, \
		reproductionType, \
		currentMovestance, \
		targetLocomotionState, \
		currentLocomotionState, \
		NETFIELD_REP_END=currentLocomotionState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFCharacterMovementComponent(UACFCharacterMovementComponent&&); \
	NO_API UACFCharacterMovementComponent(const UACFCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFCharacterMovementComponent) \
	NO_API virtual ~UACFCharacterMovementComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERCONTROLLER_API UClass* StaticClass<class UACFCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_Components_ACFCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

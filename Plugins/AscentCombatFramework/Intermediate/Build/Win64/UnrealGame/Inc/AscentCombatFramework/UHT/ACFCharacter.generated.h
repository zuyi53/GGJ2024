// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ACFCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
class AActor;
class UACFActionsManagerComponent;
class UACFAnimInstance;
class UACFCharacterMovementComponent;
class UACFDamageHandlerComponent;
class UACFEquipmentComponent;
class UACFRagdollComponent;
class UACMCollisionManagerComponent;
class UAnimMontage;
class UARSStatisticsComponent;
class UATSBaseTargetComponent;
class UAudioComponent;
class UMotionWarpingComponent;
class USkeletalMeshComponent;
enum class EACFDirection : uint8;
enum class EActionPriority : uint8;
enum class ECombatType : uint8;
enum class EDamageActivationType : uint8;
enum class EDamageZone : uint8;
enum class EDeathType : uint8;
enum class ETeam : uint8;
struct FACFDamageEvent;
struct FEquipment;
struct FGameplayTag;
struct FHitResult;
#ifdef ASCENTCOMBATFRAMEWORK_ACFCharacter_generated_h
#error "ACFCharacter.generated.h already included, missing '#pragma once' in ACFCharacter.h"
#endif
#define ASCENTCOMBATFRAMEWORK_ACFCharacter_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_25_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnCharacterFullyInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterFullyInitialized);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_27_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDamageReceived, FACFDamageEvent const& damageReceived);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_29_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnDamageInflicted_DelegateWrapper(const FMulticastScriptDelegate& OnDamageInflicted, AActor* damageReceiver);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_31_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnCrouchStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCrouchStateChanged, bool isCrouched);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_33_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnMovesetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovesetChanged, FGameplayTag const& Moveset);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_35_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnCombatTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCombatTypeChanged, ECombatType CombatType);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_37_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnDeathEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDeathEvent, AACFCharacter* self);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SwitchOverlay_Implementation(FGameplayTag overlayTag); \
	virtual void SwitchMovesetActions_Implementation(FGameplayTag moveType); \
	virtual void SwitchMoveset_Implementation(FGameplayTag moveType); \
	virtual void ReviveCharacter_Implementation(float normalizedHealthToGrant); \
	virtual void KillCharacter_Implementation(); \
	virtual void ClientsOnCharacterDeath_Implementation(); \
	virtual void ClientsSwitchOverlay_Implementation(FGameplayTag const& overlayTag); \
	virtual void ClientsSwitchMovetype_Implementation(FGameplayTag const& moveType); \
	virtual bool ServerSendPlayMontage_Validate(UAnimMontage* , float , FName , float ); \
	virtual void ServerSendPlayMontage_Implementation(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, float rootMotionScale); \
	virtual bool MulticastPlayAnimMontage_Validate(UAnimMontage* , float , FName , float ); \
	virtual void MulticastPlayAnimMontage_Implementation(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, float rootMotionScale); \
 \
	DECLARE_FUNCTION(execSwitchOverlay); \
	DECLARE_FUNCTION(execSwitchMovesetActions); \
	DECLARE_FUNCTION(execSwitchMoveset); \
	DECLARE_FUNCTION(execDeactivateDamage); \
	DECLARE_FUNCTION(execActivateDamage); \
	DECLARE_FUNCTION(execGetRelativeTargetDirection); \
	DECLARE_FUNCTION(execReviveCharacter); \
	DECLARE_FUNCTION(execKillCharacter); \
	DECLARE_FUNCTION(execGetIsDead); \
	DECLARE_FUNCTION(execHandleAttackHit); \
	DECLARE_FUNCTION(execGetLastDamageInfo); \
	DECLARE_FUNCTION(execGetCurrentMaxSpeed); \
	DECLARE_FUNCTION(execGetACFAnimInstance); \
	DECLARE_FUNCTION(execGetCurrentMoveset); \
	DECLARE_FUNCTION(execGetCombatType); \
	DECLARE_FUNCTION(execGetAudioComp); \
	DECLARE_FUNCTION(execGetCharacterName); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetTargetingComponent); \
	DECLARE_FUNCTION(execGetMotionWarpComponent); \
	DECLARE_FUNCTION(execGetRagdollComponent); \
	DECLARE_FUNCTION(execGetDamageHandlerComponent); \
	DECLARE_FUNCTION(execGetCollisionsComponent); \
	DECLARE_FUNCTION(execGetEquipmentComponent); \
	DECLARE_FUNCTION(execGetStatisticsComponent); \
	DECLARE_FUNCTION(execGetActionsComponent); \
	DECLARE_FUNCTION(execGetACFCharacterMovementComponent); \
	DECLARE_FUNCTION(execGetMainMesh); \
	DECLARE_FUNCTION(execSetCharacterName); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execGetCurrentActionState); \
	DECLARE_FUNCTION(execForceAction); \
	DECLARE_FUNCTION(execForceActionByName); \
	DECLARE_FUNCTION(execTriggerAction); \
	DECLARE_FUNCTION(execGetSprintSpeed); \
	DECLARE_FUNCTION(execGetJogSpeed); \
	DECLARE_FUNCTION(execGetWalkSpeed); \
	DECLARE_FUNCTION(execCanBeRanged); \
	DECLARE_FUNCTION(execIsRanged); \
	DECLARE_FUNCTION(execGetEnemiesCollisionChannel); \
	DECLARE_FUNCTION(execGetDamageZoneByBoneName); \
	DECLARE_FUNCTION(execGetCollisionChannel); \
	DECLARE_FUNCTION(execSetDeathType); \
	DECLARE_FUNCTION(execGetDeathType); \
	DECLARE_FUNCTION(execIsMyEnemy); \
	DECLARE_FUNCTION(execGetCombatTeam); \
	DECLARE_FUNCTION(execGetEntityExtentRadius); \
	DECLARE_FUNCTION(execAssignTeamToEntity); \
	DECLARE_FUNCTION(execIsEntityAlive); \
	DECLARE_FUNCTION(execGetEntityCombatTeam); \
	DECLARE_FUNCTION(execOnActorSaved); \
	DECLARE_FUNCTION(execOnActorLoaded); \
	DECLARE_FUNCTION(execIsImmortal); \
	DECLARE_FUNCTION(execSetIsImmortal); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execHandleEquipmentChanged); \
	DECLARE_FUNCTION(execInitializeCharacter); \
	DECLARE_FUNCTION(execHandleCharacterDeath); \
	DECLARE_FUNCTION(execClientsOnCharacterDeath); \
	DECLARE_FUNCTION(execClientsSwitchOverlay); \
	DECLARE_FUNCTION(execClientsSwitchMovetype); \
	DECLARE_FUNCTION(execSetupCollisionManager); \
	DECLARE_FUNCTION(execServerSendPlayMontage); \
	DECLARE_FUNCTION(execHandleDamageReceived); \
	DECLARE_FUNCTION(execTryJump); \
	DECLARE_FUNCTION(execMulticastPlayAnimMontage); \
	DECLARE_FUNCTION(execGetFallDamageFromDistance); \
	DECLARE_FUNCTION(execOnCharacterDeath); \
	DECLARE_FUNCTION(execGetBaseDamage);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFCharacter(); \
	friend struct Z_Construct_UClass_AACFCharacter_Statics; \
public: \
	DECLARE_CLASS(AACFCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscentCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(AACFCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AACFCharacter*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CombatType=NETFIELD_REP_START, \
		CombatTeam, \
		ReplicatedAcceleration, \
		NETFIELD_REP_END=ReplicatedAcceleration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFCharacter(AACFCharacter&&); \
	NO_API AACFCharacter(const AACFCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACFCharacter) \
	NO_API virtual ~AACFCharacter();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_39_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<class AACFCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

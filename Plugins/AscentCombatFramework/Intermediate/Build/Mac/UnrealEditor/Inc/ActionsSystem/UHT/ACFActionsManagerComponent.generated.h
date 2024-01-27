// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFActionsManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UACFBaseAction;
enum class EActionPriority : uint8;
struct FACFMontageInfo;
struct FActionState;
struct FGameplayTag;
#ifdef ACTIONSSYSTEM_ACFActionsManagerComponent_generated_h
#error "ACFActionsManagerComponent.generated.h already included, missing '#pragma once' in ACFActionsManagerComponent.h"
#endif
#define ACTIONSSYSTEM_ACFActionsManagerComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_18_DELEGATE \
ACTIONSSYSTEM_API void FOnActionStarted_DelegateWrapper(const FMulticastScriptDelegate& OnActionStarted, FGameplayTag ActionState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_19_DELEGATE \
ACTIONSSYSTEM_API void FOnActionEnded_DelegateWrapper(const FMulticastScriptDelegate& OnActionEnded, FGameplayTag ActionState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_20_DELEGATE \
ACTIONSSYSTEM_API void FOnActionTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnActionTriggered, FGameplayTag ActionState, EActionPriority Priority);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientsStopActionImmeditaley_Implementation(); \
	virtual void ClientsReceiveActionEnded_Implementation(FGameplayTag const& ActionState); \
	virtual void ClientsReceiveActionStarted_Implementation(FGameplayTag const& ActionState, const FString& contextString); \
	virtual void StopActionImmeditaley_Implementation(); \
	virtual void PlayMontageSectionFromAction_Implementation(FGameplayTag actionTag, FName montageSection); \
	virtual void ReleaseSustainedAction_Implementation(FGameplayTag actionTag); \
	virtual void ClientPlayMontage_Implementation(FACFMontageInfo const& montageInfo); \
	virtual bool PlayReplicatedMontage_Validate(FACFMontageInfo const& ); \
	virtual void PlayReplicatedMontage_Implementation(FACFMontageInfo const& montageInfo); \
	virtual void SetMovesetActions_Implementation(FGameplayTag const& movesetActionsTag); \
	virtual void TriggerAction_Implementation(FGameplayTag ActionState, EActionPriority Priority, bool bCanBeStored, const FString& contextString); \
 \
	DECLARE_FUNCTION(execOnCooldownFinished); \
	DECLARE_FUNCTION(execOnRep_MontageInfo); \
	DECLARE_FUNCTION(execClientsStopActionImmeditaley); \
	DECLARE_FUNCTION(execClientsReceiveActionEnded); \
	DECLARE_FUNCTION(execClientsReceiveActionStarted); \
	DECLARE_FUNCTION(execAddOrModifyAction); \
	DECLARE_FUNCTION(execGetCommonActionByTag); \
	DECLARE_FUNCTION(execGetMovesetActionByTag); \
	DECLARE_FUNCTION(execIsInActionSubstate); \
	DECLARE_FUNCTION(execIsPerformingAction); \
	DECLARE_FUNCTION(execIsInActionState); \
	DECLARE_FUNCTION(execPlayCurrentActionFX); \
	DECLARE_FUNCTION(execGetActionByTag); \
	DECLARE_FUNCTION(execStopActionImmeditaley); \
	DECLARE_FUNCTION(execGetCurrentAction); \
	DECLARE_FUNCTION(execGetCurrentActionTag); \
	DECLARE_FUNCTION(execPlayMontageSectionFromAction); \
	DECLARE_FUNCTION(execReleaseSustainedAction); \
	DECLARE_FUNCTION(execExitAction); \
	DECLARE_FUNCTION(execCanExecuteAction); \
	DECLARE_FUNCTION(execGetStoredAction); \
	DECLARE_FUNCTION(execStoreAction); \
	DECLARE_FUNCTION(execIsActionOnCooldown); \
	DECLARE_FUNCTION(execStartStoringActions); \
	DECLARE_FUNCTION(execStopStoringActions); \
	DECLARE_FUNCTION(execClientPlayMontage); \
	DECLARE_FUNCTION(execPlayReplicatedMontage); \
	DECLARE_FUNCTION(execGetCurrentMovesetActionsTag); \
	DECLARE_FUNCTION(execSetMovesetActions); \
	DECLARE_FUNCTION(execTriggerAction); \
	DECLARE_FUNCTION(execUnlockActionsTrigger); \
	DECLARE_FUNCTION(execLockActionsTrigger); \
	DECLARE_FUNCTION(execTriggerActionByName);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFActionsManagerComponent(); \
	friend struct Z_Construct_UClass_UACFActionsManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UACFActionsManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionsSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFActionsManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPerformingAction=NETFIELD_REP_START, \
		CurrentActionTag, \
		CurrentPriority, \
		currentMovesetActionsTag, \
		MontageInfo, \
		NETFIELD_REP_END=MontageInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFActionsManagerComponent(UACFActionsManagerComponent&&); \
	NO_API UACFActionsManagerComponent(const UACFActionsManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFActionsManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFActionsManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFActionsManagerComponent) \
	NO_API virtual ~UACFActionsManagerComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_22_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSSYSTEM_API UClass* StaticClass<class UACFActionsManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

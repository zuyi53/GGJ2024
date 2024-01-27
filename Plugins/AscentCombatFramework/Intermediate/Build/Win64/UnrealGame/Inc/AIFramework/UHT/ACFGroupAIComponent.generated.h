// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFGroupAIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFAIController;
class AACFCharacter;
class AACFPatrolPath;
class AActor;
class UACFGroupAIComponent;
enum class ETeam : uint8;
struct FAIAgentsInfo;
struct FAISpawnInfo;
struct FGameplayTag;
#ifdef AIFRAMEWORK_ACFGroupAIComponent_generated_h
#error "ACFGroupAIComponent.generated.h already included, missing '#pragma once' in ACFGroupAIComponent.h"
#endif
#define AIFRAMEWORK_ACFGroupAIComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_16_DELEGATE \
AIFRAMEWORK_API void FOnAgentDeath_DelegateWrapper(const FMulticastScriptDelegate& OnAgentDeath, const AACFCharacter* character);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_17_DELEGATE \
AIFRAMEWORK_API void FOnAllAgentDeath_DelegateWrapper(const FMulticastScriptDelegate& OnAllAgentDeath);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_18_DELEGATE \
AIFRAMEWORK_API void FOnAgentsSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnAgentsSpawned);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_19_DELEGATE \
AIFRAMEWORK_API void FOnAgentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAgentsChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DespawnGroup_Implementation(bool bUpdateAIToSpawn, FGameplayTag actionToTriggerOnDyingAgent, float lifespawn); \
	virtual void SpawnGroup_Implementation(); \
	virtual void SendCommandToCompanions_Implementation(FGameplayTag command); \
	virtual void OnComponentLoaded_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleAgentDeath); \
	DECLARE_FUNCTION(execSetGroupName); \
	DECLARE_FUNCTION(execGetGroupName); \
	DECLARE_FUNCTION(execSetMaxSimultaneousAgents); \
	DECLARE_FUNCTION(execGetMaxSimultaneousAgents); \
	DECLARE_FUNCTION(execSetCanSpawnMultitpleTimes); \
	DECLARE_FUNCTION(execCanSpawnMultitpleTimes); \
	DECLARE_FUNCTION(execIsAlreadyInGroup); \
	DECLARE_FUNCTION(execReInitAgent); \
	DECLARE_FUNCTION(execAddExistingCharacterToGroup); \
	DECLARE_FUNCTION(execGetTotalAIToSpawnCount); \
	DECLARE_FUNCTION(execGetAIToSpawn); \
	DECLARE_FUNCTION(execDespawnGroup); \
	DECLARE_FUNCTION(execSpawnGroup); \
	DECLARE_FUNCTION(execSendCommandToCompanions); \
	DECLARE_FUNCTION(execRequestNewTarget); \
	DECLARE_FUNCTION(execGetGroupCentroid); \
	DECLARE_FUNCTION(execGetGroupLead); \
	DECLARE_FUNCTION(execGetEnemyGroup); \
	DECLARE_FUNCTION(execGetPatrolPath); \
	DECLARE_FUNCTION(execSetPatrolPath); \
	DECLARE_FUNCTION(execGetAgentByIndex); \
	DECLARE_FUNCTION(execReplaceAIToSpawn); \
	DECLARE_FUNCTION(execRemoveAIToSpawn); \
	DECLARE_FUNCTION(execAddAIToSpawn); \
	DECLARE_FUNCTION(execSetInBattle); \
	DECLARE_FUNCTION(execGetGroupAgents); \
	DECLARE_FUNCTION(execRemoveAgentFromGroup); \
	DECLARE_FUNCTION(execGetGroupSize); \
	DECLARE_FUNCTION(execGetCombatTeam); \
	DECLARE_FUNCTION(execIsInBattle); \
	DECLARE_FUNCTION(execGetAgentNearestTo); \
	DECLARE_FUNCTION(execOnChildDeath); \
	DECLARE_FUNCTION(execOnComponentLoaded);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFGroupAIComponent(); \
	friend struct Z_Construct_UClass_UACFGroupAIComponent_Statics; \
public: \
	DECLARE_CLASS(UACFGroupAIComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFramework"), NO_API) \
	DECLARE_SERIALIZER(UACFGroupAIComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		groupLead=NETFIELD_REP_START, \
		AICharactersInfo, \
		bInBattle, \
		NETFIELD_REP_END=bInBattle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFGroupAIComponent(UACFGroupAIComponent&&); \
	NO_API UACFGroupAIComponent(const UACFGroupAIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFGroupAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFGroupAIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFGroupAIComponent) \
	NO_API virtual ~UACFGroupAIComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIFRAMEWORK_API UClass* StaticClass<class UACFGroupAIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFGroupAIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

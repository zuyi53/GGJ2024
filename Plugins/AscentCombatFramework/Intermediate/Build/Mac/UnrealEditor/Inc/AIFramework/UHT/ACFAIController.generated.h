// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
class AACFPatrolPath;
class AActor;
class UACFCombatBehaviourComponent;
class UACFCommandsManagerComponent;
class UACFGroupAIComponent;
class UACFThreatManagerComponent;
class UBehaviorTree;
class UBehaviorTreeComponent;
enum class EAICombatState : uint8;
enum class EAIState : uint8;
struct FACFDamageEvent;
struct FAIStimulus;
struct FGameplayTag;
#ifdef AIFRAMEWORK_ACFAIController_generated_h
#error "ACFAIController.generated.h already included, missing '#pragma once' in ACFAIController.h"
#endif
#define AIFRAMEWORK_ACFAIController_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_24_DELEGATE \
AIFRAMEWORK_API void FOnAIStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAIStateChanged, const EAIState AIState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_25_DELEGATE \
AIFRAMEWORK_API void FOnAICombatStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAICombatStateChanged, const EAICombatState AICombatState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerCommand); \
	DECLARE_FUNCTION(execRequestAnotherTarget); \
	DECLARE_FUNCTION(execHasTarget); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execGetPatrolPath); \
	DECLARE_FUNCTION(execSetPatrolPath); \
	DECLARE_FUNCTION(execGetPathDistanceFromTarget); \
	DECLARE_FUNCTION(execTryGoToNextWaypoint); \
	DECLARE_FUNCTION(execGetHomeLocation); \
	DECLARE_FUNCTION(execTryUpdateLeadRef); \
	DECLARE_FUNCTION(execTeleportNearLead); \
	DECLARE_FUNCTION(execSetHomeDistanceBK); \
	DECLARE_FUNCTION(execSetLeadActorDistanceBK); \
	DECLARE_FUNCTION(execSetIsPausedBK); \
	DECLARE_FUNCTION(execSetTargetActorDistanceBK); \
	DECLARE_FUNCTION(execSetTargetPointDistanceBK); \
	DECLARE_FUNCTION(execSetCombatStateBK); \
	DECLARE_FUNCTION(execSetCurrentAIStateBK); \
	DECLARE_FUNCTION(execSetTargetActorBK); \
	DECLARE_FUNCTION(execSetLeadActorBK); \
	DECLARE_FUNCTION(execSetTargetLocationBK); \
	DECLARE_FUNCTION(execGetHomeDistanceBK); \
	DECLARE_FUNCTION(execGetLeadActorDistanceBK); \
	DECLARE_FUNCTION(execGetTargetPointDistanceBK); \
	DECLARE_FUNCTION(execGetTargetActorDistanceBK); \
	DECLARE_FUNCTION(execGetLeadActorBK); \
	DECLARE_FUNCTION(execGetIsPausedBK); \
	DECLARE_FUNCTION(execGetTargetPointLocationBK); \
	DECLARE_FUNCTION(execGetTargetActorBK); \
	DECLARE_FUNCTION(execGetAIStateBK); \
	DECLARE_FUNCTION(execGetCombatStateBK); \
	DECLARE_FUNCTION(execGetCommandDurationTimeBK); \
	DECLARE_FUNCTION(execSetWaitDurationTimeBK); \
	DECLARE_FUNCTION(execResetToDefaultState); \
	DECLARE_FUNCTION(execSetDefaultState); \
	DECLARE_FUNCTION(execGetDefaultAIState); \
	DECLARE_FUNCTION(execShouldTeleportNearLead); \
	DECLARE_FUNCTION(execShouldReturnHome); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execGetBehaviorTree); \
	DECLARE_FUNCTION(execGetBehaviorThreeComponent); \
	DECLARE_FUNCTION(execGetIndexInGroup); \
	DECLARE_FUNCTION(execGetLoseTargetDistance); \
	DECLARE_FUNCTION(execGetTeleportLeadDistanceTrigger); \
	DECLARE_FUNCTION(execGetMaxDistanceFromHome); \
	DECLARE_FUNCTION(execGetThreatManager); \
	DECLARE_FUNCTION(execGetCommandManager); \
	DECLARE_FUNCTION(execGetCombatBehavior); \
	DECLARE_FUNCTION(execGetBaseAICharacter); \
	DECLARE_FUNCTION(execOnTargetDeathHandle); \
	DECLARE_FUNCTION(execHandleCharacterDeath); \
	DECLARE_FUNCTION(execHandleCharacterHit); \
	DECLARE_FUNCTION(execHandleMaxThreatUpdated); \
	DECLARE_FUNCTION(execHandlePerceptionUpdated); \
	DECLARE_FUNCTION(execIsPartOfGroup); \
	DECLARE_FUNCTION(execGetOwningGroup);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFAIController(); \
	friend struct Z_Construct_UClass_AACFAIController_Statics; \
public: \
	DECLARE_CLASS(AACFAIController, AACFBaseAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFramework"), NO_API) \
	DECLARE_SERIALIZER(AACFAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AACFAIController*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFAIController(AACFAIController&&); \
	NO_API AACFAIController(const AACFAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACFAIController) \
	NO_API virtual ~AACFAIController();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_27_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIFRAMEWORK_API UClass* StaticClass<class AACFAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

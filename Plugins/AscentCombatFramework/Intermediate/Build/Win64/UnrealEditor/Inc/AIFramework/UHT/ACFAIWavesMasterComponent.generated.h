// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFAIWavesMasterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
struct FWaveConfig;
#ifdef AIFRAMEWORK_ACFAIWavesMasterComponent_generated_h
#error "ACFAIWavesMasterComponent.generated.h already included, missing '#pragma once' in ACFAIWavesMasterComponent.h"
#endif
#define AIFRAMEWORK_ACFAIWavesMasterComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_13_DELEGATE \
AIFRAMEWORK_API void FOnWaveStarted_DelegateWrapper(const FMulticastScriptDelegate& OnWaveStarted, const int32 waveIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_14_DELEGATE \
AIFRAMEWORK_API void FOnWaveEnded_DelegateWrapper(const FMulticastScriptDelegate& OnWaveEnded, const int32 waveIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_15_DELEGATE \
AIFRAMEWORK_API void FOnAllWavesEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAllWavesEnded);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_16_DELEGATE \
AIFRAMEWORK_API void FOnWaveProgressed_DelegateWrapper(const FMulticastScriptDelegate& OnWaveProgressed, const int32 newIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ProceedToNextWave_Implementation(); \
	virtual void RemoveAgentFromWave_Implementation(int32 waveIndex, TSubclassOf<AACFCharacter>  agentClass, int32 count); \
	virtual void AddAgentToWave_Implementation(int32 waveIndex, TSubclassOf<AACFCharacter>  agentClass, int32 count); \
 \
	DECLARE_FUNCTION(execHandleWaveFinished); \
	DECLARE_FUNCTION(execAreWavesStarted); \
	DECLARE_FUNCTION(execTryGetWaveConfigAtIndex); \
	DECLARE_FUNCTION(execGetCurrentWaveIndex); \
	DECLARE_FUNCTION(execProceedToNextWave); \
	DECLARE_FUNCTION(execRemoveAgentFromWave); \
	DECLARE_FUNCTION(execAddAgentToWave); \
	DECLARE_FUNCTION(execStartWave);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAIWavesMasterComponent(); \
	friend struct Z_Construct_UClass_UACFAIWavesMasterComponent_Statics; \
public: \
	DECLARE_CLASS(UACFAIWavesMasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFramework"), NO_API) \
	DECLARE_SERIALIZER(UACFAIWavesMasterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentWaveIndex=NETFIELD_REP_START, \
		bAreWavesStarted, \
		NETFIELD_REP_END=bAreWavesStarted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAIWavesMasterComponent(UACFAIWavesMasterComponent&&); \
	NO_API UACFAIWavesMasterComponent(const UACFAIWavesMasterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAIWavesMasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAIWavesMasterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFAIWavesMasterComponent) \
	NO_API virtual ~UACFAIWavesMasterComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIFRAMEWORK_API UClass* StaticClass<class UACFAIWavesMasterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFAIWavesMasterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

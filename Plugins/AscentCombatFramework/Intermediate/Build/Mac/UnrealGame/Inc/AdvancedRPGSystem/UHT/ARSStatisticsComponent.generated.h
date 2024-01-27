// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSStatisticsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttribute;
struct FAttributesSet;
struct FAttributesSetModifier;
struct FGameplayTag;
struct FStatistic;
struct FStatisticValue;
#ifdef ADVANCEDRPGSYSTEM_ARSStatisticsComponent_generated_h
#error "ARSStatisticsComponent.generated.h already included, missing '#pragma once' in ARSStatisticsComponent.h"
#endif
#define ADVANCEDRPGSYSTEM_ARSStatisticsComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_13_DELEGATE \
ADVANCEDRPGSYSTEM_API void FOnStatValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatValueChanged, FGameplayTag Stat, FStatistic const& value);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_14_DELEGATE \
ADVANCEDRPGSYSTEM_API void FOnAttributeSetModified_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeSetModified);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_16_DELEGATE \
ADVANCEDRPGSYSTEM_API void FOnStatisticReachesZero_DelegateWrapper(const FMulticastScriptDelegate& OnStatisticReachesZero, FGameplayTag Stat);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_17_DELEGATE \
ADVANCEDRPGSYSTEM_API void FOnCharacterLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterLevelUp, int32 NewLevel);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_18_DELEGATE \
ADVANCEDRPGSYSTEM_API void FOnCurrentExpValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentExpValueChanged, int32 newCurrentExp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_19_DELEGATE \
ADVANCEDRPGSYSTEM_API void FOnStatisticValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatisticValueChanged, FGameplayTag const& Stat, float OldValue, float NewValue);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnComponentSaved_Implementation(); \
	virtual void OnComponentLoaded_Implementation(); \
	virtual bool AssignPerkToPrimaryAttribute_Validate(FGameplayTag const& , int32 ); \
	virtual void AssignPerkToPrimaryAttribute_Implementation(FGameplayTag const& attributeTag, int32 numPerks); \
	virtual void PermanentlyModifyPrimaryAttribute_Implementation(FGameplayTag const& attribute, float deltaValue); \
	virtual void SetNewLevelAndReinitialize_Implementation(int32 newLevel); \
	virtual void ReinitializeAttributeSetFromNewDefault_Implementation(FAttributesSet const& newDefault); \
	virtual void AddTimedAttributeSetModifier_Implementation(FAttributesSetModifier const& _modifier, float duration); \
	virtual void ModifyStat_Implementation(FStatisticValue const& StatMod); \
	virtual void AddStatisticConsumptionMultiplier_Implementation(FGameplayTag statisticTag, float multiplier); \
	virtual void RemoveAttributeSetModifier_Implementation(FAttributesSetModifier const& _modifier); \
	virtual void AddAttributeSetModifier_Implementation(FAttributesSetModifier const& _modifier); \
	virtual void AddExp_Implementation(int32 exp); \
	virtual void StopRegeneration_Implementation(); \
	virtual void StartRegeneration_Implementation(); \
	virtual void OnLevelUp_Implementation(int32 newlevel, int32 remainingExp); \
 \
	DECLARE_FUNCTION(execOnComponentSaved); \
	DECLARE_FUNCTION(execOnComponentLoaded); \
	DECLARE_FUNCTION(execHasValidPrimaryAttribute); \
	DECLARE_FUNCTION(execHasValidAttribute); \
	DECLARE_FUNCTION(execHasValidStatistic); \
	DECLARE_FUNCTION(execGetAvailablePerks); \
	DECLARE_FUNCTION(execAssignPerkToPrimaryAttribute); \
	DECLARE_FUNCTION(execGetExpOnDeath); \
	DECLARE_FUNCTION(execCanLevelUp); \
	DECLARE_FUNCTION(execGetCurrentExptsFromPreviousLevel); \
	DECLARE_FUNCTION(execGetExpsForLevel); \
	DECLARE_FUNCTION(execGetTotalExpsForLevel); \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execGetCurrentExp); \
	DECLARE_FUNCTION(execGetTotaleExpToNextLevel); \
	DECLARE_FUNCTION(execPermanentlyModifyPrimaryAttribute); \
	DECLARE_FUNCTION(execSetNewLevelAndReinitialize); \
	DECLARE_FUNCTION(execReinitializeAttributeSetFromNewDefault); \
	DECLARE_FUNCTION(execAddTimedAttributeSetModifier); \
	DECLARE_FUNCTION(execGetBaseAttributeSetWithoutModifiers); \
	DECLARE_FUNCTION(execGetCurrentAttributeSet); \
	DECLARE_FUNCTION(execGetCurrentAttributeValue); \
	DECLARE_FUNCTION(execGetCurrentPrimaryAttributeValue); \
	DECLARE_FUNCTION(execGetNormalizedValueForStatitstic); \
	DECLARE_FUNCTION(execGetMaxValueForStatitstic); \
	DECLARE_FUNCTION(execGetCurrentValueForStatitstic); \
	DECLARE_FUNCTION(execModifyStat); \
	DECLARE_FUNCTION(execModifyStatistic); \
	DECLARE_FUNCTION(execConsumeStatistics); \
	DECLARE_FUNCTION(execCheckCost); \
	DECLARE_FUNCTION(execCheckPrimaryAttributesRequirements); \
	DECLARE_FUNCTION(execCheckCosts); \
	DECLARE_FUNCTION(execGetConsumptionMultiplierByStatistic); \
	DECLARE_FUNCTION(execAddStatisticConsumptionMultiplier); \
	DECLARE_FUNCTION(execRemoveAttributeSetModifier); \
	DECLARE_FUNCTION(execAddAttributeSetModifier); \
	DECLARE_FUNCTION(execAddExp); \
	DECLARE_FUNCTION(execStopRegeneration); \
	DECLARE_FUNCTION(execInitializeAttributeSet); \
	DECLARE_FUNCTION(execStartRegeneration); \
	DECLARE_FUNCTION(execGenerateStats); \
	DECLARE_FUNCTION(execInternal_AddModifier); \
	DECLARE_FUNCTION(execInternal_ModifyStat); \
	DECLARE_FUNCTION(execOnLevelUp); \
	DECLARE_FUNCTION(execInitilizeLevelData); \
	DECLARE_FUNCTION(execOnRep_AttributeSet); \
	DECLARE_FUNCTION(execGetPrimitiveAttributesForCurrentLevel);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSStatisticsComponent(); \
	friend struct Z_Construct_UClass_UARSStatisticsComponent_Statics; \
public: \
	DECLARE_CLASS(UARSStatisticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedRPGSystem"), NO_API) \
	DECLARE_SERIALIZER(UARSStatisticsComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentExps=NETFIELD_REP_START, \
		ExpToNextLevel, \
		AttributeSet, \
		Perks, \
		baseAttributeSet, \
		NETFIELD_REP_END=baseAttributeSet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSStatisticsComponent(UARSStatisticsComponent&&); \
	NO_API UARSStatisticsComponent(const UARSStatisticsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSStatisticsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSStatisticsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARSStatisticsComponent) \
	NO_API virtual ~UARSStatisticsComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_21_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<class UARSStatisticsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSStatisticsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

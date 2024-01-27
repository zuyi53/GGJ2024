// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CASAnimMasterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimMontage;
enum class ERelativeDirection : uint8;
struct FCurrentCombinedAnim;
struct FGameplayTag;
#ifdef COMBINEDANIMATIONSSYSTEM_CASAnimMasterComponent_generated_h
#error "CASAnimMasterComponent.generated.h already included, missing '#pragma once' in CASAnimMasterComponent.h"
#endif
#define COMBINEDANIMATIONSSYSTEM_CASAnimMasterComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool DispatchAnimEnded_Validate(FGameplayTag const& ); \
	virtual void DispatchAnimEnded_Implementation(FGameplayTag const& animTag); \
	virtual bool DispatchAnimStarted_Validate(FGameplayTag const& ); \
	virtual void DispatchAnimStarted_Implementation(FGameplayTag const& animTag); \
	virtual bool MulticastSlavePlayAnimMontage_Validate(ACharacter* , UAnimMontage* ); \
	virtual void MulticastSlavePlayAnimMontage_Implementation(ACharacter* slave, UAnimMontage* montage); \
	virtual bool MulticastPlayAnimMontage_Validate(FCurrentCombinedAnim const& ); \
	virtual void MulticastPlayAnimMontage_Implementation(FCurrentCombinedAnim const& combinedAnim); \
	virtual bool PlayCombinedAnimation_Validate(ACharacter* , FGameplayTag const& ); \
	virtual void PlayCombinedAnimation_Implementation(ACharacter* otherCharachter, FGameplayTag const& combineAnimTag); \
 \
	DECLARE_FUNCTION(execDispatchAnimEnded); \
	DECLARE_FUNCTION(execDispatchAnimStarted); \
	DECLARE_FUNCTION(execMulticastSlavePlayAnimMontage); \
	DECLARE_FUNCTION(execMulticastPlayAnimMontage); \
	DECLARE_FUNCTION(execHandleMontageFinished); \
	DECLARE_FUNCTION(execGetCharacterRelativedDirection); \
	DECLARE_FUNCTION(execGetCharacterSlave); \
	DECLARE_FUNCTION(execGetCharacterOwner); \
	DECLARE_FUNCTION(execIsPlayingCombinedAnimation); \
	DECLARE_FUNCTION(execCanPlayCombinedAnimWithCharacter); \
	DECLARE_FUNCTION(execPlayCombinedAnimation); \
	DECLARE_FUNCTION(execTryPlayCombinedAnimation);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCASAnimMasterComponent(); \
	friend struct Z_Construct_UClass_UCASAnimMasterComponent_Statics; \
public: \
	DECLARE_CLASS(UCASAnimMasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombinedAnimationsSystem"), NO_API) \
	DECLARE_SERIALIZER(UCASAnimMasterComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentAnim=NETFIELD_REP_START, \
		bIsPlayingCombAnim, \
		NETFIELD_REP_END=bIsPlayingCombAnim	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCASAnimMasterComponent(UCASAnimMasterComponent&&); \
	NO_API UCASAnimMasterComponent(const UCASAnimMasterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCASAnimMasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCASAnimMasterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCASAnimMasterComponent) \
	NO_API virtual ~UCASAnimMasterComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_13_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBINEDANIMATIONSSYSTEM_API UClass* StaticClass<class UCASAnimMasterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CombinedAnimationsSystem_Public_CASAnimMasterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

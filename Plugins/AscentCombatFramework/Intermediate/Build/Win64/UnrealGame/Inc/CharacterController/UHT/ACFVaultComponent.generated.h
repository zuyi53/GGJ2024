// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFVaultComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
struct FGameplayTag;
#ifdef CHARACTERCONTROLLER_ACFVaultComponent_generated_h
#error "ACFVaultComponent.generated.h already included, missing '#pragma once' in ACFVaultComponent.h"
#endif
#define CHARACTERCONTROLLER_ACFVaultComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_14_DELEGATE \
CHARACTERCONTROLLER_API void FOnActivationStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActivationStateChanged, bool isActive);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetVaultingEnabled_Implementation(bool inEnabled); \
 \
	DECLARE_FUNCTION(execOnRep_Activated); \
	DECLARE_FUNCTION(execOnEnabledStateChanged); \
	DECLARE_FUNCTION(execCanVault); \
	DECLARE_FUNCTION(execGetVaultableCollisionChannel); \
	DECLARE_FUNCTION(execGetVaultActionTag); \
	DECLARE_FUNCTION(execGetMantleActionTag); \
	DECLARE_FUNCTION(execGetActorToVault); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetCharacterOwner); \
	DECLARE_FUNCTION(execSetVaultCollisionChannel); \
	DECLARE_FUNCTION(execSetMantleActionTag); \
	DECLARE_FUNCTION(execSetVaultActionTag); \
	DECLARE_FUNCTION(execSetVaultingEnabled); \
	DECLARE_FUNCTION(execSetActorToVault);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFVaultComponent(); \
	friend struct Z_Construct_UClass_UACFVaultComponent_Statics; \
public: \
	DECLARE_CLASS(UACFVaultComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CharacterController"), NO_API) \
	DECLARE_SERIALIZER(UACFVaultComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bVaultChecksEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bVaultChecksEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFVaultComponent(UACFVaultComponent&&); \
	NO_API UACFVaultComponent(const UACFVaultComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFVaultComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFVaultComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFVaultComponent) \
	NO_API virtual ~UACFVaultComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHARACTERCONTROLLER_API UClass* StaticClass<class UACFVaultComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CharacterController_Public_ACFVaultComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

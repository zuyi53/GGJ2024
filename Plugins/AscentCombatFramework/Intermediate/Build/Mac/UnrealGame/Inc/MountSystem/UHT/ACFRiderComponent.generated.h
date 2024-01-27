// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFRiderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UACFMountableComponent;
struct FGameplayTag;
#ifdef MOUNTSYSTEM_ACFRiderComponent_generated_h
#error "ACFRiderComponent.generated.h already included, missing '#pragma once' in ACFRiderComponent.h"
#endif
#define MOUNTSYSTEM_ACFRiderComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_10_DELEGATE \
MOUNTSYSTEM_API void FOnRidingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRidingStateChanged, bool bIsRiding);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool StartDismount_Validate(FName const& ); \
	virtual void StartDismount_Implementation(FName const& dismountPoint); \
	virtual bool StartMount_Validate(UACFMountableComponent* ); \
	virtual void StartMount_Implementation(UACFMountableComponent* mount); \
 \
	DECLARE_FUNCTION(execOnRep_IsRiding); \
	DECLARE_FUNCTION(execOnRep_Mount); \
	DECLARE_FUNCTION(execGetMountTypeTag); \
	DECLARE_FUNCTION(execGetMountComp); \
	DECLARE_FUNCTION(execGetMount); \
	DECLARE_FUNCTION(execStartDismount); \
	DECLARE_FUNCTION(execStartMount); \
	DECLARE_FUNCTION(execIsRiding);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFRiderComponent(); \
	friend struct Z_Construct_UClass_UACFRiderComponent_Statics; \
public: \
	DECLARE_CLASS(UACFRiderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MountSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFRiderComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsRiding=NETFIELD_REP_START, \
		Mount, \
		NETFIELD_REP_END=Mount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFRiderComponent(UACFRiderComponent&&); \
	NO_API UACFRiderComponent(const UACFRiderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFRiderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFRiderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFRiderComponent) \
	NO_API virtual ~UACFRiderComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTSYSTEM_API UClass* StaticClass<class UACFRiderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFRiderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

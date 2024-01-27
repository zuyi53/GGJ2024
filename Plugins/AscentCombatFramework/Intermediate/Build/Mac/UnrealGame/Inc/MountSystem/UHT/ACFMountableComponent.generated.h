// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFMountableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class APawn;
class UACFMountPointComponent;
class UMeshComponent;
enum class EActionPriority : uint8;
enum class ETeam : uint8;
struct FGameplayTag;
#ifdef MOUNTSYSTEM_ACFMountableComponent_generated_h
#error "ACFMountableComponent.generated.h already included, missing '#pragma once' in ACFMountableComponent.h"
#endif
#define MOUNTSYSTEM_ACFMountableComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_13_DELEGATE \
MOUNTSYSTEM_API void FOnMountedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMountedStateChanged, bool inIsMounted);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReleaseSustainedActionOnRider_Implementation(FGameplayTag actionTag); \
	virtual void TriggerActionOnRider_Implementation(FGameplayTag ActionState, EActionPriority Priority, bool bCanBeStored, const FString& contextString); \
	virtual void StopMount_Implementation(FName dismountPoint); \
 \
	DECLARE_FUNCTION(execOnRep_IsMounted); \
	DECLARE_FUNCTION(execGetOwnerTeam); \
	DECLARE_FUNCTION(execCanBeMounted); \
	DECLARE_FUNCTION(execNeedsPossession); \
	DECLARE_FUNCTION(execGetMountOwner); \
	DECLARE_FUNCTION(execGetRider); \
	DECLARE_FUNCTION(execGetMountActionTag); \
	DECLARE_FUNCTION(execGetMountTag); \
	DECLARE_FUNCTION(execIsMounted); \
	DECLARE_FUNCTION(execSetMountMesh); \
	DECLARE_FUNCTION(execGetMountMesh); \
	DECLARE_FUNCTION(execGetDismountPoint); \
	DECLARE_FUNCTION(execGetMountPointTransform); \
	DECLARE_FUNCTION(execGetMountPoint); \
	DECLARE_FUNCTION(execReleaseSustainedActionOnRider); \
	DECLARE_FUNCTION(execTriggerActionOnRider); \
	DECLARE_FUNCTION(execStopMount); \
	DECLARE_FUNCTION(execStartMount); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetNearestMountPoint); \
	DECLARE_FUNCTION(execGetNearestMountPointTag);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFMountableComponent(); \
	friend struct Z_Construct_UClass_UACFMountableComponent_Statics; \
public: \
	DECLARE_CLASS(UACFMountableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MountSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFMountableComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsMounted=NETFIELD_REP_START, \
		rider, \
		NETFIELD_REP_END=rider	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFMountableComponent(UACFMountableComponent&&); \
	NO_API UACFMountableComponent(const UACFMountableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFMountableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFMountableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFMountableComponent) \
	NO_API virtual ~UACFMountableComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTSYSTEM_API UClass* StaticClass<class UACFMountableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_MountSystem_Public_ACFMountableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

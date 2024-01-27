// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATSBaseTargetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UATSTargetPointComponent;
#ifdef TARGETINGSYSTEM_ATSBaseTargetComponent_generated_h
#error "ATSBaseTargetComponent.generated.h already included, missing '#pragma once' in ATSBaseTargetComponent.h"
#endif
#define TARGETINGSYSTEM_ATSBaseTargetComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetTargetPoint_Validate(UATSTargetPointComponent* ); \
	virtual void SetTargetPoint_Implementation(UATSTargetPointComponent* targetPoint); \
	virtual bool SetTarget_Validate(AActor* ); \
	virtual void SetTarget_Implementation(AActor* target); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentTarget); \
	DECLARE_FUNCTION(execGetCurrentTargetPointLocation); \
	DECLARE_FUNCTION(execIsTargetInSight); \
	DECLARE_FUNCTION(execGetCurrentTargetPoint); \
	DECLARE_FUNCTION(execHasTarget); \
	DECLARE_FUNCTION(execGetCurrentTarget); \
	DECLARE_FUNCTION(execSetTargetPoint); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execSetCurrentTarget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATSBaseTargetComponent(); \
	friend struct Z_Construct_UClass_UATSBaseTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UATSBaseTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UATSBaseTargetComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTarget=NETFIELD_REP_START, \
		CurrentTargetPoint, \
		NETFIELD_REP_END=CurrentTargetPoint	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UATSBaseTargetComponent(UATSBaseTargetComponent&&); \
	NO_API UATSBaseTargetComponent(const UATSBaseTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATSBaseTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATSBaseTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UATSBaseTargetComponent) \
	NO_API virtual ~UATSBaseTargetComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UATSBaseTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSBaseTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

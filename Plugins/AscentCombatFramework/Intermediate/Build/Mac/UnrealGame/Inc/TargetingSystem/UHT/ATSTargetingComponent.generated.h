// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATSTargetingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UATSTargetingFilter;
class UATSTargetPointComponent;
enum class ETargetingDirection : uint8;
#ifdef TARGETINGSYSTEM_ATSTargetingComponent_generated_h
#error "ATSTargetingComponent.generated.h already included, missing '#pragma once' in ATSTargetingComponent.h"
#endif
#define TARGETINGSYSTEM_ATSTargetingComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_14_DELEGATE \
TARGETINGSYSTEM_API void FOnTargetingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetingStateChanged, bool bIsTargeting);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_15_DELEGATE \
TARGETINGSYSTEM_API void FOnTargetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetChanged, const AActor* targetActor);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsUpOfCurrentTarget); \
	DECLARE_FUNCTION(execIsRightOfCurrentTarget); \
	DECLARE_FUNCTION(execGetBestTargetPointForTarget); \
	DECLARE_FUNCTION(execUpdateCurrentTargetPoint); \
	DECLARE_FUNCTION(execUpdateTargeting); \
	DECLARE_FUNCTION(execIsValidTarget); \
	DECLARE_FUNCTION(execGetNearestTarget); \
	DECLARE_FUNCTION(execTrySwitchPointOnCurrentTarget); \
	DECLARE_FUNCTION(execGetAllTargetsByDirection); \
	DECLARE_FUNCTION(execActivateTargeting); \
	DECLARE_FUNCTION(execHandlePawnChanged); \
	DECLARE_FUNCTION(execSetOwnerReferences); \
	DECLARE_FUNCTION(execIsTargetingEnabled); \
	DECLARE_FUNCTION(execUpSearchTargetWithInput); \
	DECLARE_FUNCTION(execRightSearchTargetWithInput); \
	DECLARE_FUNCTION(execToggleTargeting); \
	DECLARE_FUNCTION(execRemoveObjectType); \
	DECLARE_FUNCTION(execAddObjectType); \
	DECLARE_FUNCTION(execRemoveFilter); \
	DECLARE_FUNCTION(execAddFilter); \
	DECLARE_FUNCTION(execTriggerTargeting);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATSTargetingComponent(); \
	friend struct Z_Construct_UClass_UATSTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UATSTargetingComponent, UATSBaseTargetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UATSTargetingComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UATSTargetingComponent(UATSTargetingComponent&&); \
	NO_API UATSTargetingComponent(const UATSTargetingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATSTargetingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATSTargetingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UATSTargetingComponent) \
	NO_API virtual ~UATSTargetingComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_43_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UATSTargetingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetingComponent_h


#define FOREACH_ENUM_ETARGETINGTYPE(op) \
	op(ETargetingType::EDontLock) \
	op(ETargetingType::EMagneticLock) \
	op(ETargetingType::EMagneticLockYawOnly) 

enum class ETargetingType : uint8;
template<> struct TIsUEnumClass<ETargetingType> { enum { Value = true }; };
template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingType>();

#define FOREACH_ENUM_ETARGETINGDIRECTION(op) \
	op(ETargetingDirection::ELeft) \
	op(ETargetingDirection::ERight) \
	op(ETargetingDirection::EUp) \
	op(ETargetingDirection::EDown) 

enum class ETargetingDirection : uint8;
template<> struct TIsUEnumClass<ETargetingDirection> { enum { Value = true }; };
template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingDirection>();

#define FOREACH_ENUM_ETARGETSELECTIONTYPE(op) \
	op(ETargetSelectionType::ENearestTarget) \
	op(ETargetSelectionType::EForwardTarget) 

enum class ETargetSelectionType : uint8;
template<> struct TIsUEnumClass<ETargetSelectionType> { enum { Value = true }; };
template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

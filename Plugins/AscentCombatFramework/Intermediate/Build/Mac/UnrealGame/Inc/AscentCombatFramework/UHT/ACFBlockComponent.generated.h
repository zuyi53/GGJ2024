// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFBlockComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
enum class EActionDirection : uint8;
struct FAttributesSetModifier;
#ifdef ASCENTCOMBATFRAMEWORK_ACFBlockComponent_generated_h
#error "ACFBlockComponent.generated.h already included, missing '#pragma once' in ACFBlockComponent.h"
#endif
#define ASCENTCOMBATFRAMEWORK_ACFBlockComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCounterableDamages); \
	DECLARE_FUNCTION(execGetCounterableDamages); \
	DECLARE_FUNCTION(execSetDamagedStatisticMultiplier); \
	DECLARE_FUNCTION(execGetDamagedStatisticMultiplier); \
	DECLARE_FUNCTION(execSetBlockableDamages); \
	DECLARE_FUNCTION(execGetBlockableDamages); \
	DECLARE_FUNCTION(execSetBlockDirection); \
	DECLARE_FUNCTION(execGetBlockDirection); \
	DECLARE_FUNCTION(execSetDefendingModifier); \
	DECLARE_FUNCTION(execGetDefendingModifier);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFBlockComponent(); \
	friend struct Z_Construct_UClass_UACFBlockComponent_Statics; \
public: \
	DECLARE_CLASS(UACFBlockComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscentCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UACFBlockComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFBlockComponent(UACFBlockComponent&&); \
	NO_API UACFBlockComponent(const UACFBlockComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFBlockComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFBlockComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFBlockComponent) \
	NO_API virtual ~UACFBlockComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<class UACFBlockComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFBlockComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

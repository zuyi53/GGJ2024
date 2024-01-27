// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFUnitsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
class UACFGroupAIComponent;
struct FBaseUnit;
#ifdef UNITSSYSTEM_ACFUnitsComponent_generated_h
#error "ACFUnitsComponent.generated.h already included, missing '#pragma once' in ACFUnitsComponent.h"
#endif
#define UNITSSYSTEM_ACFUnitsComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_14_DELEGATE \
UNITSSYSTEM_API void FOnUnitsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUnitsChanged, TArray<FBaseUnit> const& newUnits);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRepUnits); \
	DECLARE_FUNCTION(execMoveUnitFromGroup); \
	DECLARE_FUNCTION(execMoveUnitToGroup); \
	DECLARE_FUNCTION(execRemoveUnit); \
	DECLARE_FUNCTION(execAddUnit); \
	DECLARE_FUNCTION(execGetUnits);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFUnitsComponent(); \
	friend struct Z_Construct_UClass_UACFUnitsComponent_Statics; \
public: \
	DECLARE_CLASS(UACFUnitsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUnitsComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Units=NETFIELD_REP_START, \
		NETFIELD_REP_END=Units	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUnitsComponent(UACFUnitsComponent&&); \
	NO_API UACFUnitsComponent(const UACFUnitsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUnitsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUnitsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFUnitsComponent) \
	NO_API virtual ~UACFUnitsComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITSSYSTEM_API UClass* StaticClass<class UACFUnitsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

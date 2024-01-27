// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFWheeledVehiclePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UACFDamageHandlerComponent;
class UACFMountableComponent;
class UACFMountPointComponent;
class UARSStatisticsComponent;
enum class ETeam : uint8;
struct FACFDamageEvent;
#ifdef VEHICLESYSTEM_ACFWheeledVehiclePawn_generated_h
#error "ACFWheeledVehiclePawn.generated.h already included, missing '#pragma once' in ACFWheeledVehiclePawn.h"
#endif
#define VEHICLESYSTEM_ACFWheeledVehiclePawn_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execOnVehicleDestroyed); \
	DECLARE_FUNCTION(execGetDismountPoint); \
	DECLARE_FUNCTION(execGetMountComponent); \
	DECLARE_FUNCTION(execGetDamageHandlerComponent); \
	DECLARE_FUNCTION(execGetStatisticsComponent); \
	DECLARE_FUNCTION(execGetLastDamageInfo); \
	DECLARE_FUNCTION(execGetInteractableName); \
	DECLARE_FUNCTION(execCanBeInteracted); \
	DECLARE_FUNCTION(execAssignTeamToEntity); \
	DECLARE_FUNCTION(execGetEntityExtentRadius); \
	DECLARE_FUNCTION(execIsEntityAlive); \
	DECLARE_FUNCTION(execGetEntityCombatTeam);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFWheeledVehiclePawn(); \
	friend struct Z_Construct_UClass_AACFWheeledVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AACFWheeledVehiclePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(AACFWheeledVehiclePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AACFWheeledVehiclePawn*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFWheeledVehiclePawn(AACFWheeledVehiclePawn&&); \
	NO_API AACFWheeledVehiclePawn(const AACFWheeledVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFWheeledVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFWheeledVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFWheeledVehiclePawn) \
	NO_API virtual ~AACFWheeledVehiclePawn();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_16_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEM_API UClass* StaticClass<class AACFWheeledVehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_VehicleSystem_Public_ACFWheeledVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CCMTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CINEMATICCAMERAMANAGER_CCMTypes_generated_h
#error "CCMTypes.generated.h already included, missing '#pragma once' in CCMTypes.h"
#endif
#define CINEMATICCAMERAMANAGER_CCMTypes_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCCMCameraMovementSettings_Statics; \
	CINEMATICCAMERAMANAGER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<struct FCCMCameraMovementSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurrentSequence_Statics; \
	CINEMATICCAMERAMANAGER_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<struct FCurrentSequence>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCCMSequenceEvent_Statics; \
	CINEMATICCAMERAMANAGER_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<struct FCCMSequenceEvent>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCCMCameraSequenceSettings_Statics; \
	CINEMATICCAMERAMANAGER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CINEMATICCAMERAMANAGER_API UScriptStruct* StaticStruct<struct FCCMCameraSequenceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CinematicCameraManager_Public_CCMTypes_h


#define FOREACH_ENUM_ELOCKTYPE(op) \
	op(ELockType::EYawOnly) \
	op(ELockType::EAllAxis) 

enum class ELockType : uint8;
template<> struct TIsUEnumClass<ELockType> { enum { Value = true }; };
template<> CINEMATICCAMERAMANAGER_API UEnum* StaticEnum<ELockType>();

#define FOREACH_ENUM_ETARGETLOCKTYPE(op) \
	op(ETargetLockType::ENone) \
	op(ETargetLockType::EActor) \
	op(ETargetLockType::EComponent) 

enum class ETargetLockType : uint8;
template<> struct TIsUEnumClass<ETargetLockType> { enum { Value = true }; };
template<> CINEMATICCAMERAMANAGER_API UEnum* StaticEnum<ETargetLockType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

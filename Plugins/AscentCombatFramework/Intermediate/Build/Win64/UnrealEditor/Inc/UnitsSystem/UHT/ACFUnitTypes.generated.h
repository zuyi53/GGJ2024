// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFUnitTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNITSSYSTEM_ACFUnitTypes_generated_h
#error "ACFUnitTypes.generated.h already included, missing '#pragma once' in ACFUnitTypes.h"
#endif
#define UNITSSYSTEM_ACFUnitTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFUnitTypes_h


#define FOREACH_ENUM_ECONQUEREDSTATE(op) \
	op(EConqueredState::ENotConquered) \
	op(EConqueredState::EConquerStart) \
	op(EConqueredState::EConquerInProgress) \
	op(EConqueredState::EConquered) 

enum class EConqueredState : uint8;
template<> struct TIsUEnumClass<EConqueredState> { enum { Value = true }; };
template<> UNITSSYSTEM_API UEnum* StaticEnum<EConqueredState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ACFEntityInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef ASCENTCOREINTERFACES_ACFEntityInterface_generated_h
#error "ACFEntityInterface.generated.h already included, missing '#pragma once' in ACFEntityInterface.h"
#endif
#define ASCENTCOREINTERFACES_ACFEntityInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_11_DELEGATE \
ASCENTCOREINTERFACES_API void FOnTeamChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTeamChanged, const ETeam Team);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AssignTeamToEntity_Implementation(ETeam inCombatTeam) {}; \
	virtual bool IsEntityAlive_Implementation() const { return false; }; \
	virtual float GetEntityExtentRadius_Implementation() const { return 0; }; \
	virtual ETeam GetEntityCombatTeam_Implementation() const { return (ETeam)0; }; \
 \
	DECLARE_FUNCTION(execAssignTeamToEntity); \
	DECLARE_FUNCTION(execIsEntityAlive); \
	DECLARE_FUNCTION(execGetEntityExtentRadius); \
	DECLARE_FUNCTION(execGetEntityCombatTeam);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASCENTCOREINTERFACES_API UACFEntityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASCENTCOREINTERFACES_API UACFEntityInterface(UACFEntityInterface&&); \
	ASCENTCOREINTERFACES_API UACFEntityInterface(const UACFEntityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASCENTCOREINTERFACES_API, UACFEntityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFEntityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFEntityInterface) \
	ASCENTCOREINTERFACES_API virtual ~UACFEntityInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUACFEntityInterface(); \
	friend struct Z_Construct_UClass_UACFEntityInterface_Statics; \
public: \
	DECLARE_CLASS(UACFEntityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AscentCoreInterfaces"), ASCENTCOREINTERFACES_API) \
	DECLARE_SERIALIZER(UACFEntityInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IACFEntityInterface() {} \
public: \
	typedef UACFEntityInterface UClassType; \
	typedef IACFEntityInterface ThisClass; \
	static void Execute_AssignTeamToEntity(UObject* O, ETeam inCombatTeam); \
	static ETeam Execute_GetEntityCombatTeam(const UObject* O); \
	static float Execute_GetEntityExtentRadius(const UObject* O); \
	static bool Execute_IsEntityAlive(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTCOREINTERFACES_API UClass* StaticClass<class UACFEntityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFEntityInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

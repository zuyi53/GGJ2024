// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATSTargetableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UATSTargetPointComponent;
#ifdef TARGETINGSYSTEM_ATSTargetableInterface_generated_h
#error "ATSTargetableInterface.generated.h already included, missing '#pragma once' in ATSTargetableInterface.h"
#endif
#define TARGETINGSYSTEM_ATSTargetableInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTargetLosed_Implementation() {}; \
	virtual void OnTargetAcquired_Implementation(UATSTargetPointComponent* point) {}; \
 \
	DECLARE_FUNCTION(execOnTargetLosed); \
	DECLARE_FUNCTION(execOnTargetAcquired);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UATSTargetableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UATSTargetableInterface(UATSTargetableInterface&&); \
	NO_API UATSTargetableInterface(const UATSTargetableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATSTargetableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATSTargetableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UATSTargetableInterface) \
	NO_API virtual ~UATSTargetableInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUATSTargetableInterface(); \
	friend struct Z_Construct_UClass_UATSTargetableInterface_Statics; \
public: \
	DECLARE_CLASS(UATSTargetableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UATSTargetableInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IATSTargetableInterface() {} \
public: \
	typedef UATSTargetableInterface UClassType; \
	typedef IATSTargetableInterface ThisClass; \
	static void Execute_OnTargetAcquired(UObject* O, UATSTargetPointComponent* point); \
	static void Execute_OnTargetLosed(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UATSTargetableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_TargetingSystem_Public_ATSTargetableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

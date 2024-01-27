// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ACFInteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ASCENTCOREINTERFACES_ACFInteractableInterface_generated_h
#error "ACFInteractableInterface.generated.h already included, missing '#pragma once' in ACFInteractableInterface.h"
#endif
#define ASCENTCOREINTERFACES_ACFInteractableInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FText GetInteractableName_Implementation() { return FText::GetEmpty(); }; \
	virtual void OnInteractableUnregisteredByPawn_Implementation(APawn* Pawn) {}; \
	virtual void OnInteractableRegisteredByPawn_Implementation(APawn* Pawn) {}; \
	virtual void OnLocalInteractedByPawn_Implementation(APawn* Pawn, const FString& interactionType) {}; \
	virtual void OnInteractedByPawn_Implementation(APawn* Pawn, const FString& interactionType) {}; \
 \
	DECLARE_FUNCTION(execCanBeInteracted); \
	DECLARE_FUNCTION(execGetInteractableName); \
	DECLARE_FUNCTION(execOnInteractableUnregisteredByPawn); \
	DECLARE_FUNCTION(execOnInteractableRegisteredByPawn); \
	DECLARE_FUNCTION(execOnLocalInteractedByPawn); \
	DECLARE_FUNCTION(execOnInteractedByPawn);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASCENTCOREINTERFACES_API UACFInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASCENTCOREINTERFACES_API UACFInteractableInterface(UACFInteractableInterface&&); \
	ASCENTCOREINTERFACES_API UACFInteractableInterface(const UACFInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASCENTCOREINTERFACES_API, UACFInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFInteractableInterface) \
	ASCENTCOREINTERFACES_API virtual ~UACFInteractableInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUACFInteractableInterface(); \
	friend struct Z_Construct_UClass_UACFInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UACFInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AscentCoreInterfaces"), ASCENTCOREINTERFACES_API) \
	DECLARE_SERIALIZER(UACFInteractableInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IACFInteractableInterface() {} \
public: \
	typedef UACFInteractableInterface UClassType; \
	typedef IACFInteractableInterface ThisClass; \
	static bool Execute_CanBeInteracted(UObject* O, APawn* Pawn); \
	static FText Execute_GetInteractableName(UObject* O); \
	static void Execute_OnInteractableRegisteredByPawn(UObject* O, APawn* Pawn); \
	static void Execute_OnInteractableUnregisteredByPawn(UObject* O, APawn* Pawn); \
	static void Execute_OnInteractedByPawn(UObject* O, APawn* Pawn, const FString& interactionType); \
	static void Execute_OnLocalInteractedByPawn(UObject* O, APawn* Pawn, const FString& interactionType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTCOREINTERFACES_API UClass* StaticClass<class UACFInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCoreInterfaces_Public_Interfaces_ACFInteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/ACFWorldItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FBaseItem;
struct FItemDescriptor;
#ifdef INVENTORYSYSTEM_ACFWorldItem_generated_h
#error "ACFWorldItem.generated.h already included, missing '#pragma once' in ACFWorldItem.h"
#endif
#define INVENTORYSYSTEM_ACFWorldItem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLoaded_Implementation(); \
 \
	DECLARE_FUNCTION(execOnLoaded); \
	DECLARE_FUNCTION(execHandleStorageChanged); \
	DECLARE_FUNCTION(execDestroyOnAllItemsGathered); \
	DECLARE_FUNCTION(execGetFirstItemInfo); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetInteractableName); \
	DECLARE_FUNCTION(execCanBeInteracted); \
	DECLARE_FUNCTION(execOnInteractableUnregisteredByPawn); \
	DECLARE_FUNCTION(execOnInteractableRegisteredByPawn); \
	DECLARE_FUNCTION(execOnLocalInteractedByPawn); \
	DECLARE_FUNCTION(execOnInteractedByPawn); \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execSetItemMesh);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFWorldItem(); \
	friend struct Z_Construct_UClass_AACFWorldItem_Statics; \
public: \
	DECLARE_CLASS(AACFWorldItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AACFWorldItem) \
	virtual UObject* _getUObject() const override { return const_cast<AACFWorldItem*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFWorldItem(AACFWorldItem&&); \
	NO_API AACFWorldItem(const AACFWorldItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFWorldItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFWorldItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFWorldItem) \
	NO_API virtual ~AACFWorldItem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AACFWorldItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Items_ACFWorldItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

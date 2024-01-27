// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFVendorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFItem;
class APawn;
class UACFCurrencyComponent;
class UACFEquipmentComponent;
class UACFItemsManagerComponent;
struct FBaseItem;
struct FInventoryItem;
struct FItemDescriptor;
#ifdef CRAFTINGSYSTEM_ACFVendorComponent_generated_h
#error "ACFVendorComponent.generated.h already included, missing '#pragma once' in ACFVendorComponent.h"
#endif
#define CRAFTINGSYSTEM_ACFVendorComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryGetItemDescriptorByClass); \
	DECLARE_FUNCTION(execTryGetItemDescriptor); \
	DECLARE_FUNCTION(execGetItemCostPerUnit); \
	DECLARE_FUNCTION(execVendorUsesCurrency); \
	DECLARE_FUNCTION(execGetVendorPriceMultiplierOnSell); \
	DECLARE_FUNCTION(execGetVendorPriceMultiplierOnBuy); \
	DECLARE_FUNCTION(execGetVendorCurrencyComp); \
	DECLARE_FUNCTION(execGetVendorCurrency); \
	DECLARE_FUNCTION(execGetItemsManager); \
	DECLARE_FUNCTION(execGetPawnInventory); \
	DECLARE_FUNCTION(execGetPawnEquipment); \
	DECLARE_FUNCTION(execGetPawnCurrency); \
	DECLARE_FUNCTION(execSellItemsToVendor); \
	DECLARE_FUNCTION(execBuyItems); \
	DECLARE_FUNCTION(execCanPawnSellItemFromHisInventory); \
	DECLARE_FUNCTION(execCanPawnBuyItems); \
	DECLARE_FUNCTION(execHowManyItemsCanSell); \
	DECLARE_FUNCTION(execHowManyItemsCanBuy);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFVendorComponent(); \
	friend struct Z_Construct_UClass_UACFVendorComponent_Statics; \
public: \
	DECLARE_CLASS(UACFVendorComponent, UACFStorageComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CraftingSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFVendorComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFVendorComponent(UACFVendorComponent&&); \
	NO_API UACFVendorComponent(const UACFVendorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFVendorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFVendorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFVendorComponent) \
	NO_API virtual ~UACFVendorComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_16_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAFTINGSYSTEM_API UClass* StaticClass<class UACFVendorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CraftingSystem_Public_ACFVendorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFStorageComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UACFCurrencyComponent;
class UACFEquipmentComponent;
struct FBaseItem;
#ifdef INVENTORYSYSTEM_ACFStorageComponent_generated_h
#error "ACFStorageComponent.generated.h already included, missing '#pragma once' in ACFStorageComponent.h"
#endif
#define INVENTORYSYSTEM_ACFStorageComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_14_DELEGATE \
INVENTORYSYSTEM_API void FOnItemsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemsChanged, TArray<FBaseItem> const& currentItems);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool AddItems_Validate(TArray<FBaseItem> const& ); \
	virtual void AddItems_Implementation(TArray<FBaseItem> const& inItems); \
	virtual bool AddItem_Validate(FBaseItem const& ); \
	virtual void AddItem_Implementation(FBaseItem const& inItems); \
	virtual bool RemoveItem_Validate(FBaseItem const& ); \
	virtual void RemoveItem_Implementation(FBaseItem const& inItems); \
	virtual bool RemoveItems_Validate(TArray<FBaseItem> const& ); \
	virtual void RemoveItems_Implementation(TArray<FBaseItem> const& inItems); \
 \
	DECLARE_FUNCTION(execOnRep_Items); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetPawnCurrencyComponent); \
	DECLARE_FUNCTION(execGatherAllCurrency); \
	DECLARE_FUNCTION(execGatherCurrency); \
	DECLARE_FUNCTION(execMoveItemsToInventory); \
	DECLARE_FUNCTION(execAddItems); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRemoveItems);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFStorageComponent(); \
	friend struct Z_Construct_UClass_UACFStorageComponent_Statics; \
public: \
	DECLARE_CLASS(UACFStorageComponent, UACFCurrencyComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UACFStorageComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Items=NETFIELD_REP_START, \
		NETFIELD_REP_END=Items	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFStorageComponent(UACFStorageComponent&&); \
	NO_API UACFStorageComponent(const UACFStorageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFStorageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFStorageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFStorageComponent) \
	NO_API virtual ~UACFStorageComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UACFStorageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFStorageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

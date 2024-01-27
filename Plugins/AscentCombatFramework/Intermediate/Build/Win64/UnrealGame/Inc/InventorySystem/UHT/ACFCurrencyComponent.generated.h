// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ACFCurrencyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef INVENTORYSYSTEM_ACFCurrencyComponent_generated_h
#error "ACFCurrencyComponent.generated.h already included, missing '#pragma once' in ACFCurrencyComponent.h"
#endif
#define INVENTORYSYSTEM_ACFCurrencyComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_12_DELEGATE \
INVENTORYSYSTEM_API void FOnCurrencyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyValueChanged, float newValue, float variation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCurrency_Implementation(float amount); \
	virtual bool RemoveCurrency_Validate(float ); \
	virtual void RemoveCurrency_Implementation(float amount); \
	virtual bool AddCurrency_Validate(float ); \
	virtual void AddCurrency_Implementation(float amount); \
 \
	DECLARE_FUNCTION(execOnRep_Currency); \
	DECLARE_FUNCTION(execHandleStatReachedZero); \
	DECLARE_FUNCTION(execGetCurrentCurrencyAmount); \
	DECLARE_FUNCTION(execHasEnoughCurrency); \
	DECLARE_FUNCTION(execSetCurrency); \
	DECLARE_FUNCTION(execRemoveCurrency); \
	DECLARE_FUNCTION(execAddCurrency);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFCurrencyComponent(); \
	friend struct Z_Construct_UClass_UACFCurrencyComponent_Statics; \
public: \
	DECLARE_CLASS(UACFCurrencyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UACFCurrencyComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrencyAmount=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrencyAmount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFCurrencyComponent(UACFCurrencyComponent&&); \
	NO_API UACFCurrencyComponent(const UACFCurrencyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFCurrencyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFCurrencyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFCurrencyComponent) \
	NO_API virtual ~UACFCurrencyComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UACFCurrencyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_Components_ACFCurrencyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

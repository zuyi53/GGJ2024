// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFItemSystemFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFItem;
class AACFWorldItem;
class APawn;
class UObject;
enum class EItemType : uint8;
enum class EShootTargetType : uint8;
struct FAttribute;
struct FAttributesSetModifier;
struct FBaseItem;
struct FGameplayTag;
struct FInventoryItem;
struct FItemDescriptor;
struct FStatisticValue;
struct FTimedAttributeSetModifier;
#ifdef INVENTORYSYSTEM_ACFItemSystemFunctionLibrary_generated_h
#error "ACFItemSystemFunctionLibrary.generated.h already included, missing '#pragma once' in ACFItemSystemFunctionLibrary.h"
#endif
#define INVENTORYSYSTEM_ACFItemSystemFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterByItemSlot); \
	DECLARE_FUNCTION(execFilterByItemType); \
	DECLARE_FUNCTION(execIsValidItemSlotTag); \
	DECLARE_FUNCTION(execIsValidItemTypeTag); \
	DECLARE_FUNCTION(execGetItemSlotTagRoot); \
	DECLARE_FUNCTION(execGetItemTypeTagRoot); \
	DECLARE_FUNCTION(execGetDefaultCurrencyName); \
	DECLARE_FUNCTION(execGetDefaultWorldItemClass); \
	DECLARE_FUNCTION(execGetShootTransform); \
	DECLARE_FUNCTION(execGetConsumableStatModifier); \
	DECLARE_FUNCTION(execGetConsumableTimedAttributeSetModifier); \
	DECLARE_FUNCTION(execGetEquippableAttributeRequirements); \
	DECLARE_FUNCTION(execGetEquippableAttributeSetModifier); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execSpawnCurrencyItemNearLocation); \
	DECLARE_FUNCTION(execSpawnWorldItemNearLocation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFItemSystemFunctionLibrary(); \
	friend struct Z_Construct_UClass_UACFItemSystemFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UACFItemSystemFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UACFItemSystemFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFItemSystemFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFItemSystemFunctionLibrary(UACFItemSystemFunctionLibrary&&); \
	NO_API UACFItemSystemFunctionLibrary(const UACFItemSystemFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFItemSystemFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFItemSystemFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFItemSystemFunctionLibrary) \
	NO_API virtual ~UACFItemSystemFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UACFItemSystemFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_InventorySystem_Public_ACFItemSystemFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARSGenerationRulesDataAsset;
struct FAttribute;
struct FGameplayTag;
struct FGenerationRule;
struct FStatistic;
#ifdef ADVANCEDRPGSYSTEM_ARSFunctionLibrary_generated_h
#error "ARSFunctionLibrary.generated.h already included, missing '#pragma once' in ARSFunctionLibrary.h"
#endif
#define ADVANCEDRPGSYSTEM_ARSFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNewCurrentValueForNewMaxValue); \
	DECLARE_FUNCTION(execGetMaxLevel); \
	DECLARE_FUNCTION(execIsValidParameterTag); \
	DECLARE_FUNCTION(execIsValidAttributeTag); \
	DECLARE_FUNCTION(execIsValidStatisticTag); \
	DECLARE_FUNCTION(execTryGetStatisticFromArray); \
	DECLARE_FUNCTION(execTryGetAttributeFromArray); \
	DECLARE_FUNCTION(execGetHealthTag); \
	DECLARE_FUNCTION(execGetStatisticsTagRoot); \
	DECLARE_FUNCTION(execGetParametersTagRoot); \
	DECLARE_FUNCTION(execGetAttributesTagRoot); \
	DECLARE_FUNCTION(execGetGenerationRulesData); \
	DECLARE_FUNCTION(execTryGetGenerationRuleByPrimaryAttributeType);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSFunctionLibrary(); \
	friend struct Z_Construct_UClass_UARSFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UARSFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedRPGSystem"), NO_API) \
	DECLARE_SERIALIZER(UARSFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSFunctionLibrary(UARSFunctionLibrary&&); \
	NO_API UARSFunctionLibrary(const UARSFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSFunctionLibrary) \
	NO_API virtual ~UARSFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDRPGSYSTEM_API UClass* StaticClass<class UARSFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AdvancedRPGSystem_Public_ARSFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

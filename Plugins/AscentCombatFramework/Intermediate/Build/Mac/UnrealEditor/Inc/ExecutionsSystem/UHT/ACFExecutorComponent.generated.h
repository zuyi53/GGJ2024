// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFExecutorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef EXECUTIONSSYSTEM_ACFExecutorComponent_generated_h
#error "ACFExecutorComponent.generated.h already included, missing '#pragma once' in ACFExecutorComponent.h"
#endif
#define EXECUTIONSSYSTEM_ACFExecutorComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExecution_Statics; \
	EXECUTIONSSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXECUTIONSSYSTEM_API UScriptStruct* StaticStruct<struct FExecution>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExecutionArray_Statics; \
	EXECUTIONSSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXECUTIONSSYSTEM_API UScriptStruct* StaticStruct<struct FExecutionArray>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExecutions_Statics; \
	EXECUTIONSSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXECUTIONSSYSTEM_API UScriptStruct* StaticStruct<struct FExecutions>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryExecuteCurrentTarget); \
	DECLARE_FUNCTION(execTryExecuteCharacter);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFExecutorComponent(); \
	friend struct Z_Construct_UClass_UACFExecutorComponent_Statics; \
public: \
	DECLARE_CLASS(UACFExecutorComponent, UCASAnimMasterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExecutionsSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFExecutorComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentBestExec=NETFIELD_REP_START, \
		NETFIELD_REP_END=currentBestExec	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFExecutorComponent(UACFExecutorComponent&&); \
	NO_API UACFExecutorComponent(const UACFExecutorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFExecutorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFExecutorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFExecutorComponent) \
	NO_API virtual ~UACFExecutorComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_68_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXECUTIONSSYSTEM_API UClass* StaticClass<class UACFExecutorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ExecutionsSystem_Public_ACFExecutorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

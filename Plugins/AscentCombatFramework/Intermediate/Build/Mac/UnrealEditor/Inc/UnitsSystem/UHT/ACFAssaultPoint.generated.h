// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACFAssaultPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConqueredState : uint8;
#ifdef UNITSSYSTEM_ACFAssaultPoint_generated_h
#error "ACFAssaultPoint.generated.h already included, missing '#pragma once' in ACFAssaultPoint.h"
#endif
#define UNITSSYSTEM_ACFAssaultPoint_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_15_DELEGATE \
UNITSSYSTEM_API void FOnConquerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConquerStateChanged, EConqueredState const& newState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InterruptConquering_Implementation(); \
	virtual void CompleteConquering_Implementation(); \
	virtual void StartConquering_Implementation(); \
	virtual void SetConqueringState_Implementation(EConqueredState newState); \
 \
	DECLARE_FUNCTION(execOnRep_ConqueringState); \
	DECLARE_FUNCTION(execOnConquestInterrupted); \
	DECLARE_FUNCTION(execOnConquestCompleted); \
	DECLARE_FUNCTION(execOnConquestStarted); \
	DECLARE_FUNCTION(execCanStartConquering); \
	DECLARE_FUNCTION(execGetConqueringState); \
	DECLARE_FUNCTION(execInterruptConquering); \
	DECLARE_FUNCTION(execCompleteConquering); \
	DECLARE_FUNCTION(execStartConquering); \
	DECLARE_FUNCTION(execSetConqueringState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFAssaultPoint(); \
	friend struct Z_Construct_UClass_AACFAssaultPoint_Statics; \
public: \
	DECLARE_CLASS(AACFAssaultPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitsSystem"), NO_API) \
	DECLARE_SERIALIZER(AACFAssaultPoint) \
	virtual UObject* _getUObject() const override { return const_cast<AACFAssaultPoint*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		conqueringState=NETFIELD_REP_START, \
		NETFIELD_REP_END=conqueringState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACFAssaultPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFAssaultPoint(AACFAssaultPoint&&); \
	NO_API AACFAssaultPoint(const AACFAssaultPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFAssaultPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFAssaultPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACFAssaultPoint) \
	NO_API virtual ~AACFAssaultPoint();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_17_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITSSYSTEM_API UClass* StaticClass<class AACFAssaultPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_UnitsSystem_Public_ACFAssaultPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

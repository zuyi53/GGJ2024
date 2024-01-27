// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ACFPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
enum class ETeam : uint8;
#ifdef ASCENTCOMBATFRAMEWORK_ACFPlayerController_generated_h
#error "ACFPlayerController.generated.h already included, missing '#pragma once' in ACFPlayerController.h"
#endif
#define ASCENTCOMBATFRAMEWORK_ACFPlayerController_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_12_DELEGATE \
ASCENTCOMBATFRAMEWORK_API void FOnPossessedCharacterChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPossessedCharacterChanged, const AACFCharacter* character);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetCombatTeam_Validate(ETeam const& ); \
	virtual void SetCombatTeam_Implementation(ETeam const& newTeam); \
	virtual float GetYSensitivity_Implementation() const; \
	virtual float GetXSensitivity_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnRep_PossessedEntity); \
	DECLARE_FUNCTION(execSetCombatTeam); \
	DECLARE_FUNCTION(execGetYSensitivity); \
	DECLARE_FUNCTION(execGetXSensitivity); \
	DECLARE_FUNCTION(execGetCombatTeam); \
	DECLARE_FUNCTION(execGetSecondsFromLastCameraInput); \
	DECLARE_FUNCTION(execGetCameraInput); \
	DECLARE_FUNCTION(execGetPossessedACFCharacter);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFPlayerController(); \
	friend struct Z_Construct_UClass_AACFPlayerController_Statics; \
public: \
	DECLARE_CLASS(AACFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AscentCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(AACFPlayerController) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PossessedCharacter=NETFIELD_REP_START, \
		NETFIELD_REP_END=PossessedCharacter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFPlayerController(AACFPlayerController&&); \
	NO_API AACFPlayerController(const AACFPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFPlayerController) \
	NO_API virtual ~AACFPlayerController();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<class AACFPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

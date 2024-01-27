// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ACFFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacter;
class AACFGameMode;
class AACFGameState;
class AACFHUD;
class AACFPlayerController;
class AActor;
class ACharacter;
class APawn;
class UACFTeamManagerComponent;
class UARSStatisticsComponent;
class UObject;
enum class EACFDirection : uint8;
enum class EBattleType : uint8;
enum class ETeam : uint8;
enum class ETeam : uint8; struct FTeamInfo;
struct FACFDamageEvent;
struct FActionChances;
struct FActionEffect;
struct FAttributesSet;
struct FGameplayTag;
struct FHitResult;
struct FImpactEffect;
struct FStartingItem;
#ifdef ASCENTCOMBATFRAMEWORK_ACFFunctionLibrary_generated_h
#error "ACFFunctionLibrary.generated.h already included, missing '#pragma once' in ACFFunctionLibrary.h"
#endif
#define ASCENTCOMBATFRAMEWORK_ACFFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCharacterStartingItems); \
	DECLARE_FUNCTION(execGetCharacterDefaults); \
	DECLARE_FUNCTION(execGetCharacterStatisticComp); \
	DECLARE_FUNCTION(execGetCharacterAttributes); \
	DECLARE_FUNCTION(execShouldExecuteAction); \
	DECLARE_FUNCTION(execGetACFTeamManager); \
	DECLARE_FUNCTION(execGetLocalACFPlayerCharacter); \
	DECLARE_FUNCTION(execGetACFGameState); \
	DECLARE_FUNCTION(execGetACFGameMode); \
	DECLARE_FUNCTION(execGetLocalACFPlayerController); \
	DECLARE_FUNCTION(execGetACFHUD); \
	DECLARE_FUNCTION(execCalculateAngleBetweenVectors); \
	DECLARE_FUNCTION(execGetCharacterDistantToPointConsideringExtent); \
	DECLARE_FUNCTION(execGetCharacterExtent); \
	DECLARE_FUNCTION(execCalculateDistanceBetweenCharactersExtents); \
	DECLARE_FUNCTION(execGetPointAtDirectionAndDistanceFromActor); \
	DECLARE_FUNCTION(execCalculateDistanceBetweenActors); \
	DECLARE_FUNCTION(execTryGetTeamsConfig); \
	DECLARE_FUNCTION(execAreEnemyTeams); \
	DECLARE_FUNCTION(execGetBattleType); \
	DECLARE_FUNCTION(execPlayFootstepEffect); \
	DECLARE_FUNCTION(execPlayActionEffectLocally); \
	DECLARE_FUNCTION(execPlayActionEffect); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execReduceDamageByPercentage); \
	DECLARE_FUNCTION(execGetHealthTag); \
	DECLARE_FUNCTION(execGetDefaultHitState); \
	DECLARE_FUNCTION(execGetDefaultDeathState); \
	DECLARE_FUNCTION(execGetActorsOppositeRelativeDirection); \
	DECLARE_FUNCTION(execGetDirectionFromInput); \
	DECLARE_FUNCTION(execGetActorsRelativeDirection); \
	DECLARE_FUNCTION(execGetActorsRelativeDirectionVector); \
	DECLARE_FUNCTION(execGetHitDirectionByHitResult);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFFunctionLibrary(); \
	friend struct Z_Construct_UClass_UACFFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UACFFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AscentCombatFramework"), NO_API) \
	DECLARE_SERIALIZER(UACFFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFFunctionLibrary(UACFFunctionLibrary&&); \
	NO_API UACFFunctionLibrary(const UACFFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFFunctionLibrary) \
	NO_API virtual ~UACFFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<class UACFFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Game/ACFFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "ACFCoreTypes.h"
#include "AdvancedRPGSystem/Public/ARSTypes.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "CollisionsManager/Public/ACMTypes.h"
#include "Components/ACFEquipmentComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFFunctionLibrary() {}
// Cross Module References
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	ADVANCEDRPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesSet();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFGameMode_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFGameState_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFHUD_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFPlayerController_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFFunctionLibrary();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFFunctionLibrary_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActionChances();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FImpactEffect();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFTeamManagerComponent_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EBattleType();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FActionEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStartingItem();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetCharacterStartingItems)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_characterClass);
		P_GET_TARRAY_REF(FStartingItem,Z_Param_Out_outItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFFunctionLibrary::GetCharacterStartingItems(Z_Param_Out_characterClass,Z_Param_Out_outItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetCharacterDefaults)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_characterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=UACFFunctionLibrary::GetCharacterDefaults(Z_Param_Out_characterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetCharacterStatisticComp)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_characterClass);
		P_GET_UBOOL(Z_Param_bInitialize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSStatisticsComponent**)Z_Param__Result=UACFFunctionLibrary::GetCharacterStatisticComp(Z_Param_Out_characterClass,Z_Param_bInitialize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetCharacterAttributes)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AACFCharacter> ,Z_Param_Out_characterClass);
		P_GET_STRUCT_REF(FAttributesSet,Z_Param_Out_outData);
		P_GET_UBOOL(Z_Param_bInitialize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFFunctionLibrary::GetCharacterAttributes(Z_Param_Out_characterClass,Z_Param_Out_outData,Z_Param_bInitialize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execShouldExecuteAction)
	{
		P_GET_STRUCT_REF(FActionChances,Z_Param_Out_action);
		P_GET_OBJECT(AACFCharacter,Z_Param_characterOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFFunctionLibrary::ShouldExecuteAction(Z_Param_Out_action,Z_Param_characterOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetACFTeamManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFTeamManagerComponent**)Z_Param__Result=UACFFunctionLibrary::GetACFTeamManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetLocalACFPlayerCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=UACFFunctionLibrary::GetLocalACFPlayerCharacter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetACFGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFGameState**)Z_Param__Result=UACFFunctionLibrary::GetACFGameState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetACFGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFGameMode**)Z_Param__Result=UACFFunctionLibrary::GetACFGameMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetLocalACFPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFPlayerController**)Z_Param__Result=UACFFunctionLibrary::GetLocalACFPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetACFHUD)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFHUD**)Z_Param__Result=UACFFunctionLibrary::GetACFHUD(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execCalculateAngleBetweenVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vectorA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vectorB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UACFFunctionLibrary::CalculateAngleBetweenVectors(Z_Param_Out_vectorA,Z_Param_Out_vectorB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetCharacterDistantToPointConsideringExtent)
	{
		P_GET_OBJECT(ACharacter,Z_Param_characterA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UACFFunctionLibrary::GetCharacterDistantToPointConsideringExtent(Z_Param_characterA,Z_Param_Out_point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetCharacterExtent)
	{
		P_GET_OBJECT(ACharacter,Z_Param_characterA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UACFFunctionLibrary::GetCharacterExtent(Z_Param_characterA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execCalculateDistanceBetweenCharactersExtents)
	{
		P_GET_OBJECT(ACharacter,Z_Param_characterA);
		P_GET_OBJECT(ACharacter,Z_Param_characterB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UACFFunctionLibrary::CalculateDistanceBetweenCharactersExtents(Z_Param_characterA,Z_Param_characterB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetPointAtDirectionAndDistanceFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_GET_UBOOL(Z_Param_bShowDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UACFFunctionLibrary::GetPointAtDirectionAndDistanceFromActor(Z_Param_targetActor,Z_Param_Out_direction,Z_Param_distance,Z_Param_bShowDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execCalculateDistanceBetweenActors)
	{
		P_GET_OBJECT(AActor,Z_Param_characterA);
		P_GET_OBJECT(AActor,Z_Param_characterB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UACFFunctionLibrary::CalculateDistanceBetweenActors(Z_Param_characterA,Z_Param_characterB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execTryGetTeamsConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP_REF(ETeam,FTeamInfo,Z_Param_Out_outConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFFunctionLibrary::TryGetTeamsConfig(Z_Param_WorldContextObject,Z_Param_Out_outConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execAreEnemyTeams)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ETeam,Z_Param_teamA);
		P_GET_ENUM(ETeam,Z_Param_teamB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UACFFunctionLibrary::AreEnemyTeams(Z_Param_WorldContextObject,ETeam(Z_Param_teamA),ETeam(Z_Param_teamB));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetBattleType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBattleType*)Z_Param__Result=UACFFunctionLibrary::GetBattleType(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execPlayFootstepEffect)
	{
		P_GET_OBJECT(APawn,Z_Param_instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_footBone);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACFFunctionLibrary::PlayFootstepEffect(Z_Param_instigator,Z_Param_footBone,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execPlayActionEffectLocally)
	{
		P_GET_STRUCT_REF(FActionEffect,Z_Param_Out_effect);
		P_GET_OBJECT(ACharacter,Z_Param_instigator);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACFFunctionLibrary::PlayActionEffectLocally(Z_Param_Out_effect,Z_Param_instigator,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execPlayActionEffect)
	{
		P_GET_STRUCT_REF(FActionEffect,Z_Param_Out_effect);
		P_GET_OBJECT(ACharacter,Z_Param_instigator);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACFFunctionLibrary::PlayActionEffect(Z_Param_Out_effect,Z_Param_instigator,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execPlayImpactEffect)
	{
		P_GET_STRUCT_REF(FImpactEffect,Z_Param_Out_effect);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_impactLocation);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UACFFunctionLibrary::PlayImpactEffect(Z_Param_Out_effect,Z_Param_Out_impactLocation,Z_Param_instigator,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execReduceDamageByPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UACFFunctionLibrary::ReduceDamageByPercentage(Z_Param_Damage,Z_Param_Percentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetHealthTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFFunctionLibrary::GetHealthTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetDefaultHitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFFunctionLibrary::GetDefaultHitState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetDefaultDeathState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UACFFunctionLibrary::GetDefaultDeathState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetActorsOppositeRelativeDirection)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UACFFunctionLibrary::GetActorsOppositeRelativeDirection(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetDirectionFromInput)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=UACFFunctionLibrary::GetDirectionFromInput(Z_Param_actor,Z_Param_Out_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetActorsRelativeDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_hitDealer);
		P_GET_OBJECT(AActor,Z_Param_receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=UACFFunctionLibrary::GetActorsRelativeDirection(Z_Param_hitDealer,Z_Param_receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetActorsRelativeDirectionVector)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UACFFunctionLibrary::GetActorsRelativeDirectionVector(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFFunctionLibrary::execGetHitDirectionByHitResult)
	{
		P_GET_OBJECT(AActor,Z_Param_hitDealer);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=UACFFunctionLibrary::GetHitDirectionByHitResult(Z_Param_hitDealer,Z_Param_Out_hitResult);
		P_NATIVE_END;
	}
	void UACFFunctionLibrary::StaticRegisterNativesUACFFunctionLibrary()
	{
		UClass* Class = UACFFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreEnemyTeams", &UACFFunctionLibrary::execAreEnemyTeams },
			{ "CalculateAngleBetweenVectors", &UACFFunctionLibrary::execCalculateAngleBetweenVectors },
			{ "CalculateDistanceBetweenActors", &UACFFunctionLibrary::execCalculateDistanceBetweenActors },
			{ "CalculateDistanceBetweenCharactersExtents", &UACFFunctionLibrary::execCalculateDistanceBetweenCharactersExtents },
			{ "GetACFGameMode", &UACFFunctionLibrary::execGetACFGameMode },
			{ "GetACFGameState", &UACFFunctionLibrary::execGetACFGameState },
			{ "GetACFHUD", &UACFFunctionLibrary::execGetACFHUD },
			{ "GetACFTeamManager", &UACFFunctionLibrary::execGetACFTeamManager },
			{ "GetActorsOppositeRelativeDirection", &UACFFunctionLibrary::execGetActorsOppositeRelativeDirection },
			{ "GetActorsRelativeDirection", &UACFFunctionLibrary::execGetActorsRelativeDirection },
			{ "GetActorsRelativeDirectionVector", &UACFFunctionLibrary::execGetActorsRelativeDirectionVector },
			{ "GetBattleType", &UACFFunctionLibrary::execGetBattleType },
			{ "GetCharacterAttributes", &UACFFunctionLibrary::execGetCharacterAttributes },
			{ "GetCharacterDefaults", &UACFFunctionLibrary::execGetCharacterDefaults },
			{ "GetCharacterDistantToPointConsideringExtent", &UACFFunctionLibrary::execGetCharacterDistantToPointConsideringExtent },
			{ "GetCharacterExtent", &UACFFunctionLibrary::execGetCharacterExtent },
			{ "GetCharacterStartingItems", &UACFFunctionLibrary::execGetCharacterStartingItems },
			{ "GetCharacterStatisticComp", &UACFFunctionLibrary::execGetCharacterStatisticComp },
			{ "GetDefaultDeathState", &UACFFunctionLibrary::execGetDefaultDeathState },
			{ "GetDefaultHitState", &UACFFunctionLibrary::execGetDefaultHitState },
			{ "GetDirectionFromInput", &UACFFunctionLibrary::execGetDirectionFromInput },
			{ "GetHealthTag", &UACFFunctionLibrary::execGetHealthTag },
			{ "GetHitDirectionByHitResult", &UACFFunctionLibrary::execGetHitDirectionByHitResult },
			{ "GetLocalACFPlayerCharacter", &UACFFunctionLibrary::execGetLocalACFPlayerCharacter },
			{ "GetLocalACFPlayerController", &UACFFunctionLibrary::execGetLocalACFPlayerController },
			{ "GetPointAtDirectionAndDistanceFromActor", &UACFFunctionLibrary::execGetPointAtDirectionAndDistanceFromActor },
			{ "PlayActionEffect", &UACFFunctionLibrary::execPlayActionEffect },
			{ "PlayActionEffectLocally", &UACFFunctionLibrary::execPlayActionEffectLocally },
			{ "PlayFootstepEffect", &UACFFunctionLibrary::execPlayFootstepEffect },
			{ "PlayImpactEffect", &UACFFunctionLibrary::execPlayImpactEffect },
			{ "ReduceDamageByPercentage", &UACFFunctionLibrary::execReduceDamageByPercentage },
			{ "ShouldExecuteAction", &UACFFunctionLibrary::execShouldExecuteAction },
			{ "TryGetTeamsConfig", &UACFFunctionLibrary::execTryGetTeamsConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics
	{
		struct ACFFunctionLibrary_eventAreEnemyTeams_Parms
		{
			const UObject* WorldContextObject;
			ETeam teamA;
			ETeam teamB;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_teamA_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_teamA;
		static const UECodeGen_Private::FBytePropertyParams NewProp_teamB_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_teamB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventAreEnemyTeams_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamA = { "teamA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventAreEnemyTeams_Parms, teamA), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamB = { "teamB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventAreEnemyTeams_Parms, teamB), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	void Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventAreEnemyTeams_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventAreEnemyTeams_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamA_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamB_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_teamB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "AreEnemyTeams", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::ACFFunctionLibrary_eventAreEnemyTeams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::ACFFunctionLibrary_eventAreEnemyTeams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics
	{
		struct ACFFunctionLibrary_eventCalculateAngleBetweenVectors_Parms
		{
			FVector vectorA;
			FVector vectorB;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vectorA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vectorB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorA = { "vectorA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateAngleBetweenVectors_Parms, vectorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorA_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorB = { "vectorB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateAngleBetweenVectors_Parms, vectorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorB_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorB_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_vectorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "CalculateAngleBetweenVectors", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::ACFFunctionLibrary_eventCalculateAngleBetweenVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::ACFFunctionLibrary_eventCalculateAngleBetweenVectors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics
	{
		struct ACFFunctionLibrary_eventCalculateDistanceBetweenActors_Parms
		{
			const AActor* characterA;
			const AActor* characterB;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterA = { "characterA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateDistanceBetweenActors_Parms, characterA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterA_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterB = { "characterB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateDistanceBetweenActors_Parms, characterB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterB_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterB_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateDistanceBetweenActors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_characterB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "CalculateDistanceBetweenActors", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::ACFFunctionLibrary_eventCalculateDistanceBetweenActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::ACFFunctionLibrary_eventCalculateDistanceBetweenActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics
	{
		struct ACFFunctionLibrary_eventCalculateDistanceBetweenCharactersExtents_Parms
		{
			const ACharacter* characterA;
			const ACharacter* characterB;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterA = { "characterA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateDistanceBetweenCharactersExtents_Parms, characterA), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterA_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterB = { "characterB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateDistanceBetweenCharactersExtents_Parms, characterB), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterB_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterB_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventCalculateDistanceBetweenCharactersExtents_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_characterB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "CalculateDistanceBetweenCharactersExtents", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::ACFFunctionLibrary_eventCalculateDistanceBetweenCharactersExtents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::ACFFunctionLibrary_eventCalculateDistanceBetweenCharactersExtents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics
	{
		struct ACFFunctionLibrary_eventGetACFGameMode_Parms
		{
			const UObject* WorldContextObject;
			AACFGameMode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFGameMode_Parms, ReturnValue), Z_Construct_UClass_AACFGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "Comment", "/*Works on server only*/" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "ToolTip", "Works on server only" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetACFGameMode", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::ACFFunctionLibrary_eventGetACFGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::ACFFunctionLibrary_eventGetACFGameMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics
	{
		struct ACFFunctionLibrary_eventGetACFGameState_Parms
		{
			const UObject* WorldContextObject;
			AACFGameState* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFGameState_Parms, ReturnValue), Z_Construct_UClass_AACFGameState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetACFGameState", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::ACFFunctionLibrary_eventGetACFGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::ACFFunctionLibrary_eventGetACFGameState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics
	{
		struct ACFFunctionLibrary_eventGetACFHUD_Parms
		{
			const UObject* WorldContextObject;
			AACFHUD* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFHUD_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFHUD_Parms, ReturnValue), Z_Construct_UClass_AACFHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetACFHUD", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::ACFFunctionLibrary_eventGetACFHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::ACFFunctionLibrary_eventGetACFHUD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics
	{
		struct ACFFunctionLibrary_eventGetACFTeamManager_Parms
		{
			const UObject* WorldContextObject;
			UACFTeamManagerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFTeamManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetACFTeamManager_Parms, ReturnValue), Z_Construct_UClass_UACFTeamManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetACFTeamManager", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::ACFFunctionLibrary_eventGetACFTeamManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::ACFFunctionLibrary_eventGetACFTeamManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics
	{
		struct ACFFunctionLibrary_eventGetActorsOppositeRelativeDirection_Parms
		{
			FACFDamageEvent damageEvent;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsOppositeRelativeDirection_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsOppositeRelativeDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_damageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetActorsOppositeRelativeDirection", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::ACFFunctionLibrary_eventGetActorsOppositeRelativeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::ACFFunctionLibrary_eventGetActorsOppositeRelativeDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics
	{
		struct ACFFunctionLibrary_eventGetActorsRelativeDirection_Parms
		{
			const AActor* hitDealer;
			const AActor* receiver;
			EACFDirection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitDealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitDealer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receiver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_receiver;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_hitDealer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_hitDealer = { "hitDealer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsRelativeDirection_Parms, hitDealer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_hitDealer_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_hitDealer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_receiver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_receiver = { "receiver", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsRelativeDirection_Parms, receiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_receiver_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_receiver_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsRelativeDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_hitDealer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetActorsRelativeDirection", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::ACFFunctionLibrary_eventGetActorsRelativeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::ACFFunctionLibrary_eventGetActorsRelativeDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics
	{
		struct ACFFunctionLibrary_eventGetActorsRelativeDirectionVector_Parms
		{
			FACFDamageEvent damageEvent;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsRelativeDirectionVector_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetActorsRelativeDirectionVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_damageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetActorsRelativeDirectionVector", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::ACFFunctionLibrary_eventGetActorsRelativeDirectionVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::ACFFunctionLibrary_eventGetActorsRelativeDirectionVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics
	{
		struct ACFFunctionLibrary_eventGetBattleType_Parms
		{
			const UObject* WorldContextObject;
			EBattleType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetBattleType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetBattleType_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EBattleType, METADATA_PARAMS(0, nullptr) }; // 2151822261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetBattleType", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::ACFFunctionLibrary_eventGetBattleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::ACFFunctionLibrary_eventGetBattleType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics
	{
		struct ACFFunctionLibrary_eventGetCharacterAttributes_Parms
		{
			const TSubclassOf<AACFCharacter>  characterClass;
			FAttributesSet outData;
			bool bInitialize;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_characterClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outData;
		static void NewProp_bInitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_characterClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterAttributes_Parms, characterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_characterClass_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_characterClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterAttributes_Parms, outData), Z_Construct_UScriptStruct_FAttributesSet, METADATA_PARAMS(0, nullptr) }; // 98634780
	void Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_bInitialize_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventGetCharacterAttributes_Parms*)Obj)->bInitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_bInitialize = { "bInitialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventGetCharacterAttributes_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_bInitialize_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventGetCharacterAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventGetCharacterAttributes_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_characterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_outData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_bInitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bInitialize", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetCharacterAttributes", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::ACFFunctionLibrary_eventGetCharacterAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::ACFFunctionLibrary_eventGetCharacterAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics
	{
		struct ACFFunctionLibrary_eventGetCharacterDefaults_Parms
		{
			const TSubclassOf<AACFCharacter>  characterClass;
			AACFCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_characterClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_characterClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterDefaults_Parms, characterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_characterClass_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_characterClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterDefaults_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_characterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetCharacterDefaults", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::ACFFunctionLibrary_eventGetCharacterDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::ACFFunctionLibrary_eventGetCharacterDefaults_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics
	{
		struct ACFFunctionLibrary_eventGetCharacterDistantToPointConsideringExtent_Parms
		{
			const ACharacter* characterA;
			FVector point;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_point;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_characterA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_characterA = { "characterA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterDistantToPointConsideringExtent_Parms, characterA), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_characterA_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_characterA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterDistantToPointConsideringExtent_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_point_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_point_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterDistantToPointConsideringExtent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_characterA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetCharacterDistantToPointConsideringExtent", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::ACFFunctionLibrary_eventGetCharacterDistantToPointConsideringExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::ACFFunctionLibrary_eventGetCharacterDistantToPointConsideringExtent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics
	{
		struct ACFFunctionLibrary_eventGetCharacterExtent_Parms
		{
			const ACharacter* characterA;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterA;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_characterA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_characterA = { "characterA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterExtent_Parms, characterA), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_characterA_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_characterA_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterExtent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_characterA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetCharacterExtent", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::ACFFunctionLibrary_eventGetCharacterExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::ACFFunctionLibrary_eventGetCharacterExtent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics
	{
		struct ACFFunctionLibrary_eventGetCharacterStartingItems_Parms
		{
			const TSubclassOf<AACFCharacter>  characterClass;
			TArray<FStartingItem> outItems;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_characterClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outItems_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outItems;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_characterClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterStartingItems_Parms, characterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_characterClass_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_characterClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_outItems_Inner = { "outItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStartingItem, METADATA_PARAMS(0, nullptr) }; // 176283290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_outItems = { "outItems", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterStartingItems_Parms, outItems), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 176283290
	void Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventGetCharacterStartingItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventGetCharacterStartingItems_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_characterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_outItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_outItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetCharacterStartingItems", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::ACFFunctionLibrary_eventGetCharacterStartingItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::ACFFunctionLibrary_eventGetCharacterStartingItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics
	{
		struct ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms
		{
			const TSubclassOf<AACFCharacter>  characterClass;
			bool bInitialize;
			UARSStatisticsComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_characterClass;
		static void NewProp_bInitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_characterClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms, characterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_characterClass_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_characterClass_MetaData) };
	void Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_bInitialize_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms*)Obj)->bInitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_bInitialize = { "bInitialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_bInitialize_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms, ReturnValue), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_characterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_bInitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bInitialize", "true" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetCharacterStatisticComp", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::ACFFunctionLibrary_eventGetCharacterStatisticComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics
	{
		struct ACFFunctionLibrary_eventGetDefaultDeathState_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetDefaultDeathState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetDefaultDeathState", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::ACFFunctionLibrary_eventGetDefaultDeathState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::ACFFunctionLibrary_eventGetDefaultDeathState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics
	{
		struct ACFFunctionLibrary_eventGetDefaultHitState_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetDefaultHitState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetDefaultHitState", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::ACFFunctionLibrary_eventGetDefaultHitState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::ACFFunctionLibrary_eventGetDefaultHitState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics
	{
		struct ACFFunctionLibrary_eventGetDirectionFromInput_Parms
		{
			const AActor* actor;
			FVector direction;
			EACFDirection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetDirectionFromInput_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_actor_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetDirectionFromInput_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetDirectionFromInput_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetDirectionFromInput", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::ACFFunctionLibrary_eventGetDirectionFromInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::ACFFunctionLibrary_eventGetDirectionFromInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics
	{
		struct ACFFunctionLibrary_eventGetHealthTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetHealthTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetHealthTag", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::ACFFunctionLibrary_eventGetHealthTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::ACFFunctionLibrary_eventGetHealthTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics
	{
		struct ACFFunctionLibrary_eventGetHitDirectionByHitResult_Parms
		{
			const AActor* hitDealer;
			FHitResult hitResult;
			EACFDirection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitDealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitDealer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitDealer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitDealer = { "hitDealer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetHitDirectionByHitResult_Parms, hitDealer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitDealer_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitDealer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetHitDirectionByHitResult_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitResult_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetHitDirectionByHitResult_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitDealer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_hitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetHitDirectionByHitResult", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::ACFFunctionLibrary_eventGetHitDirectionByHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::ACFFunctionLibrary_eventGetHitDirectionByHitResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics
	{
		struct ACFFunctionLibrary_eventGetLocalACFPlayerCharacter_Parms
		{
			const UObject* WorldContextObject;
			AACFCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetLocalACFPlayerCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetLocalACFPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetLocalACFPlayerCharacter", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::ACFFunctionLibrary_eventGetLocalACFPlayerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::ACFFunctionLibrary_eventGetLocalACFPlayerCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics
	{
		struct ACFFunctionLibrary_eventGetLocalACFPlayerController_Parms
		{
			const UObject* WorldContextObject;
			AACFPlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetLocalACFPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetLocalACFPlayerController_Parms, ReturnValue), Z_Construct_UClass_AACFPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetLocalACFPlayerController", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::ACFFunctionLibrary_eventGetLocalACFPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::ACFFunctionLibrary_eventGetLocalACFPlayerController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics
	{
		struct ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms
		{
			const AActor* targetActor;
			FVector direction;
			float distance;
			bool bShowDebug;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_targetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_targetActor_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_targetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms, distance), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_bShowDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "CPP_Default_bShowDebug", "false" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "GetPointAtDirectionAndDistanceFromActor", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::ACFFunctionLibrary_eventGetPointAtDirectionAndDistanceFromActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics
	{
		struct ACFFunctionLibrary_eventPlayActionEffect_Parms
		{
			FActionEffect effect;
			ACharacter* instigator;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayActionEffect_Parms, effect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_effect_MetaData) }; // 2181620844
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayActionEffect_Parms, instigator), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayActionEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "PlayActionEffect", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::ACFFunctionLibrary_eventPlayActionEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::ACFFunctionLibrary_eventPlayActionEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics
	{
		struct ACFFunctionLibrary_eventPlayActionEffectLocally_Parms
		{
			FActionEffect effect;
			ACharacter* instigator;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayActionEffectLocally_Parms, effect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_effect_MetaData) }; // 2181620844
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayActionEffectLocally_Parms, instigator), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayActionEffectLocally_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "PlayActionEffectLocally", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::ACFFunctionLibrary_eventPlayActionEffectLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::ACFFunctionLibrary_eventPlayActionEffectLocally_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics
	{
		struct ACFFunctionLibrary_eventPlayFootstepEffect_Parms
		{
			APawn* instigator;
			FName footBone;
			const UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_footBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayFootstepEffect_Parms, instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_footBone = { "footBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayFootstepEffect_Parms, footBone), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayFootstepEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_footBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "PlayFootstepEffect", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::ACFFunctionLibrary_eventPlayFootstepEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::ACFFunctionLibrary_eventPlayFootstepEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics
	{
		struct ACFFunctionLibrary_eventPlayImpactEffect_Parms
		{
			FImpactEffect effect;
			FVector impactLocation;
			AActor* instigator;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impactLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_impactLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayImpactEffect_Parms, effect), Z_Construct_UScriptStruct_FImpactEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_effect_MetaData) }; // 1658141562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation = { "impactLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayImpactEffect_Parms, impactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayImpactEffect_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventPlayImpactEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_impactLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "PlayImpactEffect", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::ACFFunctionLibrary_eventPlayImpactEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::ACFFunctionLibrary_eventPlayImpactEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics
	{
		struct ACFFunctionLibrary_eventReduceDamageByPercentage_Parms
		{
			float Damage;
			float Percentage;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventReduceDamageByPercentage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventReduceDamageByPercentage_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventReduceDamageByPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::NewProp_Percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "ReduceDamageByPercentage", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::ACFFunctionLibrary_eventReduceDamageByPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::ACFFunctionLibrary_eventReduceDamageByPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics
	{
		struct ACFFunctionLibrary_eventShouldExecuteAction_Parms
		{
			FActionChances action;
			const AACFCharacter* characterOwner;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventShouldExecuteAction_Parms, action), Z_Construct_UScriptStruct_FActionChances, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_action_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_action_MetaData) }; // 1528728179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_characterOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_characterOwner = { "characterOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventShouldExecuteAction_Parms, characterOwner), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_characterOwner_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_characterOwner_MetaData) };
	void Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventShouldExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventShouldExecuteAction_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_characterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "ShouldExecuteAction", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::ACFFunctionLibrary_eventShouldExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::ACFFunctionLibrary_eventShouldExecuteAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics
	{
		struct ACFFunctionLibrary_eventTryGetTeamsConfig_Parms
		{
			const UObject* WorldContextObject;
			TMap<ETeam,FTeamInfo> outConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outConfig_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_outConfig_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_outConfig_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_outConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventTryGetTeamsConfig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig_ValueProp = { "outConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(0, nullptr) }; // 2227953295
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig_Key_KeyProp = { "outConfig_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig = { "outConfig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFFunctionLibrary_eventTryGetTeamsConfig_Parms, outConfig), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2489062856 2227953295
	void Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFFunctionLibrary_eventTryGetTeamsConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFFunctionLibrary_eventTryGetTeamsConfig_Parms), &Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_outConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACFLibrary" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFFunctionLibrary, nullptr, "TryGetTeamsConfig", nullptr, nullptr, Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::ACFFunctionLibrary_eventTryGetTeamsConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::ACFFunctionLibrary_eventTryGetTeamsConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFFunctionLibrary);
	UClass* Z_Construct_UClass_UACFFunctionLibrary_NoRegister()
	{
		return UACFFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UACFFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFFunctionLibrary_AreEnemyTeams, "AreEnemyTeams" }, // 3366971272
		{ &Z_Construct_UFunction_UACFFunctionLibrary_CalculateAngleBetweenVectors, "CalculateAngleBetweenVectors" }, // 2555149280
		{ &Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenActors, "CalculateDistanceBetweenActors" }, // 2342565181
		{ &Z_Construct_UFunction_UACFFunctionLibrary_CalculateDistanceBetweenCharactersExtents, "CalculateDistanceBetweenCharactersExtents" }, // 740596977
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameMode, "GetACFGameMode" }, // 1893040625
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetACFGameState, "GetACFGameState" }, // 3396102284
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetACFHUD, "GetACFHUD" }, // 4201033991
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetACFTeamManager, "GetACFTeamManager" }, // 1041343032
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetActorsOppositeRelativeDirection, "GetActorsOppositeRelativeDirection" }, // 1414852596
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirection, "GetActorsRelativeDirection" }, // 3438054747
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetActorsRelativeDirectionVector, "GetActorsRelativeDirectionVector" }, // 3092628737
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetBattleType, "GetBattleType" }, // 3680960772
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterAttributes, "GetCharacterAttributes" }, // 1341777226
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDefaults, "GetCharacterDefaults" }, // 3768016060
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterDistantToPointConsideringExtent, "GetCharacterDistantToPointConsideringExtent" }, // 3717945809
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterExtent, "GetCharacterExtent" }, // 4055607274
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStartingItems, "GetCharacterStartingItems" }, // 861010748
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetCharacterStatisticComp, "GetCharacterStatisticComp" }, // 3402303530
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultDeathState, "GetDefaultDeathState" }, // 615012708
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetDefaultHitState, "GetDefaultHitState" }, // 3599693668
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetDirectionFromInput, "GetDirectionFromInput" }, // 291614147
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetHealthTag, "GetHealthTag" }, // 318911480
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetHitDirectionByHitResult, "GetHitDirectionByHitResult" }, // 2803548263
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerCharacter, "GetLocalACFPlayerCharacter" }, // 842050047
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetLocalACFPlayerController, "GetLocalACFPlayerController" }, // 11068470
		{ &Z_Construct_UFunction_UACFFunctionLibrary_GetPointAtDirectionAndDistanceFromActor, "GetPointAtDirectionAndDistanceFromActor" }, // 3193071523
		{ &Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffect, "PlayActionEffect" }, // 2842957408
		{ &Z_Construct_UFunction_UACFFunctionLibrary_PlayActionEffectLocally, "PlayActionEffectLocally" }, // 3614108055
		{ &Z_Construct_UFunction_UACFFunctionLibrary_PlayFootstepEffect, "PlayFootstepEffect" }, // 816392980
		{ &Z_Construct_UFunction_UACFFunctionLibrary_PlayImpactEffect, "PlayImpactEffect" }, // 1384022979
		{ &Z_Construct_UFunction_UACFFunctionLibrary_ReduceDamageByPercentage, "ReduceDamageByPercentage" }, // 2356337357
		{ &Z_Construct_UFunction_UACFFunctionLibrary_ShouldExecuteAction, "ShouldExecuteAction" }, // 1514072509
		{ &Z_Construct_UFunction_UACFFunctionLibrary_TryGetTeamsConfig, "TryGetTeamsConfig" }, // 171146378
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ACFFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Game/ACFFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFFunctionLibrary_Statics::ClassParams = {
		&UACFFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACFFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UACFFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFFunctionLibrary.OuterSingleton, Z_Construct_UClass_UACFFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFFunctionLibrary.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFFunctionLibrary>()
	{
		return UACFFunctionLibrary::StaticClass();
	}
	UACFFunctionLibrary::UACFFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFFunctionLibrary);
	UACFFunctionLibrary::~UACFFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFFunctionLibrary, UACFFunctionLibrary::StaticClass, TEXT("UACFFunctionLibrary"), &Z_Registration_Info_UClass_UACFFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFFunctionLibrary), 1108690715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_2227475221(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Game_ACFFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

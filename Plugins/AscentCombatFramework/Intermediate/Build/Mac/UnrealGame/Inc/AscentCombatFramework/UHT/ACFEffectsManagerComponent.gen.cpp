// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Components/ACFEffectsManagerComponent.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "CollisionsManager/Public/ACMTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFEffectsManagerComponent() {}
// Cross Module References
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsConfigDataAsset_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsManagerComponent();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execHandleDamageReceived)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDamageReceived(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execGetNoiseToEmitByLocomotionState)
	{
		P_GET_ENUM(ELocomotionState,Z_Param_locState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoiseToEmitByLocomotionState(ELocomotionState(Z_Param_locState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execGetNoiseToEmitForCurrentLocomotionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoiseToEmitForCurrentLocomotionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execTryGetDamageFX)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_HitRection);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UDamageType> ,Z_Param_Out_DamageType);
		P_GET_STRUCT_REF(FBaseFX,Z_Param_Out_outFX);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetDamageFX(Z_Param_Out_HitRection,Z_Param_Out_DamageType,Z_Param_Out_outFX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execPlayHitReactionEffect)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitReactionEffect(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execOnDamageImpactReceived)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageImpactReceived_Implementation(Z_Param_Out_damageEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execGetCurrentTerrain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetCurrentTerrain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFEffectsManagerComponent::execTriggerFootstepFX)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_footBone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerFootstepFX(Z_Param_footBone);
		P_NATIVE_END;
	}
	struct ACFEffectsManagerComponent_eventOnDamageImpactReceived_Parms
	{
		FACFDamageEvent damageEvent;
	};
	static FName NAME_UACFEffectsManagerComponent_OnDamageImpactReceived = FName(TEXT("OnDamageImpactReceived"));
	void UACFEffectsManagerComponent::OnDamageImpactReceived(FACFDamageEvent const& damageEvent)
	{
		ACFEffectsManagerComponent_eventOnDamageImpactReceived_Parms Parms;
		Parms.damageEvent=damageEvent;
		ProcessEvent(FindFunctionChecked(NAME_UACFEffectsManagerComponent_OnDamageImpactReceived),&Parms);
	}
	void UACFEffectsManagerComponent::StaticRegisterNativesUACFEffectsManagerComponent()
	{
		UClass* Class = UACFEffectsManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentTerrain", &UACFEffectsManagerComponent::execGetCurrentTerrain },
			{ "GetNoiseToEmitByLocomotionState", &UACFEffectsManagerComponent::execGetNoiseToEmitByLocomotionState },
			{ "GetNoiseToEmitForCurrentLocomotionState", &UACFEffectsManagerComponent::execGetNoiseToEmitForCurrentLocomotionState },
			{ "HandleDamageReceived", &UACFEffectsManagerComponent::execHandleDamageReceived },
			{ "OnDamageImpactReceived", &UACFEffectsManagerComponent::execOnDamageImpactReceived },
			{ "PlayHitReactionEffect", &UACFEffectsManagerComponent::execPlayHitReactionEffect },
			{ "TriggerFootstepFX", &UACFEffectsManagerComponent::execTriggerFootstepFX },
			{ "TryGetDamageFX", &UACFEffectsManagerComponent::execTryGetDamageFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics
	{
		struct ACFEffectsManagerComponent_eventGetCurrentTerrain_Parms
		{
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventGetCurrentTerrain_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "GetCurrentTerrain", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::ACFEffectsManagerComponent_eventGetCurrentTerrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::ACFEffectsManagerComponent_eventGetCurrentTerrain_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics
	{
		struct ACFEffectsManagerComponent_eventGetNoiseToEmitByLocomotionState_Parms
		{
			ELocomotionState locState;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_locState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_locState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::NewProp_locState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::NewProp_locState = { "locState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventGetNoiseToEmitByLocomotionState_Parms, locState), Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventGetNoiseToEmitByLocomotionState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::NewProp_locState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::NewProp_locState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "GetNoiseToEmitByLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::ACFEffectsManagerComponent_eventGetNoiseToEmitByLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::ACFEffectsManagerComponent_eventGetNoiseToEmitByLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics
	{
		struct ACFEffectsManagerComponent_eventGetNoiseToEmitForCurrentLocomotionState_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventGetNoiseToEmitForCurrentLocomotionState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "GetNoiseToEmitForCurrentLocomotionState", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::ACFEffectsManagerComponent_eventGetNoiseToEmitForCurrentLocomotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::ACFEffectsManagerComponent_eventGetNoiseToEmitForCurrentLocomotionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics
	{
		struct ACFEffectsManagerComponent_eventHandleDamageReceived_Parms
		{
			FACFDamageEvent damageEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventHandleDamageReceived_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::NewProp_damageEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "HandleDamageReceived", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::ACFEffectsManagerComponent_eventHandleDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::ACFEffectsManagerComponent_eventHandleDamageReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventOnDamageImpactReceived_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::NewProp_damageEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "OnDamageImpactReceived", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::PropPointers), sizeof(ACFEffectsManagerComponent_eventOnDamageImpactReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFEffectsManagerComponent_eventOnDamageImpactReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics
	{
		struct ACFEffectsManagerComponent_eventPlayHitReactionEffect_Parms
		{
			FACFDamageEvent damageEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::NewProp_damageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::NewProp_damageEvent = { "damageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventPlayHitReactionEffect_Parms, damageEvent), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::NewProp_damageEvent_MetaData), Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::NewProp_damageEvent_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::NewProp_damageEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "PlayHitReactionEffect", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::ACFEffectsManagerComponent_eventPlayHitReactionEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::ACFEffectsManagerComponent_eventPlayHitReactionEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics
	{
		struct ACFEffectsManagerComponent_eventTriggerFootstepFX_Parms
		{
			FName footBone;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_footBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::NewProp_footBone = { "footBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventTriggerFootstepFX_Parms, footBone), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::NewProp_footBone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_footBone", "None" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "TriggerFootstepFX", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::ACFEffectsManagerComponent_eventTriggerFootstepFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::ACFEffectsManagerComponent_eventTriggerFootstepFX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics
	{
		struct ACFEffectsManagerComponent_eventTryGetDamageFX_Parms
		{
			FGameplayTag HitRection;
			const TSubclassOf<UDamageType>  DamageType;
			FBaseFX outFX;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitRection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitRection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outFX;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_HitRection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_HitRection = { "HitRection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventTryGetDamageFX_Parms, HitRection), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_HitRection_MetaData), Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_HitRection_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventTryGetDamageFX_Parms, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_DamageType_MetaData), Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_DamageType_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_outFX = { "outFX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFEffectsManagerComponent_eventTryGetDamageFX_Parms, outFX), Z_Construct_UScriptStruct_FBaseFX, METADATA_PARAMS(0, nullptr) }; // 974731263
	void Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFEffectsManagerComponent_eventTryGetDamageFX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFEffectsManagerComponent_eventTryGetDamageFX_Parms), &Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_HitRection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_outFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFEffectsManagerComponent, nullptr, "TryGetDamageFX", nullptr, nullptr, Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::ACFEffectsManagerComponent_eventTryGetDamageFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::ACFEffectsManagerComponent_eventTryGetDamageFX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFEffectsManagerComponent);
	UClass* Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister()
	{
		return UACFEffectsManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFEffectsManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterEffectsConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterEffectsConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLengthByActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLengthByActorLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepNoiseByLocomotionState_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepNoiseByLocomotionState_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepNoiseByLocomotionState_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepNoiseByLocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FootstepNoiseByLocomotionState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepNoiseByLocomotionStateWhenCrouched_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepNoiseByLocomotionStateWhenCrouched_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepNoiseByLocomotionStateWhenCrouched_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepNoiseByLocomotionStateWhenCrouched_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FootstepNoiseByLocomotionStateWhenCrouched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFEffectsManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFEffectsManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_GetCurrentTerrain, "GetCurrentTerrain" }, // 236140999
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitByLocomotionState, "GetNoiseToEmitByLocomotionState" }, // 1193301281
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_GetNoiseToEmitForCurrentLocomotionState, "GetNoiseToEmitForCurrentLocomotionState" }, // 3610250701
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_HandleDamageReceived, "HandleDamageReceived" }, // 9626054
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_OnDamageImpactReceived, "OnDamageImpactReceived" }, // 413059030
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_PlayHitReactionEffect, "PlayHitReactionEffect" }, // 1183139816
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_TriggerFootstepFX, "TriggerFootstepFX" }, // 329036698
		{ &Z_Construct_UFunction_UACFEffectsManagerComponent_TryGetDamageFX, "TryGetDamageFX" }, // 2456713513
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFEffectsManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsManagerComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterOwner_MetaData), Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterEffectsConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterEffectsConfig = { "CharacterEffectsConfig", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsManagerComponent, CharacterEffectsConfig), Z_Construct_UClass_UACFEffectsConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterEffectsConfig_MetaData), Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterEffectsConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_TraceLengthByActorLocation_MetaData[] = {
		{ "Category", "ACF| Footstep" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_TraceLengthByActorLocation = { "TraceLengthByActorLocation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsManagerComponent, TraceLengthByActorLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_TraceLengthByActorLocation_MetaData), Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_TraceLengthByActorLocation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_ValueProp = { "FootstepNoiseByLocomotionState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_Key_KeyProp = { "FootstepNoiseByLocomotionState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_MetaData[] = {
		{ "Category", "ACF| Footstep" },
		{ "Comment", "/*The noise emitted while moving by this character. This noise is used as a check\n    for AI Perceptions*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
		{ "ToolTip", "The noise emitted while moving by this character. This noise is used as a check\n    for AI Perceptions" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState = { "FootstepNoiseByLocomotionState", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsManagerComponent, FootstepNoiseByLocomotionState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_MetaData), Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_MetaData) }; // 377914807
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_ValueProp = { "FootstepNoiseByLocomotionStateWhenCrouched", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_Key_KeyProp = { "FootstepNoiseByLocomotionStateWhenCrouched_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_MetaData[] = {
		{ "Category", "ACF| Footstep" },
		{ "Comment", "/*The noise emitted while moving by this character. This noise is used as a check\n    for AI Perceptions*/" },
		{ "ModuleRelativePath", "Public/Components/ACFEffectsManagerComponent.h" },
		{ "ToolTip", "The noise emitted while moving by this character. This noise is used as a check\n    for AI Perceptions" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched = { "FootstepNoiseByLocomotionStateWhenCrouched", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFEffectsManagerComponent, FootstepNoiseByLocomotionStateWhenCrouched), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_MetaData), Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_MetaData) }; // 377914807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFEffectsManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_CharacterEffectsConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_TraceLengthByActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFEffectsManagerComponent_Statics::NewProp_FootstepNoiseByLocomotionStateWhenCrouched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFEffectsManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFEffectsManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFEffectsManagerComponent_Statics::ClassParams = {
		&UACFEffectsManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFEffectsManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFEffectsManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFEffectsManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFEffectsManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFEffectsManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFEffectsManagerComponent.OuterSingleton, Z_Construct_UClass_UACFEffectsManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFEffectsManagerComponent.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<UACFEffectsManagerComponent>()
	{
		return UACFEffectsManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFEffectsManagerComponent);
	UACFEffectsManagerComponent::~UACFEffectsManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFEffectsManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFEffectsManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFEffectsManagerComponent, UACFEffectsManagerComponent::StaticClass, TEXT("UACFEffectsManagerComponent"), &Z_Registration_Info_UClass_UACFEffectsManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFEffectsManagerComponent), 4163570025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFEffectsManagerComponent_h_3121243527(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFEffectsManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Components_ACFEffectsManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

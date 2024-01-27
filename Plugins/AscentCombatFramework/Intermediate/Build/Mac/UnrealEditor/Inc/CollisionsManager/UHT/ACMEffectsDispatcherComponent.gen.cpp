// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollisionsManager/Public/ACMEffectsDispatcherComponent.h"
#include "CollisionsManager/Public/ACMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMEffectsDispatcherComponent() {}
// Cross Module References
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMEffectsDispatcherComponent();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMImpactsFXDataAsset_NoRegister();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FActionEffect();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFX();
	COLLISIONSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactFX();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CollisionsManager();
// End Cross Module References
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execTryGetImpactFX)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UDamageType> ,Z_Param_Out_damageImpacting);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_materialImpacted);
		P_GET_STRUCT_REF(FBaseFX,Z_Param_Out_outFXtoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetImpactFX(Z_Param_Out_damageImpacting,Z_Param_materialImpacted,Z_Param_Out_outFXtoPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execPlayEffectLocally)
	{
		P_GET_STRUCT_REF(FImpactFX,Z_Param_Out_effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffectLocally(Z_Param_Out_effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execPlayReplicatedEffect)
	{
		P_GET_STRUCT(FImpactFX,Z_Param_FXtoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReplicatedEffect_Implementation(Z_Param_FXtoPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execPlayReplicatedImpact)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UDamageType> ,Z_Param_Out_damageImpacting);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_materialImpacted);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_impactLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReplicatedImpact(Z_Param_Out_damageImpacting,Z_Param_materialImpacted,Z_Param_Out_impactLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execPlayActionEffectLocally)
	{
		P_GET_STRUCT_REF(FActionEffect,Z_Param_Out_effect);
		P_GET_OBJECT(ACharacter,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayActionEffectLocally(Z_Param_Out_effect,Z_Param_instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execPlayReplicatedActionEffect)
	{
		P_GET_STRUCT(FActionEffect,Z_Param_effect);
		P_GET_OBJECT(ACharacter,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReplicatedActionEffect_Implementation(Z_Param_effect,Z_Param_instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execClientsPlayReplicatedEffect)
	{
		P_GET_STRUCT(FImpactFX,Z_Param_FXtoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsPlayReplicatedEffect_Implementation(Z_Param_FXtoPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACMEffectsDispatcherComponent::execClientsPlayEffect)
	{
		P_GET_STRUCT(FActionEffect,Z_Param_effect);
		P_GET_OBJECT(ACharacter,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsPlayEffect_Implementation(Z_Param_effect,Z_Param_instigator);
		P_NATIVE_END;
	}
	struct ACMEffectsDispatcherComponent_eventClientsPlayEffect_Parms
	{
		FActionEffect effect;
		ACharacter* instigator;
	};
	struct ACMEffectsDispatcherComponent_eventClientsPlayReplicatedEffect_Parms
	{
		FImpactFX FXtoPlay;
	};
	struct ACMEffectsDispatcherComponent_eventPlayReplicatedActionEffect_Parms
	{
		FActionEffect effect;
		ACharacter* instigator;
	};
	struct ACMEffectsDispatcherComponent_eventPlayReplicatedEffect_Parms
	{
		FImpactFX FXtoPlay;
	};
	static FName NAME_UACMEffectsDispatcherComponent_ClientsPlayEffect = FName(TEXT("ClientsPlayEffect"));
	void UACMEffectsDispatcherComponent::ClientsPlayEffect(FActionEffect const& effect, ACharacter* instigator)
	{
		ACMEffectsDispatcherComponent_eventClientsPlayEffect_Parms Parms;
		Parms.effect=effect;
		Parms.instigator=instigator;
		ProcessEvent(FindFunctionChecked(NAME_UACMEffectsDispatcherComponent_ClientsPlayEffect),&Parms);
	}
	static FName NAME_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect = FName(TEXT("ClientsPlayReplicatedEffect"));
	void UACMEffectsDispatcherComponent::ClientsPlayReplicatedEffect(FImpactFX const& FXtoPlay)
	{
		ACMEffectsDispatcherComponent_eventClientsPlayReplicatedEffect_Parms Parms;
		Parms.FXtoPlay=FXtoPlay;
		ProcessEvent(FindFunctionChecked(NAME_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect),&Parms);
	}
	static FName NAME_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect = FName(TEXT("PlayReplicatedActionEffect"));
	void UACMEffectsDispatcherComponent::PlayReplicatedActionEffect(FActionEffect const& effect, ACharacter* instigator)
	{
		ACMEffectsDispatcherComponent_eventPlayReplicatedActionEffect_Parms Parms;
		Parms.effect=effect;
		Parms.instigator=instigator;
		ProcessEvent(FindFunctionChecked(NAME_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect),&Parms);
	}
	static FName NAME_UACMEffectsDispatcherComponent_PlayReplicatedEffect = FName(TEXT("PlayReplicatedEffect"));
	void UACMEffectsDispatcherComponent::PlayReplicatedEffect(FImpactFX const& FXtoPlay)
	{
		ACMEffectsDispatcherComponent_eventPlayReplicatedEffect_Parms Parms;
		Parms.FXtoPlay=FXtoPlay;
		ProcessEvent(FindFunctionChecked(NAME_UACMEffectsDispatcherComponent_PlayReplicatedEffect),&Parms);
	}
	void UACMEffectsDispatcherComponent::StaticRegisterNativesUACMEffectsDispatcherComponent()
	{
		UClass* Class = UACMEffectsDispatcherComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientsPlayEffect", &UACMEffectsDispatcherComponent::execClientsPlayEffect },
			{ "ClientsPlayReplicatedEffect", &UACMEffectsDispatcherComponent::execClientsPlayReplicatedEffect },
			{ "PlayActionEffectLocally", &UACMEffectsDispatcherComponent::execPlayActionEffectLocally },
			{ "PlayEffectLocally", &UACMEffectsDispatcherComponent::execPlayEffectLocally },
			{ "PlayReplicatedActionEffect", &UACMEffectsDispatcherComponent::execPlayReplicatedActionEffect },
			{ "PlayReplicatedEffect", &UACMEffectsDispatcherComponent::execPlayReplicatedEffect },
			{ "PlayReplicatedImpact", &UACMEffectsDispatcherComponent::execPlayReplicatedImpact },
			{ "TryGetImpactFX", &UACMEffectsDispatcherComponent::execTryGetImpactFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventClientsPlayEffect_Parms, effect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_effect_MetaData) }; // 2181620844
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventClientsPlayEffect_Parms, instigator), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "ClientsPlayEffect", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::PropPointers), sizeof(ACMEffectsDispatcherComponent_eventClientsPlayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMEffectsDispatcherComponent_eventClientsPlayEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXtoPlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FXtoPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::NewProp_FXtoPlay = { "FXtoPlay", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventClientsPlayReplicatedEffect_Parms, FXtoPlay), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData) }; // 1796853546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::NewProp_FXtoPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "ClientsPlayReplicatedEffect", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::PropPointers), sizeof(ACMEffectsDispatcherComponent_eventClientsPlayReplicatedEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMEffectsDispatcherComponent_eventClientsPlayReplicatedEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics
	{
		struct ACMEffectsDispatcherComponent_eventPlayActionEffectLocally_Parms
		{
			FActionEffect effect;
			ACharacter* instigator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayActionEffectLocally_Parms, effect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_effect_MetaData) }; // 2181620844
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayActionEffectLocally_Parms, instigator), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "PlayActionEffectLocally", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::ACMEffectsDispatcherComponent_eventPlayActionEffectLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::ACMEffectsDispatcherComponent_eventPlayActionEffectLocally_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics
	{
		struct ACMEffectsDispatcherComponent_eventPlayEffectLocally_Parms
		{
			FImpactFX effect;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayEffectLocally_Parms, effect), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::NewProp_effect_MetaData) }; // 1796853546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::NewProp_effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "PlayEffectLocally", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::ACMEffectsDispatcherComponent_eventPlayEffectLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::ACMEffectsDispatcherComponent_eventPlayEffectLocally_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayReplicatedActionEffect_Parms, effect), Z_Construct_UScriptStruct_FActionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_effect_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_effect_MetaData) }; // 2181620844
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayReplicatedActionEffect_Parms, instigator), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "PlayReplicatedActionEffect", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::PropPointers), sizeof(ACMEffectsDispatcherComponent_eventPlayReplicatedActionEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMEffectsDispatcherComponent_eventPlayReplicatedActionEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXtoPlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FXtoPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::NewProp_FXtoPlay = { "FXtoPlay", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayReplicatedEffect_Parms, FXtoPlay), Z_Construct_UScriptStruct_FImpactFX, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::NewProp_FXtoPlay_MetaData) }; // 1796853546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::NewProp_FXtoPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "PlayReplicatedEffect", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::PropPointers), sizeof(ACMEffectsDispatcherComponent_eventPlayReplicatedEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACMEffectsDispatcherComponent_eventPlayReplicatedEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics
	{
		struct ACMEffectsDispatcherComponent_eventPlayReplicatedImpact_Parms
		{
			const TSubclassOf<UDamageType>  damageImpacting;
			UPhysicalMaterial* materialImpacted;
			FVector impactLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageImpacting_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_damageImpacting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialImpacted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impactLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_impactLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_damageImpacting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_damageImpacting = { "damageImpacting", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayReplicatedImpact_Parms, damageImpacting), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_damageImpacting_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_damageImpacting_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_materialImpacted = { "materialImpacted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayReplicatedImpact_Parms, materialImpacted), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_impactLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_impactLocation = { "impactLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventPlayReplicatedImpact_Parms, impactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_impactLocation_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_impactLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_damageImpacting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_materialImpacted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::NewProp_impactLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "PlayReplicatedImpact", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::ACMEffectsDispatcherComponent_eventPlayReplicatedImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::ACMEffectsDispatcherComponent_eventPlayReplicatedImpact_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics
	{
		struct ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms
		{
			const TSubclassOf<UDamageType>  damageImpacting;
			UPhysicalMaterial* materialImpacted;
			FBaseFX outFXtoPlay;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageImpacting_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_damageImpacting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialImpacted;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outFXtoPlay;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_damageImpacting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_damageImpacting = { "damageImpacting", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms, damageImpacting), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_damageImpacting_MetaData), Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_damageImpacting_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_materialImpacted = { "materialImpacted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms, materialImpacted), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_outFXtoPlay = { "outFXtoPlay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms, outFXtoPlay), Z_Construct_UScriptStruct_FBaseFX, METADATA_PARAMS(0, nullptr) }; // 974731263
	void Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms), &Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_damageImpacting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_materialImpacted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_outFXtoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACMEffectsDispatcherComponent, nullptr, "TryGetImpactFX", nullptr, nullptr, Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::ACMEffectsDispatcherComponent_eventTryGetImpactFX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMEffectsDispatcherComponent);
	UClass* Z_Construct_UClass_UACMEffectsDispatcherComponent_NoRegister()
	{
		return UACMEffectsDispatcherComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactFXs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactFXs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CollisionsManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayEffect, "ClientsPlayEffect" }, // 1272813745
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_ClientsPlayReplicatedEffect, "ClientsPlayReplicatedEffect" }, // 895829651
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayActionEffectLocally, "PlayActionEffectLocally" }, // 4181901660
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayEffectLocally, "PlayEffectLocally" }, // 1275450425
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedActionEffect, "PlayReplicatedActionEffect" }, // 2979716392
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedEffect, "PlayReplicatedEffect" }, // 2788271308
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_PlayReplicatedImpact, "PlayReplicatedImpact" }, // 2851170642
		{ &Z_Construct_UFunction_UACMEffectsDispatcherComponent_TryGetImpactFX, "TryGetImpactFX" }, // 687432794
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "ACMEffectsDispatcherComponent.h" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::NewProp_ImpactFXs_MetaData[] = {
		{ "Category", "ACM" },
		{ "ModuleRelativePath", "Public/ACMEffectsDispatcherComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::NewProp_ImpactFXs = { "ImpactFXs", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMEffectsDispatcherComponent, ImpactFXs), Z_Construct_UClass_UACMImpactsFXDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::NewProp_ImpactFXs_MetaData), Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::NewProp_ImpactFXs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::NewProp_ImpactFXs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMEffectsDispatcherComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::ClassParams = {
		&UACMEffectsDispatcherComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACMEffectsDispatcherComponent()
	{
		if (!Z_Registration_Info_UClass_UACMEffectsDispatcherComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMEffectsDispatcherComponent.OuterSingleton, Z_Construct_UClass_UACMEffectsDispatcherComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACMEffectsDispatcherComponent.OuterSingleton;
	}
	template<> COLLISIONSMANAGER_API UClass* StaticClass<UACMEffectsDispatcherComponent>()
	{
		return UACMEffectsDispatcherComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACMEffectsDispatcherComponent);
	UACMEffectsDispatcherComponent::~UACMEffectsDispatcherComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMEffectsDispatcherComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMEffectsDispatcherComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACMEffectsDispatcherComponent, UACMEffectsDispatcherComponent::StaticClass, TEXT("UACMEffectsDispatcherComponent"), &Z_Registration_Info_UClass_UACMEffectsDispatcherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMEffectsDispatcherComponent), 567407734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMEffectsDispatcherComponent_h_4211294472(TEXT("/Script/CollisionsManager"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMEffectsDispatcherComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_CollisionsManager_Public_ACMEffectsDispatcherComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

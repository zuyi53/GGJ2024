// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscentCombatFramework/Public/Actors/ACFCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "ACFCCTypes.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "Components/ACFEquipmentComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCharacter() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsManagerComponent_NoRegister();
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EActionPriority();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UACFRagdollComponent_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_ECombatType();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDamageZone();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_EDeathType();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	ASCENTCOREINTERFACES_API UClass* Z_Construct_UClass_UACFEntityInterface_NoRegister();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection();
	ASCENTCOREINTERFACES_API UEnum* Z_Construct_UEnum_AscentCoreInterfaces_ETeam();
	ASCENTCOREINTERFACES_API UFunction* Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFAnimInstance_NoRegister();
	CHARACTERCONTROLLER_API UClass* Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister();
	CHARACTERCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAcceleration();
	COLLISIONSMANAGER_API UClass* Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UACFEquipmentComponent_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipment();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSBaseTargetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AscentCombatFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnCharacterFullyInitialized__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCharacterFullyInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterFullyInitialized)
{
	OnCharacterFullyInitialized.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnDamageReceived_Parms
		{
			FACFDamageEvent damageReceived;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::NewProp_damageReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::NewProp_damageReceived = { "damageReceived", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnDamageReceived_Parms, damageReceived), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::NewProp_damageReceived_MetaData), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::NewProp_damageReceived_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::NewProp_damageReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnDamageReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDamageReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDamageReceived, FACFDamageEvent const& damageReceived)
{
	struct _Script_AscentCombatFramework_eventOnDamageReceived_Parms
	{
		FACFDamageEvent damageReceived;
	};
	_Script_AscentCombatFramework_eventOnDamageReceived_Parms Parms;
	Parms.damageReceived=damageReceived;
	OnDamageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnDamageInflicted_Parms
		{
			AActor* damageReceiver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_damageReceiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::NewProp_damageReceiver = { "damageReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnDamageInflicted_Parms, damageReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::NewProp_damageReceiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnDamageInflicted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDamageInflicted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDamageInflicted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDamageInflicted_DelegateWrapper(const FMulticastScriptDelegate& OnDamageInflicted, AActor* damageReceiver)
{
	struct _Script_AscentCombatFramework_eventOnDamageInflicted_Parms
	{
		AActor* damageReceiver;
	};
	_Script_AscentCombatFramework_eventOnDamageInflicted_Parms Parms;
	Parms.damageReceiver=damageReceiver;
	OnDamageInflicted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms
		{
			bool isCrouched;
		};
		static void NewProp_isCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCrouched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::NewProp_isCrouched_SetBit(void* Obj)
	{
		((_Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms*)Obj)->isCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::NewProp_isCrouched = { "isCrouched", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms), &Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::NewProp_isCrouched_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::NewProp_isCrouched,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnCrouchStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCrouchStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCrouchStateChanged, bool isCrouched)
{
	struct _Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms
	{
		bool isCrouched;
	};
	_Script_AscentCombatFramework_eventOnCrouchStateChanged_Parms Parms;
	Parms.isCrouched=isCrouched ? true : false;
	OnCrouchStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnMovesetChanged_Parms
		{
			FGameplayTag Moveset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moveset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moveset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::NewProp_Moveset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::NewProp_Moveset = { "Moveset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnMovesetChanged_Parms, Moveset), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::NewProp_Moveset_MetaData), Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::NewProp_Moveset_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::NewProp_Moveset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnMovesetChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnMovesetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnMovesetChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovesetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovesetChanged, FGameplayTag const& Moveset)
{
	struct _Script_AscentCombatFramework_eventOnMovesetChanged_Parms
	{
		FGameplayTag Moveset;
	};
	_Script_AscentCombatFramework_eventOnMovesetChanged_Parms Parms;
	Parms.Moveset=Moveset;
	OnMovesetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnCombatTypeChanged_Parms
		{
			ECombatType CombatType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::NewProp_CombatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::NewProp_CombatType = { "CombatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnCombatTypeChanged_Parms, CombatType), Z_Construct_UEnum_AscentCombatFramework_ECombatType, METADATA_PARAMS(0, nullptr) }; // 1410424927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::NewProp_CombatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::NewProp_CombatType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnCombatTypeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnCombatTypeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnCombatTypeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCombatTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCombatTypeChanged, ECombatType CombatType)
{
	struct _Script_AscentCombatFramework_eventOnCombatTypeChanged_Parms
	{
		ECombatType CombatType;
	};
	_Script_AscentCombatFramework_eventOnCombatTypeChanged_Parms Parms;
	Parms.CombatType=CombatType;
	OnCombatTypeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics
	{
		struct _Script_AscentCombatFramework_eventOnDeathEvent_Parms
		{
			AACFCharacter* self;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_self;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::NewProp_self = { "self", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AscentCombatFramework_eventOnDeathEvent_Parms, self), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::NewProp_self,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AscentCombatFramework, nullptr, "OnDeathEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDeathEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::_Script_AscentCombatFramework_eventOnDeathEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeathEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDeathEvent, AACFCharacter* self)
{
	struct _Script_AscentCombatFramework_eventOnDeathEvent_Parms
	{
		AACFCharacter* self;
	};
	_Script_AscentCombatFramework_eventOnDeathEvent_Parms Parms;
	Parms.self=self;
	OnDeathEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AACFCharacter::execSwitchOverlay)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_overlayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchOverlay_Implementation(Z_Param_overlayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execSwitchMovesetActions)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_moveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMovesetActions_Implementation(Z_Param_moveType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execSwitchMoveset)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_moveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMoveset_Implementation(Z_Param_moveType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execDeactivateDamage)
	{
		P_GET_ENUM_REF(EDamageActivationType,Z_Param_Out_damageActType);
		P_GET_TARRAY_REF(FName,Z_Param_Out_traceChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateDamage((EDamageActivationType&)(Z_Param_Out_damageActType),Z_Param_Out_traceChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execActivateDamage)
	{
		P_GET_ENUM_REF(EDamageActivationType,Z_Param_Out_damageActType);
		P_GET_TARRAY_REF(FName,Z_Param_Out_traceChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateDamage((EDamageActivationType&)(Z_Param_Out_damageActType),Z_Param_Out_traceChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetRelativeTargetDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EACFDirection*)Z_Param__Result=P_THIS->GetRelativeTargetDirection(Z_Param_targetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execReviveCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_normalizedHealthToGrant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReviveCharacter_Implementation(Z_Param_normalizedHealthToGrant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execKillCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillCharacter_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execHandleAttackHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAttackHit(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetLastDamageInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FACFDamageEvent*)Z_Param__Result=P_THIS->GetLastDamageInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCurrentMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetACFAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFAnimInstance**)Z_Param__Result=P_THIS->GetACFAnimInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCurrentMoveset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentMoveset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCombatType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECombatType*)Z_Param__Result=P_THIS->GetCombatType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetAudioComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->GetAudioComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCharacterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCharacterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetTargetingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UATSBaseTargetComponent**)Z_Param__Result=P_THIS->GetTargetingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetMotionWarpComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMotionWarpingComponent**)Z_Param__Result=P_THIS->GetMotionWarpComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetRagdollComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFRagdollComponent**)Z_Param__Result=P_THIS->GetRagdollComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetDamageHandlerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFDamageHandlerComponent**)Z_Param__Result=P_THIS->GetDamageHandlerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCollisionsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACMCollisionManagerComponent**)Z_Param__Result=P_THIS->GetCollisionsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetEquipmentComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFEquipmentComponent**)Z_Param__Result=P_THIS->GetEquipmentComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetStatisticsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSStatisticsComponent**)Z_Param__Result=P_THIS->GetStatisticsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetActionsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFActionsManagerComponent**)Z_Param__Result=P_THIS->GetActionsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetACFCharacterMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFCharacterMovementComponent**)Z_Param__Result=P_THIS->GetACFCharacterMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetMainMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execSetCharacterName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_inCharacterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterName(Z_Param_Out_inCharacterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCurrentActionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentActionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execForceAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execForceActionByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceActionByName(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execTriggerAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Action);
		P_GET_ENUM(EActionPriority,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_canBeStored);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAction(Z_Param_Action,EActionPriority(Z_Param_Priority),Z_Param_canBeStored,Z_Param_contextString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetSprintSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSprintSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetJogSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJogSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetWalkSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWalkSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execCanBeRanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeRanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execIsRanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetEnemiesCollisionChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<ECollisionChannel> >*)Z_Param__Result=P_THIS->GetEnemiesCollisionChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetDamageZoneByBoneName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDamageZone*)Z_Param__Result=P_THIS->GetDamageZoneByBoneName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCollisionChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execSetDeathType)
	{
		P_GET_ENUM(EDeathType,Z_Param_inDeathType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeathType(EDeathType(Z_Param_inDeathType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetDeathType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDeathType*)Z_Param__Result=P_THIS->GetDeathType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execIsMyEnemy)
	{
		P_GET_OBJECT(AACFCharacter,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMyEnemy(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetCombatTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetEntityExtentRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntityExtentRadius_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execAssignTeamToEntity)
	{
		P_GET_ENUM(ETeam,Z_Param_inCombatTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignTeamToEntity_Implementation(ETeam(Z_Param_inCombatTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execIsEntityAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEntityAlive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetEntityCombatTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetEntityCombatTeam_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execOnActorSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorSaved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execOnActorLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execIsImmortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsImmortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execSetIsImmortal)
	{
		P_GET_UBOOL(Z_Param_inImmortal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsImmortal(Z_Param_inImmortal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execOnRep_ReplicatedAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execHandleEquipmentChanged)
	{
		P_GET_STRUCT_REF(FEquipment,Z_Param_Out_equipment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEquipmentChanged(Z_Param_Out_equipment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execInitializeCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execHandleCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCharacterDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execClientsOnCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsOnCharacterDeath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execClientsSwitchOverlay)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_overlayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsSwitchOverlay_Implementation(Z_Param_overlayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execClientsSwitchMovetype)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_moveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsSwitchMovetype_Implementation(Z_Param_moveType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execSetupCollisionManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCollisionManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execServerSendPlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSectionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rootMotionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendPlayMontage_Validate(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName,Z_Param_rootMotionScale))
		{
			RPC_ValidateFailed(TEXT("ServerSendPlayMontage_Validate"));
			return;
		}
		P_THIS->ServerSendPlayMontage_Implementation(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName,Z_Param_rootMotionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execHandleDamageReceived)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageReceived);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDamageReceived(Z_Param_Out_damageReceived);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execTryJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execMulticastPlayAnimMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSectionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rootMotionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulticastPlayAnimMontage_Validate(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName,Z_Param_rootMotionScale))
		{
			RPC_ValidateFailed(TEXT("MulticastPlayAnimMontage_Validate"));
			return;
		}
		P_THIS->MulticastPlayAnimMontage_Implementation(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName,Z_Param_rootMotionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetFallDamageFromDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fallDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFallDamageFromDistance(Z_Param_fallDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execOnCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterDeath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFCharacter::execGetBaseDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseDamage_Implementation();
		P_NATIVE_END;
	}
	struct ACFCharacter_eventAssignTeamToEntity_Parms
	{
		ETeam inCombatTeam;
	};
	struct ACFCharacter_eventClientsSwitchMovetype_Parms
	{
		FGameplayTag moveType;
	};
	struct ACFCharacter_eventClientsSwitchOverlay_Parms
	{
		FGameplayTag overlayTag;
	};
	struct ACFCharacter_eventGetBaseDamage_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCharacter_eventGetBaseDamage_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFCharacter_eventGetEntityCombatTeam_Parms
	{
		ETeam ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCharacter_eventGetEntityCombatTeam_Parms()
			: ReturnValue((ETeam)0)
		{
		}
	};
	struct ACFCharacter_eventGetEntityExtentRadius_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCharacter_eventGetEntityExtentRadius_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ACFCharacter_eventGetMainMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCharacter_eventGetMainMesh_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ACFCharacter_eventIsEntityAlive_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFCharacter_eventIsEntityAlive_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ACFCharacter_eventMulticastPlayAnimMontage_Parms
	{
		UAnimMontage* AnimMontage;
		float InPlayRate;
		FName StartSectionName;
		float rootMotionScale;
	};
	struct ACFCharacter_eventReviveCharacter_Parms
	{
		float normalizedHealthToGrant;
	};
	struct ACFCharacter_eventServerSendPlayMontage_Parms
	{
		UAnimMontage* AnimMontage;
		float InPlayRate;
		FName StartSectionName;
		float rootMotionScale;
	};
	struct ACFCharacter_eventSwitchMoveset_Parms
	{
		FGameplayTag moveType;
	};
	struct ACFCharacter_eventSwitchMovesetActions_Parms
	{
		FGameplayTag moveType;
	};
	struct ACFCharacter_eventSwitchOverlay_Parms
	{
		FGameplayTag overlayTag;
	};
	static FName NAME_AACFCharacter_AssignTeamToEntity = FName(TEXT("AssignTeamToEntity"));
	void AACFCharacter::AssignTeamToEntity(ETeam inCombatTeam)
	{
		ACFCharacter_eventAssignTeamToEntity_Parms Parms;
		Parms.inCombatTeam=inCombatTeam;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_AssignTeamToEntity),&Parms);
	}
	static FName NAME_AACFCharacter_ClientsOnCharacterDeath = FName(TEXT("ClientsOnCharacterDeath"));
	void AACFCharacter::ClientsOnCharacterDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_ClientsOnCharacterDeath),NULL);
	}
	static FName NAME_AACFCharacter_ClientsSwitchMovetype = FName(TEXT("ClientsSwitchMovetype"));
	void AACFCharacter::ClientsSwitchMovetype(FGameplayTag const& moveType)
	{
		ACFCharacter_eventClientsSwitchMovetype_Parms Parms;
		Parms.moveType=moveType;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_ClientsSwitchMovetype),&Parms);
	}
	static FName NAME_AACFCharacter_ClientsSwitchOverlay = FName(TEXT("ClientsSwitchOverlay"));
	void AACFCharacter::ClientsSwitchOverlay(FGameplayTag const& overlayTag)
	{
		ACFCharacter_eventClientsSwitchOverlay_Parms Parms;
		Parms.overlayTag=overlayTag;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_ClientsSwitchOverlay),&Parms);
	}
	static FName NAME_AACFCharacter_GetBaseDamage = FName(TEXT("GetBaseDamage"));
	float AACFCharacter::GetBaseDamage()
	{
		ACFCharacter_eventGetBaseDamage_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_GetBaseDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFCharacter_GetEntityCombatTeam = FName(TEXT("GetEntityCombatTeam"));
	ETeam AACFCharacter::GetEntityCombatTeam() const
	{
		ACFCharacter_eventGetEntityCombatTeam_Parms Parms;
		const_cast<AACFCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_GetEntityCombatTeam),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFCharacter_GetEntityExtentRadius = FName(TEXT("GetEntityExtentRadius"));
	float AACFCharacter::GetEntityExtentRadius() const
	{
		ACFCharacter_eventGetEntityExtentRadius_Parms Parms;
		const_cast<AACFCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_GetEntityExtentRadius),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFCharacter_GetMainMesh = FName(TEXT("GetMainMesh"));
	USkeletalMeshComponent* AACFCharacter::GetMainMesh() const
	{
		ACFCharacter_eventGetMainMesh_Parms Parms;
		const_cast<AACFCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_GetMainMesh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFCharacter_IsEntityAlive = FName(TEXT("IsEntityAlive"));
	bool AACFCharacter::IsEntityAlive() const
	{
		ACFCharacter_eventIsEntityAlive_Parms Parms;
		const_cast<AACFCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_IsEntityAlive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AACFCharacter_KillCharacter = FName(TEXT("KillCharacter"));
	void AACFCharacter::KillCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_KillCharacter),NULL);
	}
	static FName NAME_AACFCharacter_MulticastPlayAnimMontage = FName(TEXT("MulticastPlayAnimMontage"));
	void AACFCharacter::MulticastPlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, float rootMotionScale)
	{
		ACFCharacter_eventMulticastPlayAnimMontage_Parms Parms;
		Parms.AnimMontage=AnimMontage;
		Parms.InPlayRate=InPlayRate;
		Parms.StartSectionName=StartSectionName;
		Parms.rootMotionScale=rootMotionScale;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_MulticastPlayAnimMontage),&Parms);
	}
	static FName NAME_AACFCharacter_OnActorLoaded = FName(TEXT("OnActorLoaded"));
	void AACFCharacter::OnActorLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_OnActorLoaded),NULL);
	}
	static FName NAME_AACFCharacter_OnActorSaved = FName(TEXT("OnActorSaved"));
	void AACFCharacter::OnActorSaved()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_OnActorSaved),NULL);
	}
	static FName NAME_AACFCharacter_OnCharacterDeath = FName(TEXT("OnCharacterDeath"));
	void AACFCharacter::OnCharacterDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_OnCharacterDeath),NULL);
	}
	static FName NAME_AACFCharacter_ReviveCharacter = FName(TEXT("ReviveCharacter"));
	void AACFCharacter::ReviveCharacter(float normalizedHealthToGrant)
	{
		ACFCharacter_eventReviveCharacter_Parms Parms;
		Parms.normalizedHealthToGrant=normalizedHealthToGrant;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_ReviveCharacter),&Parms);
	}
	static FName NAME_AACFCharacter_ServerSendPlayMontage = FName(TEXT("ServerSendPlayMontage"));
	void AACFCharacter::ServerSendPlayMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, float rootMotionScale)
	{
		ACFCharacter_eventServerSendPlayMontage_Parms Parms;
		Parms.AnimMontage=AnimMontage;
		Parms.InPlayRate=InPlayRate;
		Parms.StartSectionName=StartSectionName;
		Parms.rootMotionScale=rootMotionScale;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_ServerSendPlayMontage),&Parms);
	}
	static FName NAME_AACFCharacter_SwitchMoveset = FName(TEXT("SwitchMoveset"));
	void AACFCharacter::SwitchMoveset(FGameplayTag moveType)
	{
		ACFCharacter_eventSwitchMoveset_Parms Parms;
		Parms.moveType=moveType;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_SwitchMoveset),&Parms);
	}
	static FName NAME_AACFCharacter_SwitchMovesetActions = FName(TEXT("SwitchMovesetActions"));
	void AACFCharacter::SwitchMovesetActions(FGameplayTag moveType)
	{
		ACFCharacter_eventSwitchMovesetActions_Parms Parms;
		Parms.moveType=moveType;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_SwitchMovesetActions),&Parms);
	}
	static FName NAME_AACFCharacter_SwitchOverlay = FName(TEXT("SwitchOverlay"));
	void AACFCharacter::SwitchOverlay(FGameplayTag overlayTag)
	{
		ACFCharacter_eventSwitchOverlay_Parms Parms;
		Parms.overlayTag=overlayTag;
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacter_SwitchOverlay),&Parms);
	}
	void AACFCharacter::StaticRegisterNativesAACFCharacter()
	{
		UClass* Class = AACFCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateDamage", &AACFCharacter::execActivateDamage },
			{ "AssignTeamToEntity", &AACFCharacter::execAssignTeamToEntity },
			{ "CanBeRanged", &AACFCharacter::execCanBeRanged },
			{ "ClientsOnCharacterDeath", &AACFCharacter::execClientsOnCharacterDeath },
			{ "ClientsSwitchMovetype", &AACFCharacter::execClientsSwitchMovetype },
			{ "ClientsSwitchOverlay", &AACFCharacter::execClientsSwitchOverlay },
			{ "DeactivateDamage", &AACFCharacter::execDeactivateDamage },
			{ "ForceAction", &AACFCharacter::execForceAction },
			{ "ForceActionByName", &AACFCharacter::execForceActionByName },
			{ "GetACFAnimInstance", &AACFCharacter::execGetACFAnimInstance },
			{ "GetACFCharacterMovementComponent", &AACFCharacter::execGetACFCharacterMovementComponent },
			{ "GetActionsComponent", &AACFCharacter::execGetActionsComponent },
			{ "GetAudioComp", &AACFCharacter::execGetAudioComp },
			{ "GetBaseDamage", &AACFCharacter::execGetBaseDamage },
			{ "GetCharacterName", &AACFCharacter::execGetCharacterName },
			{ "GetCollisionChannel", &AACFCharacter::execGetCollisionChannel },
			{ "GetCollisionsComponent", &AACFCharacter::execGetCollisionsComponent },
			{ "GetCombatTeam", &AACFCharacter::execGetCombatTeam },
			{ "GetCombatType", &AACFCharacter::execGetCombatType },
			{ "GetCurrentActionState", &AACFCharacter::execGetCurrentActionState },
			{ "GetCurrentMaxSpeed", &AACFCharacter::execGetCurrentMaxSpeed },
			{ "GetCurrentMoveset", &AACFCharacter::execGetCurrentMoveset },
			{ "GetDamageHandlerComponent", &AACFCharacter::execGetDamageHandlerComponent },
			{ "GetDamageZoneByBoneName", &AACFCharacter::execGetDamageZoneByBoneName },
			{ "GetDeathType", &AACFCharacter::execGetDeathType },
			{ "GetEnemiesCollisionChannel", &AACFCharacter::execGetEnemiesCollisionChannel },
			{ "GetEntityCombatTeam", &AACFCharacter::execGetEntityCombatTeam },
			{ "GetEntityExtentRadius", &AACFCharacter::execGetEntityExtentRadius },
			{ "GetEquipmentComponent", &AACFCharacter::execGetEquipmentComponent },
			{ "GetFallDamageFromDistance", &AACFCharacter::execGetFallDamageFromDistance },
			{ "GetIsDead", &AACFCharacter::execGetIsDead },
			{ "GetJogSpeed", &AACFCharacter::execGetJogSpeed },
			{ "GetLastDamageInfo", &AACFCharacter::execGetLastDamageInfo },
			{ "GetMainMesh", &AACFCharacter::execGetMainMesh },
			{ "GetMotionWarpComponent", &AACFCharacter::execGetMotionWarpComponent },
			{ "GetRagdollComponent", &AACFCharacter::execGetRagdollComponent },
			{ "GetRelativeTargetDirection", &AACFCharacter::execGetRelativeTargetDirection },
			{ "GetSprintSpeed", &AACFCharacter::execGetSprintSpeed },
			{ "GetStatisticsComponent", &AACFCharacter::execGetStatisticsComponent },
			{ "GetTarget", &AACFCharacter::execGetTarget },
			{ "GetTargetingComponent", &AACFCharacter::execGetTargetingComponent },
			{ "GetWalkSpeed", &AACFCharacter::execGetWalkSpeed },
			{ "HandleAttackHit", &AACFCharacter::execHandleAttackHit },
			{ "HandleCharacterDeath", &AACFCharacter::execHandleCharacterDeath },
			{ "HandleDamageReceived", &AACFCharacter::execHandleDamageReceived },
			{ "HandleEquipmentChanged", &AACFCharacter::execHandleEquipmentChanged },
			{ "InitializeCharacter", &AACFCharacter::execInitializeCharacter },
			{ "IsAlive", &AACFCharacter::execIsAlive },
			{ "IsEntityAlive", &AACFCharacter::execIsEntityAlive },
			{ "IsImmortal", &AACFCharacter::execIsImmortal },
			{ "IsMyEnemy", &AACFCharacter::execIsMyEnemy },
			{ "IsRanged", &AACFCharacter::execIsRanged },
			{ "KillCharacter", &AACFCharacter::execKillCharacter },
			{ "MulticastPlayAnimMontage", &AACFCharacter::execMulticastPlayAnimMontage },
			{ "OnActorLoaded", &AACFCharacter::execOnActorLoaded },
			{ "OnActorSaved", &AACFCharacter::execOnActorSaved },
			{ "OnCharacterDeath", &AACFCharacter::execOnCharacterDeath },
			{ "OnRep_ReplicatedAcceleration", &AACFCharacter::execOnRep_ReplicatedAcceleration },
			{ "ReviveCharacter", &AACFCharacter::execReviveCharacter },
			{ "ServerSendPlayMontage", &AACFCharacter::execServerSendPlayMontage },
			{ "SetCharacterName", &AACFCharacter::execSetCharacterName },
			{ "SetDeathType", &AACFCharacter::execSetDeathType },
			{ "SetIsImmortal", &AACFCharacter::execSetIsImmortal },
			{ "SetupCollisionManager", &AACFCharacter::execSetupCollisionManager },
			{ "SwitchMoveset", &AACFCharacter::execSwitchMoveset },
			{ "SwitchMovesetActions", &AACFCharacter::execSwitchMovesetActions },
			{ "SwitchOverlay", &AACFCharacter::execSwitchOverlay },
			{ "TriggerAction", &AACFCharacter::execTriggerAction },
			{ "TryJump", &AACFCharacter::execTryJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics
	{
		struct ACFCharacter_eventActivateDamage_Parms
		{
			EDamageActivationType damageActType;
			TArray<FName> traceChannels;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_damageActType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageActType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_damageActType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_traceChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType = { "damageActType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventActivateDamage_Parms, damageActType), Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType_MetaData), Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType_MetaData) }; // 3742955585
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels_Inner = { "traceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels = { "traceChannels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventActivateDamage_Parms, traceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels_MetaData), Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_damageActType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::NewProp_traceChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ActivateDamage", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::ACFCharacter_eventActivateDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::ACFCharacter_eventActivateDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ActivateDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ActivateDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_inCombatTeam_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inCombatTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::NewProp_inCombatTeam = { "inCombatTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventAssignTeamToEntity_Parms, inCombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::NewProp_inCombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::NewProp_inCombatTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "AssignTeamToEntity", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::PropPointers), sizeof(ACFCharacter_eventAssignTeamToEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventAssignTeamToEntity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics
	{
		struct ACFCharacter_eventCanBeRanged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventCanBeRanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventCanBeRanged_Parms), &Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "CanBeRanged", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::ACFCharacter_eventCanBeRanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::ACFCharacter_eventCanBeRanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_CanBeRanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_CanBeRanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ClientsOnCharacterDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::NewProp_moveType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::NewProp_moveType = { "moveType", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventClientsSwitchMovetype_Parms, moveType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::NewProp_moveType_MetaData), Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::NewProp_moveType_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::NewProp_moveType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ClientsSwitchMovetype", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::PropPointers), sizeof(ACFCharacter_eventClientsSwitchMovetype_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventClientsSwitchMovetype_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_overlayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::NewProp_overlayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::NewProp_overlayTag = { "overlayTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventClientsSwitchOverlay_Parms, overlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::NewProp_overlayTag_MetaData), Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::NewProp_overlayTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::NewProp_overlayTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ClientsSwitchOverlay", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::PropPointers), sizeof(ACFCharacter_eventClientsSwitchOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventClientsSwitchOverlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics
	{
		struct ACFCharacter_eventDeactivateDamage_Parms
		{
			EDamageActivationType damageActType;
			TArray<FName> traceChannels;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_damageActType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageActType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_damageActType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_traceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_traceChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType = { "damageActType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventDeactivateDamage_Parms, damageActType), Z_Construct_UEnum_AscentCombatFramework_EDamageActivationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType_MetaData), Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType_MetaData) }; // 3742955585
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels_Inner = { "traceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels = { "traceChannels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventDeactivateDamage_Parms, traceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels_MetaData), Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_damageActType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::NewProp_traceChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "DeactivateDamage", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::ACFCharacter_eventDeactivateDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::ACFCharacter_eventDeactivateDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_DeactivateDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_DeactivateDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ForceAction_Statics
	{
		struct ACFCharacter_eventForceAction_Parms
		{
			FGameplayTag Action;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventForceAction_Parms, Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ForceAction", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::ACFCharacter_eventForceAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::ACFCharacter_eventForceAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ForceAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ForceAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics
	{
		struct ACFCharacter_eventForceActionByName_Parms
		{
			FName ActionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventForceActionByName_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ForceActionByName", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::ACFCharacter_eventForceActionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::ACFCharacter_eventForceActionByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ForceActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ForceActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics
	{
		struct ACFCharacter_eventGetACFAnimInstance_Parms
		{
			UACFAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetACFAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UACFAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetACFAnimInstance", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::ACFCharacter_eventGetACFAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::ACFCharacter_eventGetACFAnimInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics
	{
		struct ACFCharacter_eventGetACFCharacterMovementComponent_Parms
		{
			UACFCharacterMovementComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetACFCharacterMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetACFCharacterMovementComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::ACFCharacter_eventGetACFCharacterMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::ACFCharacter_eventGetACFCharacterMovementComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics
	{
		struct ACFCharacter_eventGetActionsComponent_Parms
		{
			UACFActionsManagerComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetActionsComponent_Parms, ReturnValue), Z_Construct_UClass_UACFActionsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetActionsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::ACFCharacter_eventGetActionsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::ACFCharacter_eventGetActionsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetActionsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetActionsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics
	{
		struct ACFCharacter_eventGetAudioComp_Parms
		{
			UAudioComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetAudioComp_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetAudioComp", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::ACFCharacter_eventGetAudioComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::ACFCharacter_eventGetAudioComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetAudioComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetAudioComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetBaseDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetBaseDamage", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::PropPointers), sizeof(ACFCharacter_eventGetBaseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventGetBaseDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetBaseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetBaseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics
	{
		struct ACFCharacter_eventGetCharacterName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCharacterName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCharacterName", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::ACFCharacter_eventGetCharacterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::ACFCharacter_eventGetCharacterName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics
	{
		struct ACFCharacter_eventGetCollisionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::ACFCharacter_eventGetCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::ACFCharacter_eventGetCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics
	{
		struct ACFCharacter_eventGetCollisionsComponent_Parms
		{
			UACMCollisionManagerComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCollisionsComponent_Parms, ReturnValue), Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCollisionsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::ACFCharacter_eventGetCollisionsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::ACFCharacter_eventGetCollisionsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics
	{
		struct ACFCharacter_eventGetCombatTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// <summary>\n/// End Interface\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
		{ "ToolTip", "<summary>\nEnd Interface\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::ACFCharacter_eventGetCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::ACFCharacter_eventGetCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics
	{
		struct ACFCharacter_eventGetCombatType_Parms
		{
			ECombatType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCombatType_Parms, ReturnValue), Z_Construct_UEnum_AscentCombatFramework_ECombatType, METADATA_PARAMS(0, nullptr) }; // 1410424927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCombatType", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::ACFCharacter_eventGetCombatType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::ACFCharacter_eventGetCombatType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCombatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCombatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics
	{
		struct ACFCharacter_eventGetCurrentActionState_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCurrentActionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCurrentActionState", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::ACFCharacter_eventGetCurrentActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::ACFCharacter_eventGetCurrentActionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCurrentActionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCurrentActionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics
	{
		struct ACFCharacter_eventGetCurrentMaxSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCurrentMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCurrentMaxSpeed", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::ACFCharacter_eventGetCurrentMaxSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::ACFCharacter_eventGetCurrentMaxSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics
	{
		struct ACFCharacter_eventGetCurrentMoveset_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetCurrentMoveset_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetCurrentMoveset", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::ACFCharacter_eventGetCurrentMoveset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::ACFCharacter_eventGetCurrentMoveset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics
	{
		struct ACFCharacter_eventGetDamageHandlerComponent_Parms
		{
			UACFDamageHandlerComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetDamageHandlerComponent_Parms, ReturnValue), Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetDamageHandlerComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::ACFCharacter_eventGetDamageHandlerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::ACFCharacter_eventGetDamageHandlerComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics
	{
		struct ACFCharacter_eventGetDamageZoneByBoneName_Parms
		{
			FName BoneName;
			EDamageZone ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetDamageZoneByBoneName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetDamageZoneByBoneName_Parms, ReturnValue), Z_Construct_UEnum_AscentCombatFramework_EDamageZone, METADATA_PARAMS(0, nullptr) }; // 3143454798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetDamageZoneByBoneName", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::ACFCharacter_eventGetDamageZoneByBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::ACFCharacter_eventGetDamageZoneByBoneName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics
	{
		struct ACFCharacter_eventGetDeathType_Parms
		{
			EDeathType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetDeathType_Parms, ReturnValue), Z_Construct_UEnum_AscentCombatFramework_EDeathType, METADATA_PARAMS(0, nullptr) }; // 2322131908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetDeathType", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::ACFCharacter_eventGetDeathType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::ACFCharacter_eventGetDeathType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetDeathType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetDeathType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics
	{
		struct ACFCharacter_eventGetEnemiesCollisionChannel_Parms
		{
			TArray<TEnumAsByte<ECollisionChannel> > ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetEnemiesCollisionChannel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetEnemiesCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::ACFCharacter_eventGetEnemiesCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::ACFCharacter_eventGetEnemiesCollisionChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetEntityCombatTeam_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(0, nullptr) }; // 2489062856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/// <summary>\n/// COMBAT ENTITY INTERFACE\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
		{ "ToolTip", "<summary>\nCOMBAT ENTITY INTERFACE\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetEntityCombatTeam", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::PropPointers), sizeof(ACFCharacter_eventGetEntityCombatTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventGetEntityCombatTeam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetEntityExtentRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetEntityExtentRadius", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::PropPointers), sizeof(ACFCharacter_eventGetEntityExtentRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventGetEntityExtentRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics
	{
		struct ACFCharacter_eventGetEquipmentComponent_Parms
		{
			UACFEquipmentComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetEquipmentComponent_Parms, ReturnValue), Z_Construct_UClass_UACFEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetEquipmentComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::ACFCharacter_eventGetEquipmentComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::ACFCharacter_eventGetEquipmentComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics
	{
		struct ACFCharacter_eventGetFallDamageFromDistance_Parms
		{
			float fallDistance;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fallDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::NewProp_fallDistance = { "fallDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetFallDamageFromDistance_Parms, fallDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetFallDamageFromDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::NewProp_fallDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetFallDamageFromDistance", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::ACFCharacter_eventGetFallDamageFromDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::ACFCharacter_eventGetFallDamageFromDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics
	{
		struct ACFCharacter_eventGetIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventGetIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventGetIsDead_Parms), &Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetIsDead", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::ACFCharacter_eventGetIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::ACFCharacter_eventGetIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetIsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetIsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics
	{
		struct ACFCharacter_eventGetJogSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetJogSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetJogSpeed", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::ACFCharacter_eventGetJogSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::ACFCharacter_eventGetJogSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetJogSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetJogSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics
	{
		struct ACFCharacter_eventGetLastDamageInfo_Parms
		{
			FACFDamageEvent ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetLastDamageInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(0, nullptr) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetLastDamageInfo", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::ACFCharacter_eventGetLastDamageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::ACFCharacter_eventGetLastDamageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetMainMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetMainMesh", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::PropPointers), sizeof(ACFCharacter_eventGetMainMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventGetMainMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetMainMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetMainMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics
	{
		struct ACFCharacter_eventGetMotionWarpComponent_Parms
		{
			UMotionWarpingComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetMotionWarpComponent_Parms, ReturnValue), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetMotionWarpComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::ACFCharacter_eventGetMotionWarpComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::ACFCharacter_eventGetMotionWarpComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics
	{
		struct ACFCharacter_eventGetRagdollComponent_Parms
		{
			UACFRagdollComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetRagdollComponent_Parms, ReturnValue), Z_Construct_UClass_UACFRagdollComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetRagdollComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::ACFCharacter_eventGetRagdollComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::ACFCharacter_eventGetRagdollComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetRagdollComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetRagdollComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics
	{
		struct ACFCharacter_eventGetRelativeTargetDirection_Parms
		{
			const AActor* targetActor;
			EACFDirection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_targetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetRelativeTargetDirection_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_targetActor_MetaData), Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_targetActor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetRelativeTargetDirection_Parms, ReturnValue), Z_Construct_UEnum_AscentCoreInterfaces_EACFDirection, METADATA_PARAMS(0, nullptr) }; // 1707824474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetRelativeTargetDirection", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::ACFCharacter_eventGetRelativeTargetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::ACFCharacter_eventGetRelativeTargetDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics
	{
		struct ACFCharacter_eventGetSprintSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetSprintSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetSprintSpeed", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::ACFCharacter_eventGetSprintSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::ACFCharacter_eventGetSprintSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetSprintSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetSprintSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics
	{
		struct ACFCharacter_eventGetStatisticsComponent_Parms
		{
			UARSStatisticsComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetStatisticsComponent_Parms, ReturnValue), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetStatisticsComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::ACFCharacter_eventGetStatisticsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::ACFCharacter_eventGetStatisticsComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetTarget_Statics
	{
		struct ACFCharacter_eventGetTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::ACFCharacter_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::ACFCharacter_eventGetTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics
	{
		struct ACFCharacter_eventGetTargetingComponent_Parms
		{
			UATSBaseTargetComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetTargetingComponent_Parms, ReturnValue), Z_Construct_UClass_UATSBaseTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetTargetingComponent", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::ACFCharacter_eventGetTargetingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::ACFCharacter_eventGetTargetingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetTargetingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetTargetingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics
	{
		struct ACFCharacter_eventGetWalkSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventGetWalkSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "GetWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::ACFCharacter_eventGetWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::ACFCharacter_eventGetWalkSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_GetWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_GetWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics
	{
		struct ACFCharacter_eventHandleAttackHit_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventHandleAttackHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::NewProp_HitResult_MetaData), Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::NewProp_HitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "HandleAttackHit", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::ACFCharacter_eventHandleAttackHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::ACFCharacter_eventHandleAttackHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_HandleAttackHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_HandleAttackHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "HandleCharacterDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics
	{
		struct ACFCharacter_eventHandleDamageReceived_Parms
		{
			FACFDamageEvent damageReceived;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_damageReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::NewProp_damageReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::NewProp_damageReceived = { "damageReceived", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventHandleDamageReceived_Parms, damageReceived), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::NewProp_damageReceived_MetaData), Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::NewProp_damageReceived_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::NewProp_damageReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "HandleDamageReceived", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::ACFCharacter_eventHandleDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::ACFCharacter_eventHandleDamageReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_HandleDamageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_HandleDamageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics
	{
		struct ACFCharacter_eventHandleEquipmentChanged_Parms
		{
			FEquipment equipment;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_equipment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_equipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::NewProp_equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::NewProp_equipment = { "equipment", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventHandleEquipmentChanged_Parms, equipment), Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::NewProp_equipment_MetaData), Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::NewProp_equipment_MetaData) }; // 1335708750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::NewProp_equipment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "HandleEquipmentChanged", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::ACFCharacter_eventHandleEquipmentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::ACFCharacter_eventHandleEquipmentChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_InitializeCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_InitializeCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_InitializeCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "InitializeCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_InitializeCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_InitializeCharacter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_InitializeCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_InitializeCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_IsAlive_Statics
	{
		struct ACFCharacter_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::ACFCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::ACFCharacter_eventIsAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventIsEntityAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventIsEntityAlive_Parms), &Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "IsEntityAlive", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::PropPointers), sizeof(ACFCharacter_eventIsEntityAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventIsEntityAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_IsEntityAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_IsEntityAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics
	{
		struct ACFCharacter_eventIsImmortal_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventIsImmortal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventIsImmortal_Parms), &Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "IsImmortal", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::ACFCharacter_eventIsImmortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::ACFCharacter_eventIsImmortal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_IsImmortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_IsImmortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics
	{
		struct ACFCharacter_eventIsMyEnemy_Parms
		{
			AACFCharacter* target;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventIsMyEnemy_Parms, target), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventIsMyEnemy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventIsMyEnemy_Parms), &Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "IsMyEnemy", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::ACFCharacter_eventIsMyEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::ACFCharacter_eventIsMyEnemy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_IsMyEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_IsMyEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_IsRanged_Statics
	{
		struct ACFCharacter_eventIsRanged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCharacter_eventIsRanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventIsRanged_Parms), &Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "IsRanged", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::ACFCharacter_eventIsRanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::ACFCharacter_eventIsRanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_IsRanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_IsRanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_KillCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_KillCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_KillCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "KillCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_KillCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_KillCharacter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_KillCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_KillCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rootMotionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventMulticastPlayAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventMulticastPlayAnimMontage_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventMulticastPlayAnimMontage_Parms, StartSectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_rootMotionScale = { "rootMotionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventMulticastPlayAnimMontage_Parms, rootMotionScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_StartSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::NewProp_rootMotionScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "MulticastPlayAnimMontage", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::PropPointers), sizeof(ACFCharacter_eventMulticastPlayAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventMulticastPlayAnimMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_OnActorLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_OnActorLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "// SAVABLE INTERFACE\n" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
		{ "ToolTip", "SAVABLE INTERFACE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_OnActorLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "OnActorLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_OnActorLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_OnActorLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_OnActorLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_OnActorLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_OnActorSaved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_OnActorSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_OnActorSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "OnActorSaved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_OnActorSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_OnActorSaved_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_OnActorSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_OnActorSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_OnCharacterDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_OnCharacterDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_OnCharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "OnCharacterDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_OnCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_OnCharacterDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_OnCharacterDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_OnCharacterDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "OnRep_ReplicatedAcceleration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_normalizedHealthToGrant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::NewProp_normalizedHealthToGrant = { "normalizedHealthToGrant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventReviveCharacter_Parms, normalizedHealthToGrant), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::NewProp_normalizedHealthToGrant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_normalizedHealthToGrant", "1.000000" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ReviveCharacter", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::PropPointers), sizeof(ACFCharacter_eventReviveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventReviveCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ReviveCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ReviveCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rootMotionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventServerSendPlayMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventServerSendPlayMontage_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventServerSendPlayMontage_Parms, StartSectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_rootMotionScale = { "rootMotionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventServerSendPlayMontage_Parms, rootMotionScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_StartSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::NewProp_rootMotionScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_rootMotionScale", "1.000000" },
		{ "CPP_Default_StartSectionName", "None" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "ServerSendPlayMontage", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::PropPointers), sizeof(ACFCharacter_eventServerSendPlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventServerSendPlayMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics
	{
		struct ACFCharacter_eventSetCharacterName_Parms
		{
			FText inCharacterName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inCharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_inCharacterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::NewProp_inCharacterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::NewProp_inCharacterName = { "inCharacterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventSetCharacterName_Parms, inCharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::NewProp_inCharacterName_MetaData), Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::NewProp_inCharacterName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::NewProp_inCharacterName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SetCharacterName", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::ACFCharacter_eventSetCharacterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::ACFCharacter_eventSetCharacterName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_SetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics
	{
		struct ACFCharacter_eventSetDeathType_Parms
		{
			EDeathType inDeathType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inDeathType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inDeathType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::NewProp_inDeathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::NewProp_inDeathType = { "inDeathType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventSetDeathType_Parms, inDeathType), Z_Construct_UEnum_AscentCombatFramework_EDeathType, METADATA_PARAMS(0, nullptr) }; // 2322131908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::NewProp_inDeathType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::NewProp_inDeathType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SetDeathType", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::ACFCharacter_eventSetDeathType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::ACFCharacter_eventSetDeathType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_SetDeathType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SetDeathType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics
	{
		struct ACFCharacter_eventSetIsImmortal_Parms
		{
			bool inImmortal;
		};
		static void NewProp_inImmortal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inImmortal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::NewProp_inImmortal_SetBit(void* Obj)
	{
		((ACFCharacter_eventSetIsImmortal_Parms*)Obj)->inImmortal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::NewProp_inImmortal = { "inImmortal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventSetIsImmortal_Parms), &Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::NewProp_inImmortal_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::NewProp_inImmortal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SetIsImmortal", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::ACFCharacter_eventSetIsImmortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::ACFCharacter_eventSetIsImmortal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_SetIsImmortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SetIsImmortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SetupCollisionManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SetupCollisionManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SetupCollisionManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SetupCollisionManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SetupCollisionManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SetupCollisionManager_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_SetupCollisionManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SetupCollisionManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::NewProp_moveType = { "moveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventSwitchMoveset_Parms, moveType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::NewProp_moveType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SwitchMoveset", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::PropPointers), sizeof(ACFCharacter_eventSwitchMoveset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventSwitchMoveset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_SwitchMoveset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SwitchMoveset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::NewProp_moveType = { "moveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventSwitchMovesetActions_Parms, moveType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::NewProp_moveType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SwitchMovesetActions", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::PropPointers), sizeof(ACFCharacter_eventSwitchMovesetActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventSwitchMovesetActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_overlayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::NewProp_overlayTag = { "overlayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventSwitchOverlay_Parms, overlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::NewProp_overlayTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "SwitchOverlay", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::PropPointers), sizeof(ACFCharacter_eventSwitchOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFCharacter_eventSwitchOverlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_SwitchOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_SwitchOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics
	{
		struct ACFCharacter_eventTriggerAction_Parms
		{
			FGameplayTag Action;
			EActionPriority Priority;
			bool canBeStored;
			FString contextString;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static void NewProp_canBeStored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canBeStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contextString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_contextString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventTriggerAction_Parms, Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventTriggerAction_Parms, Priority), Z_Construct_UEnum_ActionsSystem_EActionPriority, METADATA_PARAMS(0, nullptr) }; // 675304996
	void Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_canBeStored_SetBit(void* Obj)
	{
		((ACFCharacter_eventTriggerAction_Parms*)Obj)->canBeStored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_canBeStored = { "canBeStored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCharacter_eventTriggerAction_Parms), &Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_canBeStored_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCharacter_eventTriggerAction_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_canBeStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_canBeStored", "false" },
		{ "CPP_Default_contextString", "" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "TriggerAction", nullptr, nullptr, Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::ACFCharacter_eventTriggerAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::ACFCharacter_eventTriggerAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFCharacter_TriggerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_TriggerAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacter_TryJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacter_TryJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacter_TryJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacter, nullptr, "TryJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacter_TryJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFCharacter_TryJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFCharacter_TryJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFCharacter_TryJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFCharacter);
	UClass* Z_Construct_UClass_AACFCharacter_NoRegister()
	{
		return AACFCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AACFCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneNameToDamageZoneMap_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneNameToDamageZoneMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameToDamageZoneMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameToDamageZoneMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameToDamageZoneMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallDamageDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallDamageDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallDamageByFallDistance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FallDamageByFallDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerActionOnLand_MetaData[];
#endif
		static void NewProp_bTriggerActionOnLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerActionOnLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallHeightToTriggerAction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallHeightToTriggerAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsToTriggerOnLand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionsToTriggerOnLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocomotionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StatisticsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EquipmentComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffetsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffetsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageHandlerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamageHandlerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RagdollComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MotionWarpComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionStimuliSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIPerceptionStimuliSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioComp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeathType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyOnDeath_MetaData[];
#endif
		static void NewProp_bAutoDestroyOnDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyOnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyTimeOnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyTimeOnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCapsuleOnDeath_MetaData[];
#endif
		static void NewProp_bDisableCapsuleOnDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCapsuleOnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsImmortal_MetaData[];
#endif
		static void NewProp_bIsImmortal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImmortal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamageReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMovesetChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovesetChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatTypeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatTypeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamageInflicted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamageInflicted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterFullyInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterFullyInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCrouchStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCrouchStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AscentCombatFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFCharacter_ActivateDamage, "ActivateDamage" }, // 3542034384
		{ &Z_Construct_UFunction_AACFCharacter_AssignTeamToEntity, "AssignTeamToEntity" }, // 3459262018
		{ &Z_Construct_UFunction_AACFCharacter_CanBeRanged, "CanBeRanged" }, // 3430125011
		{ &Z_Construct_UFunction_AACFCharacter_ClientsOnCharacterDeath, "ClientsOnCharacterDeath" }, // 2524413918
		{ &Z_Construct_UFunction_AACFCharacter_ClientsSwitchMovetype, "ClientsSwitchMovetype" }, // 163439684
		{ &Z_Construct_UFunction_AACFCharacter_ClientsSwitchOverlay, "ClientsSwitchOverlay" }, // 3134615320
		{ &Z_Construct_UFunction_AACFCharacter_DeactivateDamage, "DeactivateDamage" }, // 4146783053
		{ &Z_Construct_UFunction_AACFCharacter_ForceAction, "ForceAction" }, // 3750661880
		{ &Z_Construct_UFunction_AACFCharacter_ForceActionByName, "ForceActionByName" }, // 3093850369
		{ &Z_Construct_UFunction_AACFCharacter_GetACFAnimInstance, "GetACFAnimInstance" }, // 3167972883
		{ &Z_Construct_UFunction_AACFCharacter_GetACFCharacterMovementComponent, "GetACFCharacterMovementComponent" }, // 3581338356
		{ &Z_Construct_UFunction_AACFCharacter_GetActionsComponent, "GetActionsComponent" }, // 3762652328
		{ &Z_Construct_UFunction_AACFCharacter_GetAudioComp, "GetAudioComp" }, // 2369718836
		{ &Z_Construct_UFunction_AACFCharacter_GetBaseDamage, "GetBaseDamage" }, // 1952603097
		{ &Z_Construct_UFunction_AACFCharacter_GetCharacterName, "GetCharacterName" }, // 1893462948
		{ &Z_Construct_UFunction_AACFCharacter_GetCollisionChannel, "GetCollisionChannel" }, // 3267068947
		{ &Z_Construct_UFunction_AACFCharacter_GetCollisionsComponent, "GetCollisionsComponent" }, // 1014474
		{ &Z_Construct_UFunction_AACFCharacter_GetCombatTeam, "GetCombatTeam" }, // 1657331120
		{ &Z_Construct_UFunction_AACFCharacter_GetCombatType, "GetCombatType" }, // 1722189520
		{ &Z_Construct_UFunction_AACFCharacter_GetCurrentActionState, "GetCurrentActionState" }, // 1000042089
		{ &Z_Construct_UFunction_AACFCharacter_GetCurrentMaxSpeed, "GetCurrentMaxSpeed" }, // 178080203
		{ &Z_Construct_UFunction_AACFCharacter_GetCurrentMoveset, "GetCurrentMoveset" }, // 3303615734
		{ &Z_Construct_UFunction_AACFCharacter_GetDamageHandlerComponent, "GetDamageHandlerComponent" }, // 3090155177
		{ &Z_Construct_UFunction_AACFCharacter_GetDamageZoneByBoneName, "GetDamageZoneByBoneName" }, // 1031763271
		{ &Z_Construct_UFunction_AACFCharacter_GetDeathType, "GetDeathType" }, // 4069325750
		{ &Z_Construct_UFunction_AACFCharacter_GetEnemiesCollisionChannel, "GetEnemiesCollisionChannel" }, // 4082088570
		{ &Z_Construct_UFunction_AACFCharacter_GetEntityCombatTeam, "GetEntityCombatTeam" }, // 1213498852
		{ &Z_Construct_UFunction_AACFCharacter_GetEntityExtentRadius, "GetEntityExtentRadius" }, // 2386208430
		{ &Z_Construct_UFunction_AACFCharacter_GetEquipmentComponent, "GetEquipmentComponent" }, // 2117653866
		{ &Z_Construct_UFunction_AACFCharacter_GetFallDamageFromDistance, "GetFallDamageFromDistance" }, // 1466987748
		{ &Z_Construct_UFunction_AACFCharacter_GetIsDead, "GetIsDead" }, // 70528118
		{ &Z_Construct_UFunction_AACFCharacter_GetJogSpeed, "GetJogSpeed" }, // 1296380168
		{ &Z_Construct_UFunction_AACFCharacter_GetLastDamageInfo, "GetLastDamageInfo" }, // 1551611190
		{ &Z_Construct_UFunction_AACFCharacter_GetMainMesh, "GetMainMesh" }, // 284808073
		{ &Z_Construct_UFunction_AACFCharacter_GetMotionWarpComponent, "GetMotionWarpComponent" }, // 3843470048
		{ &Z_Construct_UFunction_AACFCharacter_GetRagdollComponent, "GetRagdollComponent" }, // 3863783480
		{ &Z_Construct_UFunction_AACFCharacter_GetRelativeTargetDirection, "GetRelativeTargetDirection" }, // 2846519206
		{ &Z_Construct_UFunction_AACFCharacter_GetSprintSpeed, "GetSprintSpeed" }, // 3629424697
		{ &Z_Construct_UFunction_AACFCharacter_GetStatisticsComponent, "GetStatisticsComponent" }, // 393637080
		{ &Z_Construct_UFunction_AACFCharacter_GetTarget, "GetTarget" }, // 3429399623
		{ &Z_Construct_UFunction_AACFCharacter_GetTargetingComponent, "GetTargetingComponent" }, // 705846893
		{ &Z_Construct_UFunction_AACFCharacter_GetWalkSpeed, "GetWalkSpeed" }, // 1337540911
		{ &Z_Construct_UFunction_AACFCharacter_HandleAttackHit, "HandleAttackHit" }, // 3387295419
		{ &Z_Construct_UFunction_AACFCharacter_HandleCharacterDeath, "HandleCharacterDeath" }, // 3482808603
		{ &Z_Construct_UFunction_AACFCharacter_HandleDamageReceived, "HandleDamageReceived" }, // 3619039331
		{ &Z_Construct_UFunction_AACFCharacter_HandleEquipmentChanged, "HandleEquipmentChanged" }, // 1680375804
		{ &Z_Construct_UFunction_AACFCharacter_InitializeCharacter, "InitializeCharacter" }, // 2107110947
		{ &Z_Construct_UFunction_AACFCharacter_IsAlive, "IsAlive" }, // 149672073
		{ &Z_Construct_UFunction_AACFCharacter_IsEntityAlive, "IsEntityAlive" }, // 797806434
		{ &Z_Construct_UFunction_AACFCharacter_IsImmortal, "IsImmortal" }, // 3360915886
		{ &Z_Construct_UFunction_AACFCharacter_IsMyEnemy, "IsMyEnemy" }, // 4037317386
		{ &Z_Construct_UFunction_AACFCharacter_IsRanged, "IsRanged" }, // 2100303379
		{ &Z_Construct_UFunction_AACFCharacter_KillCharacter, "KillCharacter" }, // 1340055266
		{ &Z_Construct_UFunction_AACFCharacter_MulticastPlayAnimMontage, "MulticastPlayAnimMontage" }, // 3240196821
		{ &Z_Construct_UFunction_AACFCharacter_OnActorLoaded, "OnActorLoaded" }, // 729656540
		{ &Z_Construct_UFunction_AACFCharacter_OnActorSaved, "OnActorSaved" }, // 864296097
		{ &Z_Construct_UFunction_AACFCharacter_OnCharacterDeath, "OnCharacterDeath" }, // 658075005
		{ &Z_Construct_UFunction_AACFCharacter_OnRep_ReplicatedAcceleration, "OnRep_ReplicatedAcceleration" }, // 2797927563
		{ &Z_Construct_UFunction_AACFCharacter_ReviveCharacter, "ReviveCharacter" }, // 2951460475
		{ &Z_Construct_UFunction_AACFCharacter_ServerSendPlayMontage, "ServerSendPlayMontage" }, // 3081310980
		{ &Z_Construct_UFunction_AACFCharacter_SetCharacterName, "SetCharacterName" }, // 3714629110
		{ &Z_Construct_UFunction_AACFCharacter_SetDeathType, "SetDeathType" }, // 2726140136
		{ &Z_Construct_UFunction_AACFCharacter_SetIsImmortal, "SetIsImmortal" }, // 280707055
		{ &Z_Construct_UFunction_AACFCharacter_SetupCollisionManager, "SetupCollisionManager" }, // 142146152
		{ &Z_Construct_UFunction_AACFCharacter_SwitchMoveset, "SwitchMoveset" }, // 4176931309
		{ &Z_Construct_UFunction_AACFCharacter_SwitchMovesetActions, "SwitchMovesetActions" }, // 2373661818
		{ &Z_Construct_UFunction_AACFCharacter_SwitchOverlay, "SwitchOverlay" }, // 1118867575
		{ &Z_Construct_UFunction_AACFCharacter_TriggerAction, "TriggerAction" }, // 2532673599
		{ &Z_Construct_UFunction_AACFCharacter_TryJump, "TryJump" }, // 1719571511
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/ACFCharacter.h" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Name Displayed in UI*/" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
		{ "ToolTip", "Name Displayed in UI" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0020080001010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_CharacterName_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_CharacterName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_ValueProp = { "BoneNameToDamageZoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_AscentCombatFramework_EDamageZone, METADATA_PARAMS(0, nullptr) }; // 3143454798
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_Key_KeyProp = { "BoneNameToDamageZoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap = { "BoneNameToDamageZoneMap", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, BoneNameToDamageZoneMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_MetaData) }; // 3143454798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageDistanceThreshold_MetaData[] = {
		{ "Category", "ACF | Fall" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageDistanceThreshold = { "FallDamageDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, FallDamageDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageDistanceThreshold_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageDistanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageByFallDistance_MetaData[] = {
		{ "Category", "ACF | Fall" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageByFallDistance = { "FallDamageByFallDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, FallDamageByFallDistance), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageByFallDistance_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageByFallDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand_MetaData[] = {
		{ "Category", "ACF | Fall" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand_SetBit(void* Obj)
	{
		((AACFCharacter*)Obj)->bTriggerActionOnLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand = { "bTriggerActionOnLand", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFCharacter), &Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallHeightToTriggerAction_MetaData[] = {
		{ "Category", "ACF | Fall" },
		{ "EditCondition", "bTriggerActionOnLand" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallHeightToTriggerAction = { "FallHeightToTriggerAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, FallHeightToTriggerAction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallHeightToTriggerAction_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallHeightToTriggerAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsToTriggerOnLand_MetaData[] = {
		{ "Category", "ACF | Fall" },
		{ "EditCondition", "bTriggerActionOnLand" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsToTriggerOnLand = { "ActionsToTriggerOnLand", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, ActionsToTriggerOnLand), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsToTriggerOnLand_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsToTriggerOnLand_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Actions Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsComp = { "ActionsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, ActionsComp), Z_Construct_UClass_UACFActionsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_LocomotionComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Character Movement Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_LocomotionComp = { "LocomotionComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, LocomotionComp), Z_Construct_UClass_UACFCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_LocomotionComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_LocomotionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_StatisticsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Statistics Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_StatisticsComp = { "StatisticsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, StatisticsComp), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_StatisticsComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_StatisticsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Collisions ManagerComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, CollisionComp), Z_Construct_UClass_UACMCollisionManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_CollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_EquipmentComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Equipment & Inventory Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_EquipmentComp = { "EquipmentComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, EquipmentComp), Z_Construct_UClass_UACFEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_EquipmentComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_EquipmentComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_EffetsComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF VFX & SFX Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_EffetsComp = { "EffetsComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, EffetsComp), Z_Construct_UClass_UACFEffectsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_EffetsComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_EffetsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_DamageHandlerComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Damage Handler Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_DamageHandlerComp = { "DamageHandlerComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, DamageHandlerComp), Z_Construct_UClass_UACFDamageHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_DamageHandlerComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_DamageHandlerComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_RagdollComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Ragdoll Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_RagdollComp = { "RagdollComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, RagdollComp), Z_Construct_UClass_UACFRagdollComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_RagdollComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_RagdollComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_MotionWarpComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "DisplayName", "ACF Motion Warp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_MotionWarpComp = { "MotionWarpComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, MotionWarpComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_MotionWarpComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_MotionWarpComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "//     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ACF)\n//     TObjectPtr<class UAbilitySystemComponent> GASComp;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ACF)\nTObjectPtr<class UAbilitySystemComponent> GASComp;" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_AIPerceptionStimuliSource = { "AIPerceptionStimuliSource", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, AIPerceptionStimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_AudioComp_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_AudioComp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType = { "CombatType", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, CombatType), Z_Construct_UEnum_AscentCombatFramework_ECombatType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType_MetaData) }; // 1410424927
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType_MetaData[] = {
		{ "Category", "ACF | Death" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType = { "DeathType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, DeathType), Z_Construct_UEnum_AscentCombatFramework_EDeathType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType_MetaData) }; // 2322131908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath_MetaData[] = {
		{ "Category", "ACF | Death" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath_SetBit(void* Obj)
	{
		((AACFCharacter*)Obj)->bAutoDestroyOnDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath = { "bAutoDestroyOnDeath", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFCharacter), &Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_DestroyTimeOnDeath_MetaData[] = {
		{ "Category", "ACF | Death" },
		{ "EditCondition", "bAutoDestroyOnDeath" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_DestroyTimeOnDeath = { "DestroyTimeOnDeath", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, DestroyTimeOnDeath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_DestroyTimeOnDeath_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_DestroyTimeOnDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath_MetaData[] = {
		{ "Category", "ACF | Death" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath_SetBit(void* Obj)
	{
		((AACFCharacter*)Obj)->bDisableCapsuleOnDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath = { "bDisableCapsuleOnDeath", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFCharacter), &Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal_SetBit(void* Obj)
	{
		((AACFCharacter*)Obj)->bIsImmortal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal = { "bIsImmortal", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFCharacter), &Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam = { "CombatTeam", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, CombatTeam), Z_Construct_UEnum_AscentCoreInterfaces_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam_MetaData) }; // 2489062856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", "OnRep_ReplicatedAcceleration", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, ReplicatedAcceleration), Z_Construct_UScriptStruct_FReplicatedAcceleration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData) }; // 2490072173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageReceived_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageReceived = { "OnDamageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnDamageReceived), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageReceived_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageReceived_MetaData) }; // 3555551665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnMovesetChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnMovesetChanged = { "OnMovesetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnMovesetChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnMovesetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnMovesetChanged_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnMovesetChanged_MetaData) }; // 3737015828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCombatTypeChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCombatTypeChanged = { "OnCombatTypeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnCombatTypeChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCombatTypeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCombatTypeChanged_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCombatTypeChanged_MetaData) }; // 442787072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageInflicted_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageInflicted = { "OnDamageInflicted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnDamageInflicted), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDamageInflicted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageInflicted_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageInflicted_MetaData) }; // 522750128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCharacterFullyInitialized_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCharacterFullyInitialized = { "OnCharacterFullyInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnCharacterFullyInitialized), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCharacterFullyInitialized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCharacterFullyInitialized_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCharacterFullyInitialized_MetaData) }; // 736816972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnTeamChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnTeamChanged), Z_Construct_UDelegateFunction_AscentCoreInterfaces_OnTeamChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnTeamChanged_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnTeamChanged_MetaData) }; // 1220871232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCrouchStateChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCrouchStateChanged = { "OnCrouchStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnCrouchStateChanged), Z_Construct_UDelegateFunction_AscentCombatFramework_OnCrouchStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCrouchStateChanged_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCrouchStateChanged_MetaData) }; // 2031533696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDeath_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Actors/ACFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFCharacter, OnDeath), Z_Construct_UDelegateFunction_AscentCombatFramework_OnDeathEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDeath_MetaData), Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDeath_MetaData) }; // 3277392460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_BoneNameToDamageZoneMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallDamageByFallDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_bTriggerActionOnLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_FallHeightToTriggerAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsToTriggerOnLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_ActionsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_LocomotionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_StatisticsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_EquipmentComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_EffetsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_DamageHandlerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_RagdollComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_MotionWarpComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_AIPerceptionStimuliSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_AudioComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_DeathType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_bAutoDestroyOnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_DestroyTimeOnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_bDisableCapsuleOnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_bIsImmortal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_CombatTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_ReplicatedAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnMovesetChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCombatTypeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDamageInflicted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCharacterFullyInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnTeamChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnCrouchStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacter_Statics::NewProp_OnDeath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFCharacter, IGenericTeamAgentInterface), false },  // 4142440172
			{ Z_Construct_UClass_UACFEntityInterface_NoRegister, (int32)VTABLE_OFFSET(AACFCharacter, IACFEntityInterface), false },  // 2418734386
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFCharacter_Statics::ClassParams = {
		&AACFCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFCharacter()
	{
		if (!Z_Registration_Info_UClass_AACFCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFCharacter.OuterSingleton, Z_Construct_UClass_AACFCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFCharacter.OuterSingleton;
	}
	template<> ASCENTCOMBATFRAMEWORK_API UClass* StaticClass<AACFCharacter>()
	{
		return AACFCharacter::StaticClass();
	}

	void AACFCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CombatType(TEXT("CombatType"));
		static const FName Name_CombatTeam(TEXT("CombatTeam"));
		static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));

		const bool bIsValid = true
			&& Name_CombatType == ClassReps[(int32)ENetFields_Private::CombatType].Property->GetFName()
			&& Name_CombatTeam == ClassReps[(int32)ENetFields_Private::CombatTeam].Property->GetFName()
			&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AACFCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFCharacter);
	AACFCharacter::~AACFCharacter() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFCharacter, AACFCharacter::StaticClass, TEXT("AACFCharacter"), &Z_Registration_Info_UClass_AACFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFCharacter), 2772482755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_275749862(TEXT("/Script/AscentCombatFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AscentCombatFramework_Public_Actors_ACFCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFCombatBehaviourComponent.h"
#include "ACFAITypes.h"
#include "AscentCombatFramework/Public/Game/ACFTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCombatBehaviourComponent() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCombatBehaviourComponent();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAICombatState();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAICombatStateConfig();
	AIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FConditions();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActionsChances();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UACFCombatBehaviourComponent::execGetIdealDistanceByCombatState)
	{
		P_GET_ENUM(EAICombatState,Z_Param_combatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIdealDistanceByCombatState(EAICombatState(Z_Param_combatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCombatBehaviourComponent::execGetBestCombatStateByTargetDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAICombatState*)Z_Param__Result=P_THIS->GetBestCombatStateByTargetDistance(Z_Param_targetDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCombatBehaviourComponent::execIsTargetInMeleeRange)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetInMeleeRange(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCombatBehaviourComponent::execTryExecuteConditionAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryExecuteConditionAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCombatBehaviourComponent::execTryExecuteActionByCombatState)
	{
		P_GET_ENUM(EAICombatState,Z_Param_combatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryExecuteActionByCombatState(EAICombatState(Z_Param_combatState));
		P_NATIVE_END;
	}
	void UACFCombatBehaviourComponent::StaticRegisterNativesUACFCombatBehaviourComponent()
	{
		UClass* Class = UACFCombatBehaviourComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBestCombatStateByTargetDistance", &UACFCombatBehaviourComponent::execGetBestCombatStateByTargetDistance },
			{ "GetIdealDistanceByCombatState", &UACFCombatBehaviourComponent::execGetIdealDistanceByCombatState },
			{ "IsTargetInMeleeRange", &UACFCombatBehaviourComponent::execIsTargetInMeleeRange },
			{ "TryExecuteActionByCombatState", &UACFCombatBehaviourComponent::execTryExecuteActionByCombatState },
			{ "TryExecuteConditionAction", &UACFCombatBehaviourComponent::execTryExecuteConditionAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics
	{
		struct ACFCombatBehaviourComponent_eventGetBestCombatStateByTargetDistance_Parms
		{
			float targetDistance;
			EAICombatState ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::NewProp_targetDistance = { "targetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCombatBehaviourComponent_eventGetBestCombatStateByTargetDistance_Parms, targetDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCombatBehaviourComponent_eventGetBestCombatStateByTargetDistance_Parms, ReturnValue), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(0, nullptr) }; // 3461070315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::NewProp_targetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCombatBehaviourComponent, nullptr, "GetBestCombatStateByTargetDistance", nullptr, nullptr, Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::ACFCombatBehaviourComponent_eventGetBestCombatStateByTargetDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::ACFCombatBehaviourComponent_eventGetBestCombatStateByTargetDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics
	{
		struct ACFCombatBehaviourComponent_eventGetIdealDistanceByCombatState_Parms
		{
			EAICombatState combatState;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_combatState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_combatState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::NewProp_combatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::NewProp_combatState = { "combatState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCombatBehaviourComponent_eventGetIdealDistanceByCombatState_Parms, combatState), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(0, nullptr) }; // 3461070315
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCombatBehaviourComponent_eventGetIdealDistanceByCombatState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::NewProp_combatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::NewProp_combatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCombatBehaviourComponent, nullptr, "GetIdealDistanceByCombatState", nullptr, nullptr, Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::ACFCombatBehaviourComponent_eventGetIdealDistanceByCombatState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::ACFCombatBehaviourComponent_eventGetIdealDistanceByCombatState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics
	{
		struct ACFCombatBehaviourComponent_eventIsTargetInMeleeRange_Parms
		{
			AActor* target;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCombatBehaviourComponent_eventIsTargetInMeleeRange_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCombatBehaviourComponent_eventIsTargetInMeleeRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCombatBehaviourComponent_eventIsTargetInMeleeRange_Parms), &Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCombatBehaviourComponent, nullptr, "IsTargetInMeleeRange", nullptr, nullptr, Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::ACFCombatBehaviourComponent_eventIsTargetInMeleeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::ACFCombatBehaviourComponent_eventIsTargetInMeleeRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics
	{
		struct ACFCombatBehaviourComponent_eventTryExecuteActionByCombatState_Parms
		{
			EAICombatState combatState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_combatState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_combatState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_combatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_combatState = { "combatState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFCombatBehaviourComponent_eventTryExecuteActionByCombatState_Parms, combatState), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(0, nullptr) }; // 3461070315
	void Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCombatBehaviourComponent_eventTryExecuteActionByCombatState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCombatBehaviourComponent_eventTryExecuteActionByCombatState_Parms), &Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_combatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_combatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCombatBehaviourComponent, nullptr, "TryExecuteActionByCombatState", nullptr, nullptr, Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::ACFCombatBehaviourComponent_eventTryExecuteActionByCombatState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::ACFCombatBehaviourComponent_eventTryExecuteActionByCombatState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics
	{
		struct ACFCombatBehaviourComponent_eventTryExecuteConditionAction_Parms
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
	void Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCombatBehaviourComponent_eventTryExecuteConditionAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFCombatBehaviourComponent_eventTryExecuteConditionAction_Parms), &Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCombatBehaviourComponent, nullptr, "TryExecuteConditionAction", nullptr, nullptr, Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::ACFCombatBehaviourComponent_eventTryExecuteConditionAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::ACFCombatBehaviourComponent_eventTryExecuteConditionAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFCombatBehaviourComponent);
	UClass* Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister()
	{
		return UACFCombatBehaviourComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCombatBehaviourComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCombatBehaviorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCombatBehaviorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultCombatBehaviorType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultCombatState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsWeapon_MetaData[];
#endif
		static void NewProp_bNeedsWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipMeleeAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipMeleeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipRangedAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipRangedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngagingAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngagingAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedBehaviors_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedBehaviors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedBehaviors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedBehaviors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CombatStatesConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatStatesConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CombatStatesConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionByCombatState_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionByCombatState_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionByCombatState_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionByCombatState_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActionByCombatState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionByCondition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionByCondition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionByCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aiController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCombatBehaviourComponent_GetBestCombatStateByTargetDistance, "GetBestCombatStateByTargetDistance" }, // 3834947079
		{ &Z_Construct_UFunction_UACFCombatBehaviourComponent_GetIdealDistanceByCombatState, "GetIdealDistanceByCombatState" }, // 3418160159
		{ &Z_Construct_UFunction_UACFCombatBehaviourComponent_IsTargetInMeleeRange, "IsTargetInMeleeRange" }, // 145547630
		{ &Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteActionByCombatState, "TryExecuteActionByCombatState" }, // 3258593975
		{ &Z_Construct_UFunction_UACFCombatBehaviourComponent_TryExecuteConditionAction, "TryExecuteConditionAction" }, // 2945055952
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/ACFCombatBehaviourComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The default combat behavior (melee/ranged) for this AI. Could change during combat if multiple \n\x09""behaviors have been defined in Allowed Behaviors*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "The default combat behavior (melee/ranged) for this AI. Could change during combat if multiple\n       behaviors have been defined in Allowed Behaviors" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType = { "DefaultCombatBehaviorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, DefaultCombatBehaviorType), Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType_MetaData) }; // 275714024
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The default combat state  for this AI, triggered once no other states are available*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "The default combat state  for this AI, triggered once no other states are available" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState = { "DefaultCombatState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, DefaultCombatState), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState_MetaData) }; // 3461070315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* If this ai needs an equipped weapon to start fighting*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "If this ai needs an equipped weapon to start fighting" },
	};
#endif
	void Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon_SetBit(void* Obj)
	{
		((UACFCombatBehaviourComponent*)Obj)->bNeedsWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon = { "bNeedsWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFCombatBehaviourComponent), &Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipMeleeAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Action to be triggered by this ai to equip a Melee weapon*/" },
		{ "EditCondition", "bNeedsWeapon" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "Action to be triggered by this ai to equip a Melee weapon" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipMeleeAction = { "EquipMeleeAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, EquipMeleeAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipMeleeAction_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipMeleeAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipRangedAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Action to be triggered by this ai to equip a Ranged weapon*/" },
		{ "EditCondition", "bNeedsWeapon" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "Action to be triggered by this ai to equip a Ranged weapon" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipRangedAction = { "EquipRangedAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, EquipRangedAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipRangedAction_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipRangedAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EngagingAction_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* Action to be triggered when combat starts*/" },
		{ "EditCondition", "bNeedsWeapon" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "Action to be triggered when combat starts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EngagingAction = { "EngagingAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, EngagingAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EngagingAction_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EngagingAction_MetaData) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_Inner = { "AllowedBehaviors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AscentCombatFramework_ECombatBehaviorType, METADATA_PARAMS(0, nullptr) }; // 275714024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/* The allowed combat behaviors (melee / ranged) of this AI*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "The allowed combat behaviors (melee / ranged) of this AI" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors = { "AllowedBehaviors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, AllowedBehaviors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_MetaData) }; // 275714024
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig_Inner = { "CombatStatesConfig", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAICombatStateConfig, METADATA_PARAMS(0, nullptr) }; // 313810226
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Configuration of each Combat State*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "Configuration of each Combat State" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig = { "CombatStatesConfig", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, CombatStatesConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig_MetaData) }; // 313810226
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_ValueProp = { "ActionByCombatState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActionsChances, METADATA_PARAMS(0, nullptr) }; // 2154574099
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_Key_KeyProp = { "ActionByCombatState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(0, nullptr) }; // 3461070315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_MetaData[] = {
		{ "Category", "ACF | Actions" },
		{ "Comment", "/*The actions that should be performed by the AI for every combat state */" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "The actions that should be performed by the AI for every combat state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState = { "ActionByCombatState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, ActionByCombatState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_MetaData) }; // 3461070315 2154574099
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition_Inner = { "ActionByCondition", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConditions, METADATA_PARAMS(0, nullptr) }; // 1314434686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition_MetaData[] = {
		{ "Category", "ACF | Actions" },
		{ "Comment", "/*Generic conditionals action you can define by creating your own ActionCondition class*/" },
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
		{ "ToolTip", "Generic conditionals action you can define by creating your own ActionCondition class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition = { "ActionByCondition", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, ActionByCondition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition_MetaData) }; // 1314434686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_characterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_characterOwner = { "characterOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, characterOwner), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_characterOwner_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_characterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFCombatBehaviourComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFCombatBehaviourComponent, aiController), Z_Construct_UClass_AACFAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_aiController_MetaData), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_aiController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatBehaviorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_DefaultCombatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_bNeedsWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipMeleeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EquipRangedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_EngagingAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_AllowedBehaviors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_CombatStatesConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCombatState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_ActionByCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_characterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::NewProp_aiController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCombatBehaviourComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::ClassParams = {
		&UACFCombatBehaviourComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFCombatBehaviourComponent()
	{
		if (!Z_Registration_Info_UClass_UACFCombatBehaviourComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFCombatBehaviourComponent.OuterSingleton, Z_Construct_UClass_UACFCombatBehaviourComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFCombatBehaviourComponent.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<UACFCombatBehaviourComponent>()
	{
		return UACFCombatBehaviourComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCombatBehaviourComponent);
	UACFCombatBehaviourComponent::~UACFCombatBehaviourComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFCombatBehaviourComponent, UACFCombatBehaviourComponent::StaticClass, TEXT("UACFCombatBehaviourComponent"), &Z_Registration_Info_UClass_UACFCombatBehaviourComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFCombatBehaviourComponent), 2842067910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_1320465740(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_Components_ACFCombatBehaviourComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

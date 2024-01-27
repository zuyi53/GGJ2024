// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACFAIController.h"
#include "AscentCombatFramework/Public/Game/ACFDamageType.h"
#include "GameplayTagContainer.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAIController() {}
// Cross Module References
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFAIController_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFBaseAIController();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_AACFPatrolPath_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFCommandsManagerComponent_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAgentInterface_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFGroupAIComponent_NoRegister();
	AIFRAMEWORK_API UClass* Z_Construct_UClass_UACFThreatManagerComponent_NoRegister();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAICombatState();
	AIFRAMEWORK_API UEnum* Z_Construct_UEnum_AIFramework_EAIState();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature();
	AIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ASCENTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_AACFCharacter_NoRegister();
	ASCENTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FACFDamageEvent();
	CHARACTERCONTROLLER_API UEnum* Z_Construct_UEnum_CharacterController_ELocomotionState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UATSAITargetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnAIStateChanged_Parms
		{
			EAIState AIState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AIState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AIState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState = { "AIState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnAIStateChanged_Parms, AIState), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState_MetaData), Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState_MetaData) }; // 1319398043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::NewProp_AIState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAIStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::_Script_AIFramework_eventOnAIStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::_Script_AIFramework_eventOnAIStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAIStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAIStateChanged, const EAIState AIState)
{
	struct _Script_AIFramework_eventOnAIStateChanged_Parms
	{
		EAIState AIState;
	};
	_Script_AIFramework_eventOnAIStateChanged_Parms Parms;
	Parms.AIState=AIState;
	OnAIStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics
	{
		struct _Script_AIFramework_eventOnAICombatStateChanged_Parms
		{
			EAICombatState AICombatState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AICombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AICombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AICombatState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState = { "AICombatState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIFramework_eventOnAICombatStateChanged_Parms, AICombatState), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState_MetaData), Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState_MetaData) }; // 3461070315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::NewProp_AICombatState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIFramework, nullptr, "OnAICombatStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::_Script_AIFramework_eventOnAICombatStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::_Script_AIFramework_eventOnAICombatStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAICombatStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAICombatStateChanged, const EAICombatState AICombatState)
{
	struct _Script_AIFramework_eventOnAICombatStateChanged_Parms
	{
		EAICombatState AICombatState;
	};
	_Script_AIFramework_eventOnAICombatStateChanged_Parms Parms;
	Parms.AICombatState=AICombatState;
	OnAICombatStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AACFAIController::execTriggerCommand)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCommand(Z_Param_Out_command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execRequestAnotherTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestAnotherTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execHasTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetPatrolPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFPatrolPath**)Z_Param__Result=P_THIS->GetPatrolPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetPatrolPath)
	{
		P_GET_OBJECT(AACFPatrolPath,Z_Param_inPatrol);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolPath(Z_Param_inPatrol);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetPathDistanceFromTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPathDistanceFromTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execTryGoToNextWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGoToNextWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetHomeLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHomeLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execTryUpdateLeadRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryUpdateLeadRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execTeleportNearLead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportNearLead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetHomeDistanceBK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHomeDistanceBK(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetLeadActorDistanceBK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeadActorDistanceBK(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetIsPausedBK)
	{
		P_GET_UBOOL(Z_Param_isPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPausedBK(Z_Param_isPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetTargetActorDistanceBK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActorDistanceBK(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetTargetPointDistanceBK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetPointDistanceBK(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetCombatStateBK)
	{
		P_GET_ENUM(EAICombatState,Z_Param_combatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCombatStateBK(EAICombatState(Z_Param_combatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetCurrentAIStateBK)
	{
		P_GET_ENUM(EAIState,Z_Param_aiState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAIStateBK(EAIState(Z_Param_aiState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetTargetActorBK)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActorBK(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetLeadActorBK)
	{
		P_GET_OBJECT(AActor,Z_Param_leadActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeadActorBK(Z_Param_leadActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetTargetLocationBK)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_targetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocationBK(Z_Param_Out_targetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetHomeDistanceBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHomeDistanceBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetLeadActorDistanceBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeadActorDistanceBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetTargetPointDistanceBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetPointDistanceBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetTargetActorDistanceBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetActorDistanceBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetLeadActorBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetLeadActorBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetIsPausedBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPausedBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetTargetPointLocationBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTargetPointLocationBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetTargetActorBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetActorBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetAIStateBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAIState*)Z_Param__Result=P_THIS->GetAIStateBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetCombatStateBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAICombatState*)Z_Param__Result=P_THIS->GetCombatStateBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetCommandDurationTimeBK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCommandDurationTimeBK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetWaitDurationTimeBK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaitDurationTimeBK(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execResetToDefaultState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execSetDefaultState)
	{
		P_GET_ENUM(EAIState,Z_Param_inDefaultState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultState(EAIState(Z_Param_inDefaultState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetDefaultAIState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAIState*)Z_Param__Result=P_THIS->GetDefaultAIState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execShouldTeleportNearLead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldTeleportNearLead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execShouldReturnHome)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldReturnHome();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetBehaviorTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBehaviorTree**)Z_Param__Result=P_THIS->GetBehaviorTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetBehaviorThreeComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBehaviorTreeComponent**)Z_Param__Result=P_THIS->GetBehaviorThreeComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetIndexInGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexInGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetLoseTargetDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLoseTargetDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetTeleportLeadDistanceTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTeleportLeadDistanceTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetMaxDistanceFromHome)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDistanceFromHome();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetThreatManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFThreatManagerComponent**)Z_Param__Result=P_THIS->GetThreatManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetCommandManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFCommandsManagerComponent**)Z_Param__Result=P_THIS->GetCommandManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetCombatBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFCombatBehaviourComponent**)Z_Param__Result=P_THIS->GetCombatBehavior();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetBaseAICharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AACFCharacter**)Z_Param__Result=P_THIS->GetBaseAICharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execOnTargetDeathHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDeathHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execHandleCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCharacterDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execHandleCharacterHit)
	{
		P_GET_STRUCT_REF(FACFDamageEvent,Z_Param_Out_damageReceived);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCharacterHit(Z_Param_Out_damageReceived);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execHandleMaxThreatUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_newMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMaxThreatUpdated(Z_Param_newMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execHandlePerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execIsPartOfGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartOfGroup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AACFAIController::execGetOwningGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFGroupAIComponent**)Z_Param__Result=P_THIS->GetOwningGroup_Implementation();
		P_NATIVE_END;
	}
	struct ACFAIController_eventGetOwningGroup_Parms
	{
		UACFGroupAIComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		ACFAIController_eventGetOwningGroup_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ACFAIController_eventIsPartOfGroup_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ACFAIController_eventIsPartOfGroup_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AACFAIController_GetOwningGroup = FName(TEXT("GetOwningGroup"));
	UACFGroupAIComponent* AACFAIController::GetOwningGroup()
	{
		ACFAIController_eventGetOwningGroup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFAIController_GetOwningGroup),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AACFAIController_IsPartOfGroup = FName(TEXT("IsPartOfGroup"));
	bool AACFAIController::IsPartOfGroup()
	{
		ACFAIController_eventIsPartOfGroup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AACFAIController_IsPartOfGroup),&Parms);
		return !!Parms.ReturnValue;
	}
	void AACFAIController::StaticRegisterNativesAACFAIController()
	{
		UClass* Class = AACFAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAIStateBK", &AACFAIController::execGetAIStateBK },
			{ "GetBaseAICharacter", &AACFAIController::execGetBaseAICharacter },
			{ "GetBehaviorThreeComponent", &AACFAIController::execGetBehaviorThreeComponent },
			{ "GetBehaviorTree", &AACFAIController::execGetBehaviorTree },
			{ "GetCombatBehavior", &AACFAIController::execGetCombatBehavior },
			{ "GetCombatStateBK", &AACFAIController::execGetCombatStateBK },
			{ "GetCommandDurationTimeBK", &AACFAIController::execGetCommandDurationTimeBK },
			{ "GetCommandManager", &AACFAIController::execGetCommandManager },
			{ "GetDefaultAIState", &AACFAIController::execGetDefaultAIState },
			{ "GetGroup", &AACFAIController::execGetGroup },
			{ "GetHomeDistanceBK", &AACFAIController::execGetHomeDistanceBK },
			{ "GetHomeLocation", &AACFAIController::execGetHomeLocation },
			{ "GetIndexInGroup", &AACFAIController::execGetIndexInGroup },
			{ "GetIsPausedBK", &AACFAIController::execGetIsPausedBK },
			{ "GetLeadActorBK", &AACFAIController::execGetLeadActorBK },
			{ "GetLeadActorDistanceBK", &AACFAIController::execGetLeadActorDistanceBK },
			{ "GetLoseTargetDistance", &AACFAIController::execGetLoseTargetDistance },
			{ "GetMaxDistanceFromHome", &AACFAIController::execGetMaxDistanceFromHome },
			{ "GetOwningGroup", &AACFAIController::execGetOwningGroup },
			{ "GetPathDistanceFromTarget", &AACFAIController::execGetPathDistanceFromTarget },
			{ "GetPatrolPath", &AACFAIController::execGetPatrolPath },
			{ "GetTarget", &AACFAIController::execGetTarget },
			{ "GetTargetActorBK", &AACFAIController::execGetTargetActorBK },
			{ "GetTargetActorDistanceBK", &AACFAIController::execGetTargetActorDistanceBK },
			{ "GetTargetPointDistanceBK", &AACFAIController::execGetTargetPointDistanceBK },
			{ "GetTargetPointLocationBK", &AACFAIController::execGetTargetPointLocationBK },
			{ "GetTeleportLeadDistanceTrigger", &AACFAIController::execGetTeleportLeadDistanceTrigger },
			{ "GetThreatManager", &AACFAIController::execGetThreatManager },
			{ "HandleCharacterDeath", &AACFAIController::execHandleCharacterDeath },
			{ "HandleCharacterHit", &AACFAIController::execHandleCharacterHit },
			{ "HandleMaxThreatUpdated", &AACFAIController::execHandleMaxThreatUpdated },
			{ "HandlePerceptionUpdated", &AACFAIController::execHandlePerceptionUpdated },
			{ "HasTarget", &AACFAIController::execHasTarget },
			{ "IsPartOfGroup", &AACFAIController::execIsPartOfGroup },
			{ "OnTargetDeathHandle", &AACFAIController::execOnTargetDeathHandle },
			{ "RequestAnotherTarget", &AACFAIController::execRequestAnotherTarget },
			{ "ResetToDefaultState", &AACFAIController::execResetToDefaultState },
			{ "SetCombatStateBK", &AACFAIController::execSetCombatStateBK },
			{ "SetCurrentAIStateBK", &AACFAIController::execSetCurrentAIStateBK },
			{ "SetDefaultState", &AACFAIController::execSetDefaultState },
			{ "SetHomeDistanceBK", &AACFAIController::execSetHomeDistanceBK },
			{ "SetIsPausedBK", &AACFAIController::execSetIsPausedBK },
			{ "SetLeadActorBK", &AACFAIController::execSetLeadActorBK },
			{ "SetLeadActorDistanceBK", &AACFAIController::execSetLeadActorDistanceBK },
			{ "SetPatrolPath", &AACFAIController::execSetPatrolPath },
			{ "SetTarget", &AACFAIController::execSetTarget },
			{ "SetTargetActorBK", &AACFAIController::execSetTargetActorBK },
			{ "SetTargetActorDistanceBK", &AACFAIController::execSetTargetActorDistanceBK },
			{ "SetTargetLocationBK", &AACFAIController::execSetTargetLocationBK },
			{ "SetTargetPointDistanceBK", &AACFAIController::execSetTargetPointDistanceBK },
			{ "SetWaitDurationTimeBK", &AACFAIController::execSetWaitDurationTimeBK },
			{ "ShouldReturnHome", &AACFAIController::execShouldReturnHome },
			{ "ShouldTeleportNearLead", &AACFAIController::execShouldTeleportNearLead },
			{ "TeleportNearLead", &AACFAIController::execTeleportNearLead },
			{ "TriggerCommand", &AACFAIController::execTriggerCommand },
			{ "TryGoToNextWaypoint", &AACFAIController::execTryGoToNextWaypoint },
			{ "TryUpdateLeadRef", &AACFAIController::execTryUpdateLeadRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics
	{
		struct ACFAIController_eventGetAIStateBK_Parms
		{
			EAIState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetAIStateBK_Parms, ReturnValue), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(0, nullptr) }; // 1319398043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetAIStateBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::ACFAIController_eventGetAIStateBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::ACFAIController_eventGetAIStateBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetAIStateBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetAIStateBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics
	{
		struct ACFAIController_eventGetBaseAICharacter_Parms
		{
			AACFCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetBaseAICharacter_Parms, ReturnValue), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetBaseAICharacter", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::ACFAIController_eventGetBaseAICharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::ACFAIController_eventGetBaseAICharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetBaseAICharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetBaseAICharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics
	{
		struct ACFAIController_eventGetBehaviorThreeComponent_Parms
		{
			UBehaviorTreeComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetBehaviorThreeComponent_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetBehaviorThreeComponent", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::ACFAIController_eventGetBehaviorThreeComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::ACFAIController_eventGetBehaviorThreeComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics
	{
		struct ACFAIController_eventGetBehaviorTree_Parms
		{
			UBehaviorTree* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetBehaviorTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::ACFAIController_eventGetBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::ACFAIController_eventGetBehaviorTree_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics
	{
		struct ACFAIController_eventGetCombatBehavior_Parms
		{
			UACFCombatBehaviourComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetCombatBehavior_Parms, ReturnValue), Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetCombatBehavior", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::ACFAIController_eventGetCombatBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::ACFAIController_eventGetCombatBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetCombatBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetCombatBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics
	{
		struct ACFAIController_eventGetCombatStateBK_Parms
		{
			EAICombatState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetCombatStateBK_Parms, ReturnValue), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(0, nullptr) }; // 3461070315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetCombatStateBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::ACFAIController_eventGetCombatStateBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::ACFAIController_eventGetCombatStateBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetCombatStateBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetCombatStateBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics
	{
		struct ACFAIController_eventGetCommandDurationTimeBK_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetCommandDurationTimeBK_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetCommandDurationTimeBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::ACFAIController_eventGetCommandDurationTimeBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::ACFAIController_eventGetCommandDurationTimeBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics
	{
		struct ACFAIController_eventGetCommandManager_Parms
		{
			UACFCommandsManagerComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetCommandManager_Parms, ReturnValue), Z_Construct_UClass_UACFCommandsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetCommandManager", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::ACFAIController_eventGetCommandManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::ACFAIController_eventGetCommandManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetCommandManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetCommandManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics
	{
		struct ACFAIController_eventGetDefaultAIState_Parms
		{
			EAIState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetDefaultAIState_Parms, ReturnValue), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(0, nullptr) }; // 1319398043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetDefaultAIState", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::ACFAIController_eventGetDefaultAIState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::ACFAIController_eventGetDefaultAIState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetDefaultAIState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetDefaultAIState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetGroup_Statics
	{
		struct ACFAIController_eventGetGroup_Parms
		{
			UACFGroupAIComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetGroup_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIController_GetGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetGroup", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetGroup_Statics::ACFAIController_eventGetGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetGroup_Statics::ACFAIController_eventGetGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics
	{
		struct ACFAIController_eventGetHomeDistanceBK_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetHomeDistanceBK_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetHomeDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::ACFAIController_eventGetHomeDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::ACFAIController_eventGetHomeDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics
	{
		struct ACFAIController_eventGetHomeLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetHomeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Home" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetHomeLocation", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::ACFAIController_eventGetHomeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::ACFAIController_eventGetHomeLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetHomeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetHomeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics
	{
		struct ACFAIController_eventGetIndexInGroup_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetIndexInGroup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetIndexInGroup", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::ACFAIController_eventGetIndexInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::ACFAIController_eventGetIndexInGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetIndexInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetIndexInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics
	{
		struct ACFAIController_eventGetIsPausedBK_Parms
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
	void Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventGetIsPausedBK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventGetIsPausedBK_Parms), &Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetIsPausedBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::ACFAIController_eventGetIsPausedBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::ACFAIController_eventGetIsPausedBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetIsPausedBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetIsPausedBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics
	{
		struct ACFAIController_eventGetLeadActorBK_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetLeadActorBK_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetLeadActorBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::ACFAIController_eventGetLeadActorBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::ACFAIController_eventGetLeadActorBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetLeadActorBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetLeadActorBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics
	{
		struct ACFAIController_eventGetLeadActorDistanceBK_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetLeadActorDistanceBK_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetLeadActorDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::ACFAIController_eventGetLeadActorDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::ACFAIController_eventGetLeadActorDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics
	{
		struct ACFAIController_eventGetLoseTargetDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetLoseTargetDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetLoseTargetDistance", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::ACFAIController_eventGetLoseTargetDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::ACFAIController_eventGetLoseTargetDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics
	{
		struct ACFAIController_eventGetMaxDistanceFromHome_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetMaxDistanceFromHome_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetMaxDistanceFromHome", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::ACFAIController_eventGetMaxDistanceFromHome_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::ACFAIController_eventGetMaxDistanceFromHome_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetOwningGroup_Parms, ReturnValue), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Group" },
		{ "Comment", "/// <summary>\n/// /Groupable Entity Interface\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "<summary>\n/Groupable Entity Interface\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetOwningGroup", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::PropPointers), sizeof(ACFAIController_eventGetOwningGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIController_eventGetOwningGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetOwningGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetOwningGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics
	{
		struct ACFAIController_eventGetPathDistanceFromTarget_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetPathDistanceFromTarget_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Patrol" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetPathDistanceFromTarget", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::ACFAIController_eventGetPathDistanceFromTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::ACFAIController_eventGetPathDistanceFromTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics
	{
		struct ACFAIController_eventGetPatrolPath_Parms
		{
			AACFPatrolPath* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetPatrolPath_Parms, ReturnValue), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Patrol" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetPatrolPath", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::ACFAIController_eventGetPatrolPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::ACFAIController_eventGetPatrolPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetTarget_Statics
	{
		struct ACFAIController_eventGetTarget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Target" },
		{ "Comment", "/*Returns the actor targeted by this AI as set in the ATSTargetComponent*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Returns the actor targeted by this AI as set in the ATSTargetComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetTarget_Statics::ACFAIController_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetTarget_Statics::ACFAIController_eventGetTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics
	{
		struct ACFAIController_eventGetTargetActorBK_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetTargetActorBK_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetTargetActorBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::ACFAIController_eventGetTargetActorBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::ACFAIController_eventGetTargetActorBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetTargetActorBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetTargetActorBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics
	{
		struct ACFAIController_eventGetTargetActorDistanceBK_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetTargetActorDistanceBK_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetTargetActorDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::ACFAIController_eventGetTargetActorDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::ACFAIController_eventGetTargetActorDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics
	{
		struct ACFAIController_eventGetTargetPointDistanceBK_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetTargetPointDistanceBK_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetTargetPointDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::ACFAIController_eventGetTargetPointDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::ACFAIController_eventGetTargetPointDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics
	{
		struct ACFAIController_eventGetTargetPointLocationBK_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetTargetPointLocationBK_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetTargetPointLocationBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::ACFAIController_eventGetTargetPointLocationBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::ACFAIController_eventGetTargetPointLocationBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics
	{
		struct ACFAIController_eventGetTeleportLeadDistanceTrigger_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetTeleportLeadDistanceTrigger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetTeleportLeadDistanceTrigger", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::ACFAIController_eventGetTeleportLeadDistanceTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::ACFAIController_eventGetTeleportLeadDistanceTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics
	{
		struct ACFAIController_eventGetThreatManager_Parms
		{
			UACFThreatManagerComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventGetThreatManager_Parms, ReturnValue), Z_Construct_UClass_UACFThreatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "GetThreatManager", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::ACFAIController_eventGetThreatManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::ACFAIController_eventGetThreatManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_GetThreatManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_GetThreatManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_HandleCharacterDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_HandleCharacterDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_HandleCharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "HandleCharacterDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_HandleCharacterDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIController_HandleCharacterDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_HandleCharacterDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics
	{
		struct ACFAIController_eventHandleCharacterHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::NewProp_damageReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::NewProp_damageReceived = { "damageReceived", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventHandleCharacterHit_Parms, damageReceived), Z_Construct_UScriptStruct_FACFDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::NewProp_damageReceived_MetaData), Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::NewProp_damageReceived_MetaData) }; // 4032775443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::NewProp_damageReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "HandleCharacterHit", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::ACFAIController_eventHandleCharacterHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::ACFAIController_eventHandleCharacterHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_HandleCharacterHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_HandleCharacterHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics
	{
		struct ACFAIController_eventHandleMaxThreatUpdated_Parms
		{
			AActor* newMax;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::NewProp_newMax = { "newMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventHandleMaxThreatUpdated_Parms, newMax), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::NewProp_newMax,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "HandleMaxThreatUpdated", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::ACFAIController_eventHandleMaxThreatUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::ACFAIController_eventHandleMaxThreatUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics
	{
		struct ACFAIController_eventHandlePerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventHandlePerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventHandlePerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "HandlePerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::ACFAIController_eventHandlePerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::ACFAIController_eventHandlePerceptionUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_HasTarget_Statics
	{
		struct ACFAIController_eventHasTarget_Parms
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
	void Z_Construct_UFunction_AACFAIController_HasTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventHasTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_HasTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventHasTarget_Parms), &Z_Construct_UFunction_AACFAIController_HasTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_HasTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_HasTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_HasTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Target" },
		{ "Comment", "/*Trues if this AI has a valid target*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Trues if this AI has a valid target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_HasTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "HasTarget", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_HasTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HasTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_HasTarget_Statics::ACFAIController_eventHasTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HasTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_HasTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_HasTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_HasTarget_Statics::ACFAIController_eventHasTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_HasTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_HasTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventIsPartOfGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventIsPartOfGroup_Parms), &Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Group" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "IsPartOfGroup", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::PropPointers), sizeof(ACFAIController_eventIsPartOfGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFAIController_eventIsPartOfGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_IsPartOfGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_IsPartOfGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "OnTargetDeathHandle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics
	{
		struct ACFAIController_eventRequestAnotherTarget_Parms
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
	void Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventRequestAnotherTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventRequestAnotherTarget_Parms), &Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Target" },
		{ "Comment", "/*Tries to request another target, returns true if a new target is found*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Tries to request another target, returns true if a new target is found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "RequestAnotherTarget", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::ACFAIController_eventRequestAnotherTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::ACFAIController_eventRequestAnotherTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_RequestAnotherTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_RequestAnotherTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_ResetToDefaultState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_ResetToDefaultState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | State" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_ResetToDefaultState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "ResetToDefaultState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ResetToDefaultState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_ResetToDefaultState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIController_ResetToDefaultState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_ResetToDefaultState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics
	{
		struct ACFAIController_eventSetCombatStateBK_Parms
		{
			EAICombatState combatState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_combatState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_combatState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::NewProp_combatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::NewProp_combatState = { "combatState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetCombatStateBK_Parms, combatState), Z_Construct_UEnum_AIFramework_EAICombatState, METADATA_PARAMS(0, nullptr) }; // 3461070315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::NewProp_combatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::NewProp_combatState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetCombatStateBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::ACFAIController_eventSetCombatStateBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::ACFAIController_eventSetCombatStateBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetCombatStateBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetCombatStateBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics
	{
		struct ACFAIController_eventSetCurrentAIStateBK_Parms
		{
			EAIState aiState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_aiState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aiState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::NewProp_aiState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::NewProp_aiState = { "aiState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetCurrentAIStateBK_Parms, aiState), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(0, nullptr) }; // 1319398043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::NewProp_aiState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::NewProp_aiState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetCurrentAIStateBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::ACFAIController_eventSetCurrentAIStateBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::ACFAIController_eventSetCurrentAIStateBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics
	{
		struct ACFAIController_eventSetDefaultState_Parms
		{
			EAIState inDefaultState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inDefaultState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_inDefaultState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::NewProp_inDefaultState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::NewProp_inDefaultState = { "inDefaultState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetDefaultState_Parms, inDefaultState), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(0, nullptr) }; // 1319398043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::NewProp_inDefaultState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::NewProp_inDefaultState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | State" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetDefaultState", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::ACFAIController_eventSetDefaultState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::ACFAIController_eventSetDefaultState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetDefaultState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetDefaultState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics
	{
		struct ACFAIController_eventSetHomeDistanceBK_Parms
		{
			float distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetHomeDistanceBK_Parms, distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetHomeDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::ACFAIController_eventSetHomeDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::ACFAIController_eventSetHomeDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics
	{
		struct ACFAIController_eventSetIsPausedBK_Parms
		{
			bool isPaused;
		};
		static void NewProp_isPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::NewProp_isPaused_SetBit(void* Obj)
	{
		((ACFAIController_eventSetIsPausedBK_Parms*)Obj)->isPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::NewProp_isPaused = { "isPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventSetIsPausedBK_Parms), &Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::NewProp_isPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::NewProp_isPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetIsPausedBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::ACFAIController_eventSetIsPausedBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::ACFAIController_eventSetIsPausedBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetIsPausedBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetIsPausedBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics
	{
		struct ACFAIController_eventSetLeadActorBK_Parms
		{
			AActor* leadActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leadActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::NewProp_leadActor = { "leadActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetLeadActorBK_Parms, leadActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::NewProp_leadActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetLeadActorBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::ACFAIController_eventSetLeadActorBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::ACFAIController_eventSetLeadActorBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetLeadActorBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetLeadActorBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics
	{
		struct ACFAIController_eventSetLeadActorDistanceBK_Parms
		{
			float distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetLeadActorDistanceBK_Parms, distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetLeadActorDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::ACFAIController_eventSetLeadActorDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::ACFAIController_eventSetLeadActorDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics
	{
		struct ACFAIController_eventSetPatrolPath_Parms
		{
			AACFPatrolPath* inPatrol;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inPatrol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::NewProp_inPatrol = { "inPatrol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetPatrolPath_Parms, inPatrol), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::NewProp_inPatrol,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Patrol" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetPatrolPath", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::ACFAIController_eventSetPatrolPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::ACFAIController_eventSetPatrolPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetTarget_Statics
	{
		struct ACFAIController_eventSetTarget_Parms
		{
			AActor* target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_SetTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Target" },
		{ "Comment", "/*Forces the AI to target the provided actor*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Forces the AI to target the provided actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetTarget", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetTarget_Statics::ACFAIController_eventSetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetTarget_Statics::ACFAIController_eventSetTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics
	{
		struct ACFAIController_eventSetTargetActorBK_Parms
		{
			AActor* target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetTargetActorBK_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetTargetActorBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::ACFAIController_eventSetTargetActorBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::ACFAIController_eventSetTargetActorBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetTargetActorBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetTargetActorBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics
	{
		struct ACFAIController_eventSetTargetActorDistanceBK_Parms
		{
			float distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetTargetActorDistanceBK_Parms, distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetTargetActorDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::ACFAIController_eventSetTargetActorDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::ACFAIController_eventSetTargetActorDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics
	{
		struct ACFAIController_eventSetTargetLocationBK_Parms
		{
			FVector targetLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::NewProp_targetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetTargetLocationBK_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::NewProp_targetLocation_MetaData), Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::NewProp_targetLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::NewProp_targetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetTargetLocationBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::ACFAIController_eventSetTargetLocationBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::ACFAIController_eventSetTargetLocationBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetTargetLocationBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetTargetLocationBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics
	{
		struct ACFAIController_eventSetTargetPointDistanceBK_Parms
		{
			float distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetTargetPointDistanceBK_Parms, distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetTargetPointDistanceBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::ACFAIController_eventSetTargetPointDistanceBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::ACFAIController_eventSetTargetPointDistanceBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics
	{
		struct ACFAIController_eventSetWaitDurationTimeBK_Parms
		{
			float time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventSetWaitDurationTimeBK_Parms, time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Blackboard" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "SetWaitDurationTimeBK", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::ACFAIController_eventSetWaitDurationTimeBK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::ACFAIController_eventSetWaitDurationTimeBK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics
	{
		struct ACFAIController_eventShouldReturnHome_Parms
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
	void Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventShouldReturnHome_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventShouldReturnHome_Parms), &Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "ShouldReturnHome", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::ACFAIController_eventShouldReturnHome_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::ACFAIController_eventShouldReturnHome_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_ShouldReturnHome()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_ShouldReturnHome_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics
	{
		struct ACFAIController_eventShouldTeleportNearLead_Parms
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
	void Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventShouldTeleportNearLead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventShouldTeleportNearLead_Parms), &Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Getter" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "ShouldTeleportNearLead", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::ACFAIController_eventShouldTeleportNearLead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::ACFAIController_eventShouldTeleportNearLead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_TeleportNearLead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_TeleportNearLead_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Lead" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_TeleportNearLead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "TeleportNearLead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TeleportNearLead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_TeleportNearLead_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AACFAIController_TeleportNearLead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_TeleportNearLead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics
	{
		struct ACFAIController_eventTriggerCommand_Parms
		{
			FGameplayTag command;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_command_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::NewProp_command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFAIController_eventTriggerCommand_Parms, command), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::NewProp_command_MetaData), Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::NewProp_command_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::NewProp_command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Command" },
		{ "Comment", "/*Executes the provided command from the ACFCommandMenagerComponent*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Executes the provided command from the ACFCommandMenagerComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "TriggerCommand", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::ACFAIController_eventTriggerCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::ACFAIController_eventTriggerCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_TriggerCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_TriggerCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics
	{
		struct ACFAIController_eventTryGoToNextWaypoint_Parms
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
	void Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventTryGoToNextWaypoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventTryGoToNextWaypoint_Parms), &Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Patrol" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "TryGoToNextWaypoint", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::ACFAIController_eventTryGoToNextWaypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::ACFAIController_eventTryGoToNextWaypoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics
	{
		struct ACFAIController_eventTryUpdateLeadRef_Parms
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
	void Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAIController_eventTryUpdateLeadRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFAIController_eventTryUpdateLeadRef_Parms), &Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Lead" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFAIController, nullptr, "TryUpdateLeadRef", nullptr, nullptr, Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::ACFAIController_eventTryUpdateLeadRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::ACFAIController_eventTryUpdateLeadRef_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACFAIController);
	UClass* Z_Construct_UClass_AACFAIController_NoRegister()
	{
		return AACFAIController::StaticClass();
	}
	struct Z_Construct_UClass_AACFAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTreeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatBehaviorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CombatBehaviorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandsManagerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommandsManagerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThreatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwned_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterOwned;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionStateByAIState_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocomotionStateByAIState_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionStateByAIState_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocomotionStateByAIState_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionStateByAIState_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocomotionStateByAIState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoundToHome_MetaData[];
#endif
		static void NewProp_bBoundToHome_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundToHome;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFromHome_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFromHome;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToLead_MetaData[];
#endif
		static void NewProp_bTeleportToLead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToLead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportToLeadTriggerDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportToLeadTriggerDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportNearLeadRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportNearLeadRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseTargetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseTargetDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAggressive_MetaData[];
#endif
		static void NewProp_bIsAggressive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAggressive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldReactOnHit_MetaData[];
#endif
		static void NewProp_bShouldReactOnHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReactOnHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroupOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_patrolPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAIStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAIStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAICombatStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAICombatStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFBaseAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFAIController_GetAIStateBK, "GetAIStateBK" }, // 3651001890
		{ &Z_Construct_UFunction_AACFAIController_GetBaseAICharacter, "GetBaseAICharacter" }, // 3287296983
		{ &Z_Construct_UFunction_AACFAIController_GetBehaviorThreeComponent, "GetBehaviorThreeComponent" }, // 721021160
		{ &Z_Construct_UFunction_AACFAIController_GetBehaviorTree, "GetBehaviorTree" }, // 2649088943
		{ &Z_Construct_UFunction_AACFAIController_GetCombatBehavior, "GetCombatBehavior" }, // 1888850802
		{ &Z_Construct_UFunction_AACFAIController_GetCombatStateBK, "GetCombatStateBK" }, // 2375242387
		{ &Z_Construct_UFunction_AACFAIController_GetCommandDurationTimeBK, "GetCommandDurationTimeBK" }, // 2071361608
		{ &Z_Construct_UFunction_AACFAIController_GetCommandManager, "GetCommandManager" }, // 1010310896
		{ &Z_Construct_UFunction_AACFAIController_GetDefaultAIState, "GetDefaultAIState" }, // 4131267684
		{ &Z_Construct_UFunction_AACFAIController_GetGroup, "GetGroup" }, // 1038924102
		{ &Z_Construct_UFunction_AACFAIController_GetHomeDistanceBK, "GetHomeDistanceBK" }, // 4251839535
		{ &Z_Construct_UFunction_AACFAIController_GetHomeLocation, "GetHomeLocation" }, // 1779544807
		{ &Z_Construct_UFunction_AACFAIController_GetIndexInGroup, "GetIndexInGroup" }, // 475767137
		{ &Z_Construct_UFunction_AACFAIController_GetIsPausedBK, "GetIsPausedBK" }, // 707687708
		{ &Z_Construct_UFunction_AACFAIController_GetLeadActorBK, "GetLeadActorBK" }, // 3662490853
		{ &Z_Construct_UFunction_AACFAIController_GetLeadActorDistanceBK, "GetLeadActorDistanceBK" }, // 2295924885
		{ &Z_Construct_UFunction_AACFAIController_GetLoseTargetDistance, "GetLoseTargetDistance" }, // 1399338999
		{ &Z_Construct_UFunction_AACFAIController_GetMaxDistanceFromHome, "GetMaxDistanceFromHome" }, // 887774627
		{ &Z_Construct_UFunction_AACFAIController_GetOwningGroup, "GetOwningGroup" }, // 1197773521
		{ &Z_Construct_UFunction_AACFAIController_GetPathDistanceFromTarget, "GetPathDistanceFromTarget" }, // 749356588
		{ &Z_Construct_UFunction_AACFAIController_GetPatrolPath, "GetPatrolPath" }, // 3159891494
		{ &Z_Construct_UFunction_AACFAIController_GetTarget, "GetTarget" }, // 1751022253
		{ &Z_Construct_UFunction_AACFAIController_GetTargetActorBK, "GetTargetActorBK" }, // 2094857204
		{ &Z_Construct_UFunction_AACFAIController_GetTargetActorDistanceBK, "GetTargetActorDistanceBK" }, // 3099936650
		{ &Z_Construct_UFunction_AACFAIController_GetTargetPointDistanceBK, "GetTargetPointDistanceBK" }, // 2242131893
		{ &Z_Construct_UFunction_AACFAIController_GetTargetPointLocationBK, "GetTargetPointLocationBK" }, // 2071976981
		{ &Z_Construct_UFunction_AACFAIController_GetTeleportLeadDistanceTrigger, "GetTeleportLeadDistanceTrigger" }, // 2719880480
		{ &Z_Construct_UFunction_AACFAIController_GetThreatManager, "GetThreatManager" }, // 1195410279
		{ &Z_Construct_UFunction_AACFAIController_HandleCharacterDeath, "HandleCharacterDeath" }, // 3578640974
		{ &Z_Construct_UFunction_AACFAIController_HandleCharacterHit, "HandleCharacterHit" }, // 3147257165
		{ &Z_Construct_UFunction_AACFAIController_HandleMaxThreatUpdated, "HandleMaxThreatUpdated" }, // 1978965713
		{ &Z_Construct_UFunction_AACFAIController_HandlePerceptionUpdated, "HandlePerceptionUpdated" }, // 1729842688
		{ &Z_Construct_UFunction_AACFAIController_HasTarget, "HasTarget" }, // 2677324621
		{ &Z_Construct_UFunction_AACFAIController_IsPartOfGroup, "IsPartOfGroup" }, // 1222546541
		{ &Z_Construct_UFunction_AACFAIController_OnTargetDeathHandle, "OnTargetDeathHandle" }, // 471397635
		{ &Z_Construct_UFunction_AACFAIController_RequestAnotherTarget, "RequestAnotherTarget" }, // 4152830044
		{ &Z_Construct_UFunction_AACFAIController_ResetToDefaultState, "ResetToDefaultState" }, // 1816965458
		{ &Z_Construct_UFunction_AACFAIController_SetCombatStateBK, "SetCombatStateBK" }, // 1690832428
		{ &Z_Construct_UFunction_AACFAIController_SetCurrentAIStateBK, "SetCurrentAIStateBK" }, // 3983648773
		{ &Z_Construct_UFunction_AACFAIController_SetDefaultState, "SetDefaultState" }, // 3293859512
		{ &Z_Construct_UFunction_AACFAIController_SetHomeDistanceBK, "SetHomeDistanceBK" }, // 4119002657
		{ &Z_Construct_UFunction_AACFAIController_SetIsPausedBK, "SetIsPausedBK" }, // 1699410655
		{ &Z_Construct_UFunction_AACFAIController_SetLeadActorBK, "SetLeadActorBK" }, // 3652698417
		{ &Z_Construct_UFunction_AACFAIController_SetLeadActorDistanceBK, "SetLeadActorDistanceBK" }, // 3472846954
		{ &Z_Construct_UFunction_AACFAIController_SetPatrolPath, "SetPatrolPath" }, // 358496479
		{ &Z_Construct_UFunction_AACFAIController_SetTarget, "SetTarget" }, // 498134104
		{ &Z_Construct_UFunction_AACFAIController_SetTargetActorBK, "SetTargetActorBK" }, // 3703378197
		{ &Z_Construct_UFunction_AACFAIController_SetTargetActorDistanceBK, "SetTargetActorDistanceBK" }, // 3794885404
		{ &Z_Construct_UFunction_AACFAIController_SetTargetLocationBK, "SetTargetLocationBK" }, // 2663499924
		{ &Z_Construct_UFunction_AACFAIController_SetTargetPointDistanceBK, "SetTargetPointDistanceBK" }, // 4087957856
		{ &Z_Construct_UFunction_AACFAIController_SetWaitDurationTimeBK, "SetWaitDurationTimeBK" }, // 2543770707
		{ &Z_Construct_UFunction_AACFAIController_ShouldReturnHome, "ShouldReturnHome" }, // 494084844
		{ &Z_Construct_UFunction_AACFAIController_ShouldTeleportNearLead, "ShouldTeleportNearLead" }, // 2845189677
		{ &Z_Construct_UFunction_AACFAIController_TeleportNearLead, "TeleportNearLead" }, // 4129766024
		{ &Z_Construct_UFunction_AACFAIController_TriggerCommand, "TriggerCommand" }, // 1055314995
		{ &Z_Construct_UFunction_AACFAIController_TryGoToNextWaypoint, "TryGoToNextWaypoint" }, // 2398435976
		{ &Z_Construct_UFunction_AACFAIController_TryUpdateLeadRef, "TryUpdateLeadRef" }, // 3854845653
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ACFAIController.h" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTreeComponent_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTreeComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_BlackboardComponent_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_BlackboardComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_CombatBehaviorComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_CombatBehaviorComponent = { "CombatBehaviorComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, CombatBehaviorComponent), Z_Construct_UClass_UACFCombatBehaviourComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_CombatBehaviorComponent_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_CombatBehaviorComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_CommandsManagerComp_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_CommandsManagerComp = { "CommandsManagerComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, CommandsManagerComp), Z_Construct_UClass_UACFCommandsManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_CommandsManagerComp_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_CommandsManagerComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_TargetingComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_TargetingComponent = { "TargetingComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, TargetingComponent), Z_Construct_UClass_UATSAITargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_TargetingComponent_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_TargetingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_ThreatComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_ThreatComponent = { "ThreatComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, ThreatComponent), Z_Construct_UClass_UACFThreatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_ThreatComponent_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_ThreatComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_CharacterOwned_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_CharacterOwned = { "CharacterOwned", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, CharacterOwned), Z_Construct_UClass_AACFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_CharacterOwned_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_CharacterOwned_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState_MetaData[] = {
		{ "Category", "ACF | AI State" },
		{ "Comment", "/*Default AI state for this agent*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Default AI state for this agent" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState = { "DefaultState", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, DefaultState), Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState_MetaData) }; // 1319398043
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_ValueProp = { "LocomotionStateByAIState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CharacterController_ELocomotionState, METADATA_PARAMS(0, nullptr) }; // 377914807
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_Key_KeyProp = { "LocomotionStateByAIState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AIFramework_EAIState, METADATA_PARAMS(0, nullptr) }; // 1319398043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_MetaData[] = {
		{ "Category", "ACF | AI State" },
		{ "Comment", "/*Indicates the default locomotion state of this AI for each AI state*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Indicates the default locomotion state of this AI for each AI state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState = { "LocomotionStateByAIState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, LocomotionStateByAIState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_MetaData) }; // 1319398043 377914807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome_MetaData[] = {
		{ "Category", "ACF | Home" },
		{ "Comment", "/*If set to true this AI will try to come back to the Lead Position once it is over MaxDistanceFromHome*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "If set to true this AI will try to come back to the Lead Position once it is over MaxDistanceFromHome" },
	};
#endif
	void Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome_SetBit(void* Obj)
	{
		((AACFAIController*)Obj)->bBoundToHome = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome = { "bBoundToHome", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFAIController), &Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_MaxDistanceFromHome_MetaData[] = {
		{ "Category", "ACF | Home" },
		{ "Comment", "/*If bBoundToHome  is true, once the AI is over this distance from his lead/home position, he will try to come back home*/" },
		{ "EditCondition", "bBoundToHome" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "If bBoundToHome  is true, once the AI is over this distance from his lead/home position, he will try to come back home" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_MaxDistanceFromHome = { "MaxDistanceFromHome", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, MaxDistanceFromHome), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_MaxDistanceFromHome_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_MaxDistanceFromHome_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead_MetaData[] = {
		{ "Category", "ACF | Teleport" },
		{ "Comment", "/*If set to true this AI will be teleported back near the Lead Position once it is over TeleportHomeTriggerDistance*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "If set to true this AI will be teleported back near the Lead Position once it is over TeleportHomeTriggerDistance" },
	};
#endif
	void Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead_SetBit(void* Obj)
	{
		((AACFAIController*)Obj)->bTeleportToLead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead = { "bTeleportToLead", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFAIController), &Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportToLeadTriggerDistance_MetaData[] = {
		{ "Category", "ACF | Teleport" },
		{ "Comment", "/*Distance to trigger the teleport*/" },
		{ "EditCondition", "bTeleportToLead" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Distance to trigger the teleport" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportToLeadTriggerDistance = { "TeleportToLeadTriggerDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, TeleportToLeadTriggerDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportToLeadTriggerDistance_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportToLeadTriggerDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportNearLeadRadius_MetaData[] = {
		{ "Category", "ACF | Teleport" },
		{ "Comment", "/*Radius in which the controlled pawn is spawned near the lead*/" },
		{ "EditCondition", "bTeleportToLead" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Radius in which the controlled pawn is spawned near the lead" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportNearLeadRadius = { "TeleportNearLeadRadius", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, TeleportNearLeadRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportNearLeadRadius_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportNearLeadRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_LoseTargetDistance_MetaData[] = {
		{ "Category", "ACF | Combat" },
		{ "Comment", "/*Distance for which the controlled pawn stop fighting against his target*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Distance for which the controlled pawn stop fighting against his target" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_LoseTargetDistance = { "LoseTargetDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, LoseTargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_LoseTargetDistance_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_LoseTargetDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive_MetaData[] = {
		{ "Category", "ACF | Combat" },
		{ "Comment", "/*Indicates if this agent attacks an enemy on perception*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Indicates if this agent attacks an enemy on perception" },
	};
#endif
	void Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive_SetBit(void* Obj)
	{
		((AACFAIController*)Obj)->bIsAggressive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive = { "bIsAggressive", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFAIController), &Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit_MetaData[] = {
		{ "Category", "ACF | Combat" },
		{ "Comment", "/*Indicates if this agent  should react once he gets hit*/" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
		{ "ToolTip", "Indicates if this agent  should react once he gets hit" },
	};
#endif
	void Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit_SetBit(void* Obj)
	{
		((AACFAIController*)Obj)->bShouldReactOnHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit = { "bShouldReactOnHit", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACFAIController), &Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, GroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupIndex_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupOwner = { "GroupOwner", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, GroupOwner), Z_Construct_UClass_UACFGroupAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupOwner_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_patrolPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_patrolPath = { "patrolPath", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, patrolPath), Z_Construct_UClass_AACFPatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_patrolPath_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_patrolPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAIStateChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAIStateChanged = { "OnAIStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, OnAIStateChanged), Z_Construct_UDelegateFunction_AIFramework_OnAIStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAIStateChanged_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAIStateChanged_MetaData) }; // 3946576316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAICombatStateChanged_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/ACFAIController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAICombatStateChanged = { "OnAICombatStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACFAIController, OnAICombatStateChanged), Z_Construct_UDelegateFunction_AIFramework_OnAICombatStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAICombatStateChanged_MetaData), Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAICombatStateChanged_MetaData) }; // 3237713067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_BlackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_CombatBehaviorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_CommandsManagerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_TargetingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_ThreatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_CharacterOwned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_DefaultState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_LocomotionStateByAIState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_bBoundToHome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_MaxDistanceFromHome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_bTeleportToLead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportToLeadTriggerDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_TeleportNearLeadRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_LoseTargetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_bIsAggressive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_bShouldReactOnHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_GroupOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_patrolPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAIStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFAIController_Statics::NewProp_OnAICombatStateChanged,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFAIController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UACFGroupAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AACFAIController, IACFGroupAgentInterface), false },  // 2420904889
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFAIController_Statics::ClassParams = {
		&AACFAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFAIController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AACFAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACFAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AACFAIController()
	{
		if (!Z_Registration_Info_UClass_AACFAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACFAIController.OuterSingleton, Z_Construct_UClass_AACFAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACFAIController.OuterSingleton;
	}
	template<> AIFRAMEWORK_API UClass* StaticClass<AACFAIController>()
	{
		return AACFAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFAIController);
	AACFAIController::~AACFAIController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACFAIController, AACFAIController::StaticClass, TEXT("AACFAIController"), &Z_Registration_Info_UClass_AACFAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACFAIController), 1296332113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_3112386515(TEXT("/Script/AIFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_AIFramework_Public_ACFAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

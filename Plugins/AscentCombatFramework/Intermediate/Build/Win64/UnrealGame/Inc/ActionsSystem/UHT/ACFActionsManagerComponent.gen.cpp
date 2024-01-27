// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ACFActionsManagerComponent.h"
#include "ACFActionTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFActionsManagerComponent() {}
// Cross Module References
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsManagerComponent();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsManagerComponent_NoRegister();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFActionsSet_NoRegister();
	ACTIONSSYSTEM_API UClass* Z_Construct_UClass_UACFBaseAction_NoRegister();
	ACTIONSSYSTEM_API UEnum* Z_Construct_UEnum_ActionsSystem_EActionPriority();
	ACTIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature();
	ACTIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature();
	ACTIONSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFMontageInfo();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionsSet();
	ACTIONSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionState();
	ADVANCEDRPGSYSTEM_API UClass* Z_Construct_UClass_UARSStatisticsComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ActionsSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics
	{
		struct _Script_ActionsSystem_eventOnActionStarted_Parms
		{
			FGameplayTag ActionState;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ActionsSystem_eventOnActionStarted_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::NewProp_ActionState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionsSystem, nullptr, "OnActionStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::_Script_ActionsSystem_eventOnActionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::_Script_ActionsSystem_eventOnActionStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionStarted_DelegateWrapper(const FMulticastScriptDelegate& OnActionStarted, FGameplayTag ActionState)
{
	struct _Script_ActionsSystem_eventOnActionStarted_Parms
	{
		FGameplayTag ActionState;
	};
	_Script_ActionsSystem_eventOnActionStarted_Parms Parms;
	Parms.ActionState=ActionState;
	OnActionStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics
	{
		struct _Script_ActionsSystem_eventOnActionEnded_Parms
		{
			FGameplayTag ActionState;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ActionsSystem_eventOnActionEnded_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::NewProp_ActionState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionsSystem, nullptr, "OnActionEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::_Script_ActionsSystem_eventOnActionEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::_Script_ActionsSystem_eventOnActionEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionEnded_DelegateWrapper(const FMulticastScriptDelegate& OnActionEnded, FGameplayTag ActionState)
{
	struct _Script_ActionsSystem_eventOnActionEnded_Parms
	{
		FGameplayTag ActionState;
	};
	_Script_ActionsSystem_eventOnActionEnded_Parms Parms;
	Parms.ActionState=ActionState;
	OnActionEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics
	{
		struct _Script_ActionsSystem_eventOnActionTriggered_Parms
		{
			FGameplayTag ActionState;
			EActionPriority Priority;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ActionsSystem_eventOnActionTriggered_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ActionsSystem_eventOnActionTriggered_Parms, Priority), Z_Construct_UEnum_ActionsSystem_EActionPriority, METADATA_PARAMS(0, nullptr) }; // 675304996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionsSystem, nullptr, "OnActionTriggered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::_Script_ActionsSystem_eventOnActionTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::_Script_ActionsSystem_eventOnActionTriggered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnActionTriggered, FGameplayTag ActionState, EActionPriority Priority)
{
	struct _Script_ActionsSystem_eventOnActionTriggered_Parms
	{
		FGameplayTag ActionState;
		EActionPriority Priority;
	};
	_Script_ActionsSystem_eventOnActionTriggered_Parms Parms;
	Parms.ActionState=ActionState;
	Parms.Priority=Priority;
	OnActionTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execOnCooldownFinished)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCooldownFinished(Z_Param_Out_action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execOnRep_MontageInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MontageInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execClientsStopActionImmeditaley)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsStopActionImmeditaley_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execClientsReceiveActionEnded)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsReceiveActionEnded_Implementation(Z_Param_ActionState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execClientsReceiveActionStarted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionState);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsReceiveActionStarted_Implementation(Z_Param_ActionState,Z_Param_contextString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execAddOrModifyAction)
	{
		P_GET_STRUCT_REF(FActionState,Z_Param_Out_action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrModifyAction(Z_Param_Out_action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetCommonActionByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_action);
		P_GET_STRUCT_REF(FActionState,Z_Param_Out_outAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCommonActionByTag(Z_Param_Out_action,Z_Param_Out_outAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetMovesetActionByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_action);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Moveset);
		P_GET_STRUCT_REF(FActionState,Z_Param_Out_outAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMovesetActionByTag(Z_Param_Out_action,Z_Param_Out_Moveset,Z_Param_Out_outAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execIsInActionSubstate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInActionSubstate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execIsPerformingAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPerformingAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execIsInActionState)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInActionState(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execPlayCurrentActionFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCurrentActionFX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetActionByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Action);
		P_GET_STRUCT_REF(FActionState,Z_Param_Out_outAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActionByTag(Z_Param_Out_Action,Z_Param_Out_outAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execStopActionImmeditaley)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopActionImmeditaley_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetCurrentAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFBaseAction**)Z_Param__Result=P_THIS->GetCurrentAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetCurrentActionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentActionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execPlayMontageSectionFromAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_actionTag);
		P_GET_PROPERTY(FNameProperty,Z_Param_montageSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontageSectionFromAction_Implementation(Z_Param_actionTag,Z_Param_montageSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execReleaseSustainedAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_actionTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseSustainedAction_Implementation(Z_Param_actionTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execExitAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execCanExecuteAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecuteAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetStoredAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetStoredAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execStoreAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StoreAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execIsActionOnCooldown)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActionOnCooldown(Z_Param_action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execStartStoringActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStoringActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execStopStoringActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopStoringActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execClientPlayMontage)
	{
		P_GET_STRUCT(FACFMontageInfo,Z_Param_montageInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayMontage_Implementation(Z_Param_montageInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execPlayReplicatedMontage)
	{
		P_GET_STRUCT(FACFMontageInfo,Z_Param_montageInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->PlayReplicatedMontage_Validate(Z_Param_montageInfo))
		{
			RPC_ValidateFailed(TEXT("PlayReplicatedMontage_Validate"));
			return;
		}
		P_THIS->PlayReplicatedMontage_Implementation(Z_Param_montageInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execGetCurrentMovesetActionsTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentMovesetActionsTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execSetMovesetActions)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_movesetActionsTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovesetActions_Implementation(Z_Param_movesetActionsTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execTriggerAction)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionState);
		P_GET_ENUM(EActionPriority,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bCanBeStored);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAction_Implementation(Z_Param_ActionState,EActionPriority(Z_Param_Priority),Z_Param_bCanBeStored,Z_Param_contextString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execUnlockActionsTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockActionsTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execLockActionsTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockActionsTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFActionsManagerComponent::execTriggerActionByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionTagName);
		P_GET_ENUM(EActionPriority,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bCanBeStored);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerActionByName(Z_Param_ActionTagName,EActionPriority(Z_Param_Priority),Z_Param_bCanBeStored,Z_Param_contextString);
		P_NATIVE_END;
	}
	struct ACFActionsManagerComponent_eventClientPlayMontage_Parms
	{
		FACFMontageInfo montageInfo;
	};
	struct ACFActionsManagerComponent_eventClientsReceiveActionEnded_Parms
	{
		FGameplayTag ActionState;
	};
	struct ACFActionsManagerComponent_eventClientsReceiveActionStarted_Parms
	{
		FGameplayTag ActionState;
		FString contextString;
	};
	struct ACFActionsManagerComponent_eventPlayMontageSectionFromAction_Parms
	{
		FGameplayTag actionTag;
		FName montageSection;
	};
	struct ACFActionsManagerComponent_eventPlayReplicatedMontage_Parms
	{
		FACFMontageInfo montageInfo;
	};
	struct ACFActionsManagerComponent_eventReleaseSustainedAction_Parms
	{
		FGameplayTag actionTag;
	};
	struct ACFActionsManagerComponent_eventSetMovesetActions_Parms
	{
		FGameplayTag movesetActionsTag;
	};
	struct ACFActionsManagerComponent_eventTriggerAction_Parms
	{
		FGameplayTag ActionState;
		EActionPriority Priority;
		bool bCanBeStored;
		FString contextString;
	};
	static FName NAME_UACFActionsManagerComponent_ClientPlayMontage = FName(TEXT("ClientPlayMontage"));
	void UACFActionsManagerComponent::ClientPlayMontage(FACFMontageInfo const& montageInfo)
	{
		ACFActionsManagerComponent_eventClientPlayMontage_Parms Parms;
		Parms.montageInfo=montageInfo;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_ClientPlayMontage),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_ClientsReceiveActionEnded = FName(TEXT("ClientsReceiveActionEnded"));
	void UACFActionsManagerComponent::ClientsReceiveActionEnded(FGameplayTag const& ActionState)
	{
		ACFActionsManagerComponent_eventClientsReceiveActionEnded_Parms Parms;
		Parms.ActionState=ActionState;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_ClientsReceiveActionEnded),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_ClientsReceiveActionStarted = FName(TEXT("ClientsReceiveActionStarted"));
	void UACFActionsManagerComponent::ClientsReceiveActionStarted(FGameplayTag const& ActionState, const FString& contextString)
	{
		ACFActionsManagerComponent_eventClientsReceiveActionStarted_Parms Parms;
		Parms.ActionState=ActionState;
		Parms.contextString=contextString;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_ClientsReceiveActionStarted),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_ClientsStopActionImmeditaley = FName(TEXT("ClientsStopActionImmeditaley"));
	void UACFActionsManagerComponent::ClientsStopActionImmeditaley()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_ClientsStopActionImmeditaley),NULL);
	}
	static FName NAME_UACFActionsManagerComponent_PlayMontageSectionFromAction = FName(TEXT("PlayMontageSectionFromAction"));
	void UACFActionsManagerComponent::PlayMontageSectionFromAction(FGameplayTag actionTag, FName montageSection)
	{
		ACFActionsManagerComponent_eventPlayMontageSectionFromAction_Parms Parms;
		Parms.actionTag=actionTag;
		Parms.montageSection=montageSection;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_PlayMontageSectionFromAction),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_PlayReplicatedMontage = FName(TEXT("PlayReplicatedMontage"));
	void UACFActionsManagerComponent::PlayReplicatedMontage(FACFMontageInfo const& montageInfo)
	{
		ACFActionsManagerComponent_eventPlayReplicatedMontage_Parms Parms;
		Parms.montageInfo=montageInfo;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_PlayReplicatedMontage),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_ReleaseSustainedAction = FName(TEXT("ReleaseSustainedAction"));
	void UACFActionsManagerComponent::ReleaseSustainedAction(FGameplayTag actionTag)
	{
		ACFActionsManagerComponent_eventReleaseSustainedAction_Parms Parms;
		Parms.actionTag=actionTag;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_ReleaseSustainedAction),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_SetMovesetActions = FName(TEXT("SetMovesetActions"));
	void UACFActionsManagerComponent::SetMovesetActions(FGameplayTag const& movesetActionsTag)
	{
		ACFActionsManagerComponent_eventSetMovesetActions_Parms Parms;
		Parms.movesetActionsTag=movesetActionsTag;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_SetMovesetActions),&Parms);
	}
	static FName NAME_UACFActionsManagerComponent_StopActionImmeditaley = FName(TEXT("StopActionImmeditaley"));
	void UACFActionsManagerComponent::StopActionImmeditaley()
	{
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_StopActionImmeditaley),NULL);
	}
	static FName NAME_UACFActionsManagerComponent_TriggerAction = FName(TEXT("TriggerAction"));
	void UACFActionsManagerComponent::TriggerAction(FGameplayTag ActionState, EActionPriority Priority, bool bCanBeStored, const FString& contextString)
	{
		ACFActionsManagerComponent_eventTriggerAction_Parms Parms;
		Parms.ActionState=ActionState;
		Parms.Priority=Priority;
		Parms.bCanBeStored=bCanBeStored ? true : false;
		Parms.contextString=contextString;
		ProcessEvent(FindFunctionChecked(NAME_UACFActionsManagerComponent_TriggerAction),&Parms);
	}
	void UACFActionsManagerComponent::StaticRegisterNativesUACFActionsManagerComponent()
	{
		UClass* Class = UACFActionsManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrModifyAction", &UACFActionsManagerComponent::execAddOrModifyAction },
			{ "CanExecuteAction", &UACFActionsManagerComponent::execCanExecuteAction },
			{ "ClientPlayMontage", &UACFActionsManagerComponent::execClientPlayMontage },
			{ "ClientsReceiveActionEnded", &UACFActionsManagerComponent::execClientsReceiveActionEnded },
			{ "ClientsReceiveActionStarted", &UACFActionsManagerComponent::execClientsReceiveActionStarted },
			{ "ClientsStopActionImmeditaley", &UACFActionsManagerComponent::execClientsStopActionImmeditaley },
			{ "ExitAction", &UACFActionsManagerComponent::execExitAction },
			{ "GetActionByTag", &UACFActionsManagerComponent::execGetActionByTag },
			{ "GetCommonActionByTag", &UACFActionsManagerComponent::execGetCommonActionByTag },
			{ "GetCurrentAction", &UACFActionsManagerComponent::execGetCurrentAction },
			{ "GetCurrentActionTag", &UACFActionsManagerComponent::execGetCurrentActionTag },
			{ "GetCurrentMovesetActionsTag", &UACFActionsManagerComponent::execGetCurrentMovesetActionsTag },
			{ "GetMovesetActionByTag", &UACFActionsManagerComponent::execGetMovesetActionByTag },
			{ "GetStoredAction", &UACFActionsManagerComponent::execGetStoredAction },
			{ "IsActionOnCooldown", &UACFActionsManagerComponent::execIsActionOnCooldown },
			{ "IsInActionState", &UACFActionsManagerComponent::execIsInActionState },
			{ "IsInActionSubstate", &UACFActionsManagerComponent::execIsInActionSubstate },
			{ "IsPerformingAction", &UACFActionsManagerComponent::execIsPerformingAction },
			{ "LockActionsTrigger", &UACFActionsManagerComponent::execLockActionsTrigger },
			{ "OnCooldownFinished", &UACFActionsManagerComponent::execOnCooldownFinished },
			{ "OnRep_MontageInfo", &UACFActionsManagerComponent::execOnRep_MontageInfo },
			{ "PlayCurrentActionFX", &UACFActionsManagerComponent::execPlayCurrentActionFX },
			{ "PlayMontageSectionFromAction", &UACFActionsManagerComponent::execPlayMontageSectionFromAction },
			{ "PlayReplicatedMontage", &UACFActionsManagerComponent::execPlayReplicatedMontage },
			{ "ReleaseSustainedAction", &UACFActionsManagerComponent::execReleaseSustainedAction },
			{ "SetMovesetActions", &UACFActionsManagerComponent::execSetMovesetActions },
			{ "StartStoringActions", &UACFActionsManagerComponent::execStartStoringActions },
			{ "StopActionImmeditaley", &UACFActionsManagerComponent::execStopActionImmeditaley },
			{ "StopStoringActions", &UACFActionsManagerComponent::execStopStoringActions },
			{ "StoreAction", &UACFActionsManagerComponent::execStoreAction },
			{ "TriggerAction", &UACFActionsManagerComponent::execTriggerAction },
			{ "TriggerActionByName", &UACFActionsManagerComponent::execTriggerActionByName },
			{ "UnlockActionsTrigger", &UACFActionsManagerComponent::execUnlockActionsTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics
	{
		struct ACFActionsManagerComponent_eventAddOrModifyAction_Parms
		{
			FActionState action;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventAddOrModifyAction_Parms, action), Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::NewProp_action_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::NewProp_action_MetaData) }; // 3894552089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::NewProp_action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "AddOrModifyAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::ACFActionsManagerComponent_eventAddOrModifyAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::ACFActionsManagerComponent_eventAddOrModifyAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics
	{
		struct ACFActionsManagerComponent_eventCanExecuteAction_Parms
		{
			FGameplayTag Action;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventCanExecuteAction_Parms, Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventCanExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventCanExecuteAction_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "CanExecuteAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::ACFActionsManagerComponent_eventCanExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::ACFActionsManagerComponent_eventCanExecuteAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_montageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_montageInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::NewProp_montageInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::NewProp_montageInfo = { "montageInfo", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventClientPlayMontage_Parms, montageInfo), Z_Construct_UScriptStruct_FACFMontageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::NewProp_montageInfo_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::NewProp_montageInfo_MetaData) }; // 3920625168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::NewProp_montageInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "ClientPlayMontage", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventClientPlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventClientPlayMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::NewProp_ActionState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventClientsReceiveActionEnded_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::NewProp_ActionState_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::NewProp_ActionState_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::NewProp_ActionState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "ClientsReceiveActionEnded", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventClientsReceiveActionEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventClientsReceiveActionEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_ActionState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventClientsReceiveActionStarted_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_ActionState_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_ActionState_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventClientsReceiveActionStarted_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "ClientsReceiveActionStarted", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventClientsReceiveActionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventClientsReceiveActionStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "ClientsStopActionImmeditaley", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Terminates current action*/" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "ToolTip", "Terminates current action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "ExitAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics
	{
		struct ACFActionsManagerComponent_eventGetActionByTag_Parms
		{
			FGameplayTag Action;
			FActionState outAction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetActionByTag_Parms, Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_Action_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_outAction = { "outAction", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetActionByTag_Parms, outAction), Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(0, nullptr) }; // 3894552089
	void Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventGetActionByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventGetActionByTag_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_outAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetActionByTag", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::ACFActionsManagerComponent_eventGetActionByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::ACFActionsManagerComponent_eventGetActionByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics
	{
		struct ACFActionsManagerComponent_eventGetCommonActionByTag_Parms
		{
			FGameplayTag action;
			FActionState outAction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetCommonActionByTag_Parms, action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_action_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_action_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_outAction = { "outAction", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetCommonActionByTag_Parms, outAction), Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(0, nullptr) }; // 3894552089
	void Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventGetCommonActionByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventGetCommonActionByTag_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_outAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetCommonActionByTag", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::ACFActionsManagerComponent_eventGetCommonActionByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::ACFActionsManagerComponent_eventGetCommonActionByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics
	{
		struct ACFActionsManagerComponent_eventGetCurrentAction_Parms
		{
			UACFBaseAction* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetCurrentAction_Parms, ReturnValue), Z_Construct_UClass_UACFBaseAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetCurrentAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::ACFActionsManagerComponent_eventGetCurrentAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::ACFActionsManagerComponent_eventGetCurrentAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics
	{
		struct ACFActionsManagerComponent_eventGetCurrentActionTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetCurrentActionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetCurrentActionTag", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::ACFActionsManagerComponent_eventGetCurrentActionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::ACFActionsManagerComponent_eventGetCurrentActionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics
	{
		struct ACFActionsManagerComponent_eventGetCurrentMovesetActionsTag_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetCurrentMovesetActionsTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetCurrentMovesetActionsTag", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::ACFActionsManagerComponent_eventGetCurrentMovesetActionsTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::ACFActionsManagerComponent_eventGetCurrentMovesetActionsTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics
	{
		struct ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms
		{
			FGameplayTag action;
			FGameplayTag Moveset;
			FActionState outAction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moveset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moveset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outAction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms, action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_action_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_action_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_Moveset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_Moveset = { "Moveset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms, Moveset), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_Moveset_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_Moveset_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_outAction = { "outAction", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms, outAction), Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(0, nullptr) }; // 3894552089
	void Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_Moveset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_outAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetMovesetActionByTag", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::ACFActionsManagerComponent_eventGetMovesetActionByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics
	{
		struct ACFActionsManagerComponent_eventGetStoredAction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventGetStoredAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "GetStoredAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::ACFActionsManagerComponent_eventGetStoredAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::ACFActionsManagerComponent_eventGetStoredAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics
	{
		struct ACFActionsManagerComponent_eventIsActionOnCooldown_Parms
		{
			FGameplayTag action;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventIsActionOnCooldown_Parms, action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventIsActionOnCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventIsActionOnCooldown_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "IsActionOnCooldown", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::ACFActionsManagerComponent_eventIsActionOnCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::ACFActionsManagerComponent_eventIsActionOnCooldown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics
	{
		struct ACFActionsManagerComponent_eventIsInActionState_Parms
		{
			FGameplayTag state;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_state;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventIsInActionState_Parms, state), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventIsInActionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventIsInActionState_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "IsInActionState", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::ACFActionsManagerComponent_eventIsInActionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::ACFActionsManagerComponent_eventIsInActionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics
	{
		struct ACFActionsManagerComponent_eventIsInActionSubstate_Parms
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
	void Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventIsInActionSubstate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventIsInActionSubstate_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "IsInActionSubstate", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::ACFActionsManagerComponent_eventIsInActionSubstate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::ACFActionsManagerComponent_eventIsInActionSubstate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics
	{
		struct ACFActionsManagerComponent_eventIsPerformingAction_Parms
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
	void Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventIsPerformingAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventIsPerformingAction_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "IsPerformingAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::ACFActionsManagerComponent_eventIsPerformingAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::ACFActionsManagerComponent_eventIsPerformingAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "LockActionsTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics
	{
		struct ACFActionsManagerComponent_eventOnCooldownFinished_Parms
		{
			FGameplayTag action;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventOnCooldownFinished_Parms, action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::NewProp_action_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::NewProp_action_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::NewProp_action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "OnCooldownFinished", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::ACFActionsManagerComponent_eventOnCooldownFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::ACFActionsManagerComponent_eventOnCooldownFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "OnRep_MontageInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "PlayCurrentActionFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_actionTag;
		static const UECodeGen_Private::FNamePropertyParams NewProp_montageSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::NewProp_actionTag = { "actionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventPlayMontageSectionFromAction_Parms, actionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::NewProp_montageSection = { "montageSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventPlayMontageSectionFromAction_Parms, montageSection), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::NewProp_actionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::NewProp_montageSection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If current action state is \"actionTag\", plays \"montageSection\" of it\n    without terminating it*/" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "ToolTip", "If current action state is \"actionTag\", plays \"montageSection\" of it\n    without terminating it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "PlayMontageSectionFromAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventPlayMontageSectionFromAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventPlayMontageSectionFromAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_montageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_montageInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::NewProp_montageInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::NewProp_montageInfo = { "montageInfo", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventPlayReplicatedMontage_Parms, montageInfo), Z_Construct_UScriptStruct_FACFMontageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::NewProp_montageInfo_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::NewProp_montageInfo_MetaData) }; // 3920625168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::NewProp_montageInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "PlayReplicatedMontage", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventPlayReplicatedMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventPlayReplicatedMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_actionTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::NewProp_actionTag = { "actionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventReleaseSustainedAction_Parms, actionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::NewProp_actionTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*If current action state is \"actionTag\", plays his final montage section\n    and terminates the action*/" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "ToolTip", "If current action state is \"actionTag\", plays his final montage section\n    and terminates the action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "ReleaseSustainedAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventReleaseSustainedAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventReleaseSustainedAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movesetActionsTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_movesetActionsTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::NewProp_movesetActionsTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::NewProp_movesetActionsTag = { "movesetActionsTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventSetMovesetActions_Parms, movesetActionsTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::NewProp_movesetActionsTag_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::NewProp_movesetActionsTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::NewProp_movesetActionsTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "SetMovesetActions", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventSetMovesetActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventSetMovesetActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "StartStoringActions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Immediately interrupts the animation and exit current action*/" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "ToolTip", "Immediately interrupts the animation and exit current action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "StopActionImmeditaley", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "StopStoringActions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics
	{
		struct ACFActionsManagerComponent_eventStoreAction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventStoreAction_Parms, Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "StoreAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::ACFActionsManagerComponent_eventStoreAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::ACFActionsManagerComponent_eventStoreAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static void NewProp_bCanBeStored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeStored;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventTriggerAction_Parms, ActionState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventTriggerAction_Parms, Priority), Z_Construct_UEnum_ActionsSystem_EActionPriority, METADATA_PARAMS(0, nullptr) }; // 675304996
	void Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_bCanBeStored_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventTriggerAction_Parms*)Obj)->bCanBeStored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_bCanBeStored = { "bCanBeStored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventTriggerAction_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_bCanBeStored_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventTriggerAction_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_bCanBeStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*Tries to trigger the action with the provided tag. It's priority will be used to eventually interrupt lower priority actions.\n    I bCanBeStored is set to true if the action can't be played immediately, it will be stored and retriggered at the end of current action.\n    Context String will be sent to the OnActionStarted event and can be used to pass generic data tot he action n */" },
		{ "CPP_Default_bCanBeStored", "false" },
		{ "CPP_Default_contextString", "" },
		{ "CPP_Default_Priority", "ELow" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "ToolTip", "Tries to trigger the action with the provided tag. It's priority will be used to eventually interrupt lower priority actions.\n    I bCanBeStored is set to true if the action can't be played immediately, it will be stored and retriggered at the end of current action.\n    Context String will be sent to the OnActionStarted event and can be used to pass generic data tot he action n" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "TriggerAction", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::PropPointers), sizeof(ACFActionsManagerComponent_eventTriggerAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ACFActionsManagerComponent_eventTriggerAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics
	{
		struct ACFActionsManagerComponent_eventTriggerActionByName_Parms
		{
			FName ActionTagName;
			EActionPriority Priority;
			bool bCanBeStored;
			FString contextString;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionTagName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static void NewProp_bCanBeStored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeStored;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_ActionTagName = { "ActionTagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventTriggerActionByName_Parms, ActionTagName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventTriggerActionByName_Parms, Priority), Z_Construct_UEnum_ActionsSystem_EActionPriority, METADATA_PARAMS(0, nullptr) }; // 675304996
	void Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_bCanBeStored_SetBit(void* Obj)
	{
		((ACFActionsManagerComponent_eventTriggerActionByName_Parms*)Obj)->bCanBeStored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_bCanBeStored = { "bCanBeStored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACFActionsManagerComponent_eventTriggerActionByName_Parms), &Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_bCanBeStored_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_contextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_contextString = { "contextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACFActionsManagerComponent_eventTriggerActionByName_Parms, contextString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_contextString_MetaData), Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_contextString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_ActionTagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_bCanBeStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::NewProp_contextString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "CPP_Default_bCanBeStored", "false" },
		{ "CPP_Default_contextString", "" },
		{ "CPP_Default_Priority", "ELow" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "TriggerActionByName", nullptr, nullptr, Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::ACFActionsManagerComponent_eventTriggerActionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::ACFActionsManagerComponent_eventTriggerActionByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFActionsManagerComponent, nullptr, "UnlockActionsTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACFActionsManagerComponent);
	UClass* Z_Construct_UClass_UACFActionsManagerComponent_NoRegister()
	{
		return UACFActionsManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFActionsManagerComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTick_MetaData[];
#endif
		static void NewProp_bCanTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintDebugInfo_MetaData[];
#endif
		static void NewProp_bPrintDebugInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintDebugInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionsSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MovesetActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsSetInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionsSetInst;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovesetsActionsInst_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovesetsActionsInst_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovesetsActionsInst_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MovesetsActionsInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionTriggered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionTriggered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPerformingAction_MetaData[];
#endif
		static void NewProp_bIsPerformingAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPerformingAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoredAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMovesetActionsTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentMovesetActionsTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanStoreAction_MetaData[];
#endif
		static void NewProp_bCanStoreAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStoreAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatisticComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatisticComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_onCooldownActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onCooldownActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_onCooldownActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFActionsManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFActionsManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_AddOrModifyAction, "AddOrModifyAction" }, // 2168269863
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_CanExecuteAction, "CanExecuteAction" }, // 2426666682
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_ClientPlayMontage, "ClientPlayMontage" }, // 1156169502
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionEnded, "ClientsReceiveActionEnded" }, // 455604834
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_ClientsReceiveActionStarted, "ClientsReceiveActionStarted" }, // 3205487913
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_ClientsStopActionImmeditaley, "ClientsStopActionImmeditaley" }, // 2836732185
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_ExitAction, "ExitAction" }, // 3347104068
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetActionByTag, "GetActionByTag" }, // 1255232930
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetCommonActionByTag, "GetCommonActionByTag" }, // 1153549657
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentAction, "GetCurrentAction" }, // 2200599705
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentActionTag, "GetCurrentActionTag" }, // 3969983332
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetCurrentMovesetActionsTag, "GetCurrentMovesetActionsTag" }, // 4920448
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetMovesetActionByTag, "GetMovesetActionByTag" }, // 85762293
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_GetStoredAction, "GetStoredAction" }, // 1421854261
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_IsActionOnCooldown, "IsActionOnCooldown" }, // 2763393529
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionState, "IsInActionState" }, // 3744267436
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_IsInActionSubstate, "IsInActionSubstate" }, // 640279989
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_IsPerformingAction, "IsPerformingAction" }, // 3599892577
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_LockActionsTrigger, "LockActionsTrigger" }, // 2116697725
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_OnCooldownFinished, "OnCooldownFinished" }, // 2431808289
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_OnRep_MontageInfo, "OnRep_MontageInfo" }, // 2737720622
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_PlayCurrentActionFX, "PlayCurrentActionFX" }, // 3283608956
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_PlayMontageSectionFromAction, "PlayMontageSectionFromAction" }, // 3994036515
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_PlayReplicatedMontage, "PlayReplicatedMontage" }, // 2485842026
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_ReleaseSustainedAction, "ReleaseSustainedAction" }, // 2445916852
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_SetMovesetActions, "SetMovesetActions" }, // 1994050162
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_StartStoringActions, "StartStoringActions" }, // 3490585676
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_StopActionImmeditaley, "StopActionImmeditaley" }, // 3640120723
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_StopStoringActions, "StopStoringActions" }, // 2097625726
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_StoreAction, "StoreAction" }, // 3177431899
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_TriggerAction, "TriggerAction" }, // 47705728
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_TriggerActionByName, "TriggerActionByName" }, // 423857205
		{ &Z_Construct_UFunction_UACFActionsManagerComponent_UnlockActionsTrigger, "UnlockActionsTrigger" }, // 3524199089
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "Components/ACFActionsManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CharacterOwner_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CharacterOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick_SetBit(void* Obj)
	{
		((UACFActionsManagerComponent*)Obj)->bCanTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick = { "bCanTick", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFActionsManagerComponent), &Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo_SetBit(void* Obj)
	{
		((UACFActionsManagerComponent*)Obj)->bPrintDebugInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo = { "bPrintDebugInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFActionsManagerComponent), &Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSet_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The Actions set to be used for this character*/" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "ToolTip", "The Actions set to be used for this character" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSet = { "ActionsSet", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, ActionsSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UACFActionsSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSet_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSet_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions_Inner = { "MovesetActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActionsSet, METADATA_PARAMS(0, nullptr) }; // 1774918187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions_MetaData[] = {
		{ "Category", "ACF" },
		{ "Comment", "/*The ActionsSet to be used when a specific moveset is applied*/" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
		{ "TitleProperty", "TagName" },
		{ "ToolTip", "The ActionsSet to be used when a specific moveset is applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions = { "MovesetActions", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, MovesetActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions_MetaData) }; // 1774918187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSetInst_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSetInst = { "ActionsSetInst", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, ActionsSetInst), Z_Construct_UClass_UACFActionsSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSetInst_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSetInst_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_ValueProp = { "MovesetsActionsInst", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UACFActionsSet_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_Key_KeyProp = { "MovesetsActionsInst_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst = { "MovesetsActionsInst", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, MovesetsActionsInst), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionStarted_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionStarted = { "OnActionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, OnActionStarted), Z_Construct_UDelegateFunction_ActionsSystem_OnActionStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionStarted_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionStarted_MetaData) }; // 561651106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionFinished_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionFinished = { "OnActionFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, OnActionFinished), Z_Construct_UDelegateFunction_ActionsSystem_OnActionEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionFinished_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionFinished_MetaData) }; // 2496054019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionTriggered_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionTriggered = { "OnActionTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, OnActionTriggered), Z_Construct_UDelegateFunction_ActionsSystem_OnActionTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionTriggered_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionTriggered_MetaData) }; // 1153941722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_animInst_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_animInst = { "animInst", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, animInst), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_animInst_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_animInst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction_SetBit(void* Obj)
	{
		((UACFActionsManagerComponent*)Obj)->bIsPerformingAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction = { "bIsPerformingAction", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFActionsManagerComponent), &Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionState = { "CurrentActionState", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, CurrentActionState), Z_Construct_UScriptStruct_FActionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionState_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionState_MetaData) }; // 3894552089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionTag = { "CurrentActionTag", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, CurrentActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionTag_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StoredAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StoredAction = { "StoredAction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, StoredAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StoredAction_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StoredAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentPriority = { "CurrentPriority", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, CurrentPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentPriority_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentPriority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_currentMovesetActionsTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_currentMovesetActionsTag = { "currentMovesetActionsTag", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, currentMovesetActionsTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_currentMovesetActionsTag_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_currentMovesetActionsTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction_SetBit(void* Obj)
	{
		((UACFActionsManagerComponent*)Obj)->bCanStoreAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction = { "bCanStoreAction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UACFActionsManagerComponent), &Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StatisticComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StatisticComp = { "StatisticComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, StatisticComp), Z_Construct_UClass_UARSStatisticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StatisticComp_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StatisticComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions_Inner = { "onCooldownActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions = { "onCooldownActions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, onCooldownActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MontageInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ACFActionsManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MontageInfo = { "MontageInfo", "OnRep_MontageInfo", (EPropertyFlags)0x0040008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACFActionsManagerComponent, MontageInfo), Z_Construct_UScriptStruct_FACFMontageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MontageInfo_MetaData), Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MontageInfo_MetaData) }; // 3920625168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFActionsManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bPrintDebugInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_ActionsSetInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MovesetsActionsInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_OnActionTriggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_animInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bIsPerformingAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StoredAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_CurrentPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_currentMovesetActionsTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_bCanStoreAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_StatisticComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_onCooldownActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFActionsManagerComponent_Statics::NewProp_MontageInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFActionsManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFActionsManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFActionsManagerComponent_Statics::ClassParams = {
		&UACFActionsManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFActionsManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UACFActionsManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACFActionsManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UACFActionsManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UACFActionsManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACFActionsManagerComponent.OuterSingleton, Z_Construct_UClass_UACFActionsManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACFActionsManagerComponent.OuterSingleton;
	}
	template<> ACTIONSSYSTEM_API UClass* StaticClass<UACFActionsManagerComponent>()
	{
		return UACFActionsManagerComponent::StaticClass();
	}

	void UACFActionsManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsPerformingAction(TEXT("bIsPerformingAction"));
		static const FName Name_CurrentActionTag(TEXT("CurrentActionTag"));
		static const FName Name_CurrentPriority(TEXT("CurrentPriority"));
		static const FName Name_currentMovesetActionsTag(TEXT("currentMovesetActionsTag"));
		static const FName Name_MontageInfo(TEXT("MontageInfo"));

		const bool bIsValid = true
			&& Name_bIsPerformingAction == ClassReps[(int32)ENetFields_Private::bIsPerformingAction].Property->GetFName()
			&& Name_CurrentActionTag == ClassReps[(int32)ENetFields_Private::CurrentActionTag].Property->GetFName()
			&& Name_CurrentPriority == ClassReps[(int32)ENetFields_Private::CurrentPriority].Property->GetFName()
			&& Name_currentMovesetActionsTag == ClassReps[(int32)ENetFields_Private::currentMovesetActionsTag].Property->GetFName()
			&& Name_MontageInfo == ClassReps[(int32)ENetFields_Private::MontageInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFActionsManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFActionsManagerComponent);
	UACFActionsManagerComponent::~UACFActionsManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACFActionsManagerComponent, UACFActionsManagerComponent::StaticClass, TEXT("UACFActionsManagerComponent"), &Z_Registration_Info_UClass_UACFActionsManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACFActionsManagerComponent), 2771588738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_2505171792(TEXT("/Script/ActionsSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AscentCombatFramework_Source_ActionsSystem_Public_Components_ACFActionsManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
